#include "ui/IfTouch.h"
extern "C" {
/* Read the touch counter, or zero when the record is absent. */
s32 ifTouchGetActiveCounter(void) { return g_ifTouch.state != NULL ? g_ifTouch.state->repeatCounter : 0; }
}
