#include "common.h"

extern "C" {

/* A battle unit slot (0x288 bytes): state flags at 0 and the devil id at 0xCE. */
struct BtlSlot {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0xCA];
    /* 0x0CE */ u16 devilId;
    /* 0x0D0 */ u8 unk0D0[0x1B8];
};

struct BtlMain {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BtlSlot *slots;
};

/* A devil table record: the field at 5 selects its class. */
struct DevilRecord {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 kind;
};

void scrSetResult(s32 value);
DevilRecord *devilGetRecord(u16 id);
BtlMain *btlGetMainState(void);

/* Script command: result 1 if any live, active, non-excluded battle slot holds a devil of kind 5. */
u32 FUN_002f6dc0(void)
{
    for (s32 i = 0; i < 109; i++) {
        BtlSlot *slot = &btlGetMainState()->slots[i];
        if ((slot->flags & 0x10) != 0 && (slot->flags & 1) != 0 && (slot->flags & 0x40) == 0) {
            if (devilGetRecord(slot->devilId)->kind == 5) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
