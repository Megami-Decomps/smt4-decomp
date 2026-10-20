/* Returns the address of terminal entry `id`'s text, or 0 when the terminal is not open. */
#include "common.h"
#include "Terminal/tmnlMain.h"

extern "C" {

int FUN_0026edbc(TmnlWorkA *work, int id);
extern int FUN_00261828(void);

extern TmnlWorkA *g_tmnl;

int tmnlGetEntryText(int id)
{
    int index;

    if (g_tmnl == NULL) {
        return 0;
    }
    if (id == 0x3e) {
        return FUN_00261828();
    }
    index = FUN_0026edbc(g_tmnl, id);
    return g_tmnl->items[index] + 7;
}

} /* extern "C" */
