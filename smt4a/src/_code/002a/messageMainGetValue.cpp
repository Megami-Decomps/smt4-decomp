#include "ui/MessageMainA.h"

extern "C" {

/* Returns the banner window's value. */
u32 messageMainGetValue(void)
{
    return g_messageMain.banner->value;
}

} /* extern "C" */
