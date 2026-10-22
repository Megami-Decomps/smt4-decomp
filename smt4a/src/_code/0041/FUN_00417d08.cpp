#include "common.h"

struct PartyModeOwner {
    /* 0x000 */ u8 unk000[0x90c];
    /* 0x90c */ s8 inParty;
    /* 0x90d */ u8 unk90d[0x3c1];
    /* 0xcce */ u16 unitId;
};

extern "C" {
s32 gameFlagEntryGetBit(u16 id, u32 bit);
s32 FUN_001bd100(u16 id);
s32 partyEntryGetBit5(u16 id);
s32 partyEntryGetBit6(u16 id);
s32 idIsAtLeast350(u16 id);
void gameFlagClearModeBits(u16 id);

/* Clears the unit's mode flag bits when its party and entry flags say the mode no longer applies. */
void FUN_00417d08(PartyModeOwner *owner)
{
    if (owner->inParty) {
        if (gameFlagEntryGetBit(owner->unitId, 0) && FUN_001bd100(owner->unitId) &&
            (partyEntryGetBit5(owner->unitId) || partyEntryGetBit6(owner->unitId))) {
            gameFlagClearModeBits(owner->unitId);
        }
    } else if (idIsAtLeast350(owner->unitId)) {
        if (partyEntryGetBit5(owner->unitId)) {
            gameFlagClearModeBits(owner->unitId);
        }
    } else {
        if (gameFlagEntryGetBit(owner->unitId, 0) && !FUN_001bd100(owner->unitId) &&
            (partyEntryGetBit5(owner->unitId) || partyEntryGetBit6(owner->unitId))) {
            gameFlagClearModeBits(owner->unitId);
        }
    }
}

} /* extern "C" */
