/* NON_MATCHING: argument-store scheduling and the shared destination-store tail differ. */
#include "map/MapDepartTarget.h"
#include "gamedata/DataTableAccess_AocTable23.h"

extern "C" {
extern MapDepartTarget DAT_0049fd14;
s32 dataTable23Type1CountWithAoc(void);

// Save the requested target and resolve its destination through table 23.
void mapDepartSetTarget(s32 group, s32 map, u32 target)
{
    DAT_0049fd14.group = group;
    DAT_0049fd14.map = map;
    DAT_0049fd14.target = target;
    if (target != static_cast<u32>(-1)) {
        for (s32 index = 0; index < dataTable23Type1CountWithAoc(); ++index) {
            MapDepartTargetRecord *record = reinterpret_cast<MapDepartTargetRecord *>(dataTableGetRecord23(index));
            if (record->group == group && record->map == map &&
                record->target == target) {
                if (record->destination != 0xff) {
                    DAT_0049fd14.destination = record->destination;
                    return;
                }
                break;
            }
        }
    }
    DAT_0049fd14.destination = -1;
}
}
