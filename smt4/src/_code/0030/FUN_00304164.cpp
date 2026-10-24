#include "common.h"

struct Target {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 value;
};

struct Holder {
    /* 0x00 */ Target *target;
};

struct Object {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ Holder *holder;
};

extern "C" u32 DAT_00472560;

extern "C" void FUN_00304164(Object *object)
{
    object->holder->target->value = DAT_00472560;
}
