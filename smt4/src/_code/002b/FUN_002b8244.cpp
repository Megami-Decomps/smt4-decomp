/* NON_MATCHING: compiler schedules the prologue, loads and argument setup differently from retail. */
#include "common.h"

namespace { struct Help { u8 padding[0x4b8]; u16 counter; u8 reserved[2]; u16 duration; u8 unused[9]; u8 mode; }; struct Owner { u8 padding[0x44]; Help *help; }; }

extern "C" {
extern Owner *g_buttonHelp;
void FUN_002ae028(void *context);
void FUN_002b8244(u32 mode)
{
    Help *help = g_buttonHelp->help;
    help->mode = mode;
    if (mode != 0) {
        help->counter = 0;
        help->duration = 400;
        FUN_002ae028((u8 *)help + 0x400);
    }
}
}
