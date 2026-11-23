/* NON_MATCHING: only scheduling differs (retail loads the buffer pointer after the float stores; built hoists the load above them). */
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
        if (entry->slot != NULL) {
            asdMemFreeSlot(entry->slot);
            entry->slot = NULL;
        }
        entry->unkAC = 0;
    }
}
