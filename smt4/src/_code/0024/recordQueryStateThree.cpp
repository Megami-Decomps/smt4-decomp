/* NON_MATCHING: compiler inlines the state and active checks instead of retaining the retail saved-register frame. */
#include "common.h"
extern "C" {
struct StateSubrecord { u8 unk00[0x50]; s16 state; u8 unk52[2]; u8 active; };
struct StateOwner { u8 unk00[0x1C4]; StateSubrecord record; };
s8 recordGetSignedFlags(const StateSubrecord *record);
/* Query the nested record only in state three with its active flag clear. */
s32 recordQueryStateThree(const StateOwner *owner) { if (owner->record.state!=3 || owner->record.active!=0) return 1; return recordGetSignedFlags(&owner->record); }
}
