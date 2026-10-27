#include "common.h"
#include "shard/W6_W6Match3_RotationY.h"

extern "C" {

extern u32 DAT_00570df0, DAT_00570e30, DAT_00570e7c, DAT_00570ebc, DAT_00570efc, DAT_00570f58,
    DAT_00570f98, DAT_00570fd8, DAT_00571018, DAT_00571058, DAT_00571098;

u32 *filterCreateQuad(u32 *table, u32 arg1, u32 arg2);
u32 *FUN_00415be0(u32 *table, u32 arg1, u32 arg2);
u32 *FUN_0041cbac(u32 *table, u32 arg1, u32 arg2);
u32 *FUN_0041d6bc(u32 *table, u32 arg1, u32 arg2);

// Initializes the table of the given kind (0-10) and returns it; NULL for an unknown kind.
u32 *FUN_002282c8(u32 kind, u32 arg1, u32 arg2)
{
    u32 *table = NULL;
    switch (kind) {
    case 0:
        table = filterCreateQuad(&DAT_00570df0, arg1, arg2);
        break;
    case 1:
        table = FUN_00415be0(&DAT_00570e30, arg1, arg2);
        break;
    case 2:
        table = FUN_0041cbac(&DAT_00570e7c, arg1, arg2);
        break;
    case 3:
        table = filterCreateQuad(&DAT_00570ebc, arg1, arg2);
        break;
    case 4:
        table = FUN_0041d6bc(&DAT_00570efc, arg1, arg2);
        break;
    case 5:
        table = filterCreateQuad(&DAT_00570f58, arg1, arg2);
        break;
    case 6:
        table = filterCreateQuad(&DAT_00570f98, arg1, arg2);
        break;
    case 7:
        table = filterCreateQuad(&DAT_00570fd8, arg1, arg2);
        break;
    case 8:
        table = filterCreateQuad(&DAT_00571018, arg1, arg2);
        break;
    case 9:
        table = filterCreateQuad(&DAT_00571058, arg1, arg2);
        break;
    case 10:
        table = filterCreateQuad(&DAT_00571098, arg1, arg2);
        break;
    }
    return table;
}

}
