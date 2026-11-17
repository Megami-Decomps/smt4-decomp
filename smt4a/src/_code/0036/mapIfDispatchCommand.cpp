#include "map/MapIfGlobals.h"

extern "C" {

extern int FUN_00152f44(void);
extern int FUN_00246450(u32 kind, u32 a, u32 b);

/* Handles a map interface command: marks the interface active and starts the request the command needs. */
void mapIfDispatchCommand(u32 command, u32 a, u32 b)
{
    MapIfStateA *mapIf = g_mapIf.state;

    FUN_00152f44();
    mapIf->dialogOpen = 1;
    mapIf->unk20 = 0;
    switch (command) {
    case 6:
        break;
    case 7:
        FUN_00246450(5, 0, b);
        break;
    case 10:
        mapIf->dialogOpen = 0;
        break;
    case 8:
    case 9:
    case 11:
        FUN_00246450(6, a, b);
        break;
    }
}

}
