#include "shard/W5_W5Match2_MatrixDestination.h"
extern "C" {
void FUN_0030f8f4(u32 id,Matrix44 *matrix);
extern MatrixDestination DAT_004ea81c;
/* Read the selected matrix and copy it to the shared destination. */
void matrixCopySelectedToGlobal(u32 id) { Matrix44 matrix; FUN_0030f8f4(id,&matrix); DAT_004ea81c.matrix=matrix; }
}
