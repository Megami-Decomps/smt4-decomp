#include "ui/PartyPanelState.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "status/StatusCamera.h"

struct PartyPanelSavedFlags {
    u8 prefix[0x40];
    u8 restore;
};

extern "C" {
void scrScriptProcessDestroy(void *script);
void asdMemFree(void *memory);
void asdMemFreeNonNull(void *memory);
void *bufferArrayFree(void *buffer);
void gameReleaseDataReference(void);
void jobStop(u32 job, u32 flags);

void partyPanelReleaseResources(void)
{
    PartyPanelState *panel = g_partyPanel;
    reinterpret_cast<PartyPanelSavedFlags *>(gameDataGetSortPreferences())->restore = panel->alternate;
    if (panel->script) {
        scrScriptProcessDestroy(panel->script);
    }
    if (panel->files[1]) {
        asdMemFree(panel->files[1]);
    }
    if (panel->files[0]) {
        asdMemFree(panel->files[0]);
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
    if (panel->unite) {
        asdMemFreeNonNull(bufferArrayFree(panel->unite));
    }
    panel->unite = NULL;
    gameReleaseDataReference();
    jobStop(panel->job, 0);
    asdMemFree(panel);
    g_partyPanel = NULL;
}
}
