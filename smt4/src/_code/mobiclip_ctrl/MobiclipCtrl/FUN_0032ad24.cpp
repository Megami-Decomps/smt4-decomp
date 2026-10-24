/* Returns `later.value - earlier.value`, the difference of the +4 fields of two records. */
#include "common.h"

struct ValueRecord {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ s32 value;
};

extern "C" s32 FUN_0032ad24(const ValueRecord *earlier, const ValueRecord *later)
{
    return later->value - earlier->value;
}
