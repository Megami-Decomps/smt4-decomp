#include "common.h"
#include "battle/BattleHelpers_Smt4a.h"

extern "C" {
/* Returns the maximum value accepted by each combatant property. */
s32 btlGetPropertyMaximum(u32 property)
{
    s32 maximum = 0;
    switch (property) {
    case 0: case 1: case 3: case 4: case 5: case 6:
        maximum = 127;
        break;
    case 14: case 15: case 16: case 17: case 18: case 19:
    case 20: case 21: case 22: case 23: case 24: case 25:
    case 39: case 40: case 41: case 42: case 43: case 44:
    case 45: case 46: case 47: case 48: case 49:
        maximum = 1;
        break;
    case 12: case 26: case 35:
        maximum = 2;
        break;
    case 7: case 8: case 9: case 10: case 11: case 13: case 34:
        maximum = 3;
        break;
    case 27: case 28: case 29: case 30: case 31: case 32:
    case 33: case 36: case 37: case 38:
        maximum = 99;
        break;
    case 2:
        maximum = 99999;
        break;
    }
    return maximum;
}
}
