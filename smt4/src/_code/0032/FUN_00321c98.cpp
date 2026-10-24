/* NON_MATCHING: armcc folds the table offset into the literal-pool address; retail loads the table base and adds the record offset. */
#include "common.h"

struct Inner {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ u8 member[0x2C];
    /* 0xB8 */ s32 value;
};

struct Object {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ Inner *inner;
};

struct Record {
    u8 unk00[0x38];
};

extern "C" {
extern Record DAT_0044fdc0[];
void FUN_0024330c(void *member, s32 value, const Record *record);
}

extern "C" void FUN_00321c98(Object *object)
{
    Inner *inner = object->inner;
    FUN_0024330c(inner->member, inner->value, &DAT_0044fdc0[1]);
}
