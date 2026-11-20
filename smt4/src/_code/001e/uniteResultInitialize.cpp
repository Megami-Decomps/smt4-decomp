#include "ui/UiSpriteApi.h"
#include "ui/UiTexturePlacement.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "quest_center/qcMain.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_UiResourceParameters.h"
#include "common.h"
#include <stdio.h>
#include "gamedata/NkmBaseRecord.h"
#include "shard/W6_W6Match1_Table25Record.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "script/scrScriptProcess.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "camp/Unite/UniteEffectState.h"
#include "code/Code0038.h"

/* Animation tables for paramsInit; the original file defined them statically. */
static const s32 sKeysFirst[9] = { 320, 0, 8, 1310720, 0, 8, 0, 0, 1 };
struct UniteFloatKey {
    f32 from;
    f32 to;
    s32 frames;
};
typedef char UniteFloatKeySizeCheck[sizeof(UniteFloatKey) == 12 ? 1 : -1];
static const UniteFloatKey sKeysSecond[4] = {
    { 0, 1.0f, 8 }, { 1.0f, 1.0f, 1 }, { 0, 0.3f, 15 }, { 0.3f, 0, 5 }
};
static const UniteFloatKey sKeysThird[1] = { { 0, 1.0f, 8 } };
static const s32 sUniteResultSpriteKeys[56] = {
    1, 0, -3, 0, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0,
    2, 0, -3, 1, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0,
    -3, 0, -3, 2, 0, -3, 0, -3, 0, -3, 3, 0, -3, 0,
    -3, 0, -3, -2, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0,
};

static inline const NkmBaseRecord *getDevilRecord(u16 id)
{
    return (const NkmBaseRecord *)nkmBaseGetRecord(id);
}

