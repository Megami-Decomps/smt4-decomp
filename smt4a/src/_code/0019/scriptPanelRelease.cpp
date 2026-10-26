#include "common.h"
#include <stddef.h>
#include "AsdSDK/AsdDebugHooks.h"

/* An object kept in the handle registry; slot 1 of its vtable is the deleting destructor. */
class RegisteredObject {
public:
    virtual ~RegisteredObject();
    /* 0x04 */ u32 handle;
};

/* The panel's owned helper; a second sub-object sits at 0x4F0. */
struct HelperSub {
    /* 0x0 */ u8 unk0[0x10];
};

struct PanelHelper {
    /* 0x000 */ u8 unk000[0x4F0];
    /* 0x4F0 */ HelperSub sub;
};

/* A script process with the script and message files it was started from. */
struct ScriptGroup {
    /* 0x0 */ void *scriptFile;
    /* 0x4 */ void *messageFile;
    /* 0x8 */ void *process;
};

struct ScriptPanel {
    /* 0x000 */ u8 unk000[0x19];
    /* 0x019 */ u8 text[0x26B];
    /* 0x284 */ ScriptGroup groups[4];
    /* 0x2B4 */ u8 unk2B4[0x75C];
    /* 0xA10 */ RegisteredObject *iconsA[9];
    /* 0xA34 */ RegisteredObject *iconsB[9];
    /* 0xA58 */ u8 unkA58[0x64];
    /* 0xABC */ s32 iconCount;
    /* 0xAC0 */ u8 unkAC0[0x21C];
    /* 0xCDC */ PanelHelper *helper;
    /* 0xCE0 */ u8 unkCE0[8];
    /* 0xCE8 */ RegisteredObject *owner;
};

static __inline PanelHelper *panelHelperFromSub(HelperSub *sub)
{
    return (PanelHelper *)((u8 *)sub - offsetof(PanelHelper, sub));
}

extern "C" {

extern u32 *g_handleRegistry; /* 0x56fcc0 */

extern void FUN_0019de98(u32 a, u32 color);
extern void placeWinRelease(void);
extern void FUN_001add1c(u8 *text);
extern void FUN_001a6500(u8 *text);
extern void cameraResourcesRelease(PanelHelper *helper);
extern void asdOperatorDelete(void *object);
extern void resourceOwnerReleaseAndReset(u32 *registry);
extern void ptrListRemoveClearOwner(u32 *registry, u32 handle);
extern void scrScriptProcessDestroy(void *process);
extern void asdMemFree(void *memory);
extern void FUN_001695a0(void);
extern void messageSetMode(s32 mode);

static __inline void scriptGroupRelease(ScriptGroup *group)
{
    if (group->process != NULL) {
        scrScriptProcessDestroy(group->process);
        group->process = NULL;
    }
    if (group->scriptFile != NULL) {
        asdMemFree(group->scriptFile);
        group->scriptFile = NULL;
    }
    if (group->messageFile != NULL) {
        asdMemFree(group->messageFile);
        group->messageFile = NULL;
    }
}

/* Tears the panel down: releases its helper, registered objects and script groups. */
void scriptPanelRelease(ScriptPanel *panel)
{
    s32 i;

    FUN_0019de98(0, 0xf4f4f4ff);
    placeWinRelease();
    FUN_001add1c(panel->text);
    FUN_001a6500(panel->text);
    if (panel->helper != NULL) {
        cameraResourcesRelease(panel->helper);
        asdDebugHookPtr(panel->helper);
        if (panel->helper != NULL) {
            asdOperatorDelete(panelHelperFromSub((HelperSub *)asdDebugHookPass(&panel->helper->sub)));
        }
        panel->helper = NULL;
    }
    resourceOwnerReleaseAndReset(g_handleRegistry);
    if (panel->owner != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, panel->owner->handle);
        if (panel->owner != NULL) {
            delete panel->owner;
            panel->owner = NULL;
        }
    }
    for (i = 0; i < panel->iconCount; i++) {
        ptrListRemoveClearOwner(g_handleRegistry, panel->iconsA[i]->handle);
        if (panel->iconsA[i] != NULL) {
            delete panel->iconsA[i];
            panel->iconsA[i] = NULL;
        }
        ptrListRemoveClearOwner(g_handleRegistry, panel->iconsB[i]->handle);
        if (panel->iconsB[i] != NULL) {
            delete panel->iconsB[i];
            panel->iconsB[i] = NULL;
        }
    }
    scriptGroupRelease(&panel->groups[0]);
    scriptGroupRelease(&panel->groups[1]);
    scriptGroupRelease(&panel->groups[2]);
    scriptGroupRelease(&panel->groups[3]);
    FUN_001695a0();
    messageSetMode(1);
}

} /* extern "C" */
