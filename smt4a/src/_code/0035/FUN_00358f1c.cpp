#include "common.h"

extern "C" {

typedef struct {
    u8 unk00[0x28];
    f32 x;  /* 0x28 */
    f32 y;  /* 0x2C */
} Pos2D;

/* Stores a 2D position into the object. */
void FUN_00358f1c(Pos2D *obj, f32 x, f32 y)
{
    obj->x = x;
    obj->y = y;
}

} /* extern "C" */
