#include "common.h"
extern "C" {
void FUN_00231464();
extern struct {
    u8 pad[8];
    u8 kind;
    u8 gap[3];
    u32 mode,count;
    u8 gap2[0x11];
    u8 pending;
} *g_gameOverJobRecord;
/* Stores the kind byte, clears the pending flag and the counter, and selects mode 2 for kind 2, else 1. */
void FUN_0031cea0(u32 input) {
    FUN_00231464();
    g_gameOverJobRecord->kind = (u8)input;
    g_gameOverJobRecord->pending = 0;
    g_gameOverJobRecord->mode = (u8)input == 2 ? 2 : 1;
    g_gameOverJobRecord->count = 0;
}
}
