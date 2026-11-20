#include "map/MapIfGlobals.h"

extern "C" {

extern void messageVoiceFlagsGet(void);
extern int mapIfShowContextPopup(int kind, u32 arg0, u32 arg1);

/* Marks the map interface busy and starts the transition for `kind`; kinds 2, 3 and 5 share one mode. */
void mapIfStartTransition(u32 kind, u32 arg0, u32 arg1)
{
    MapIfStateA *mapIf = g_mapIf.state;

    messageVoiceFlagsGet();
    mapIf->dialogOpen = 1;
    mapIf->unk20 = 0;
    switch (kind) {
    case 0:
        mapIfShowContextPopup(0, 0, 0);
        break;
    case 1:
        mapIfShowContextPopup(1, 0, arg1);
        break;
    case 4:
        mapIfShowContextPopup(2, arg0, arg1);
        break;
    case 2:
    case 3:
    case 5:
        mapIfShowContextPopup(3, arg0, arg1);
        break;
    }
}

} /* extern "C" */
