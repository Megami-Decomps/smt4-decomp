/* NON_MATCHING: 8 lines: the mode constant 2 and the level copy go through r1 where retail uses r0 (retail tests
 * the level in r0 with cmp, the build copies it with movs). */
#include "common.h"
#include <stddef.h>
#include "gamedata/GameFlags.h"
#include "addon/AocSystemA.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

/* A title button's screen position. */
struct TitleButtonPosition {
    f32 x;
    f32 y;
};

/* The title screen's work block (0x260 bytes; only the fields set here). */
typedef struct TitleMain {
    /* 0x000 */ void *process;
    /* 0x004 */ u8 unk004;
    /* 0x005 */ u8 unk005[3];
    /* 0x008 */ u32 unk008;
    /* 0x00C */ u32 unk00c;
    /* 0x010 */ u8 unk010;
    /* 0x011 */ u8 unk011[3];
    /* 0x014 */ TitleButtonPosition buttonPosition[5];
    /* 0x03C */ u8 unk03c;
    /* 0x03D */ u8 unk03d;
    /* 0x03E */ u8 unk03e;
    /* 0x03F */ u8 unk03f;
    /* 0x040 */ f32 unk040;
    /* 0x044 */ f32 unk044;
    /* 0x048 */ u8 unk048[4];
    /* 0x04C */ u16 unk04c;
    /* 0x04E */ u16 unk04e;
    /* 0x050 */ u32 triple[2]; /* two words and a halfword, cleared by wordTripleClear */
    /* 0x058 */ u16 tripleEnd;
    /* 0x05A */ u8 unk05a;
    /* 0x05B */ u8 unk05b;
    /* 0x05C */ s32 mode;
    /* 0x060 */ u8 unk060;
    /* 0x061 */ u8 helpAcquired;
    /* 0x062 */ u8 unk062;
    /* 0x063 */ u8 unk063;
    /* 0x064 */ u8 unk064[0xC];
    /* 0x070 */ u8 unk070;
    /* 0x071 */ u8 entryMode; /* from the creation options */
    /* 0x072 */ u8 unk072;
    /* 0x073 */ u8 unk073;
    /* 0x074 */ f32 unk074;
    /* 0x078 */ u8 unk078[0x18];
    /* 0x090 */ u8 level; /* the resident module's level at creation */
    /* 0x091 */ u8 unk091[3];
    /* 0x094 */ u32 unk094;
    /* 0x098 */ u8 unk098;
} TitleMain;
typedef char TitleMainOffsets[offsetof(TitleMain, mode) == 0x5C && offsetof(TitleMain, level) == 0x90 &&
                              offsetof(TitleMain, unk098) == 0x98 ? 1 : -1];

/* The title main pointer slot (the work block is the second word). */
typedef struct TitleMainGlobals {
    u32 unk0;
    TitleMain *main;
} TitleMainGlobals;

extern TitleMainGlobals g_titleMain;

void *asdMemoryAlloc(u32 size, u32 alignment, u32 a, u32 b, u32 c);
void wordTripleClear(u32 *triple);
s32 jyoucyuGetLevel(void);
void campButtonHelpAcquire(void);
void campCommonBgAcquire(void);

void taskCreateDraw(const char *name, u32 priority, u32 a, u32 b, void (*draw)(void *), u32 c, u32 d, void *process);
void FUN_0029f2fc(void *process);
void titleMainRelease(void *process);
void titleDrawModeOverlay(void *process);
void drawTitleModeOverlay(void *process);
void FUN_0032b0d4(void *process);

/* A button position from integer layout coordinates. */
static __inline TitleButtonPosition titleButtonPosition(s32 x, s32 y)
{
    TitleButtonPosition position;

    position.x = (f32)x;
    position.y = (f32)y;
    return position;
}

/* Creates the title screen: clears its work block, reads the button positions when the game is
 * in a level, sets the opening flag from the AOC data, and starts the update process and the
 * three draw tasks. `options` may carry the entry mode. */
void FUN_002a1358(u8 *options)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\title\\titleMain.cpp", 453);
    g_titleMain.main = (TitleMain *)asdMemoryAlloc(0x10000, 0x100, 0, 0x260, 1);
    TitleMain *title = g_titleMain.main;
    title->unk008 = 0;
    title->unk00c = 0;
    title->unk010 = 0;
    title->unk03c = 1;
    for (s32 i = 0; i < 5; i++) {
        title->buttonPosition[i].x = 0.0f;
        title->buttonPosition[i].y = 0.0f;
    }
    title->unk03f = 0;
    title->unk03d = 0;
    title->unk03e = 0;
    title->mode = 2;
    title->unk04c = 0;
    title->unk04e = 0;
    wordTripleClear(title->triple);
    title->unk040 = 0.0f;
    title->unk044 = 0.0f;
    title->unk05a = 0;
    title->unk060 = 0;
    title->helpAcquired = 0;
    title->unk063 = 0;
    title->unk062 = 1;
    title->unk072 = 0;
    title->unk070 = 0;
    title->unk074 = 0.0f;
    title->entryMode = 0;
    title->unk094 = 0;
    title->unk098 = 0;
    s32 level = jyoucyuGetLevel();

    title->level = level;
    if (level != 0) {
        const TextureTableEntryIV *layout = asdTMTexTableEntryAt(9, 0x22);
        title->buttonPosition[0] = titleButtonPosition(layout->x, layout->y);
        layout = asdTMTexTableEntryAt(9, 0x23);
        title->buttonPosition[1] = titleButtonPosition(layout->x, layout->y);
        layout = asdTMTexTableEntryAt(9, 0x24);
        title->buttonPosition[2] = titleButtonPosition(layout->x, layout->y);
        layout = asdTMTexTableEntryAt(9, 0x25);
        title->buttonPosition[3] = titleButtonPosition(layout->x, layout->y);
        layout = asdTMTexTableEntryAt(9, 0x26);
        title->buttonPosition[4] = titleButtonPosition(layout->x, layout->y);
        campButtonHelpAcquire();
        campCommonBgAcquire();
        title->helpAcquired = 1;
    }
    if (aocHasType36(g_aocSystem, 0x534) != 0) {
        gameFlagSetValue(0x534, 1, 1);
    } else {
        gameFlagSetValue(0x534, 0, 1);
    }
    title->unk004 = 0;
    if (options != NULL) {
        title->entryMode = *options;
        title->unk010 = 0;
    }
    void *process = reinterpret_cast<void *>(asdProcessCreateSimple(reinterpret_cast<const s8 *>("TITLE C"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_0029f2fc), reinterpret_cast<AsdProcFunc>(titleMainRelease), 0));

    title->process = process;
    taskCreateDraw("TITLE UDrawLeft", 0x78, 0, 0, titleDrawModeOverlay, 0, 0, process);
    taskCreateDraw("TITLE UDrawRight", 0xD4, 0, 0, drawTitleModeOverlay, 0, 0, title->process);
    taskCreateDraw("TITLE D", 0xEB, 0, 0, FUN_0032b0d4, 0, 0, title->process);
}

}
