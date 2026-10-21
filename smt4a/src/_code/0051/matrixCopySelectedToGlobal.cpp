#include "shard/W5_W5Match2_MatrixDestination.h"
extern "C" {
void FUN_003a38c8(u32 id,Matrix44 *matrix);
extern MatrixDestination DAT_006471dc;
/* Read the selected matrix and copy it to the shared destination. */
void matrixCopySelectedToGlobal(u32 id) { Matrix44 matrix; FUN_003a38c8(id,&matrix); DAT_006471dc.matrix=matrix; }
}
