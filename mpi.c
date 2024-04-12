#include <stdio.h>
#include <stdlib.h>
#include "mpi.h"

#define ARRAY_SIZE 1000

int main(int argc, char **argv) {
    int rank, size;
    int i;
    int local_sum = 0, global_sum = 0;
    double local_avg = 0.0, global_avg = 0.0;
    int array[ARRAY_SIZE];

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    // Seed the random number generator
    srand(rank);

    // Generate random numbers
    for (i = 0; i < ARRAY_SIZE; i++) {
        array[i] = rand() % 100; // Generating numbers between 0 and 99
    }

    // Calculate local sum
    for (i = 0; i < ARRAY_SIZE; i++) {
        local_sum += array[i];
    }

    // Calculate global sum
    MPI_Reduce(&local_sum, &global_sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);

    // Calculate global average
    local_avg = (double)local_sum / ARRAY_SIZE;
    MPI_Reduce(&local_avg, &global_avg, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORL
    D);
    if (rank == 0) {
        global_avg /= size;
    }

    // Output results
    if (rank == 0) {
        printf("Total sum across all processes: %d\n", global_sum);
        printf("Global average across all processes: %.2f\n", global_avg);
    }

    MPI_Finalize();

    return 0;
}
