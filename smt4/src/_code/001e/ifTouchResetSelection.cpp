#include "shard/Block57f248.h"

extern "C" {

/* Clear the touch record's mode and counter, and invalidate its selection. */
void ifTouchResetSelection(void)
{
    Record57f248 *record = g_ifTouch.record;
    if (g_ifTouch.record != NULL) {
        record->unk64E = -1;
        record->unk008 = 0;
        record->unk650 = 0;
    }
}

}
