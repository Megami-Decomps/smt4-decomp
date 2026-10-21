#include "shard/W5_W5Match2_RecordCallbacks.h"
extern "C" {
extern CounterGlobals g_useCounter;
/* Read the current use-counter state byte. */
s8 useCounterGetValue(void) { return g_useCounter.work->value; }
}
