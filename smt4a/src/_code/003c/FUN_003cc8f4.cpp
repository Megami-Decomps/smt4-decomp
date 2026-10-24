#include "common.h"

struct Inner {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u8 member[0x58];
    /* 0x8C */ s32 value;
};

struct Object {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ Inner *inner;
};

struct Record {
    u8 unk00[0x38];
};

extern "C" {
extern Record DAT_0059eea0[];
void FUN_0031ab38(void *member, s32 value, const Record *entry, const Record *table);
}

extern "C" void FUN_003cc8f4(Object *object)
{
    Inner *inner = object->inner;
    FUN_0031ab38(inner->member, inner->value, &DAT_0059eea0[1], DAT_0059eea0);
}
