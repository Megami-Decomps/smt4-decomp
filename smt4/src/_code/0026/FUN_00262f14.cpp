/* NON_MATCHING: retail returns the zero it already holds for a null state (conditional execution, no `moveq r0, #0`). */
#include "common.h"

extern "C" {

typedef struct State {
    u8 unk00[0x42];
    u8 flag; /* 0x42 */
} State;

extern State *g_partyPanel;

/* True when the state exists and its flag is set. */
bool FUN_00262f14(void)
{
    return g_partyPanel != NULL && g_partyPanel->flag != 0;
}

} /* extern "C" */
