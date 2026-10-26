#include "common.h"

// Classify map object kinds for the creation flag used by map-marker setup.
extern "C" u32 FUN_00356528(u32 kind)
{
    switch (kind) {
    case 14:
    case 17:
    case 20:
    case 22:
    case 23:
    case 25:
    case 31:
    case 37:
    case 38:
    case 40:
    case 47:
    case 50:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 75:
        return 0;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 15:
    case 16:
    case 18:
    case 19:
    case 21:
    case 24:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 39:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 48:
    case 49:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 71:
    case 72:
    case 73:
    case 74:
        break;
    default:
        break;
    }
    return 1;
}
