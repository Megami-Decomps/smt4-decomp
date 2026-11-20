/* NON_MATCHING: retail saves r0-r2 in the prologue and copies the 20-byte key table with ldm from an offset into one shared data block (here a separate extern copied word by word); the menu logic is the same (202 vs 199 rows). */
#include "common.h"
#include "game/GameStateA.h"
#include "ui/MessageMainA.h"
#include "AsdSDK/asdTextFormatStream.h"

extern "C" {

typedef struct TerminalKeys {
    u8 v[20];
} TerminalKeys;

extern const u32 DAT_00530a24[19];
extern const TerminalKeys DAT_00530a70;

void __aeabi_memcpy4(void *destination, const void *source, u32 size);

void scrCommMessageSetMode(s32 mode);
s32 gameFlagIsSet(u32 flag);
void messageWindowShowOrPoll(u32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void msgBoxFlagsSetBit7(u32 handle);
void sortMenuAcquire(s32 a, s32 b);
void useCounterAppendValue(u8 key);
void useCounterStart(void);
u32 useCounterGetCurrentValue(void);
s32 useCounterIsFinished(void);
void touchMenuClose(void);
void useCounterRelease(void);
void obj04Finish(void);

/* Runs the Terminal destination menu: lists the destinations whose flags are set, and returns the
 * chosen destination (1-19), 0 while the menu is still open, -1 when it is cancelled or 99 when
 * no destination is unlocked. `index` selects the entry shown highlighted. */
s32 FUN_002841b8(s32 start, s32 index, u32 context)
{
    u32 unlockFlags[19];

    __aeabi_memcpy4(unlockFlags, DAT_00530a24, sizeof(unlockFlags));
    TerminalKeys keys = DAT_00530a70;
    scrCommMessageSetMode(0);
    s32 unlocked = 0;

    for (s32 i = 0; i < 19; i++) {
        if (gameFlagIsSet(unlockFlags[i]) != 0) {
            unlocked++;
        }
    }
    if (unlocked == 0) {
        return 99;
    }
    if (start == 0) {
        g_gameState.overrideMapName = 1;
        g_gameState.mapNameId = keys.v[index];
        MessageWindowA *window = g_messageMain.window;

        if (window != NULL) {
            window->displayMode = 0x15;
        }
        messageWindowShowOrPoll(context, 0, 0, 6, 0, 0);
        asdTextFormatStream(window->box, 4, -1, 0, 3, "%s",
                     "\201\162\201\100\202\166\202\210\202\205\202\222\202\205\201\100\202\227\202\217\202\225\202\214\202\204\201\100"
                     "\202\231\202\217\202\225\201\100\202\214\202\211\202\213\202\205\201\100\202\224\202\217\201\100\202\207\202\217"
                     "\201\110");
        msgBoxFlagsSetBit7(window->box);
        window->displayEnabled = 0;
        window->flags |= 0x20;
        sortMenuAcquire(-1, 3);
        for (s32 i = 0; i < 19; i++) {
            if (gameFlagIsSet(unlockFlags[i]) != 0) {
                useCounterAppendValue(keys.v[i]);
            }
        }
        useCounterStart();
    }
    u32 key = useCounterGetCurrentValue();

    if (useCounterIsFinished() != 0) {
        g_gameState.overrideMapName = 0;
        g_gameState.mapNameId = 0;
        touchMenuClose();
        useCounterRelease();
        obj04Finish();
        return -1;
    }
    if (key == 0x69 || keys.v[index] == key) {
        return 0;
    }
    g_gameState.overrideMapName = 0;
    g_gameState.mapNameId = 0;
    touchMenuClose();
    useCounterRelease();
    obj04Finish();
    if (key == 0x55) {
        return 1;
    } else if (key == 0x56) {
        return 5;
    } else if (key == 0x57) {
        return 9;
    } else if (key == 0x58) {
        return 15;
    } else if (key == 0x5A) {
        return 19;
    } else if (key == 0x5B) {
        return 3;
    } else if (key == 0x5C) {
        return 2;
    } else if (key == 0x5D) {
        return 7;
    } else if (key == 0x5E) {
        return 6;
    } else if (key == 0x5F) {
        return 8;
    } else if (key == 0x60) {
        return 13;
    } else if (key == 0x61) {
        return 10;
    } else if (key == 0x62) {
        return 14;
    } else if (key == 0x63) {
        return 11;
    } else if (key == 0x64) {
        return 16;
    } else if (key == 0x65) {
        return 17;
    } else if (key == 0x66) {
        return 18;
    } else if (key == 0x67) {
        return 4;
    } else if (key == 0x68) {
        return 12;
    }
    return 0;
}

}
