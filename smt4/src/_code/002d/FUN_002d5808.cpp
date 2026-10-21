#include "common.h"

namespace {
struct PartValue {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ f32 value;
};
struct PartList {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 count;
    /* 0x38 */ u8 unk38[0x14];
    /* 0x4c */ PartValue *part;
};
}

/* Returns the current part's value, or zero when there is no part. */
extern "C" f32 FUN_002d5808(const PartList *list)
{
    f32 value = 0.0f;
    if (list->count > 0 && list->part != NULL) {
        value = list->part->value;
    }
    return value;
}
