/* NON_MATCHING: instruction scheduling only: retail hoists neither the loop counter init nor the second table address above the third store, and uses r1 for the first table. */
#include "common.h"

extern "C" {

/* A message window; only the field the script command writes is named. */
typedef struct MessageWindow {
    /* 0x0000 */ u8 unk0000[0x19EC];
    /* 0x19EC */ u32 scriptValue;
} MessageWindow;

extern MessageWindow *g_messageMain[4]; /* 0x57f588 */
extern MessageWindow *DAT_005e2010[12]; /* 0x5e2010 */

extern u32 scrGetArg(void);

/* Script command: sets the script value of every message window. */
u32 FUN_003304a0(void)
{
    u32 value = scrGetArg();
    s32 i;

    g_messageMain[1]->scriptValue = value;
    g_messageMain[2]->scriptValue = value;
    g_messageMain[3]->scriptValue = value;
    for (i = 0; i < 12; i++) {
        DAT_005e2010[i]->scriptValue = value;
    }
    return 1;
}

} /* extern "C" */
