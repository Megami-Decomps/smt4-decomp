#ifndef SHARD_W6_W6MATCH6_PARTY_PANEL_H
#define SHARD_W6_W6MATCH6_PARTY_PANEL_H
#include "common.h"

struct PartyPanelWidget {
    u8 unk00[0x25];
    u8 transitionActive; // 0x25
    u8 unk26;
    u8 transitionPending; // 0x27
};
struct PartyPanelEntry {
    u16 available; // 0x00
    u8 unk02[6];
};
#endif
