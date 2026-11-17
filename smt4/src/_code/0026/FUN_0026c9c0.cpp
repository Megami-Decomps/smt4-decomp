/* NON_MATCHING: initialization loops unroll and transition constant/register lifetimes differ. */
#include "ui/PartyPanelState.h"
#include "gamedata/UnitStats.h"
#include "shard/W7_W7Match2_PartyDamage.h"
#include "gamedata/SaveSlotTableIV.h"

extern "C" {
const StatBlock *gameGetUnitRecord(s32 index);
const StatBlock *partyMemberFindById(u32 id);
void __aeabi_memset4(void *destination, u32 size, s32 value);

void FUN_0026c9c0()
{
    // The reset byte lies immediately beyond the recovered widget prefix.
    struct WidgetTransitionView {
        u8 unk00[0x28];
        u8 reset;
    };
    PartyPanelState *work = g_partyPanel;
    const SaveSlotTableIV *slots = gameGetSlotTable();
    __aeabi_memset4(work->activeSlots, sizeof(work->activeSlots), 1);
    for (s32 index = 0; index < 3; ++index) {
        work->characters[index + 1]->transitionPending = 0;
    }
    for (s32 index = 0; index < 24; ++index) {
        work->entries[index].available = 1;
        work->demons[index]->transitionPending = 0;
    }
    work->activeSlots[0] = 0;
    if (slots->active[0] < 0) {
        work->activeSlots[1] = 0;
    }
    if (slots->active[1] < 0) {
        work->activeSlots[2] = 0;
    }
    if (slots->active[2] < 0) {
        work->activeSlots[3] = 0;
    }
    for (s32 index = 0; index < 24; ++index) {
        s32 unit = work->entries[index].packedIndex;
        if (unit < 0 ||
            (reinterpret_cast<const PartyDamageUnitIV *>(gameGetUnitRecord(unit))->ailments & 0x404)) {
            work->entries[index].available = 0;
        }
    }
    for (s32 exclusion = 0; exclusion < work->fusionParentCount; ++exclusion) {
        s32 id = work->fusionParentIds[exclusion];
        if (id >= 0) {
            const StatBlock *excluded = partyMemberFindById((u16)id);
            if (excluded != NULL) {
                for (s32 index = 0; index < 3; ++index) {
                    s32 unit = slots->active[index];
                    if (unit >= 0 && gameGetUnitRecord(unit)->id == excluded->id) {
                        work->activeSlots[index + 1] = 0;
                        reinterpret_cast<WidgetTransitionView *>(work->characters[index + 1])->reset = 0;
                        work->characters[index + 1]->transitionPending = 1;
                    }
                }
                for (s32 index = 0; index < 24; ++index) {
                    s32 unit = work->entries[index].packedIndex;
                    if (unit >= 0 && gameGetUnitRecord(unit)->id == excluded->id) {
                        work->entries[index].available = 0;
                        reinterpret_cast<WidgetTransitionView *>(work->demons[index])->reset = 0;
                        work->demons[index]->transitionPending = 1;
                    }
                }
            }
        }
    }
}
}