extern "C" {
void FUN_0021a374(UniteRenderTarget *target, u32 texture);
/* This getter was visible to the caller before armlink replaced its call with
 * the single byte load. Keeping its ordinary body here also preserves the
 * compiler's knowledge of its side effects and register use. */
u8 devilRecordGetTone(const NkmBaseRecord *record)
{
    return record->talkTone;
}
void statusCameraDestroy(void);
void statusCameraSelectPreset(s32 preset);
u32 eventResourceCacheAcquire(s32 model, s32 mode);
void FUN_0033dcec(u32 texture, s32 a, s32 b);
u32 asdVramBGetFreeBytes(void);
void uniteResultLoadTexture(UniteRenderTarget *target, u32 extent, u32 options, u32 width, u32 height);
void statusBustUpPortraitAcquire(s32 id, u32 kind);

void uiSpriteSetScaleKeyframe(UiSpriteState *sprite, s32 a, s32 b);
void spriteSetVisible(UiSpriteState *sprite, u8 visible);

/* Starts the fusion-result screen: loads the result devils' textures, the stage model and camera
   (by how many devils are fused), the message script and builds its sprites. */
void uniteResultInitialize(void)
{
    UniteEffectWork *work = g_screenStateWork;
    statusCameraDestroy();
    statusCameraSelectPreset(2);
    for (s32 i = 0; i < work->materialCount; i++) {
        work->devilTextures[i] = reinterpret_cast<LogoObject *>(eventResourceCacheAcquire(getDevilRecord(work->materialDevils[i])->model, 0));
        FUN_0033dcec(reinterpret_cast<u32>(work->devilTextures[i]), 7, 1);
    }
    FUN_0021a374(&work->renderTarget, reinterpret_cast<u32>(work->devilTextures[0]));
    if (asdVramBGetFreeBytes() < 0x20000) {
        uniteResultLoadTexture(&work->renderTarget, 0x20000, 0x20000, 0x100, 0x100);
    } else {
        uniteResultLoadTexture(&work->renderTarget, 0x30000, 0x30000, 0x100, 0x100);
    }
    titleLogoDraw(&work->renderTarget);
    work->resultTexture = reinterpret_cast<const AnimationTracks *>(eventResourceCacheAcquire(getDevilRecord(work->resultDevil)->model, 0));
    FUN_0033dcec(reinterpret_cast<u32>(work->resultTexture), 7, 1);
    if (work->materialCount == 2) {
        if (work->sacrifice) {
            work->model = asdMdlManagerCreateLoaded("camp/jakyou_union2_ac.bam", 7);
            work->camera  = static_cast<CameraObject *>(asdCameraLoadFromFile("camp/jakyou_union2_ac.bccam"));
        } else {
            work->model = asdMdlManagerCreateLoaded("camp/jakyou_union2.bam", 7);
            work->camera  = static_cast<CameraObject *>(asdCameraLoadFromFile("camp/jakyou_union2.bccam"));
        }
        uniteEffectCollectMaterialPairs("tx_devil1");
        uniteEffectApplyScrollToModel(&work->renderTarget);
    }
    if (work->materialCount == 3) {
        work->model = asdMdlManagerCreateLoaded("camp/jakyou_union3.bam", 7);
        work->camera  = static_cast<CameraObject *>(asdCameraLoadFromFile("camp/jakyou_union3.bccam"));
        uniteEffectCollectMaterialPairs("tx_devil1");
        uniteEffectApplyScrollToModel(&work->renderTarget);
    }
    if (work->materialCount == 4) {
        work->model = asdMdlManagerCreateLoaded("camp/jakyou_union4.bam", 7);
        work->camera  = static_cast<CameraObject *>(asdCameraLoadFromFile("camp/jakyou_union4.bccam"));
        uniteEffectCollectMaterialPairs("tx_devil1");
        uniteEffectApplyScrollToModel(&work->renderTarget);
    }
    for (s32 i = 0; i < work->materialCount; i++) {
        statusBustUpPortraitAcquire((s16)work->materialDevils[i], 1);
    }
    work->scriptFile = asdLoadFileSyncDefault("battle/DevilLvUp.bf");
    char path[64];
    const NkmBaseRecord *record = getDevilRecord(work->resultDevil);
    sprintf(path, "battle/DevilMsg/%s.mbm", reinterpret_cast<const char *>(dataTable25Section0FindById((s8)devilRecordGetTone(record))->unk01));
    work->messageFile = asdLoadFileSyncDefault(path);
    work->script = scrScriptProcessCreate(work->scriptFile, work->messageFile);
    drawParameterBlockClear(&work->resources);
    paramsInit(&work->resources, sKeysFirst, 0x24, sKeysSecond, 0x30, sKeysThird, 0xc, NULL, 0, sUniteResultSpriteKeys, 0xe0);
    for (s32 i = 0; i <= 5; i++) {
        uiSpriteStateInitFromSource(&work->sprites[i], 0x24, 0, &work->resources, 1, 1.0f);
        uiSpriteSetKeyframe(&work->sprites[i], 0, 0);
    }
    for (s32 i = 6; i <= 9; i++) {
        uiSpriteStateInitFromSource(&work->sprites[i], 0x24, 0, &work->resources, 1, 1.0f);
        spriteStartAnimationByIndex(&work->sprites[i], 0);
    }
    uiSpriteInitializeState(&work->panel, 0x24, -1, 0x18, &work->resources, 0x65, 1.0f);
    uiSpriteSetScaleKeyframe(&work->panel, 0, 0);
    spriteSetLayer(&work->panel, 2);
    uiStoreTextureEntryCenter(reinterpret_cast<PointDeltaWork *>(&work->panel), 0x24, 0x21c);
    spriteSetVisible(&work->panel, 1);
    uiSpriteStateInitFromSource(&work->cursor, 0x24, 0, &work->resources, 1, 1.0f);
    spriteStartAnimationByIndex(&work->cursor, 2);
    buttonHelpSetPreset(0x61);
    g_screenStateWork->state = 1;
    g_screenStateWork->phase = 0;
}

} /* extern "C" */
