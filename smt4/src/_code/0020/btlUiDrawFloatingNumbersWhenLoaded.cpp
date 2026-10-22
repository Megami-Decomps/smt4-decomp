#include "battle/btlUI.h"

extern "C" {

int btlDrawFloatingNumbers(void *obj, int arg);
extern int asdTMTexTableNodeIsLoaded(u32 table, int index);

extern BtlUiGlobals g_btlUi;

/* Counts the set entries of tables 0x14 (5 entries) and 0x15 (4 entries); with 9 or more, calls btlDrawFloatingNumbers. Returns 0. */
u32 btlUiDrawFloatingNumbersWhenLoaded(void)
{
    s32 i;
    s32 count;
    void *target = g_btlUi.ui;

    if (target != NULL) {
        count = 0;
        i = count;
        do {
            if (asdTMTexTableNodeIsLoaded(0x14, i) != 0) {
                count++;
            }
            i++;
        } while (i < 5);
        i = 0;
        do {
            if (asdTMTexTableNodeIsLoaded(0x15, i) != 0) {
                count++;
            }
            i++;
        } while (i < 4);
        if (count >= 9) {
            btlDrawFloatingNumbers(target, 0);
            return 0;
        }
    }
    return 0;
}

} /* extern "C" */
