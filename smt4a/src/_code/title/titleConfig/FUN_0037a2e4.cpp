/* NON_MATCHING: the save-block byte reads (0x27E90..0x27E94) and the settings global take different registers/address forms (retail loads each offset from a literal, ours shares one base), and the frame needs r7 */
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
extern u8 DAT_00536bec[0x60]; /* two 0x30-byte tables */

struct TitleConfigSettings {
    /* 0x0 */ u8 music;
    /* 0x1 */ u8 sound;
    /* 0x2 */ u8 voice;
    /* 0x3 */ u8 auxiliary;
    /* 0x4 */ u8 changed;
    /* 0x5 */ u8 unk5[3];
};
extern TitleConfigSettings DAT_00588fc0;

void FUN_002a0b58(void);
void titleConfigDestroy(void);
void FUN_0032ba8c(void);
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 region, u32 size, u32 option);
u32 taskCreateDraw(const char *name, s32 priority, s32 a, s32 b, void (*draw)(void), void (*destroy)(void),
                   void *owner, u32 job);
void paramsClearPacket(UiResourceParameters *params);

void FUN_0014e188(void *sprite, u32 anim, u32 frame, const void *source, u16 layer, f32 scale);
void uiSpriteSetKeyframe(void *sprite, s32 key, s32 restart);
void uiSpriteSetImageKeyframe(void *sprite, s32 image, s32 restart);
void FUN_00203b40(void *cursor, s32 a, s32 b, s32 c, s32 d, s32 e);
void fillTwoWordsWithByte(void *destination, u32 value);
void sysPlaySe(s32 sound);
void FUN_0019de98(s32 channel, u32 color);
GameDataBlock *gameDataBlocksGetSaveData(void);
u32 findByteThresholdTier(u8 value);
u32 thresholdIndexFind(u8 value);
void wordPairCopy(void *destination, const void *source);

/* Creates the config menu: its block, process and draw task, window sprite and cursor, then loads
 * the saved settings (or the defaults) into the menu. */
void FUN_0037a2e4(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\title\\titleConfig.cpp", 1071);
    TitleConfigA *config = static_cast<TitleConfigA *>(asdMemoryAllocTracked(0x100, 0x100, 0, 0x160, 1));
    g_titleConfig = config;
    config->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("TITLE_CONFIG_MAIN"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_002a0b58), reinterpret_cast<AsdProcFunc>(titleConfigDestroy), reinterpret_cast<u32>(config));
    taskCreateDraw("TITLE_CONFIG D", 0xea, 0, 0, FUN_0032ba8c, NULL, NULL, config->job);
    paramsClearPacket(&config->params);
    paramsInit(&config->params, DAT_00536bec, 0x30, DAT_00536bec + 0x30, 0x30, 0, 0, 0, 0, 0, 0);
    FUN_0014e188(config->window, 36, 0, &config->params, 201, 1.0f);
    uiSpriteSetKeyframe(config->window, 2, 0);
    uiSpriteSetImageKeyframe(config->window, 0, 0);
    config->cursorScale = 1.0f;
    config->cursorFrames = 30;
    FUN_00203b40(config->cursor, 3, 3, 1, 0, 1);
    config->state = 0;
    config->countA = 0;
    fillTwoWordsWithByte(config->touchRegions, 0xffffffff);
    config->countB = 0;
    asdLoadFileAsyncSimple("camp/config.bf", reinterpret_cast<u32 *>(&config->dataA), 0);
    asdLoadFileAsyncSimple("camp/config.mbm", reinterpret_cast<u32 *>(&config->dataB), 0);
    sysPlaySe(0x9b);
    FUN_0019de98(0, 0xf4f4f4ff);
    if (campIsState85() != 0) {
        GameDataBlock *save = gameDataBlocksGetSaveData();
        if (save->unk27E94[0] != 0) {
            config->settingIndex[0] = categoryGetThresholdIndex(reinterpret_cast<u8 *>(&save->unk27E90)[0]);
            config->settingIndex[1] = findByteThresholdTier(reinterpret_cast<u8 *>(&save->unk27E90)[1]);
            config->settingIndex[2] = thresholdIndexFind(reinterpret_cast<u8 *>(&save->unk27E90)[2]);
            *reinterpret_cast<u64 *>(config->saved) = *reinterpret_cast<u64 *>(&save->unk27E90);
            config->saved[4] = DAT_00588fc0.changed;
            return;
        }
    }
    config->settingIndex[0] = categoryGetThresholdIndex(DAT_00588fc0.music);
    config->settingIndex[1] = findByteThresholdTier(DAT_00588fc0.sound);
    config->settingIndex[2] = thresholdIndexFind(DAT_00588fc0.voice);
    wordPairCopy(config->saved, &DAT_00588fc0);
}

} /* extern "C" */
