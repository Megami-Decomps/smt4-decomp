#include "common.h"

extern "C" {

typedef struct MapIf {
    /* 0x00 */ u8 unk00[0x1D];
    /* 0x1D */ u8 active;
    /* 0x1E */ u8 unk1e[2];
    /* 0x20 */ u32 arg;
} MapIf;

extern MapIf *g_mapIf; /* 0x58103c */

extern int FUN_00152f44(void);
extern int FUN_00246450(u32 kind, u32 a, u32 b);

/* Handles a map interface command: marks the interface active and starts the request the command needs. */
void mapIfDispatchCommand(u32 command, u32 a, u32 b)
{
    MapIf *mapIf = g_mapIf;

    FUN_00152f44();
    mapIf->active = 1;
    mapIf->arg = 0;
    switch (command) {
    case 6:
        break;
    case 7:
        FUN_00246450(5, 0, b);
        break;
    case 10:
        mapIf->active = 0;
        break;
    case 8:
    case 9:
    case 11:
        FUN_00246450(6, a, b);
        break;
    }
}

}
