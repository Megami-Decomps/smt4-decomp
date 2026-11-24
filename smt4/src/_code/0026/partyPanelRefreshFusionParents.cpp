/* The widget flags are set through the one-instruction setters armlink inlined (partyWidgetSetTransitionPending,
 * partyWidgetSetTransitionKind: inlined.txt rows). */
#include "ui/PartyPanelState.h"
#include "gamedata/UnitStats.h"

#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
const StatBlock *partyMemberFindById(u32 id); // declcheck: local (the shared declaration does not compile here or changes this unit)
void __aeabi_memset4(void *destination, u32 size, s32 value);

/* Resets which party rows and stock cells can be picked as a fusion parent: empty rows, demons with ailment
 * bits 2 or 10 and the parents already picked are disabled. */
void partyPanelRefreshFusionParents()
{
    PartyPanelState *work = g_partyPanel;
    const SaveSlotTableIV *slots = gameGetSlotTable();
    __aeabi_memset4(work->activeSlots, sizeof(work->activeSlots), 1);
    for (s32 index = 0; index < 3; ++index) {
        partyWidgetSetTransitionPending(work->characters[index + 1], 0);
    }
    for (s32 index = 0; index < 24; ++index) {
        work->entries[index].available = 1;
        partyWidgetSetTransitionPending(work->demons[index], 0);
    }
    work->activeSlots[0] = 0;
    for (s32 index = 0; index < 3; ++index) {
        if (slots->active[index] < 0) {
            work->activeSlots[index + 1] = 0;
        }
    }
    for (s32 index = 0; index < 24; ++index) {
        /* the stock entries' index is signed */
        if ((s32)work->entries[index].packedIndex < 0 ||
            (((const StatBlock *)gameGetUnitRecord((s32)work->entries[index].packedIndex))->ailments & 0x404) != 0) {
            work->entries[index].available = 0;
        }
    }
    for (s32 exclusion = 0; exclusion < work->fusionParentCount; ++exclusion) {
        s32 id = work->fusionParentIds[exclusion];
        if (id < 0) {
            continue;
        }
        const StatBlock *excluded = partyMemberFindById((u16)id);
        if (excluded == NULL) {
            continue;
        }
        for (s32 index = 0; index < 3; ++index) {
            s32 unit = slots->active[index];
            if (unit >= 0 && gameGetUnitRecord(unit)->id == excluded->id) {
                work->activeSlots[index + 1] = 0;
                partyWidgetSetTransitionKind(work->characters[index + 1], 0);
                partyWidgetSetTransitionPending(work->characters[index + 1], 1);
            }
        }
        for (s32 index = 0; index < 24; ++index) {
            if ((s32)work->entries[index].packedIndex >= 0 &&
                gameGetUnitRecord((s32)work->entries[index].packedIndex)->id == excluded->id) {
                work->entries[index].available = 0;
                partyWidgetSetTransitionKind(work->demons[index], 0);
                partyWidgetSetTransitionPending(work->demons[index], 1);
            }
        }
    }
}
}
