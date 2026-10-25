#include "ui/PartyPanelState.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "status/StatusCamera.h"

struct PartyPanelSavedFlags {
    u8 prefix[0x40];
    u8 restore;
};

extern "C" {
extern PartyPanelState *g_partyPanel;
void scrScriptProcessDestroy(void *script);
void asdMemFree(void *memory);
void asdMemFreeNonNull(void *memory);
void *bufferArrayFree(void *buffer);
void gameReleaseDataReference(void);
void jobStop(u32 job, u32 flags);

void FUN_0028a22c(void)
{
    PartyPanelState *panel = g_partyPanel;
    reinterpret_cast<PartyPanelSavedFlags *>(FUN_002a0d0c())->restore = panel->unk42;
    if (panel->resources.script) {
        scrScriptProcessDestroy(panel->resources.script);
    }
    if (panel->resources.files[1]) {
        asdMemFree(panel->resources.files[1]);
    }
    if (panel->resources.files[0]) {
        asdMemFree(panel->resources.files[0]);
    }
    for (s32 index = 0; index < 4; ++index) {
        if (panel->characters[index]) {
            asdMemFreeNonNull(asdDebugHookPass(panel->characters[index]));
        }
    }
    for (s32 index = 0; index < 24; ++index) {
        if (panel->demons[index]) {
            asdMemFreeNonNull(asdDebugHookPass(panel->demons[index]));
        }
    }
    if (panel->ownedBuffer) {
        asdMemFreeNonNull(bufferArrayFree(panel->ownedBuffer));
    }
    panel->ownedBuffer = NULL;
    gameReleaseDataReference();
    jobStop(panel->resources.job, 0);
    asdMemFree(panel);
    g_partyPanel = NULL;
}
}
