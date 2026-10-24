/* NON_MATCHING: block layout only: retail places the group 2 body before the final all-loaded check, ours after it; every instruction and the debug-hook NOP match */
#include "AsdSDK/AsdDebugHooks.h"

/* Which of the three resident resource groups are loaded. */
struct JyoucyuLoaded {
    /* 0x0 */ s8 system;
    /* 0x1 */ s8 textures;
    /* 0x2 */ u8 data;
};

extern "C" {

extern JyoucyuLoaded g_jyoucyu;
extern s8 g_jyoucyuLevel;

void FUN_003f8940(void);
void engineClearStateTriple(void);
void saveLoadEnsureResources(void);
void commonBgLoadSpritesOnFirstUse(void);
void campButtonHelpLoad(void);
void configSettingsResetDefaults(void);
void FUN_00283d74(s32 value);
void FUN_00137848(void);
void FUN_002326b4(void);
void asdSequenceRequest(s32 sequence, s32 a, s32 b);
void FUN_00387454(void);
void dataTableReloadLocked(void);
void dataTableResolveEntryVariants(void);
void asdTMTexTableLoadTmx(s32 table, s32 mode);
void asdTMTexTableLoadSprites(s32 table);
void FUN_0014afd0(s32 table, s32 mode);
void tmSpriteTableAcquire(void);
void asdMTeXLoadTableEntries(void);
void texTableRefAcquire(void);
void FUN_00212774(void);
void FUN_002c3364(void);
void gameSessionAcquireSpriteTable(void);
void statusAcquireBustUpResources(void);
void dataTableRefAcquire(void);
void resetFlagGroupsCD(void);
void FUN_003c5c88(void);

/* Loads one group of the resident resources (0 system, 1 textures, 2 data) the first time it is
 * asked for, and marks the whole set loaded once all three are. */
void FUN_0022258c(u32 group)
{
    if (g_jyoucyuLevel != 0) {
        return;
    }
    switch (group) {
    case 0:
        if (g_jyoucyu.system == 0) {
            FUN_003f8940();
            engineClearStateTriple();
            saveLoadEnsureResources();
            commonBgLoadSpritesOnFirstUse();
            campButtonHelpLoad();
            configSettingsResetDefaults();
            FUN_00283d74(0);
            FUN_00137848();
            FUN_002326b4();
            asdSequenceRequest(0x16, 0, 0);
            g_jyoucyu.system = 1;
        }
        break;
    case 1:
        if (g_jyoucyu.textures == 0) {
            FUN_00387454();
            dataTableReloadLocked();
            dataTableResolveEntryVariants();
            asdDebugHookVoid();
            asdTMTexTableLoadTmx(6, 0);
            asdTMTexTableLoadTmx(0x10, 0);
            asdTMTexTableLoadTmx(0, 0);
            asdTMTexTableLoadTmx(1, 0);
            asdTMTexTableLoadTmx(2, 0);
            asdTMTexTableLoadTmx(0x16, 0);
            asdTMTexTableLoadTmx(0x17, 0);
            asdTMTexTableLoadTmx(0x1c, 0);
            asdTMTexTableLoadSprites(0x27);
            asdTMTexTableLoadSprites(0x1d);
            asdTMTexTableLoadTmx(0xe, 0);
            FUN_0014afd0(3, 2);
            FUN_0014afd0(3, 3);
            tmSpriteTableAcquire();
            g_jyoucyu.textures = 1;
        }
        break;
    }
    if (group == 2 && g_jyoucyu.data == 0) {
        asdMTeXLoadTableEntries();
        texTableRefAcquire();
        FUN_00212774();
        FUN_002c3364();
        gameSessionAcquireSpriteTable();
        statusAcquireBustUpResources();
        dataTableRefAcquire();
        resetFlagGroupsCD();
        FUN_003c5c88();
        g_jyoucyu.data = 1;
    }
    if (g_jyoucyu.data == 1 && (g_jyoucyu.system == 1 && g_jyoucyu.textures == 1)) {
        g_jyoucyuLevel = 1;
    }
}

}
