#include "common.h"

extern "C" {

s32 vectorSize24B(void *vector);
void _ZN4__rw10__rw_throwEiz(int kind, ...);

/* Address of the 24-byte element `index` of a vector (reports an out-of-range index). */
u8 *vectorAt24(u8 **vector, u32 index)
{
    if ((u32)vectorSize24B(vector) <= index) {
        _ZN4__rw10__rw_throwEiz(9, "", "", index, vectorSize24B(vector));
    }
    return *vector + index * 0x18;
}

} /* extern "C" */
