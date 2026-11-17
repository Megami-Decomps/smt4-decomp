#include "gamedata/EquipmentRecord.h"
extern "C" {
/* Compare descending rank, then ascending table index for equal ranks. */
s32 dataComparePrimaryRank(const u16 *left,const u16 *right) { const EquipmentRecord *first=itemTableGetEquipmentRecord(*left); const EquipmentRecord *second=itemTableGetEquipmentRecord(*right); s32 difference=second->statBonus[2]-first->statBonus[2]; if (difference==0) difference=first->id-second->id; return difference; }
}
