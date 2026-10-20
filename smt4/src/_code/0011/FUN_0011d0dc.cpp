#include "common.h"

extern "C" {

typedef struct Vec6 {
    f32 v[6];
} Vec6;

typedef struct Owner0011d0dc {
    u8 unk00[0x4a0];
    Vec6 vec;                      /* 0x4A0 */
} Owner0011d0dc;

void FUN_0011d0e4(Vec6 *out, f32 a, f32 b, f32 c, f32 d, f32 e, f32 f);

/* Passes the vector at the object's +0x4A0 and its float arguments on to FUN_0011d0e4, the function that follows it. */
void FUN_0011d0dc(Owner0011d0dc *owner, f32 a, f32 b, f32 c, f32 d, f32 e, f32 f)
{
    FUN_0011d0e4(&owner->vec, a, b, c, d, e, f);
}

} /* extern "C" */
