/* NON_MATCHING: 77 lines off: retail hoists the s8 fields' base (screen + 0x100) and the zero result to entry, sets
 * the result 3 before the fade loop (keeping the screen in r6 and the index in r4), and does not share the 2 of the
 * script's and the screen's states in a saved register. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "camp/CampCec/CampCecView.h"
#include "code/Code002e_Smt4a.h"
#include "script/scrScriptProcess.h"
#include "script/ScriptVm.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

struct StatusScene {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u32 resources;
};

struct LinkHolder {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u8 controller[0x10];
    /* 0x1C */ u32 handle;
};

struct StatusCharacter {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ u8 ready;
    /* 0x23 */ u8 unk23[0x1F];
    /* 0x42 */ u8 preset;
};

struct StatusDevil {
    /* 0x00 */ u8 unk00[0x90];
    /* 0x90 */ s16 modelId;
};

struct StatusTimer {
    /* 0x00 */ u8 work[0x0C];
    /* 0x0C */ s32 frame;
    /* 0x10 */ u32 unk10;
};

struct StatusScreen {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ LinkHolder *links;
    /* 0x008 */ StatusCharacter *character;
    /* 0x00C */ StatusDevil *devil;
    /* 0x010 */ StatusTimer timers[2];
    /* 0x038 */ u8 unk038[0x14];
    /* 0x04C */ ScriptProcess *script;     /* the panel's running script */
    /* 0x050 */ void *scriptData;
    /* 0x054 */ void *scriptOwner;
    /* 0x058 */ u32 resourceExtra;
    /* 0x05C */ u8 unk05C[0x9C];
    /* 0x0F8 */ s32 state;
    /* 0x0FC */ s32 stateArg;
    /* 0x100 */ u8 unk100[0xE];
    /* 0x10E */ u8 ready;
    /* 0x10F */ u8 unk10F[4];
    /* 0x113 */ s8 confirmSe;
    /* 0x114 */ u8 unk114[0x80];
    /* 0x194 */ s8 resourcesReleased;
};

extern "C" {
void sysPlaySe(s32 id);
void linkHolderApplyFlag(LinkHolder *links, s32 flag);
u32 timedValueInterpolateStep(void *work, s32 count, s32 frame, f32 start, f32 end);
void linkControllerResetScaleAndCancel(void);
void outfitPreviewConfigureEquipment(struct OutfitPreview *preview, const struct OutfitPreviewEquipment *equipment);
StatusScene *overlayGetStatusScene(void);
u32 overlayGetBuffer1(void);
s32 buttonHelpGetPanelMode(void);
void controllerApplyPreset(LinkHolder *links, s32 preset);
void screenStartOrClear(u32 buffer, s32 frames);
void characterInfoPanelPopulate(StatusDevil *devil, StatusCharacter *character, u32 extra);
void resourceEntryMarkReleased(u32 resources, s32 index);
void modelApplyNonzeroGroupRotation(u32 handle, void *controller);
u32 gameGetPlayerData(void);

/* Whether the devil's model texture is loaded (a devil without a model has nothing to wait for). */
static __inline bool devilModelReady(const StatusDevil *devil)
{
    s32 modelId = devil->modelId;
    return modelId == 0 || devilIsTextureLoaded(modelId, 1);
}

/* Once the demon model and the panel resources are loaded, starts the panel's script, populates the character
 * info panel and starts its screen and fades (3); otherwise clears the link holder's flag (0). */
u32 statusScreenStartWhenLoaded(StatusScreen *screen)
{
    u32 result = 0;
    if (screen->ready == 0) {
        if (!devilModelReady(screen->devil))
            return 0;

        if (screen->resourcesReleased == 0) {
            resourceEntryMarkReleased(overlayGetStatusScene()->resources, 0);
            resourceEntryMarkReleased(overlayGetStatusScene()->resources, 1);
            resourceEntryMarkReleased(overlayGetStatusScene()->resources, 2);
            u32 playerData = gameGetPlayerData();
            outfitPreviewConfigureEquipment((OutfitPreview *)overlayGetStatusScene(),
                                            (const OutfitPreviewEquipment *)playerData);
            overlayGetStatusScene();
            linkControllerResetScaleAndCancel();
            screen->resourcesReleased = 1;
        }
        if (linkedTargetRunHolderLinks((LinkedTarget *)screen->links) != 0 && screen->scriptData != NULL &&
            screen->scriptOwner != NULL && screen->resourceExtra != 0 && FUN_00182054(screen->character->ready) != 0 &&
            devilModelReady(screen->devil)) {
            ScriptProcess *script = scrScriptProcessCreate(screen->scriptData, screen->scriptOwner);
            screen->script = script;
            script->mode = 2;
            screen->ready = 1;
            linkHolderApplyFlag(screen->links, 1);
            controllerApplyPreset(screen->links, screen->character->preset);
            characterInfoPanelPopulate(screen->devil, screen->character, screen->resourceExtra);
            if (buttonHelpGetPanelMode() == 0)
                screenStartOrClear(overlayGetBuffer1(), 0xF);
            if (screen->confirmSe == 0) {
                screen->state = 5;
                screen->stateArg = 1;
                modelApplyNonzeroGroupRotation(screen->links->handle, screen->links->controller);
            } else {
                sysPlaySe(0xE4);
                screen->state = 2;
            }
            for (s32 i = 0; i < 2; i++) {
                timedValueInterpolateStep(screen->timers[i].work, 4, screen->timers[i].frame, 0.0f, 1.0f);
                screen->timers[i].frame++;
            }
            overlayIsNotBusy();
            result = 3;
        } else {
            linkHolderApplyFlag(screen->links, 0);
        }
    }
    return result;
}

} /* extern "C" */
