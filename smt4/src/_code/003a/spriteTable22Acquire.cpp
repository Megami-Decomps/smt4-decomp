#include "common.h"

extern "C" {

int asdTMTexTableLoadEntryAsync(int table, int index);
int asdTMTexTableLoadTmx(int table, int flag);

extern struct {
    u8 unk0;
    s8 refCount;
} g_countdown; /* 0x43d9e0 */

/* Loads the table on the first reference. */
void spriteTable22Acquire(void)
{
    int i;

    if (g_countdown.refCount <= 0) {
        asdTMTexTableLoadTmx(0x22, 0);
        i = 0;
        do {
            asdTMTexTableLoadEntryAsync(0x22, i);
            i = i + 1;
        } while (i < 2);
    }
    g_countdown.refCount = g_countdown.refCount + 1;
}

} /* extern "C" */
