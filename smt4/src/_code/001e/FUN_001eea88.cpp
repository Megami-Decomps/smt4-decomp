/* NON_MATCHING: only the devilRecordGetTone call (armlink-inlined ldrb) differs: the build emits nop hints (2 before, 1 after) around it that retail does not have; everything else identical */
#include "common.h"
#include "gamedata/DevilRecord.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"

/* A 0x8C-byte UI sprite. */
struct UniteSprite {
    /* 0x00 */ u8 unk00[0x8c];
};

/* Texture binding the screen renders into (a 0x48-byte block). */
struct UniteRenderTarget {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 texture;
    /* 0x08 */ u8 unk08[0x40];
};

/* The fusion-result screen's work area. */
struct UniteScreenWork {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 phase;
    /* 0x00c */ u16 resultDevil;
    /* 0x00e */ u16 materialDevils[8];
    /* 0x01e */ u16 materialCount;
    /* 0x020 */ u8 sacrifice;                 /* picks the "_ac" model variant */
    /* 0x021 */ u8 unk021[7];
    /* 0x028 */ u32 devilTextures[4];
    /* 0x038 */ UniteRenderTarget renderTarget;
    /* 0x080 */ u32 resultTexture;
    /* 0x084 */ u32 model;
    /* 0x088 */ u32 unk088;
    /* 0x08c */ u32 camera;
    /* 0x090 */ u8 unk090[0x20c];
    /* 0x29c */ u32 scriptFile;
    /* 0x2a0 */ u32 script;
    /* 0x2a4 */ u32 messageFile;
    /* 0x2a8 */ UiResourceParameters resources;
    /* 0x2c8 */ UniteSprite sprites[10];
    /* 0x840 */ UniteSprite panel;
    /* 0x8cc */ UniteSprite cursor;
};

/* Animation tables for paramsInit; the original file defined them statically. */
static const s32 sKeysFirst[9] = { 320, 0, 8, 1310720, 0, 8, 0, 0, 1 };
static const f32 sKeysSecond[12] = { 0, 1.0f, 8, 1.0f, 1.0f, 1, 0, 0.3f, 15, 0.3f, 0, 5 };
static const f32 sKeysThird[3] = { 0, 1.0f, 8 };
static const s32 sKeysFourth[56] = {
    1, 0, -3, 0, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0,
    2, 0, -3, 1, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0,
    -3, 0, -3, 2, 0, -3, 0, -3, 0, -3, 3, 0, -3, 0,
    -3, 0, -3, -2, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0,
};

static inline const DevilRecord *getDevilRecord(u16 id)
{
    return (const DevilRecord *)devilGetRecord(id);
}

