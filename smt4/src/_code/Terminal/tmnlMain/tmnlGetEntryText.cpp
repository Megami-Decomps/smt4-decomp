/* Returns the address of terminal entry `id`'s text, or 0 when the terminal is not open. */
#include "common.h"
#include "Terminal/tmnlMain.h"

extern "C" {

int FUN_001d04a4(TmnlWork *work, int id);
extern int FUN_00288f60(void);

extern TmnlWork *g_tmnl;

int tmnlGetEntryText(int id)
{
    int index;

    if (g_tmnl == NULL) {
        return 0;
    }
    if (id == 0x3d) {
        return FUN_00288f60();
    }
    index = FUN_001d04a4(g_tmnl, id);
    return g_tmnl->items[index] + 6;
}

} /* extern "C" */
