#include "ui/PartyPanelStateA.h"

extern "C" {


s32 partyPanelIsStateTwentyFive(void)
{
    PartyPanelStateA *object = g_partyPanel;
    if (object == NULL) {
        return 0;
    }
    return object->sceneState == 25;
}

} /* extern "C" */
