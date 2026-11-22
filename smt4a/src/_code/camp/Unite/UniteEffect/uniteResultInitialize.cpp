#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "shard/S1ModelEffect.h"
#include "ui/ParamsClearPacket.h"
#include "script/scrScriptProcess.h"
#include "common.h"
#include <stdio.h>
#include "gamedata/NkmBaseRecordA.h"
#include "shard/W6_W6Match1_Table25Record.h"
#include "classes/Obj557af8.h"
#include "Model/MoriModelContent.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"

/* A 0x8C-byte UI sprite. */
struct UniteSprite {
    /* 0x00 */ u8 unk00[0x8c];
};

/* Texture binding the screen renders into (a 0x54-byte block). */
struct UniteRenderTarget {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 texture;
    /* 0x08 */ u8 unk08[0x4c];
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
    /* 0x08c */ u32 resultTexture;
    /* 0x090 */ MoriModelContent *model;
    /* 0x094 */ u32 unk094;
    /* 0x098 */ Obj557af8 *camera;
    /* 0x09c */ u8 unk09c[0x298];
    /* 0x334 */ u32 scriptFile;
    /* 0x338 */ u32 script;
    /* 0x33c */ u32 messageFile;
    /* 0x340 */ UiResourceParameters resources;
    /* 0x360 */ UniteSprite sprites[10];
    /* 0x8d8 */ UniteSprite panel;
    /* 0x964 */ UniteSprite cursor;
};

typedef char UniteScreenWorkAOffsets[offsetof(UniteScreenWork, resultTexture)==0x8c && offsetof(UniteScreenWork,camera)==0x98 && offsetof(UniteScreenWork,resources)==0x340 && offsetof(UniteScreenWork,cursor)==0x964 ? 1 : -1];

static const s32 sKeysFirst[9] = { 320, 0, 8, 1310720, 0, 8, 0, 0, 1 };
struct FloatAnimationKey { f32 start, end; s32 frames; };
static const FloatAnimationKey sKeysSecond[] = { {0,1.0f,8}, {1.0f,1.0f,1}, {0,0.3f,15}, {0.3f,0,5} };
static const FloatAnimationKey sKeysThird[] = { {0,1.0f,8} };
static const s32 sUniteResultSpriteKeys[56] = {
    1, 0, -3, 0, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0,
    2, 0, -3, 1, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0,
    -3, 0, -3, 2, 0, -3, 0, -3, 0, -3, 3, 0, -3, 0,
    -3, 0, -3, -2, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0,
};

inline void *operator new(u32, void *storage) throw() { return storage; }

static inline const NkmBaseRecordA *getDevilRecord(u16 id)
{
    return (const NkmBaseRecordA *)nkmBaseGetRecord(id);
}

