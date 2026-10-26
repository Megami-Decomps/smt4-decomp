/* Returns the address of terminal entry `id`'s text, or 0 when the terminal is not open. */
#include "common.h"
#include "Terminal/tmnlMain.h"

extern "C" {

int tmnlFindSlotForItem(TmnlWorkA *work, int id);
extern int gameDataGetPlayerName(void);

extern TmnlWorkA *g_tmnl;

int tmnlGetEntryText(int id)
{
    int index;

    if (g_tmnl == NULL) {
        return 0;
    }
    if (id == 0x3e) {
        return gameDataGetPlayerName();
    }
    index = tmnlFindSlotForItem(g_tmnl, id);
    return g_tmnl->items[index] + 7;
}

} /* extern "C" */
