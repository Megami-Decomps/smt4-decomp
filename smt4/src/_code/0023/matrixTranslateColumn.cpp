/* NON_MATCHING: compiler splits matrix-column floating loads and stores instead of retail VLDM/VSTM. */
#include "common.h"
extern "C" {
struct Translation { f32 x,y,z; };
struct Matrix34 { f32 values[3][4]; };
/* Translate a matrix by adding the supplied vector to its last column. */
void matrixTranslateColumn(Matrix34 *result,const Translation *translation,const Matrix34 *matrix)
{
    Matrix34 translated=*matrix;
    translated.values[0][3]+=translation->x;
    translated.values[1][3]+=translation->y;
    translated.values[2][3]+=translation->z;
    *result=translated;
}
}
