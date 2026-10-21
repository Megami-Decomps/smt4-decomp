#include "common.h"

extern "C" {

struct PartyPanel { u8 unk00[0x1c]; u32 state; };
extern PartyPanel *g_partyPanel;

s32 partyPanelIsStateTwentyFive(void)
{
    PartyPanel *object = g_partyPanel;
    if (object == NULL) {
        return 0;
    }
    return object->state == 25;
}

} /* extern "C" */
