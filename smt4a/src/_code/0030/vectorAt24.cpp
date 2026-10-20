#include "common.h"

extern "C" {

s32 vectorSize24B(void *vector);
void FUN_002e32a4(s32 code, const char *file, const char *expression, u32 index, u32 count);

/* Address of the 24-byte element `index` of a vector (reports an out-of-range index). */
u8 *vectorAt24(u8 **vector, u32 index)
{
    if ((u32)vectorSize24B(vector) <= index) {
        FUN_002e32a4(9, "", "", index, vectorSize24B(vector));
    }
    return *vector + index * 0x18;
}

} /* extern "C" */
