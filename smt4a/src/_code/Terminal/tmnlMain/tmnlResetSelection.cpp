/* Resets the terminal's saved selection to "none" (-1). */
#include "common.h"
#include "Terminal/tmnlMain.h"

extern "C" {

int asdSequenceRequest(int id, u32 *data, int size);

extern TmnlGlobalsA g_tmnl;
extern u32 DAT_0056fd34;

void tmnlResetSelection(void)
{
    asdSequenceRequest(0xd, &DAT_0056fd34, 4);
    g_tmnl.selection = 0xffffffff;
}

} /* extern "C" */