extern "C" {
extern UniteScreenWork *g_uniteEffectWork;
u32 resourceCacheGetOrLoadModel(u16, u32, u32);
Table25Record *dataTable25Section0FindById(s32);


void uniteRenderTargetSetTexture(UniteRenderTarget *target, u32 texture);
/* This getter was visible to the caller before armlink replaced its call with
 * the single byte load. Keeping its ordinary body here also preserves the
 * compiler's knowledge of its side effects and register use. */
u8 devilRecordGetTone(const NkmBaseRecordA *record)
{
    return record->talkTone;
}
void uniteCameraDestroy(void);
void FUN_003fb5d4(u32 texture, s32 a, s32 b);
u32 asdVramBGetFreeBytes(void);
void uniteEnemyRenderSetup(UniteRenderTarget *target, u32 extent, u32 options, u32 width, u32 height);
void FUN_0040c190(UniteRenderTarget *target);
void FUN_003d2a00(const char *name);
void materialMergeApplyTextureTransform(UniteRenderTarget *target);
void statusBustUpPortraitAcquire(s32 id, u32 kind);

void uiSpriteSetScaleKeyframe(UniteSprite *sprite, s32 a, s32 b);
void uiStoreTextureEntryCenter(UniteSprite *sprite, s32 kind, s32 count);
void sysPlaySe(s32 preset);

/* Starts the fusion-result screen: loads the result devils' textures, the stage model and camera
   (by how many devils are fused), the message script and builds its sprites. */
void uniteResultInitialize(void)
{
    UniteScreenWork *work = g_uniteEffectWork;
    uniteCameraDestroy();
    for (s32 i = 0; i < work->materialCount; i++) {
        work->devilTextures[i] = resourceCacheGetOrLoadModel(getDevilRecord(work->materialDevils[i])->model, 0, 1);
        FUN_003fb5d4(work->devilTextures[i], 7, 1);
    }
    uniteRenderTargetSetTexture(&work->renderTarget, work->devilTextures[0]);
    if (asdVramBGetFreeBytes() < 0x20000) {
        uniteEnemyRenderSetup(&work->renderTarget, 0x20000, 0x20000, 0x100, 0x100);
    } else {
        uniteEnemyRenderSetup(&work->renderTarget, 0x30000, 0x30000, 0x100, 0x100);
    }
    FUN_0040c190(&work->renderTarget);
    work->resultTexture = resourceCacheGetOrLoadModel(getDevilRecord(work->resultDevil)->model, 0, 1);
    FUN_003fb5d4(work->resultTexture, 7, 1);
    if (work->materialCount == 2) {
        if (work->sacrifice) {
            MoriModelContent *model = (MoriModelContent *)asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\Unite\\UniteEffect.cpp", 1770);
            if (model) model = modelListInit(model);
            work->model = model;
            resourceOwnerLoadFileSync(model, "camp/jakyou_union2_ac.bam");
            FUN_0040ab7c(work->model, 0);
            moriModelContentLoadBody(work->model, 0);
            u32 fileSize;
            const AsdAnimCameraResource *resource = (const AsdAnimCameraResource *)asdLoadFileWithSize("camp/jakyou_union2_ac.bch", &fileSize, 1);
            void *cameraStorage = asdMemoryAllocTraced(sizeof(Obj557af8), "c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\Unite\\UniteEffect.cpp", 1775);
            work->camera = cameraStorage ? new(cameraStorage) Obj557af8(resource) : 0;
        } else {
            MoriModelContent *model = (MoriModelContent *)asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\Unite\\UniteEffect.cpp", 1778);
            if (model) model = modelListInit(model);
            work->model = model;
            resourceOwnerLoadFileSync(model, "camp/jakyou_union2.bam");
            FUN_0040ab7c(work->model, 0);
            moriModelContentLoadBody(work->model, 0);
            u32 fileSize;
            const AsdAnimCameraResource *resource = (const AsdAnimCameraResource *)asdLoadFileWithSize("camp/jakyou_union2.bch", &fileSize, 1);
            void *cameraStorage = asdMemoryAllocTraced(sizeof(Obj557af8), "c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\Unite\\UniteEffect.cpp", 1783);
            work->camera = cameraStorage ? new(cameraStorage) Obj557af8(resource) : 0;
        }
        FUN_003d2a00("tx_devil1");
        materialMergeApplyTextureTransform(&work->renderTarget);
    }
    if (work->materialCount == 3) {
        MoriModelContent *model = (MoriModelContent *)asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\Unite\\UniteEffect.cpp", 1804);
            if (model) model = modelListInit(model);
            work->model = model;
            resourceOwnerLoadFileSync(model, "camp/jakyou_union3.bam");
            FUN_0040ab7c(work->model, 0);
            moriModelContentLoadBody(work->model, 0);
            u32 fileSize;
            const AsdAnimCameraResource *resource = (const AsdAnimCameraResource *)asdLoadFileWithSize("camp/jakyou_union3.bch", &fileSize, 1);
            void *cameraStorage = asdMemoryAllocTraced(sizeof(Obj557af8), "c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\Unite\\UniteEffect.cpp", 1809);
            work->camera = cameraStorage ? new(cameraStorage) Obj557af8(resource) : 0;
        FUN_003d2a00("tx_devil1");
        materialMergeApplyTextureTransform(&work->renderTarget);
    }
    if (work->materialCount == 4) {
        MoriModelContent *model = (MoriModelContent *)asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\Unite\\UniteEffect.cpp", 1827);
            if (model) model = modelListInit(model);
            work->model = model;
            resourceOwnerLoadFileSync(model, "camp/jakyou_union4.bam");
            FUN_0040ab7c(work->model, 0);
            moriModelContentLoadBody(work->model, 0);
            u32 fileSize;
            const AsdAnimCameraResource *resource = (const AsdAnimCameraResource *)asdLoadFileWithSize("camp/jakyou_union4.bch", &fileSize, 1);
            void *cameraStorage = asdMemoryAllocTraced(sizeof(Obj557af8), "c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\Unite\\UniteEffect.cpp", 1832);
            work->camera = cameraStorage ? new(cameraStorage) Obj557af8(resource) : 0;
        FUN_003d2a00("tx_devil1");
        materialMergeApplyTextureTransform(&work->renderTarget);
    }
    for (s32 i = 0; i < work->materialCount; i++) {
        statusBustUpPortraitAcquire((s16)work->materialDevils[i], 1);
    }
    work->scriptFile = reinterpret_cast<u32>(asdLoadFileSyncDefault("battle/DevilLvUp.bf"));
    char path[64];
    const NkmBaseRecordA *record = getDevilRecord(work->resultDevil);
    sprintf(path, "battle/DevilMsg/%s.mbm", reinterpret_cast<const char *>(dataTable25Section0FindById((s8)devilRecordGetTone(record))->unk01));
    work->messageFile = reinterpret_cast<u32>(asdLoadFileSyncDefault(path));
    work->script = reinterpret_cast<u32>(scrScriptProcessCreate(reinterpret_cast<void *>(work->scriptFile), reinterpret_cast<void *>(work->messageFile)));
    paramsClearPacket(&work->resources);
    paramsInit(&work->resources, sKeysFirst, 0x24, sKeysSecond, 0x30, sKeysThird, 0xc, NULL, 0, sUniteResultSpriteKeys, 0xe0);
    for (s32 i = 0; i <= 5; i++) {
        uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(&work->sprites[i]), 0x1a, 0, &work->resources, 1, 1.0f);
        uiSpriteSetKeyframe(reinterpret_cast<UiSpriteState *>(&work->sprites[i]), 0, 0);
    }
    for (s32 i = 6; i <= 9; i++) {
        uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(&work->sprites[i]), 0x1a, 0, &work->resources, 1, 1.0f);
        uiSpriteSelectAnim(reinterpret_cast<UiSpriteState *>(&work->sprites[i]), 0);
    }
    uiSpriteInitializeState(reinterpret_cast<UiSpriteState *>(&work->panel), 0x1a, -1, 0x18, &work->resources, 0x65, 1.0f);
    uiSpriteSetScaleKeyframe(&work->panel, 0, 0);
    spriteSetLayer(reinterpret_cast<UiSpriteState *>(&work->panel), 2);
    uiStoreTextureEntryCenter(&work->panel, 0x1a, 0x21c);
    spriteSetVisible(reinterpret_cast<UiSpriteState *>(&work->panel), 1);
    uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(&work->cursor), 0x1a, 0, &work->resources, 1, 1.0f);
    uiSpriteSelectAnim(reinterpret_cast<UiSpriteState *>(&work->cursor), 2);
    sysPlaySe(99);
    g_uniteEffectWork->state = 1;
    g_uniteEffectWork->phase = 0;
}

} /* extern "C" */
