/* NON_MATCHING: retail assigns the cue/zero registers differently, computes frame bounds in a different order, and schedules the material bind and fade-out tails differently. */
#include "camp/Unite/UniteEffectState.h"
#include "ui/UiSpriteApi.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionValueApi.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "addon/LookupRecord.h"
#include "code/Code0021_Smt4.h"
#include "code/Code0024_Smt4.h"
#include "gamedata/GameDataAccess_VariantF.h"
#include "quest_center/qcMain.h"
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "sys/RuntimeObjects.h"
#include "sound/soundEffect.h"
#include "code/Code0038.h"

struct UniteMaterialCue {
    u16 start;
    u16 end;
};

extern "C" {
s32 soundPlaySeUnpanned(u32 id);
u32 soundSlotStopById(s32 id);
extern const UniteMaterialCue DAT_004033b0[4]; // two materials, then two unused entries
extern const UniteMaterialCue DAT_004033c0[4]; // three materials, then one unused entry
extern const UniteMaterialCue DAT_004033d0[4]; // four materials

struct EffectOwner;
struct ModelSlotOwner;
struct ModelRemovalRequestPrefixIV;
s32 effectAreAllCompletionChecksReady(const EffectOwner *owner);
f32 asdAnimGetTrackLastFrame(const AnimationTracks *animation, s32 track);
void modelSlotAttachChild(ModelSlotOwner *owner, s32 index);
void modelRemoveFromSlotList(ModelRemovalRequestPrefixIV *request, s32 index);
u32 gfxObjectDestroy(CameraObject *object);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entryIndex);
void statusCameraDestroy();
void statusCameraSelectPreset(s32 preset);
void statusBustUpPortraitRelease(s32 devilId, u32 kind);
void btlTalkBustUpSetDemonTexture(s32 devilId, s32 asynchronous);
void btlTalkBustUpSetUnk2F4(u8 value);
void btlTalkBustUpReleaseTexture();
void titleSetSlotValueState2(u32 index, u32 value);
void soundChannelRequestIfEnabled(u32 soundId, u32 channel, u32 frames);
void soundChannelStopAll(u32 channel);
s32 inputQueryButtonState(s32 button, s32 mode);
void titleRestartSlotState3(u32 index, u32 extra);
void resourceReleaseReference(Obj4207c0Resource *resource);
char *libc_strcpy(char *destination, const char *source); // declcheck: local (C string contract; EntrySequence.h uses word pointers)
}

namespace {

// Both the draw callback and the update use these cue points for the end of the model animation.
static __inline s32 fusionEffectEndFrame(u16 count, bool sacrifice)
{
    if (count == 2)
        return sacrifice ? 800 : 654;
    if (count == 3 || count == 4)
        return sacrifice ? 885 : 785;
    return 0;
}

static __inline void enterEffectState(s32 state)
{
    UniteEffectWork *work = g_screenStateWork;
    work->state = state;
    work->phase = 0;
}

// Rebind the render target to the next devil's texture, then apply it to its stage material.
static __inline void bindMaterialTexture(UniteEffectWork *work, u32 index, const char *material)
{
    work->renderTarget.texture = work->devilTextures[index];
    titleLogoDraw(&work->renderTarget);
    uniteEffectCollectMaterialPairs(material);
    uniteEffectApplyScrollToModel(&work->renderTarget);
}

} // namespace

