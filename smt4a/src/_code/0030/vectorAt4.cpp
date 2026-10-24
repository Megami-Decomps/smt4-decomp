#include "common.h"

extern "C" {

s32 vectorCount4_0030c774(void *vector);
void _ZN4__rw10__rw_throwEiz(int kind, ...);

/* Address of the 4-byte element `index` of a vector (reports an out-of-range index). */
u8 *vectorAt4(u8 **vector, u32 index)
{
    if ((u32)vectorCount4_0030c774(vector) <= index) {
        _ZN4__rw10__rw_throwEiz(9, "", "", index, vectorCount4_0030c774(vector));
    }
    return *vector + index * 4;
}

} /* extern "C" */
