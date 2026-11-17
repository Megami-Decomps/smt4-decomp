#include "gamedata/PartySlots.h"
#include "gamedata/DevilRecordA.h"

extern "C" void partyIdsActivateEntry(PartySlots* party, u32 id)
{
    const DevilRecordA* record = devilGetRecord(id);
    if (record == NULL || record->model >= 0x27F) {
        return;
    }
    for (s32 index = 0; index < 16; ++index) {
        if (party->ids[index] == id) {
            party->active[index] = 1;
            return;
        }
    }
    for (s32 index = 0; index < 16; ++index) {
        if (party->ids[index] == -1) {
            party->ids[index] = (s16)id;
            party->active[index] = 1;
            return;
        }
    }
}
