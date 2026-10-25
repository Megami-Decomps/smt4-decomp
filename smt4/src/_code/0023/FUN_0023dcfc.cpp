#include "common.h"
#include "shard/W6_W6Match3_BattleQueue.h"

extern "C" {

/* Returns the limit for parameter kind `kind` (0 for unknown kinds). */
u32 FUN_0023dcfc(u32 kind)
{
    u32 limit = 0;

    switch (kind) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
        limit = 0x7f;
        break;
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 13:
        limit = 3;
        break;
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
        limit = 1;
        break;
    case 12:
    case 21:
    case 26:
        limit = 2;
        break;
    case 22:
    case 23:
    case 24:
    case 25:
    case 27:
    case 28:
    case 29:
        limit = 99;
        break;
    case 2:
        limit = 0xffff;
        break;
    }
    return limit;
}

} /* extern "C" */
