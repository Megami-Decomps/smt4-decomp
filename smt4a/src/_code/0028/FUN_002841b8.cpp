/* NON_MATCHING: retail saves r0-r2 in the prologue and copies the 20-byte key table with ldm from an offset into one shared data block (here a separate extern copied word by word); the menu logic is the same (202 vs 199 rows). */
#include "common.h"
#include "shard/X14_MessageMain.h"

extern "C" {

/* The slice of the game state the Terminal menu uses: the open flag and the selected key. */
typedef struct GameStateTerminalView {
    /* 0x000 */ u8 unk000[0x500];
    /* 0x500 */ u8 menuOpen;
    /* 0x501 */ u8 unk501[3];
    /* 0x504 */ u32 menuKey;
} GameStateTerminalView;

/* The message work area fields written here, by their offsets. */
typedef struct TerminalMessageWork {
    /* 0x0000 */ u8 unk0000[4];
    /* 0x0004 */ u32 handle;
    /* 0x0008 */ u8 unk0008[4];
    /* 0x000C */ u32 flags;             /* 0x20: menu shown */
    /* 0x0010 */ u8 unk0010[0x19B4];
    /* 0x19C4 */ u8 busy;
    /* 0x19C5 */ u8 mode;
} TerminalMessageWork;

typedef struct TerminalKeys {
    u8 v[20];
} TerminalKeys;

extern GameStateTerminalView g_gameState;
extern const u32 DAT_00530a24[19];
extern const TerminalKeys DAT_00530a70;

void __aeabi_memcpy4(void *destination, const void *source, u32 size);

void scrCommMessageSetMode(s32 mode);
s32 gameFlagIsSet(u32 flag);
void FUN_0021bdac(u32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void asdTextFormatStream(u32 handle, s32 a, s32 b, s32 c, s32 d, const char *format, const char *text);
void msgBoxFlagsSetBit7(u32 handle);
void sortMenuAcquire(s32 a, s32 b);
void FUN_0031f208(u8 key);
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
        g_gameState.menuOpen = 1;
        g_gameState.menuKey = keys.v[index];
        TerminalMessageWork *work = (TerminalMessageWork *)g_messageMain.work;

        if (work != NULL) {
            work->mode = 0x15;
        }
        FUN_0021bdac(context, 0, 0, 6, 0, 0);
        asdTextFormatStream(work->handle, 4, -1, 0, 3, "%s",
                     "\201\162\201\100\202\166\202\210\202\205\202\222\202\205\201\100\202\227\202\217\202\225\202\214\202\204\201\100"
                     "\202\231\202\217\202\225\201\100\202\214\202\211\202\213\202\205\201\100\202\224\202\217\201\100\202\207\202\217"
                     "\201\110");
        msgBoxFlagsSetBit7(work->handle);
        work->busy = 0;
        work->flags |= 0x20;
        sortMenuAcquire(-1, 3);
        for (s32 i = 0; i < 19; i++) {
            if (gameFlagIsSet(unlockFlags[i]) != 0) {
                FUN_0031f208(keys.v[i]);
            }
        }
        useCounterStart();
    }
    u32 key = useCounterGetCurrentValue();

    if (useCounterIsFinished() != 0) {
        g_gameState.menuOpen = 0;
        g_gameState.menuKey = 0;
        touchMenuClose();
        useCounterRelease();
        obj04Finish();
        return -1;
    }
    if (key == 0x69 || keys.v[index] == key) {
        return 0;
    }
    g_gameState.menuOpen = 0;
    g_gameState.menuKey = 0;
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
