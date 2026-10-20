#include "common.h"

extern "C" {

typedef struct MapIf {
    /* 0x00 */ u8 unk00[0x1D];
    /* 0x1D */ u8 busy;
    /* 0x1E */ u8 unk1E[2];
    /* 0x20 */ u32 unk20;
} MapIf;

extern MapIf *g_mapIf; /* 0x58103c */

extern void FUN_00152f44(void);
extern int FUN_00246450(int kind, u32 arg0, u32 arg1);

/* Marks the map interface busy and starts the transition for `kind`; kinds 2, 3 and 5 share one mode. */
void mapIfStartTransition(u32 kind, u32 arg0, u32 arg1)
{
    MapIf *mapIf = g_mapIf;

    FUN_00152f44();
    mapIf->busy = 1;
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
