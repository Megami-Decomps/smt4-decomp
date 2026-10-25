/* NON_MATCHING: process-callback literal/store scheduling and final saved-options tail-call address formation differ from retail. */
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"

struct TitleConfigWordPair { u32 first, second; };
union TitleConfigAudioSettings {
    TitleConfigWordPair words;
    struct { u8 music, effects, voice; u8 unk03[5]; } values;
};
struct TitleConfigCreateWork {
    /* 0x000 */ u32 process;
    /* 0x004 */ u32 unk004;
    /* 0x008 */ u32 state;
    /* 0x00C */ u8 unk00c[0xe];
    /* 0x01A */ s16 countA;
    /* 0x01C */ TitleConfigWordPair handles;
    /* 0x024 */ s16 countB;
    /* 0x026 */ u8 unk026[2];
    /* 0x028 */ u32 musicStep;
    /* 0x02C */ u32 effectsStep;
    /* 0x030 */ u32 voiceStep;
    /* 0x034 */ TitleConfigWordPair savedOptions;
    /* 0x03C */ UiResourceParameters resources;
    /* 0x05C */ SpritePlaybackView sprite;
    /* 0x0E8 */ u8 selector[0x64];
    /* 0x14C */ void *scriptData;
    /* 0x150 */ void *modelData;
    /* 0x154 */ void *script;
};

typedef char TitleConfigCreateWorkSize[sizeof(TitleConfigCreateWork) == 0x158 ? 1 : -1];

extern "C" {
extern TitleConfigCreateWork *g_titleConfig;
extern const u8 DAT_00407dd6[];
extern TitleConfigAudioSettings g_titleConfigValues;
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
u32 asdProcessCreateSimple(const char *name, s32 group, s32 first, s32 second,
                           s32 (*update)(void), void (*end)(void), void *work);
u32 taskCreateDraw(const char *name, s32 priority, s32 screen, u32 flags,
                    s32 (*draw)(void), void (*end)(void), void *work, u32 parent);
s32 titleConfigUpdate(void);
void titleConfigDestroy(void);
s32 FUN_002cb054(void);
void drawParameterBlockClear(UiResourceParameters *resources);

void FUN_002bd954(SpritePlaybackView *sprite, s32 kind, s32 count,
                   UiResourceParameters *resources, u16 flags, f32 speed);
void timerStart(SpritePlaybackView *sprite, s32 key, s32 mode);
void FUN_0029f848(void *selector, s32 count, s32 rows, s32 wrap, s32 first, s32 enabled);
void memFill8(void *destination, u32 value);
void asdLoadFileAsyncSimple(const char *name, void **output, u32 flags);
void buttonHelpSetPreset(s32 preset);
void FUN_0029ee6c(s32 first, u32 color);
u32 bgmVolumeToStep(u8 volume);
u32 classifyValueByThreshold(u8 volume);
u32 calcByteThresholdRank(u8 volume);
void FUN_002ad8b4(TitleConfigWordPair *destination, const TitleConfigWordPair *source);
}

/* Allocate the title configuration menu, its rendering task and its resource requests. */
extern "C" void titleConfigCreate(void)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\title\\titleConfig.cpp", 829);
    TitleConfigCreateWork *work = (TitleConfigCreateWork *)asdMemAlloc(0x100, 0x100, 0, 0x158, 1);
    g_titleConfig = work;
    work->process = asdProcessCreateSimple("TITLE_CONFIG_MAIN", 2, 0, 0, titleConfigUpdate,
                                           titleConfigDestroy, work);
    taskCreateDraw("TITLE_CONFIG D", 0xe6, 0, 0, FUN_002cb054, NULL, NULL, work->process);
    drawParameterBlockClear(&work->resources);
    paramsInit(&work->resources, DAT_00407dd6, 0x18, NULL, 0, NULL, 0, NULL, 0, NULL, 0);
    FUN_002bd954(&work->sprite, 0x2f, 0, &work->resources, 0xc9, 1.0f);
    timerStart(&work->sprite, 0, 0);
    FUN_0029f848(work->selector, 3, 3, 1, 0, 1);
    work->state = 0;
    work->countA = 0;
    memFill8(&work->handles, -1u);
    work->countB = 0;
    asdLoadFileAsyncSimple("camp/config.bf", &work->scriptData, 0);
    asdLoadFileAsyncSimple("camp/config.mbm", &work->modelData, 0);
    buttonHelpSetPreset(0x99);
    FUN_0029ee6c(0, 0x323232ff);
    work->musicStep = bgmVolumeToStep(g_titleConfigValues.values.music);
    work->effectsStep = classifyValueByThreshold(g_titleConfigValues.values.effects);
    work->voiceStep = calcByteThresholdRank(g_titleConfigValues.values.voice);
    FUN_002ad8b4(&work->savedOptions, &g_titleConfigValues.words);
}