extern "C" {
extern UniteScreenWork *g_screenStateWork;

void FUN_0021a374(UniteRenderTarget *target, u32 texture);
u8 devilRecordGetTone(const DevilRecord *record);
void statusCameraDestroy(void);
void statusCameraSelectPreset(s32 preset);
u32 FUN_00294090(s32 model, s32 mode);
void FUN_0033dcec(u32 texture, s32 a, s32 b);
u32 asdVramBGetFreeBytes(void);
void FUN_00343e5c(UniteRenderTarget *target, u32 extent, u32 options, u32 width, u32 height);
void FUN_00258618(UniteRenderTarget *target);
void FUN_00258408(const char *name);
void FUN_00258170(UniteRenderTarget *target);
u32 asdMdlManagerCreateLoaded(const char *path, s32 heap);
u32 asdCameraLoadFromFile(const char *path);
void FUN_002942c4(s32 id, u32 kind);
u32 asdLoadFileSyncDefault(const char *path);
const char *FUN_002cdecc(s8 tone);
s32 textFormatBuffer(char *buffer, const char *format, ...);
u32 FUN_00297060(u32 script, u32 messages);
void drawParameterBlockClear(UiResourceParameters *resources);

void FUN_002bd954(UniteSprite *sprite, s32 kind, s32 count, UiResourceParameters *resources, u16 flags, f32 speed);
void uiSpriteInitializeState(UniteSprite *sprite, s32 kind, s32 count, s32 animation, UiResourceParameters *resources, u16 flags, f32 speed);
void timerStart(UniteSprite *sprite, s32 animation, s32 flags);
void spriteStartAnimationByIndex(UniteSprite *sprite, s32 animation);
void FUN_002a9fdc(UniteSprite *sprite, s32 a, s32 b);
void spriteSetLayer(UniteSprite *sprite, u16 layer);
void spriteSetVisible(UniteSprite *sprite, u8 visible);
void FUN_00295eb0(UniteSprite *sprite, s32 kind, s32 count);
void buttonHelpSetPreset(s32 preset);

/* Starts the fusion-result screen: loads the result devils' textures, the stage model and camera
   (by how many devils are fused), the message script and builds its sprites. */
void FUN_001eea88(void)
{
    UniteScreenWork *work = g_screenStateWork;
    statusCameraDestroy();
    statusCameraSelectPreset(2);
    for (s32 i = 0; i < work->materialCount; i++) {
        work->devilTextures[i] = FUN_00294090(getDevilRecord(work->materialDevils[i])->model, 0);
        FUN_0033dcec(work->devilTextures[i], 7, 1);
    }
    FUN_0021a374(&work->renderTarget, work->devilTextures[0]);
    if (asdVramBGetFreeBytes() < 0x20000) {
        FUN_00343e5c(&work->renderTarget, 0x20000, 0x20000, 0x100, 0x100);
    } else {
        FUN_00343e5c(&work->renderTarget, 0x30000, 0x30000, 0x100, 0x100);
    }
    FUN_00258618(&work->renderTarget);
    work->resultTexture = FUN_00294090(getDevilRecord(work->resultDevil)->model, 0);
    FUN_0033dcec(work->resultTexture, 7, 1);
    if (work->materialCount == 2) {
        if (work->sacrifice) {
            work->model = asdMdlManagerCreateLoaded("camp/jakyou_union2_ac.bam", 7);
            work->camera = asdCameraLoadFromFile("camp/jakyou_union2_ac.bccam");
        } else {
            work->model = asdMdlManagerCreateLoaded("camp/jakyou_union2.bam", 7);
            work->camera = asdCameraLoadFromFile("camp/jakyou_union2.bccam");
        }
        FUN_00258408("tx_devil1");
        FUN_00258170(&work->renderTarget);
    }
    if (work->materialCount == 3) {
        work->model = asdMdlManagerCreateLoaded("camp/jakyou_union3.bam", 7);
        work->camera = asdCameraLoadFromFile("camp/jakyou_union3.bccam");
        FUN_00258408("tx_devil1");
        FUN_00258170(&work->renderTarget);
    }
    if (work->materialCount == 4) {
        work->model = asdMdlManagerCreateLoaded("camp/jakyou_union4.bam", 7);
        work->camera = asdCameraLoadFromFile("camp/jakyou_union4.bccam");
        FUN_00258408("tx_devil1");
        FUN_00258170(&work->renderTarget);
    }
    for (s32 i = 0; i < work->materialCount; i++) {
        FUN_002942c4((s16)work->materialDevils[i], 1);
    }
    work->scriptFile = asdLoadFileSyncDefault("battle/DevilLvUp.bf");
    char path[64];
    const DevilRecord *record = getDevilRecord(work->resultDevil);
    textFormatBuffer(path, "battle/DevilMsg/%s.mbm", FUN_002cdecc(devilRecordGetTone(record)) + 1);
    work->messageFile = asdLoadFileSyncDefault(path);
    work->script = FUN_00297060(work->scriptFile, work->messageFile);
    drawParameterBlockClear(&work->resources);
    paramsInit(&work->resources, sKeysFirst, 0x24, sKeysSecond, 0x30, sKeysThird, 0xc, NULL, 0, sKeysFourth, 0xe0);
    for (s32 i = 0; i <= 5; i++) {
        FUN_002bd954(&work->sprites[i], 0x24, 0, &work->resources, 1, 1.0f);
        timerStart(&work->sprites[i], 0, 0);
    }
    for (s32 i = 6; i <= 9; i++) {
        FUN_002bd954(&work->sprites[i], 0x24, 0, &work->resources, 1, 1.0f);
        spriteStartAnimationByIndex(&work->sprites[i], 0);
    }
    uiSpriteInitializeState(&work->panel, 0x24, -1, 0x18, &work->resources, 0x65, 1.0f);
    FUN_002a9fdc(&work->panel, 0, 0);
    spriteSetLayer(&work->panel, 2);
    FUN_00295eb0(&work->panel, 0x24, 0x21c);
    spriteSetVisible(&work->panel, 1);
    FUN_002bd954(&work->cursor, 0x24, 0, &work->resources, 1, 1.0f);
    spriteStartAnimationByIndex(&work->cursor, 2);
    buttonHelpSetPreset(0x61);
    g_screenStateWork->state = 1;
    g_screenStateWork->phase = 0;
}

} /* extern "C" */
