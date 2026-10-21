#include "common.h"
#include "Terminal/tmnlMain.h"

extern "C" {

struct TerminalGlobals {
    /* 0x00 */ TmnlWork *work;
    /* 0x04 */ s32 selection;
};
extern TerminalGlobals g_tmnl;
extern u32 DAT_00432ce4;
int asdSequenceRequest(int id, u32 *data, int size);

/* Request the terminal sequence and forget its saved selection. */
void tmnlResetSelection(void)
{
    asdSequenceRequest(0xD, &DAT_00432ce4, 4);
    g_tmnl.selection = -1;
}

}
