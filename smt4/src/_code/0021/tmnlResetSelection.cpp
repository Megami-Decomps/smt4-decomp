#include "common.h"
#include "Terminal/tmnlMain.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "Terminal/TerminalGlobals.h"

extern "C" {

extern TerminalGlobals g_tmnl;
extern u32 g_tmnlSelectionParam;

/* Request the terminal sequence and forget its saved selection. */
void tmnlResetSelection(void)
{
    asdSequenceRequest(0xD, reinterpret_cast<const void *>(&g_tmnlSelectionParam), 4);
    g_tmnl.selection = -1;
}

}
