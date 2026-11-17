#include "gamedata/EquipmentRecord.h"
extern "C" {
/* Compare descending rank, then ascending table index for equal ranks. */
s32 dataCompareSecondaryRank(const u16 *left,const u16 *right) { const EquipmentRecord *first=dataTable08Sub2GetRecord(*left); const EquipmentRecord *second=dataTable08Sub2GetRecord(*right); s32 difference=second->statBonus[3]-first->statBonus[3]; if (difference==0) difference=first->id-second->id; return difference; }
}
