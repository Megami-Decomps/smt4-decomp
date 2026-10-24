/* NON_MATCHING: readable rebuild of the battle talk gift/result state machine; retail enters the shared script-wait tail of states 4/5 by goto and shares the state-store tail between cases, and the local item id pair is built by one 32-bit store, which armcc here lays out differently. */
#include "common.h"

/* The battle talk work (only the fields this state machine drives). */
struct BattleTalkWork {
    /* 0x0000 */ u8 unk0000[0xD04];
    /* 0x0D04 */ u32 giftScript;
    /* 0x0D08 */ u32 introScript;
    /* 0x0D0C */ u16 leftoverIds[0x10];
    /* 0x0D2C */ s32 result;
    /* 0x0D30 */ u8 unk0D30[8];
    /* 0x0D38 */ s32 state;
    /* 0x0D3C */ s32 leftoverCount;
    /* 0x0D40 */ u8 unk0D40[8];
    /* 0x0D48 */ s32 giftAmounts[2];
    /* 0x0D50 */ s32 giftIndex;
    /* 0x0D54 */ u8 unk0D54[4];
    /* 0x0D58 */ u32 flags;
};

extern "C" {
void btlTalkBustUpReleaseAllSlots(void);
void FUN_0028bf2c(void);
s32 btlTalkBustUpGetValue(void);
void textEncodeFontSlot(s32 slot, u8 *text);
void FUN_00295a18(u32 item, s32 amount);
void scrScriptProcessStartEntry(u32 script, s32 entry);
s32 scrRunOpcodesStub(u32 script);
void messageMainSetEnabled(s32 enabled);
void FUN_0029ede8(s32 a, s32 amount, u32 b, s32 c);
void FUN_002be650(u32 item, s32 a);
void libc_strcpy(u8 *dest, u32 source);
s32 gameDataBlocksGetFlagByteA(void);
s32 battleTalkIsBustReady(void);

/* Encodes the name of an item into the message font slot. */
static void printItemName(u32 item)
{
    u8 name[128];
    FUN_002be650(item, 1);
    libc_strcpy(name, item);
    textEncodeFontSlot(0, name);
}

/* Advances the battle talk after-effects (gift items, leftover items, result). Returns 2 when the
 * talk is over and `result` holds how it ended. */
u32 FUN_002110ac(BattleTalkWork *work)
{
    u16 giftIds[2] = { 0xB, 0xC };
    switch (work->state) {
    case 0:
        if (btlTalkBustUpGetValue() == 0)
            return 0;
        scrScriptProcessStartEntry(work->introScript, 1);
        work->state++;
        return 0;
    case 1:
        if (scrRunOpcodesStub(work->introScript) == 2) {
            work->state++;
            work->giftIndex = 0;
        }
        return 0;
    case 2: {
        s32 amount = work->giftAmounts[work->giftIndex];
        if (amount > 0 && gameDataBlocksGetFlagByteA() == 0) {
            FUN_0029ede8(1, amount, 0xFFFFFFFF, 0);
            printItemName(giftIds[work->giftIndex]);
            scrScriptProcessStartEntry(work->giftScript, 0xF);
            work->state = 3;
            FUN_00295a18(giftIds[work->giftIndex], amount);
            messageMainSetEnabled(1);
            return 0;
        }
        if (gameDataBlocksGetFlagByteA() != 0) {
            work->state = 4;
            return 0;
        }
        work->giftIndex++;
        work->state = work->giftIndex < 2 ? 2 : 4;
        return 0;
    }
    case 3:
        if (scrRunOpcodesStub(work->giftScript) != 2)
            return 0;
        work->giftIndex++;
        work->state = work->giftIndex < 2 ? 2 : 4;
        return 0;
    case 4: {
        for (s32 i = 0; i < work->leftoverCount; i++) {
            if (work->leftoverIds[i] != 0) {
                printItemName(work->leftoverIds[i]);
                FUN_00295a18(work->leftoverIds[i], 1);
                work->leftoverIds[i] = 0;
                scrScriptProcessStartEntry(work->giftScript, 0xE);
                work->state = 5;
                if (scrRunOpcodesStub(work->giftScript) == 2)
                    work->state = 4;
                return 0;
            }
        }
        u32 flags = work->flags;
        work->flags = flags & ~2u;
        s32 result;
        if (flags & 8) {
            result = 2;
        } else if (flags & 1) {
            result = 3;
        } else if (flags & 4) {
            result = 4;
        } else {
            work->state = 10;
            btlTalkBustUpReleaseAllSlots();
            return 0;
        }
        work->state = 0;
        work->result = result;
        return 2;
    }
    case 5:
        if (scrRunOpcodesStub(work->giftScript) == 2)
            work->state--;
        return 0;
    case 10:
        if (battleTalkIsBustReady() == 0)
            return 0;
        work->state = 0;
        FUN_0028bf2c();
        work->result = 6;
        return 2;
    default:
        return 0;
    }
}

} /* extern "C" */
