#include "common.h"

namespace {
struct PartyPanelPart {
    /* 0x00 */ u8 unk00[0xbc];
    /* 0xbc */ s16 count;
};
struct PartyPanelState {
    /* 0x000 */ u8 unk000[0x600];
    /* 0x600 */ PartyPanelPart part;
};
}

extern "C" {
extern PartyPanelState *g_partyPanel;

/* Tests whether the party panel has any entries. */
s32 partyPanelHasEntries(void)
{
    if (g_partyPanel == NULL) {
        return 0;
    }
    return g_partyPanel->part.count > 0;
}
}
