#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "bible/bibleDevil.h"

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
void btlTalkBustUpReleaseTexture(void);
s32 btlTalkBustUpGetValue(void);
void textEncodeFontSlot(s32 slot, u8 *text);
void saveFlagSetOrAddCounter(u32 item, s32 amount);
void scrScriptProcessStartEntry(u32 script, s32 entry);
s32 scrRunOpcodesStub(u32 script);
void messageMainSetEnabled(s32 enabled);
u8 *dataFindKindRecordWithAocOverrides(u32 id, int payload);
s32 gameDataBlocksGetFlagByteA(void);
s32 battleTalkIsBustReady(void);

/* Encodes the name of an item into the message font slot. */
static void printItemName(u32 item)
{
    u8 name[128];
    libc_strcpy((unsigned int *)name, (unsigned int *)dataFindKindRecordWithAocOverrides(item, 1));
    textEncodeFontSlot(0, name);
}

/* Advances the battle talk after-effects (gift items, leftover items, result). Returns 2 when the
 * talk is over and `result` holds how it ended. */
u32 FUN_002110ac(BattleTalkWork *work)
{
    u32 done = 0;
    switch (work->state) {
    case 0:
        if (btlTalkBustUpGetValue() != 0) {
            scrScriptProcessStartEntry(work->introScript, 1);
            work->state++;
        }
        break;
    case 1:
        if (scrRunOpcodesStub(work->introScript) == 2) {
            work->state++;
            work->giftIndex = 0;
        }
        break;
    case 2: {
        u16 giftIds[2] = { 0xB, 0xC };
        s32 amount = work->giftAmounts[work->giftIndex];
        if (amount > 0 && gameDataBlocksGetFlagByteA() == 0) {
            FUN_0029ede8(1, amount, 0xFFFFFFFF, 0);
            printItemName(giftIds[work->giftIndex]);
            scrScriptProcessStartEntry(work->giftScript, 0xF);
            work->state = 3;
            saveFlagSetOrAddCounter(giftIds[work->giftIndex], amount);
            messageMainSetEnabled(1);
        } else if (gameDataBlocksGetFlagByteA() != 0) {
            work->state = 4;
        } else {
            work->giftIndex++;
            if (work->giftIndex < 2) {
                work->state = 2;
            } else {
                work->state = 4;
            }
        }
        break;
    }
    case 3:
        if (scrRunOpcodesStub(work->giftScript) == 2) {
            if (++work->giftIndex >= 2) {
                work->state = 4;
            } else {
                work->state = 2;
            }
        }
        break;
    case 4: {
        bool found = false;
        for (s32 i = 0; i < work->leftoverCount; i++) {
            if (work->leftoverIds[i] != 0) {
                printItemName(work->leftoverIds[i]);
                saveFlagSetOrAddCounter(work->leftoverIds[i], 1);
                work->leftoverIds[i] = 0;
                scrScriptProcessStartEntry(work->giftScript, 0xE);
                work->state++;
                found = true;
                break;
            }
        }
        if (!found) {
            work->flags &= ~2u;
            s32 result;
            if (work->flags & 8) {
                result = 2;
            } else if (work->flags & 1) {
                result = 3;
            } else if (work->flags & 4) {
                result = 4;
            } else if (work->flags & 2) {
                result = 5;
            } else {
                work->state = 10;
                btlTalkBustUpReleaseAllSlots();
                break;
            }
            work->state = 0;
            work->result = result;
            done = 2;
            break;
        }
    }
        /* fall through */
    case 5:
        if (scrRunOpcodesStub(work->giftScript) == 2)
            work->state--;
        break;
    case 10:
        if (battleTalkIsBustReady() != 0) {
            work->state = 0;
            btlTalkBustUpReleaseTexture();
            work->result = 6;
            done = 2;
        }
        break;
    }
    return done;
}

} /* extern "C" */
