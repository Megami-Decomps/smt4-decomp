/* NON_MATCHING: retail has a 4-byte slot before the 132-byte path buffer (buffer at sp+16) and keeps the kind constant 12 in r7; built places the buffer at sp+12. */
#include "common.h"

struct AocDisplay;

extern "C" {

void sysMemClear(void *buffer, s32 size);
u8 *FUN_001b2bd8(u32 id, u32 kind, u32 variant, char *path);
void FUN_001b2ebc(AocDisplay *display, const char *path, u32 completion, u8 *data, s32 mode, s32 size, u8 *context);
extern AocDisplay *g_aocDisplay; /* 0x57027c */

// Resolve the file entry for the request and queue its 0x80-byte load on the add-on display.
void FUN_0046e150(u32 id, u32 variant, u32 completion)
{
    char path[132];
    sysMemClear(path, 0x80);
    u8 *entry = FUN_001b2bd8(id, 0xc, variant, path);
    if (entry != NULL) {
        FUN_001b2ebc(g_aocDisplay, path, completion, entry + 8, 1, 0x80, entry);
    }
}

} /* extern "C" */
