/* NON_MATCHING: retail anchors the four adjacent parameter tables on the last one (chained subtractions from DAT_00529ac0) and loads each entry's slot after the field stores; armcc here subtracts each offset from the base, hoists the slot load, and numbers the first loop's registers differently. */
#include "battle/PartnerAttackEntries.h"

extern "C" {
extern const u8 DAT_00529ac0[];
void asdMemFreeSlot(void **slot);
void paramsClearPacket(Params002c312c *packet);
void paramsInit(Params002c312c *packet, const void *first, u16 firstBytes, const void *second, u16 secondBytes,
                const void *third, u16 thirdBytes, const void *fourth, u16 fourthBytes, const void *fifth, u16 fifthBytes);
}

PartnerAttackEntries::PartnerAttackEntries()
{
    for (s32 i = 0; i < PARTNER_ATTACK_ENTRY_COUNT; i++) {
        entries[i].slot = NULL;
    }
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
    paramsClearPacket(&parameters);
    paramsInit(&parameters, DAT_00529ac0 - 0x54 - 0xcc - 0x114, 0x114, DAT_00529ac0 - 0x54 - 0xcc, 0xcc,
               DAT_00529ac0 - 0x54, 0x54, NULL, 0, DAT_00529ac0, 0x94c);
}
