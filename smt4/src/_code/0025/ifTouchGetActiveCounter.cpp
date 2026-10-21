#include "shard/Block57f248.h"
extern "C" {
/* Read the touch counter, or zero when the record is absent. */
s32 ifTouchGetActiveCounter(void) { return g_ifTouch.record != NULL ? g_ifTouch.record->unk650 : 0; }
}
