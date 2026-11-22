#include "map/MapIfGlobals.h"

extern "C" {

void soundActorStartOnFreeChannel(u32 soundId);

/* Switches the map interface on or off; switching on plays the sound and resets the primary record's
 * progress, start and current positions. */
void FUN_002d8614(s8 enable)
{
    MapIfStateA *mapIf = g_mapIf.state;
    MapIfRecord *record = &mapIf->primary;

    if (mapIf->unk34 == enable) {
        return;
    }
    mapIf->unk34 = enable;
    if (enable == 0) {
        return;
    }
    soundActorStartOnFreeChannel(0x10002ab);
    record->progress = 0.0f;
    record->start.x = 0.0f;
    record->start.y = 20.0f;
    record->start.z = 0.0f;
    record->current = record->start;
    record->angle = 0.0f;
    mapIf->unk38 = 0;
}

} /* extern "C" */
