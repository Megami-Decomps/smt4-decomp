#include "common.h"
#include "Terminal/tmnlMain.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "Terminal/TerminalGlobals.h"

extern "C" {

extern TerminalGlobals g_tmnl;
extern u32 DAT_00432ce4;

/* Request the terminal sequence and forget its saved selection. */
void tmnlResetSelection(void)
{
    asdSequenceRequest(0xD, reinterpret_cast<const void *>(&DAT_00432ce4), 4);
    g_tmnl.selection = -1;
}

}
