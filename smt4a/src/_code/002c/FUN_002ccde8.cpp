/* NON_MATCHING: command-menu cursor to (action, argument) mapping; retail loads the blocked-command masks with ldr/ldm pairs instead of ldrd, keeps a 36-byte frame (9 words) and the work pointer in r6, and lowers the switch with a different jump table order */
#include "common.h"

struct BtlMenuCursor {
    /* 0x00 */ u8 unk00[4];
};

struct BtlMenuWork {
    /* 0x0000 */ u8 unk0000[0x3890];
    /* 0x3890 */ s32 page;
    /* 0x3894 */ u8 unk3894[8];
    /* 0x389C */ u32 defaultArgument;
    /* 0x38A0 */ u8 unk38A0[0x1AC];
    /* 0x3A4C */ BtlMenuCursor commandCursor;
    /* 0x3A50 */ u8 unk3A50[0xC4];
    /* 0x3B14 */ BtlMenuCursor itemCursor;
    /* 0x3B18 */ u8 unk3B18[0x60];
    /* 0x3B78 */ BtlMenuCursor skillCursor;
    /* 0x3B7C */ u8 unk3B7C[0x12C];
    /* 0x3CA8 */ s16 itemIds[0x2B0];
    /* 0x4208 */ u8 unk4208[8];
    /* 0x4210 */ s16 pageEntries[1];
};

struct BtlBits {
    u32 low;
    u32 high;
};

struct BtlStateFlags {
    /* 0x0000 */ u8 unk0000[0x45A0];
    /* 0x45A0 */ BtlBits bitsA;
    /* 0x45A8 */ BtlBits bitsB;
};

struct PlayerCommandState {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ s16 available;
    /* 0x04 */ u16 count;
};

#define BTL_MENU_ACTION_BLOCKED 7
#define BTL_MENU_ARG_BLOCKED 4

extern "C" {
extern u32 DAT_00573b88[];   /* blocked-command masks; the entries used are at 8 and 18 */

BtlStateFlags *btlGetMainState(void);
PlayerCommandState *gameGetPlayerData(void);
s32 gameFlagIsSet(u32 flag);
s32 gameDataFlagTestBit(u32 bit);
s32 resourceRunOperationIfUnblocked(BtlMenuCursor *cursor);
s32 FUN_002a4894(BtlMenuCursor *cursor);
u32 FUN_002cc9e0(BtlMenuWork *work, u32 mode);

/* Maps the highlighted command to (action, argument). */
void FUN_002ccde8(BtlMenuWork *work, u16 *action, s16 *argument)
{
    s32 index = 0;
    BtlStateFlags *state = btlGetMainState();
    BtlBits bits = state->bitsA;
    if (((bits.low & DAT_00573b88[8]) | (bits.high & DAT_00573b88[9])) != 0) {
        *action = BTL_MENU_ACTION_BLOCKED;
        *argument = BTL_MENU_ARG_BLOCKED;
        return;
    }

    s16 result;
    switch (FUN_002cc9e0(work, 1)) {
    case 0:
    case 6:
        result = 0;
        *action = 1;
        break;
    case 1: {
        s32 entry = resourceRunOperationIfUnblocked(&work->commandCursor);
        index = FUN_002a4894(&work->commandCursor) + entry;
        u16 chosen;
        if (work->pageEntries[work->page] != -1) {
            chosen = index != 0 ? 2 : 1;
        } else if (index == 0) {
            chosen = 1;
        } else if (index == 1 && gameFlagIsSet(0x410) != 0) {
            PlayerCommandState *player = gameGetPlayerData();
            bool hasCommand = player->available != 0;
            chosen = (hasCommand && player->count != 0) ? 1 : 2;
        } else {
            chosen = 2;
        }
        *action = chosen;
        result = (s16)work->defaultArgument;
        break;
    }
    case 2:
        *action = 3;
        result = (s16)work->defaultArgument;
        break;
    case 3: {
        *action = BTL_MENU_ACTION_BLOCKED;
        state = btlGetMainState();
        if ((state->bitsB.low & DAT_00573b88[18]) == 0 && (state->bitsB.high & DAT_00573b88[19]) == 0) {
            struct {
                s32 flagBits[3];
                s32 entryArgs[3];
            } entries = { { 0x2E, 0x32, 0x33 }, { 0, 1, 2 } };
            for (s32 i = 0; i < 3; i++) {
                if (gameDataFlagTestBit(entries.flagBits[i]) != 0) {
                    s32 entry = resourceRunOperationIfUnblocked(&work->skillCursor);
                    if (FUN_002a4894(&work->skillCursor) + entry == index) {
                        *argument = entries.entryArgs[i];
                        return;
                    }
                    index++;
                }
            }
            return;
        }
        s32 entry = resourceRunOperationIfUnblocked(&work->skillCursor);
        result = (s16)(FUN_002a4894(&work->skillCursor) + entry);
        break;
    }
    case 4:
        result = 0;
        *action = 0xD;
        break;
    case 5:
        result = 0;
        *action = 6;
        break;
    case 7: {
        *action = 8;
        s32 entry = resourceRunOperationIfUnblocked(&work->itemCursor);
        result = work->itemIds[FUN_002a4894(&work->itemCursor) + entry];
        break;
    }
    case 9:
        result = 0;
        *action = 4;
        break;
    case 10:
        result = 0;
        *action = 9;
        break;
    case 0xB:
        *action = 0xE;
        *argument = 0;
        return;
    case 0xC:
        *action = 2;
        result = (s16)work->defaultArgument;
        break;
    case 0xFFFFFFFF:
    case 8:
        result = 0;
        *action = 5;
        break;
    default:
        return;
    }
    *argument = result;
}

} /* extern "C" */
