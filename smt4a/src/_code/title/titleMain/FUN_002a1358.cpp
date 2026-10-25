/* NON_MATCHING: the order of the work-block field stores and the zero float register differ from retail (192 vs 198 rows); the title setup is the same. */
#include "common.h"
#include "gamedata/GameFlags.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/aocHasType36.h"

extern "C" {

/* The title screen's work block (0x260 bytes; only the fields set here). */
typedef struct TitleMain {
    /* 0x000 */ void *process;
    /* 0x004 */ u8 unk004;
    /* 0x005 */ u8 unk005[3];
    /* 0x008 */ u32 unk008;
    /* 0x00C */ u32 unk00c;
    /* 0x010 */ u8 unk010;
    /* 0x011 */ u8 unk011[3];
    /* 0x014 */ f32 buttonPosition[5][2];
    /* 0x03C */ u8 unk03c;
    /* 0x03D */ u8 unk03d;
    /* 0x03E */ u8 unk03e;
    /* 0x03F */ u8 unk03f;
    /* 0x040 */ f32 unk040;
    /* 0x044 */ f32 unk044;
    /* 0x048 */ u8 unk048[4];
    /* 0x04C */ u16 unk04c;
    /* 0x04E */ u16 unk04e;
    /* 0x050 */ u32 triple[3];
    /* 0x05A */ u8 unk05a;
    /* 0x05C */ s32 mode;
    /* 0x060 */ u8 unk060;
    /* 0x061 */ u8 helpAcquired;
    /* 0x062 */ u8 unk062;
    /* 0x063 */ u8 unk063;
    /* 0x064 */ u8 unk064[6];
} TitleMain;

/* The title main pointer slot (the work block is the second word). */
typedef struct TitleMainGlobals {
    u32 unk0;
    TitleMain *main;
} TitleMainGlobals;

extern TitleMainGlobals g_titleMain;
extern u32 g_aocSystem;

void *asdMemoryAlloc(u32 size, u32 alignment, u32 a, u32 b, u32 c);
void wordTripleClear(u32 *triple);
s32 jyoucyuGetLevel(void);
u8 *asdTMTexTableEntryAt(u32 group, u32 id);
void campButtonHelpAcquire(void);
void campCommonBgAcquire(void);

void taskCreateDraw(const char *name, u32 priority, u32 a, u32 b, void (*draw)(void *), u32 c, u32 d, void *process);
void FUN_0029f2fc(void *process);
void titleMainRelease(void *process);
void titleDrawModeOverlay(void *process);
void drawTitleModeOverlay(void *process);
void FUN_0032b0d4(void *process);

/* Reads the screen position of layout record `id` of group 9 into `position`. */
static __inline void readButtonPosition(f32 *position, u32 id)
{
    u8 *layout = asdTMTexTableEntryAt(9, id);

    position[0] = (f32) * (s16 *)(layout + 8);
    position[1] = (f32) * (s16 *)(layout + 10);
}

/* Creates the title screen: clears its work block, reads the button positions when the game is
 * in a level, sets the opening flag from the AOC data, and starts the update process and the
 * three draw tasks. `options` may carry the entry mode. */
void FUN_002a1358(u8 *options)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\title\\titleMain.cpp", 453);
    TitleMain *title = (TitleMain *)asdMemoryAlloc(0x10000, 0x100, 0, 0x260, 1);

    g_titleMain.main = title;
    title->unk008 = 0;
    title->unk00c = 0;
    title->unk010 = 0;
    title->unk03c = 1;
    for (s32 i = 0; i < 5; i++) {
        title->buttonPosition[i][0] = 0.0f;
        title->buttonPosition[i][1] = 0.0f;
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
    *((u8 *)title + 0x60) = 0;
    *((u8 *)title + 0x61) = 0;
    *((u8 *)title + 0x63) = 0;
    *((u8 *)title + 0x62) = 1;
    *((u8 *)title + 0x72) = 0;
    *((u8 *)title + 0x70) = 0;
    *(f32 *)((u8 *)title + 0x74) = 0.0f;
    *((u8 *)title + 0x71) = 0;
    *(u32 *)((u8 *)title + 0x94) = 0;
    *((u8 *)title + 0x98) = 0;
    s32 level = jyoucyuGetLevel();

    *((u8 *)title + 0x90) = (u8)level;
    if (level != 0) {
        readButtonPosition(title->buttonPosition[0], 0x22);
        readButtonPosition(title->buttonPosition[1], 0x23);
        readButtonPosition(title->buttonPosition[2], 0x24);
        readButtonPosition(title->buttonPosition[3], 0x25);
        readButtonPosition(title->buttonPosition[4], 0x26);
        campButtonHelpAcquire();
        campCommonBgAcquire();
        title->helpAcquired = 1;
    }
    gameFlagSetValue(0x534, aocHasType36(g_aocSystem, 0x534) != 0 ? 1 : 0, 1);
    title->unk004 = 0;
    if (options != NULL) {
        *((u8 *)title + 0x71) = *options;
        title->unk010 = 0;
    }
    void *process = reinterpret_cast<void *>(asdProcessCreateSimple(reinterpret_cast<const s8 *>("TITLE C"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_0029f2fc), reinterpret_cast<AsdProcFunc>(titleMainRelease), 0));

    title->process = process;
    taskCreateDraw("TITLE UDrawLeft", 0x78, 0, 0, titleDrawModeOverlay, 0, 0, process);
    taskCreateDraw("TITLE UDrawRight", 0xD4, 0, 0, drawTitleModeOverlay, 0, 0, title->process);
    taskCreateDraw("TITLE D", 0xEB, 0, 0, FUN_0032b0d4, 0, 0, title->process);
}

}
