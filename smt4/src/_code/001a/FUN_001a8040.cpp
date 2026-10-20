#include "common.h"

extern "C" {

extern int jyoucyuGetTableEntry(u32 index);

typedef struct Slot {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 flags;
} Slot;

extern struct {
    u8 unk00;
    u8 unk01[3];
    s32 which;
} DAT_0044e098;
extern Slot DAT_004c53c4;
extern Slot DAT_004c53e4;

void FUN_001a8040(u32 value)
{
    Slot *slot;

    if (jyoucyuGetTableEntry(1) == 0) {
        slot = NULL;
        if (DAT_0044e098.which == 0) {
            slot = &DAT_004c53c4;
        } else if (DAT_0044e098.which == 1) {
            slot = &DAT_004c53e4;
        }
        if ((slot->flags & 2) != 0) {
            slot->unk04 = 0;
            slot->unk10 = 0;
            slot->unk08 = value;
            slot->unk14 = 0;
            slot->unk18 = 0;
            slot->flags = 0x13;
        }
    }
}

} /* extern "C" */
