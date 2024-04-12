#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define BLOCKS 8

void sstf_disk_scheduling(int blocks, int requests[], int current_head) {
    int total_head_movements = 0;
    int visited[blocks];
    int i, j;

    for (i = 0; i < blocks; i++) {
        visited[i] = 0;
    }

    printf("Order of service:\n");
    for (i = 0; i < blocks; i++) {
        int min_distance = INT_MAX;
        int next_request = -1;

        for (j = 0; j < blocks; j++) {
            if (!visited[j]) {
                int distance = abs(current_head - requests[j]);
                if (distance < min_distance) {
                    min_distance = distance;
                    next_request = j;
                }
            }
        }

        visited[next_request] = 1;
        total_head_movements += min_distance;
        current_head = requests[next_request];
        printf("%d ", current_head);
    }

    printf("\nTotal number of head movements: %d\n", total_head_movements);
}

int main() {
    // Sample values for demonstration
    int requests[BLOCKS] = {95, 180, 34, 119, 11, 123, 62, 64};
    int current_head_position = 50;
    int total_blocks = BLOCKS;

    sstf_disk_scheduling(total_blocks, requests, current_head_position);

    return 0;
}
