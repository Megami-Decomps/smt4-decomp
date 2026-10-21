/* NON_MATCHING: compiler splits matrix scaling into individual floating loads/stores rather than retail register-wide transfer. */
#include "shard/W5_W5Match2_MatrixScale.h"
extern "C" {
/* Scale the three basis columns of a three-by-four matrix. */
void matrixScaleColumnsAlt(ScaleMatrix *result,const ScaleMatrix *matrix,const ScaleVector *scale) { ScaleMatrix scaled=*matrix; for (u32 row=0;row<3;++row) for (u32 column=0;column<3;++column) scaled.values[row][column]*=scale->values[column]; *result=scaled; }
}
