/* NON_MATCHING: the entry offset is computed in r0 instead of retail's r1; the rest matches. */
#include "battle/PartnerAttackEntries.h"
#include "AsdSDK/AsdMemUtil.h"

/* Clears all twelve entries, releasing their buffers (scriptObjDestroy deletes the table through it). */
PartnerAttackEntries::~PartnerAttackEntries()
{
    for (s32 i = 0; i < PARTNER_ATTACK_ENTRY_COUNT; i++) {
        PartnerAttackEntry *entry = &entries[i];
        entry->unk00 = 0;
        entry->unk04 = 0;
        entry->unkA0 = 0;
        entry->unkA4 = 0;
        entry->unk10 = 0.0f;
        entry->unk0c = 0.0f;
        entry->unk08 = 0.0f;
        if (void **slot = entry->slot) {
            asdMemFreeSlot(slot);
            entry->slot = NULL;
        }
        entry->unkAC = 0;
    }
}
