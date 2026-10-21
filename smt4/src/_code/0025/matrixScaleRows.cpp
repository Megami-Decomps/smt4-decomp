/* NON_MATCHING: compiler splits row scaling into scalar loads/stores instead of the retail full-matrix register transfer. */
#include "common.h"
extern "C" {
struct ScaleVector { f32 x,y,z; };
struct ScaleMatrix { f32 rows[3][4]; };
/* Scale each four-component matrix row by its corresponding axis factor. */
void matrixScaleRows(ScaleMatrix *destination,const ScaleVector *scale,const ScaleMatrix *source) { ScaleMatrix matrix=*source; for (u32 column=0;column<4;++column) { matrix.rows[0][column]*=scale->x; matrix.rows[1][column]*=scale->y; matrix.rows[2][column]*=scale->z; } *destination=matrix; }
}
