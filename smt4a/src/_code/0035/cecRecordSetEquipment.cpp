#include "AsdSDK/AsdMemCopy.h"
#include "camp/CampCec/CecRecord.h"

/* Copies the player's equipped item ids into their StreetPass record. */
extern "C" void cecRecordSetEquipment(CampCecReceivedRecord *record, CecProfile equipment)
{
    memcpySrcFirst(&equipment, record->stats, sizeof(equipment));
}
