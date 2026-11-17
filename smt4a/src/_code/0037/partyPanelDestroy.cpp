#include "ui/PartyPanelStateA.h"
#include "event/2dEvent/2dEventTex.h"

extern "C" {

__weak void *FUN_0037dab0_hook(void *p);
void scrScriptProcessDestroy(void);
void asdMemFree(void *p);
void asdOperatorDelete(void *p);
void *ptrTable44FreeAll(void *p);
void gameGlobalsReleaseReference(void);
void jobStop(u32 job, int arg);

/* Destroys the party panel: saves its layout flag, frees its files, script, widgets and fusion work, stops its job and clears the global. */
void partyPanelDestroy(void)
{
    PartyPanelStateA *panel = g_partyPanel;
    int i;

    saveGetUserSettingsBlock()[0x44] = panel->alternate;
    if (panel->script != NULL) {
        scrScriptProcessDestroy();
    }
    if (panel->files[1] != NULL) {
        asdMemFree(panel->files[1]);
    }
    if (panel->files[0] != NULL) {
        asdMemFree(panel->files[0]);
    }
    for (i = 0; i < 4; i++) {
        if (panel->characters[i] != NULL) {
            asdOperatorDelete(FUN_0037dab0_hook(panel->characters[i]));
        }
    }
    for (i = 0; i < 24; i++) {
        if (panel->demons[i] != NULL) {
            asdOperatorDelete(FUN_0037dab0_hook(panel->demons[i]));
        }
    }
    if (panel->unite != NULL) {
        asdOperatorDelete(ptrTable44FreeAll(panel->unite));
    }
    panel->unite = NULL;
    gameGlobalsReleaseReference();
    jobStop(panel->job, 0);
    asdMemFree(panel);
    g_partyPanel = NULL;
}

} /* extern "C" */
