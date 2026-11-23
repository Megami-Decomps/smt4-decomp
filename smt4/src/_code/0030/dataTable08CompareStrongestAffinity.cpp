#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {
s32 FUN_0028886c(s32 left, s32 right);
extern s32 DAT_00402638[4];

/* Keeps the strongest affinity of a record and the element it is on. */
static void keepStrongest(const EquipmentRecord *record, s32 element, s32 *affinity, s32 *strongest)
{
    if (FUN_0028886c(*affinity, record->affinities[element] >> 10) > 0) {
        *affinity = record->affinities[element] >> 10;
        *strongest = element;
    }
}

/* Compares two equipment records by the element of their strongest affinity, then that affinity, then table order. */
s32 dataTable08CompareStrongestAffinity(const u16 *left, const u16 *right)
{
    EquipmentRecord *first = itemTableGetEquipmentRecord(*left);
    EquipmentRecord *second = itemTableGetEquipmentRecord(*right);
    s32 firstAffinity = 0;
    s32 secondAffinity = 0;
    s32 firstElement = DAT_00402638[2];
    s32 secondElement = DAT_00402638[3];
    for (s32 element = 0; element <= 7; ++element) {
        keepStrongest(first, element, &firstAffinity, &firstElement);
        keepStrongest(second, element, &secondAffinity, &secondElement);
    }
    s32 result = secondElement - firstElement;
    if (result == 0) {
        result = FUN_0028886c(secondAffinity, firstAffinity);
        if (result == 0) {
            first = itemTableGetEquipmentRecord(*left);
            second = itemTableGetEquipmentRecord(*right);
            result = second->order - first->order;
        }
    }
    return result;
}
}
