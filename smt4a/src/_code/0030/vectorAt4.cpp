#include "common.h"

extern "C" {

s32 vectorCount4_0030c774(void *vector);
void FUN_002e32a4(int kind, ...);

/* Address of the 4-byte element `index` of a vector (reports an out-of-range index). */
u8 *vectorAt4(u8 **vector, u32 index)
{
    if ((u32)vectorCount4_0030c774(vector) <= index) {
        FUN_002e32a4(9, "", "", index, vectorCount4_0030c774(vector));
    }
    return *vector + index * 4;
}

} /* extern "C" */
