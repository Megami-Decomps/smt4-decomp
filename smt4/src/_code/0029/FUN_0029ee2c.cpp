#include "common.h"

extern "C" {

typedef struct MessageSlot {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u8 state;
} MessageSlot;

typedef struct MessageMain {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ MessageSlot *slot;
} MessageMain;

extern MessageMain g_messageMain; /* 0x43e188 */

/* Whether the message slot exists and is in state 1. */
u8 FUN_0029ee2c(void)
{
    return g_messageMain.slot != NULL && g_messageMain.slot->state == 1;
}

}
