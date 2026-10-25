/* NON_MATCHING: the reset flag and the byte clear are scheduled differently (retail zeroes r1 once and reuses it); the tail call then lands at another offset. */
#include "common.h"
#include "util/CalleeContracts.h"

struct PanelState {
    /* 0x000 */ u8 unk000[5];
    /* 0x005 */ u8 unk05;
    /* 0x006 */ u8 unk06;
    /* 0x007 */ u8 type;
    /* 0x008 */ u8 unk08[6];
    /* 0x00E */ u8 unk0e;
    /* 0x00F */ u8 unk0f;
    /* 0x010 */ u8 unk10[3];
    /* 0x013 */ u8 unk13;
    /* 0x014 */ u8 unk14[0x54];
    /* 0x068 */ u8 unk68;
    /* 0x069 */ u8 unk69[0x283];
    /* 0x2EC */ u8 enabled[0xc];
    /* 0x2F8 */ s32 selected;
    /* 0x2FC */ u8 unk2fc[0x328];
    /* 0x624 */ u8 sub624[0xd4];
    /* 0x6F8 */ u8 sub6f8[1];
};

extern "C" {

void FUN_002f0384(u32 value);
void FUN_004087d8(void *block, u32 value);
void uiDrawScreenDimmer(void *block, u32 value);

/* Virtual slot: for panel types 3..21, refreshes the selection (when the current one is disabled) and then dims the screen unless the panel is already settled. */
void FUN_0041beac(PanelState *self)
{
    switch (self->type) {
    case 0: case 1: case 2:
        break;
    case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12:
    case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21:
        if (self->enabled[self->selected] == 0) {
            FUN_0023b45c(0);
            FUN_002f0384(0);
            u32 reset = 0;

            self->unk68 = 0;
            if (self->unk13 != 0 || self->selected < 1) {
                reset = 1;
            }
            FUN_004087d8(self->sub624, reset);
        }
        if (self->unk0e == 0 || self->unk13 == 0) {
            return;
        }
        if (self->unk05 == 1 && self->unk0f != 0) {
            return;
        }
        uiDrawScreenDimmer(self->sub6f8, 1);
        break;
    }
}

} /* extern "C" */
