#include "common.h"
#include "shard/W6_W6Match3_RotationY.h"

extern "C" {

extern u32 DAT_00433e80, DAT_00433ec0, DAT_00433f0c, DAT_00433f4c, DAT_00433f8c, DAT_00433fe8,
    DAT_00434028, DAT_00434068, DAT_004340a8, DAT_004340e8, DAT_00434128;

u32 *FUN_002890d4(u32 *table, u32 arg1, u32 arg2);
u32 *FUN_003481ec(u32 *table, u32 arg1, u32 arg2);
u32 *FUN_0034b6d4(u32 *table, u32 arg1, u32 arg2);
u32 *FUN_0034c24c(u32 *table, u32 arg1, u32 arg2);

// Initializes the table of the given kind (0-10) and returns it; NULL for an unknown kind.
u32 *FUN_00246644(u32 kind, u32 arg1, u32 arg2)
{
    u32 *table = NULL;
    switch (kind) {
    case 0:
        table = FUN_002890d4(&DAT_00433e80, arg1, arg2);
        break;
    case 1:
        table = FUN_003481ec(&DAT_00433ec0, arg1, arg2);
        break;
    case 2:
        table = FUN_0034b6d4(&DAT_00433f0c, arg1, arg2);
        break;
    case 3:
        table = FUN_002890d4(&DAT_00433f4c, arg1, arg2);
        break;
    case 4:
        table = FUN_0034c24c(&DAT_00433f8c, arg1, arg2);
        break;
    case 5:
        table = FUN_002890d4(&DAT_00433fe8, arg1, arg2);
        break;
    case 6:
        table = FUN_002890d4(&DAT_00434028, arg1, arg2);
        break;
    case 7:
        table = FUN_002890d4(&DAT_00434068, arg1, arg2);
        break;
    case 8:
        table = FUN_002890d4(&DAT_004340a8, arg1, arg2);
        break;
    case 9:
        table = FUN_002890d4(&DAT_004340e8, arg1, arg2);
        break;
    case 10:
        table = FUN_002890d4(&DAT_00434128, arg1, arg2);
        break;
    }
    return table;
}

}
