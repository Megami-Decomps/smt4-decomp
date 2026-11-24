#include <string.h>
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "title/titleConfig.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/Shard0031.h"
#include "camp/CampStateQueries.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "ui/UiControl_Smt4a.h"

extern "C" {

extern TitleConfigA *g_titleConfig;
extern u8 g_titleConfigDefaultParams[0x60]; /* two 0x30-byte tables */

extern TitleConfigValues g_titleConfigValues;

void FUN_002a0b58(void);
void titleConfigDestroy(void);
void titleConfigDraw(void);
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 region, u32 size, u32 option);
u32 taskCreateDraw(const char *name, s32 priority, s32 a, s32 b, void (*draw)(void), void (*destroy)(void),
                   void *owner, u32 job);
void paramsClearPacket(UiResourceParameters *params);

void gridNavigationConfigure(void *cursor, s32 a, s32 b, s32 c, s32 d, s32 e);
void fillTwoWordsWithByte(void *destination, u32 value);
void sysPlaySe(s32 sound);
void buttonHelpSetText(s32 channel, u32 color);
GameSaveBodyA *gameDataBlocksGetSaveData(void);
u32 findByteThresholdTier(u8 value);
u32 thresholdIndexFind(u8 value);

/* Creates the config menu: its block, process and draw task, window sprite and cursor, then loads
 * the saved settings (or the defaults) into the menu. */
void titleConfigCreate(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\title\\titleConfig.cpp", 1071);
    TitleConfigA *config = (TitleConfigA *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(TitleConfigA), 1);
    g_titleConfig = config;
    config->job = asdProcessCreateSimple((const s8 *)"TITLE_CONFIG_MAIN", 4, 0, 0,
                                         (AsdProcUpdateFunc)FUN_002a0b58, (AsdProcFunc)titleConfigDestroy,
                                         (u32)g_titleConfig);
    taskCreateDraw("TITLE_CONFIG D", 0xea, 0, 0, titleConfigDraw, NULL, NULL, config->job);
    paramsClearPacket(&config->params);
    paramsInit(&config->params, g_titleConfigDefaultParams, 0x30, g_titleConfigDefaultParams + 0x30, 0x30, 0, 0, 0, 0, 0, 0);
    uiSpriteStateInitFromSource(&config->window, 36, 0, &config->params, 201, 1.0f);
    uiSpriteSetKeyframe(&config->window, 2, 0);
    uiSpriteSetImageKeyframe(&config->window, 0, 0);
    config->cursorScale = 1.0f;
    config->cursorFrames = 30;
    gridNavigationConfigure(config->cursor, 3, 3, 1, 0, 1);
    config->state = 0;
    config->countA = 0;
    fillTwoWordsWithByte(config->touchRegions, 0xffffffff);
    config->countB = 0;
    asdLoadFileAsyncSimple("camp/config.bf", (u32 *)&config->dataA, 0);
    asdLoadFileAsyncSimple("camp/config.mbm", (u32 *)&config->dataB, 0);
    sysPlaySe(0x9b);
    buttonHelpSetText(0, 0xf4f4f4ff);
    if (campIsState85() != 0) {
        GameSaveBodyA *save = gameDataBlocksGetSaveData();
        if (save->titleConfig.saved != 0) {
            config->settingIndex[0] = categoryGetThresholdIndex((u8)save->titleConfig.values[0]);
            config->settingIndex[1] = findByteThresholdTier(save->titleConfig.values[1]);
            config->settingIndex[2] = thresholdIndexFind(save->titleConfig.values[2]);
            memcpy(&config->saved, &save->titleConfig, sizeof(config->saved));
            config->saved.changed = g_titleConfigValues.changed;
            return;
        }
    }
    config->settingIndex[0] = categoryGetThresholdIndex(g_titleConfigValues.music);
    config->settingIndex[1] = findByteThresholdTier(g_titleConfigValues.sound);
    config->settingIndex[2] = thresholdIndexFind(g_titleConfigValues.voice);
    config->saved = g_titleConfigValues;
}

} /* extern "C" */
