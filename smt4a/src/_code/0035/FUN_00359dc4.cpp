/* NON_MATCHING: retail emits two nop {0} hints after most calls, tail-calls nothing (returns 0 through r7) and splits the timer loop float arguments into hoisted s16/s17; built tail-calls overlayIsNotBusy/linkHolderApplyFlag and lacks the hints */
#include "common.h"

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

struct StatusResource {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ u32 state;
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
    /* 0x04C */ StatusResource *active;
    /* 0x050 */ StatusResource *resource;
    /* 0x054 */ u32 resourceSize;
    /* 0x058 */ u32 resourceExtra;
    /* 0x05C */ u8 unk05C[0x9C];
    /* 0x0F8 */ s32 state;
    /* 0x0FC */ s32 stateArg;
    /* 0x100 */ u8 unk100[0xE];
    /* 0x10E */ u8 ready;
    /* 0x10F */ u8 unk10F[4];
    /* 0x113 */ u8 confirmSe;
    /* 0x114 */ u8 unk114[0x80];
    /* 0x194 */ u8 resourcesReleased;
};

extern "C" {
void sysPlaySe(s32 id);
void FUN_00182054(void);
void FUN_00275bc8(StatusResource *resource, u32 size);
void linkHolderApplyFlag(LinkHolder *links, s32 flag);
void FUN_002e1c94(void *work, s32 count, u32 frame, f32 start, f32 end);
void FUN_002e207c(void);
void FUN_002e2114(void);
void outfitPreviewConfigureEquipment(struct OutfitPreview *preview, const struct OutfitPreviewEquipment *equipment);
StatusScene *overlayGetStatusScene(void);
u32 overlayGetBuffer1(void);
s32 buttonHelpGetPanelMode(void);
void overlayIsNotBusy(void);
void controllerApplyPreset(LinkHolder *links, s32 preset);
void screenStartOrClear(u32 buffer, s32 frames);
void characterInfoPanelPopulate(StatusDevil *devil, StatusCharacter *character, u32 extra);
s32 devilIsTextureLoaded(s32 modelId, s32 arg);
void resourceEntryMarkReleased(u32 resources, s32 index);
void modelApplyNonzeroGroupRotation(u32 handle, void *controller);
u32 gameGetPlayerData(void);

/* Once the demon model and the panel resources are loaded, populates the character info panel and
 * starts its screen; otherwise clears the link holder's flag. */
u32 FUN_00359dc4(StatusScreen *screen)
{
    if (screen->ready != 0)
        return 0;
    s32 modelId = screen->devil->modelId;
    if (modelId != 0) {
        devilIsTextureLoaded(modelId, 1);
        if (modelId == 0)
            return 0;
    }

    if (screen->resourcesReleased == 0) {
        resourceEntryMarkReleased(overlayGetStatusScene()->resources, 0);
        resourceEntryMarkReleased(overlayGetStatusScene()->resources, 1);
        resourceEntryMarkReleased(overlayGetStatusScene()->resources, 2);
        u32 playerData = gameGetPlayerData();
        outfitPreviewConfigureEquipment(reinterpret_cast<OutfitPreview *>(overlayGetStatusScene()),
                     reinterpret_cast<const OutfitPreviewEquipment *>(playerData));
        overlayGetStatusScene();
        FUN_002e207c();
        screen->resourcesReleased = 1;
    }
    LinkHolder *links = screen->links;
    FUN_002e2114();
    if (links != NULL && screen->resource != NULL && screen->resourceSize != 0 && screen->resourceExtra != 0) {
        u32 ready = screen->character->ready;
        FUN_00182054();
        if (ready != 0) {
            modelId = screen->devil->modelId;
            if (modelId == 0 || (devilIsTextureLoaded(modelId, 1), modelId != 0)) {
                StatusResource *resource = screen->resource;
                FUN_00275bc8(resource, screen->resourceSize);
                screen->active = resource;
                resource->state = 2;
                screen->ready = 1;
                linkHolderApplyFlag(screen->links, 1);
                controllerApplyPreset(screen->links, screen->character->preset);
                characterInfoPanelPopulate(screen->devil, screen->character, screen->resourceExtra);
                if (buttonHelpGetPanelMode() == 0)
                    screenStartOrClear(overlayGetBuffer1(), 0xF);
                if (screen->confirmSe != 0) {
                    sysPlaySe(0xE4);
                    screen->state = 2;
                } else {
                    screen->state = 5;
                    screen->stateArg = 1;
                    modelApplyNonzeroGroupRotation(screen->links->handle, screen->links->controller);
                }
                for (s32 i = 0; i < 2; i++) {
                    FUN_002e1c94(screen->timers[i].work, 4, screen->timers[i].frame, 0.0f, 1.0f);
                    screen->timers[i].frame++;
                }
                overlayIsNotBusy();
                return 0;
            }
        }
    }
    linkHolderApplyFlag(screen->links, 0);
    return 0;
}

} /* extern "C" */
