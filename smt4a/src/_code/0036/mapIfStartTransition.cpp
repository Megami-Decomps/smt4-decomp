#include "map/MapIfGlobals.h"

extern "C" {

extern void FUN_00152f44(void);
extern int FUN_00246450(int kind, u32 arg0, u32 arg1);

/* Marks the map interface busy and starts the transition for `kind`; kinds 2, 3 and 5 share one mode. */
void mapIfStartTransition(u32 kind, u32 arg0, u32 arg1)
{
    MapIfStateA *mapIf = g_mapIf.state;

    FUN_00152f44();
    mapIf->dialogOpen = 1;
    mapIf->unk20 = 0;
    switch (kind) {
    case 0:
        FUN_00246450(0, 0, 0);
        break;
    case 1:
        FUN_00246450(1, 0, arg1);
        break;
    case 4:
        FUN_00246450(2, arg0, arg1);
        break;
    case 2:
    case 3:
    case 5:
        FUN_00246450(3, arg0, arg1);
        break;
    }
}

} /* extern "C" */
