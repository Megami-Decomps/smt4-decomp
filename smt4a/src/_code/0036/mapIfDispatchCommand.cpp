#include "map/MapIfGlobals.h"

extern "C" {

extern int messageVoiceFlagsGet(void);
extern int mapIfShowContextPopup(u32 kind, u32 a, u32 b);

/* Handles a map interface command: marks the interface active and starts the request the command needs. */
void mapIfDispatchCommand(u32 command, u32 a, u32 b)
{
    MapIfStateA *mapIf = g_mapIf.state;

    messageVoiceFlagsGet();
    mapIf->dialogOpen = 1;
    mapIf->unk20 = 0;
    switch (command) {
    case 6:
        break;
    case 7:
        mapIfShowContextPopup(5, 0, b);
        break;
    case 10:
        mapIf->dialogOpen = 0;
        break;
    case 8:
    case 9:
    case 11:
        mapIfShowContextPopup(6, a, b);
        break;
    }
}

}
