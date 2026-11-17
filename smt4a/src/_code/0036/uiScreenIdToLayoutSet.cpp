#include "common.h"
#include "game/GameStateA.h"

extern "C" {

/* Maps a menu/screen id to the id of the help or layout set it uses; 0 for unknown ids. */
u32 uiScreenIdToLayoutSet(u32 id)
{
    switch (id) {
    case 0:
        return 1;
    case 1:
        return 2;
    case 2:
        return 3;
    case 4:
        return 6;
    case 5:
        return 9;
    case 6:
        if (g_gameState.mapId == 5) {
            if (g_gameState.areaId == 6) {
                return 15;
            }
        } else if (g_gameState.mapId == 3 && g_gameState.areaId == 3) {
            return 15;
        }
        return 14;
    case 7:
        if (g_gameState.mapId == 5 && g_gameState.areaId == 6) {
            return 17;
        }
        return 16;
    case 9:
        return 19;
    case 3:
    case 18:
        return 4;
    case 19:
    case 21:
        return 12;
    case 20:
    case 22:
        return 13;
    case 25:
        return 21;
    case 26:
        return 22;
    case 24:
    case 27:
    case 28:
        return 20;
    case 30:
        return 11;
    case 32:
        return 24;
    case 33:
        return 25;
    case 34:
        return 10;
    case 35:
    case 51:
        return 27;
    case 37:
        return 5;
    case 31:
    case 40:
        return 23;
    case 10:
    case 42:
        return 7;
    case 43:
        return 33;
    case 11:
    case 44:
    case 45:
        return 8;
    case 48:
        return 28;
    case 12:
    case 13:
    case 15:
    case 16:
    case 29:
    case 49:
    case 52:
        return 32;
    case 53:
        return 37;
    case 54:
        return 39;
    case 55:
        return 38;
    case 77:
        return 40;
    case 46:
    case 82:
        return 36;
    case 56:
        if (g_gameState.mapId != 28 && g_gameState.mapId != 29 && g_gameState.mapId != 30 && g_gameState.mapId != 31) {
            return 18;
        }
        return 44;
    case 8:
        return 18;
    case 57:
        return 43;
    case 58:
        return 45;
    case 66:
        return 47;
    case 59:
    case 60:
    case 61:
    case 65:
    case 67:
        return 46;
    case 68:
        return 51;
    case 69:
        return 52;
    case 75:
        return 50;
    case 70:
        return 53;
    case 36:
    case 79:
        return 26;
    default:
        return 0;
    }
}

} /* extern "C" */
