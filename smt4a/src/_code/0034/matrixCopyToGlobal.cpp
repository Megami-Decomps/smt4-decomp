#include "gfx/VectorScratch.h"

extern "C" {
/* Copies a matrix into the workspace's stored matrix (0x180), two rows at a time. */
void matrixCopyToGlobal(const VectorScratchMatrix *matrix)
{
    g_vectorScratch.stored.halves[0] = matrix->halves[0];
    g_vectorScratch.stored.halves[1] = matrix->halves[1];
}
}
