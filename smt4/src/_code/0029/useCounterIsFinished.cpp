#include "common.h"
#include "code/Code0029_Smt4.h"

extern "C" {

typedef struct Counter {
    /* 0x000 */ u8 unk000[0x744];
    /* 0x744 */ int state;
} Counter;

extern struct {
    u8 unk0[4];
    Counter *counter;
} g_useCounter; /* 0x43dd20 */

u8 useCounterIsFinished(void)
{
    int state = 0;

    if (g_useCounter.counter != NULL) {
        state = g_useCounter.counter->state;
    }
    return g_useCounter.counter == NULL || state == 4;
}

} /* extern "C" */
