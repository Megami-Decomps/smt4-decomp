#include "shard/W5_W5Match2_MatrixDestination.h"
extern "C" {
void matrixBuildRotationAboutAxis(u32 id,Matrix44 *matrix);
extern MatrixDestination g_vectorScratch;
/* Read the selected matrix and copy it to the shared destination. */
void matrixCopySelectedToGlobal(u32 id) { Matrix44 matrix; matrixBuildRotationAboutAxis(id,&matrix); g_vectorScratch.matrix=matrix; }
}
