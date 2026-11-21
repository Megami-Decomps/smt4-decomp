/* NON_MATCHING: retail keeps g_popupState in r9 and the zero in r8 (reused as the NULL of the bounds-checked table row, movcs), stores the speaker before setting up the kind argument and tests the loop as i < count; the build swaps r8/r9 and uses movls #0 / bgt. */
#include "gamedata/PartnerInfoTable.h"
#include "code/Code0015.h"
#include "gamedata/SaveSlotTable.h"
#include "map/PopupStateA.h"
#include "util/Random.h"

extern "C" {
s32 gameFlagIsSet(u32 flag);
const char *popupSelectWeightedMessage(u32 kind, u16 id);
}

/* Shows popup message `kind` for `speakerId` (popup state 4). */
static __inline void popupShowSpeaker(u32 kind, u16 speakerId)
{
    g_popupState->speakerId = speakerId;
    g_popupState->message = popupSelectWeightedMessage(kind, speakerId);
    g_popupState->timer = 0;
    g_popupState->state = 4;
}

/* Queues a selected-slot popup, subject to its flags and probability table. */
extern "C" void FUN_00294a84(s32 immediate)
{
    messageVoiceFlagsGet();
    if (g_popupState->state == 3)
        return;
    if (g_popupState->state != 0)
        return;
    PartySlotA *slot = saveSlotFindSelected();
    if (slot == NULL) {
        return;
    }
    if (gameFlagIsSet(0x1a2)) {
        s32 roll = randRange(99) + 1;
        if (roll <= 50) {
            return;
        }
    }
    if (immediate != 0) {
        popupShowSpeaker(6, slot->id);
        return;
    }
    DataTableView<PartnerInfoRecord> table(0x43, 0);
    for (s32 i = 0; i < static_cast<s32>(table.count); ++i) {
        DataTableView<PartnerInfoRecord> currentTable(0x43, 0);
        const PartnerInfoRecord *entry = currentTable.at(i);
        if (entry->kind != 5 || entry->partnerId != slot->id) {
            continue;
        }
        if (entry->requiredFlag != 0 && !gameFlagIsSet(entry->requiredFlag)) {
            continue;
        }
        if (entry->excludedFlag != 0 && gameFlagIsSet(entry->excludedFlag)) {
            continue;
        }
        s32 roll = randRange(99) + 1;
        if (entry->argument < roll) {
            continue;
        }
        popupShowSpeaker(5, slot->id);
        return;
    }
}
