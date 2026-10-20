#include "common.h"

extern "C" {

void sysMemClear(void *block, s32 size);

typedef struct Object {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u32 unk004;
    /* 0x008 */ u32 unk008;
    /* 0x00C */ u32 unk00C;
    /* 0x010 */ u32 unk010;
    /* 0x014 */ u32 unk014;
    /* 0x018 */ u32 unk018;
    /* 0x01C */ u32 unk01C;
    /* 0x020 */ u8 unk020;
    /* 0x021 */ u8 unk021[3];
    /* 0x024 */ u32 unk024;
    /* 0x028 */ u32 unk028;
    /* 0x02C */ u8 block[0x100];
    /* 0x12C */ u32 unk12C;
    /* 0x130 */ u32 unk130;
    /* 0x134 */ u32 unk134;
    /* 0x138 */ u32 unk138;
    /* 0x13C */ u32 unk13C;
    /* 0x140 */ u32 unk140;
    /* 0x144 */ u32 unk144;
    /* 0x148 */ u32 unk148;
} Object;

/* Resets the object: fields cleared (1 at 4, 0x80 at 0x28) and the 0x100-byte block at 0x2C zeroed. */
void FUN_001c5b68(Object *object)
{
    object->unk000 = 0;
    object->unk004 = 1;
    object->unk008 = 0;
    object->unk00C = 0;
    object->unk010 = 0;
    object->unk014 = 0;
    object->unk018 = 0;
    object->unk01C = 0;
    object->unk020 = 0;
    object->unk028 = 0x80;
    object->unk024 = 0;
    sysMemClear(object->block, 0x100);
    object->unk12C = 0;
    object->unk130 = 0;
    object->unk134 = 0;
    object->unk138 = 0;
    object->unk13C = 0;
    object->unk140 = 0;
    object->unk144 = 0;
    object->unk148 = 0;
}

} /* extern "C" */