// Advance the fusion result's intro, model cutscene, message and teardown.
extern "C" s32 uniteEffectUpdate(u32)
{
    UniteEffectWork *work = g_screenStateWork;
    uiSpriteAdvanceAnimation(&work->cursor);
    work->renderTarget.resultFrame += 2;
    work->renderTarget.resultFrame %= (s32)asdAnimGetTrackLastFrame(work->resultTexture, 0);

    switch (work->state) {
    case 0:
        break;
    case 1:
        if (!FUN_00295618())
            break;
        titleSetSlotValueState2(0, 10);
        titleSetSlotValueState2(1, 10);
        soundChannelRequestIfEnabled(0x100006B, 10, 60);
        work->sacrificeSound = -1;
        if (work->materialCount == 2)
            soundPlaySeUnpanned(0x10000AA);
        else if (work->materialCount == 3)
            soundPlaySeUnpanned(0x10000AB);
        else if (work->materialCount == 4)
            soundPlaySeUnpanned(0x10000AC);
        enterEffectState(2);
        break;
    case 2:
        for (s32 i = 0; i < 5; ++i) {
            if (i <= work->phase - 1)
                uiSlidingSpriteAdvance(&work->sprites[i], 0);
        }
        uiSpriteAdvanceAnimation(&work->panel);
        if (screenFaderIsSettled(0) && screenFaderIsSettled(1) && uiSpriteGetCompletionState(&work->sprites[5])) {
            lightOwnerRegister(work->model, 1);
            modelSlotAttachChild(reinterpret_cast<ModelSlotOwner *>(work->camera), 0);
            enterEffectState(3);
        }
        break;
    case 3: {
        ++work->renderTarget.loadingFrame;
        UniteEffectWork *cueWork = g_screenStateWork;
        const TextureTableEntryIV *band = asdTMTexTableEntryAt(0x24, 0x20B);
        const TextureTableEntryIV *portrait = asdTMTexTableEntryAt(0x24, 0x20E);
        const UniteMaterialCue *cues = NULL;
        if (cueWork->materialCount == 2)
            cues = DAT_004033b0;
        else if (cueWork->materialCount == 3)
            cues = DAT_004033c0;
        else if (cueWork->materialCount == 4)
            cues = DAT_004033d0;
        for (s32 i = 0; i < cueWork->materialCount; ++i) {
            const UniteMaterialCue &cue = cues[i];
            s32 fadeInStart = cue.start - 5;
            if (cueWork->phase < fadeInStart)
                continue;
            if (cueWork->phase < cue.start) {
                cueWork->renderTarget.materialWidths[i] = (band->placement->width / 5) * (cueWork->phase - fadeInStart);
            } else if (cueWork->phase < cue.end) {
                cueWork->renderTarget.materialWidths[i] = band->placement->width;
                f32 travel = (f32)portrait->placement->height / (f32)(cue.end - cue.start);
                cueWork->renderTarget.materialOffsets[i] = (s32)-(travel * (f32)(cueWork->phase - cue.start));
            } else if (cueWork->phase < cue.end + 5) {
                cueWork->renderTarget.materialWidths[i] = (band->placement->width / 5) * (5 - (cueWork->phase - cue.end));
                cueWork->renderTarget.materialOffsets[i] = -portrait->placement->height;
            } else {
                cueWork->renderTarget.materialWidths[i] = 0;
                uiSpriteAdvanceAnimation(&cueWork->sprites[6 + i]);
            }
        }
        if (effectAreAllCompletionChecksReady(reinterpret_cast<EffectOwner *>(work->model))) {
            work->model->flags |= 2;
            work->model->node->sceneNode->positionFollowed = 0;
            if (work->materialCount == 2) {
                if (work->sacrifice) {
                    work->resultModel = asdMdlManagerCreateLoaded("camp/jakyou_union2_ac_loop.bam", 7);
                    work->resultCamera  = static_cast<CameraObject *>(asdCameraLoadFromFile("camp/jakyou_union2_ac_loop.bccam"));
                } else {
                    work->resultModel = asdMdlManagerCreateLoaded("camp/jakyou_union2_loop.bam", 7);
                    work->resultCamera  = static_cast<CameraObject *>(asdCameraLoadFromFile("camp/jakyou_union2_loop.bccam"));
                }
            }
            if (work->materialCount == 3) {
                work->resultModel = asdMdlManagerCreateLoaded("camp/jakyou_union3_loop.bam", 7);
                work->resultCamera  = static_cast<CameraObject *>(asdCameraLoadFromFile("camp/jakyou_union3_loop.bccam"));
            }
            if (work->materialCount == 4) {
                work->resultModel = asdMdlManagerCreateLoaded("camp/jakyou_union4_loop.bam", 7);
                work->resultCamera  = static_cast<CameraObject *>(asdCameraLoadFromFile("camp/jakyou_union4_loop.bccam"));
            }
            modelRemoveFromSlotList(reinterpret_cast<ModelRemovalRequestPrefixIV *>(work->camera), 0);
            gfxObjectDestroy(work->camera);
            work->camera = NULL;
            lightOwnerRegister(work->resultModel, 1);
            modelSlotAttachChild(reinterpret_cast<ModelSlotOwner *>(work->resultCamera), 0);
            asdMdlManagerMarkDestroy(work->model);
            asdMdlManagerDestroy(work->model);
            work->model = NULL;
            if (work->sacrifice) {
                scrScriptProcessStartEntry(work->script, 0x11);
                buttonHelpSetPreset(0x58);
                enterEffectState(4);
            } else {
                enterEffectState(5);
            }
            break;
        }

        f32 animationFrame = sndObjectForwardField8(work->model);
        if (inputQueryButtonState(9, 1) || inputQueryButtonState(6, 1)) {
            s32 end;
            if (work->sacrifice) {
                end = fusionEffectEndFrame(work->materialCount, false);
                if (animationFrame > (f32)end) {
                    end = fusionEffectEndFrame(work->materialCount, true);
                    if (work->sacrificeSound != -1) {
                        soundSlotStopById(work->sacrificeSound);
                        work->sacrificeSound = -1;
                        soundPlaySeUnpanned(0x10000AD);
                    }
                }
            } else {
                end = fusionEffectEndFrame(work->materialCount, false);
            }
            if (animationFrame < (f32)end) {
                modelOwnerApplyAnimationTime(reinterpret_cast<ModelOwner *>(work->model), (f32)end);
                AsdMotionInstance *motion = work->camera->motion;
                f32 blend = motion->interpolate(motion->interpolateContext, motion->blendFrom, motion->blendLimit, (f32)end);
                motion->previousBlend = motion->blend;
                motion->blend = blend;
                motion->blendChanged = 1;
                work->phase = end;
                for (s32 i = 6; i < 10; ++i)
                    spriteStartAnimationByIndex(&work->sprites[i], 1);
            }
        }
        if (work->sacrifice) {
            s32 cue = fusionEffectEndFrame(work->materialCount, false);
            for (s32 i = 0; i < 4; ++i) {
                if (work->phase == cue + i * 4)
                    spriteStartAnimationByIndex(&work->sprites[6 + i], 0);
            }
        }
        s32 fadeFrame = work->sacrifice ? fusionEffectEndFrame(work->materialCount, true)
                                       : fusionEffectEndFrame(work->materialCount, false);
        if (work->phase == fadeFrame)
            titleRestartSlotState3(0, 0xFFFFFFFF);
        if (work->phase == fadeFrame + 5)
            titleSetSlotValueState2(0, 30);
        if (work->sacrifice) {
            u16 count = g_screenStateWork->materialCount;
            s32 cue = count == 2 ? 655 : fusionEffectEndFrame(count, false);
            if (work->phase == cue)
                work->sacrificeSound = soundPlaySeUnpanned(0x10000AE);
        } else if (work->phase == fusionEffectEndFrame(work->materialCount, false)) {
            soundPlaySeUnpanned(0x10000AD);
        }
        if (work->materialCount == 2) {
            if (work->phase != 160)
                break;
            bindMaterialTexture(work, 1, "tx_devil2");
        }
        if (work->materialCount == 3) {
            if (work->phase == 160)
                bindMaterialTexture(work, 1, "tx_devil2");
            if (work->phase == 285)
                bindMaterialTexture(work, 2, "tx_devil3");
        }
        if (work->materialCount == 4) {
            if (work->phase == 160)
                bindMaterialTexture(work, 1, "tx_devil2");
            if (work->phase == 280)
                bindMaterialTexture(work, 2, "tx_devil3");
            if (work->phase == 360)
                bindMaterialTexture(work, 3, "tx_devil4");
        }
        break;
    }
    case 4:
        uiSpriteAdvanceAnimation(&work->sprites[5]);
        if (scrRunOpcodesStub(work->script) != 2 || !uiSpriteGetCompletionState(&work->sprites[5]))
            break;
        // fall through: the optional sacrifice message has closed
    case 5: {
        char text[128];
        libc_strcpy(text, reinterpret_cast<const char *>(dataTable01FindByIdWithAoc(work->resultDevil)));
        textEncodeFontSlot(8, reinterpret_cast<const u8 *>(text));
        libc_strcpy(text, demonGetRaceLabel(work->resultDevil, 1));
        textEncodeFontSlot(0x10, reinterpret_cast<const u8 *>(text));
        scrScriptProcessStartEntry(work->script, 0x10);
        buttonHelpSetPreset(0x58);
        btlTalkBustUpSetDemonTexture(work->resultDevil, 1);
        btlTalkBustUpSetUnk2F4(1);
        enterEffectState(6);
        break;
    }
    case 6:
        uiSpriteAdvanceAnimation(&work->sprites[5]);
        if (scrRunOpcodesStub(work->script) == 2 && uiSpriteGetCompletionState(&work->sprites[5])) {
            slotSetRequest(0, 10, 0xFF);
            slotSetRequest(1, 10, 0xFF);
            soundChannelStopAll(10);
            enterEffectState(7);
        }
        break;
    case 7:
        if (screenFaderIsSettled(0) && screenFaderIsSettled(1)) {
            scrScriptProcessDestroy(work->script);
            asdMemFree(work->messageFile);
            asdMemFree(work->scriptFile);
            for (s32 i = 0; i < work->materialCount; ++i) {
                statusBustUpPortraitRelease(work->materialDevils[i], 1);
                resourceReleaseReference(reinterpret_cast<Obj4207c0Resource *>(work->devilTextures[i]));
                work->devilTextures[i] = NULL;
            }
            btlSpritePlacementRelease(reinterpret_cast<Obj *>(&work->renderTarget));
            resourceReleaseReference(reinterpret_cast<Obj4207c0Resource *>(const_cast<AnimationTracks *>(work->resultTexture)));
            work->resultTexture = NULL;
            btlTalkBustUpReleaseTexture();
            asdMdlManagerMarkDestroy(work->resultModel);
            asdMdlManagerDestroy(work->resultModel);
            work->resultModel = NULL;
            modelRemoveFromSlotList(reinterpret_cast<ModelRemovalRequestPrefixIV *>(work->resultCamera), 0);
            gfxObjectDestroy(work->resultCamera);
            work->resultCamera = NULL;
            statusCameraDestroy();
            statusCameraSelectPreset(1);
            enterEffectState(8);
        }
        break;
    }
    ++work->phase;
    return 0;
}
