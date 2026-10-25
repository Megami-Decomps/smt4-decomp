#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {

typedef struct State {
    u8 unk00[0x42];
    u8 flag; /* 0x42 */
} State;

extern State *g_partyPanel;

/* True when the state exists and its flag is set. */
bool partyPanelIsActive(void)
{
    if (g_partyPanel == NULL) {
        return false;
    }
    if (g_partyPanel->flag == 0) {
        return false;
    }
    return true;
}

} /* extern "C" */
