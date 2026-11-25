/* NON_MATCHING: both popup paths store the speaker through r2 after preparing the kind argument; retail stores through r0 first. */
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
extern "C" void popupTryQueueSelectedPartyMessage(s32 immediate)
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
    s32 count = (s32)partnerInfoCount();
    for (s32 i = 0; i < count; ++i) {
        const PartnerInfoRecord *entry = partnerInfoRecordAt(i);
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
