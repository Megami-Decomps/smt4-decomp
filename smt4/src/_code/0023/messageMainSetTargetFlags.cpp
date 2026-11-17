#include "ui/MessageMain.h"

extern "C" {

void messageMainSetTargetFlags(u8 value)
{
    if (g_messageMain.banner != NULL) {
        g_messageMain.banner->unk02F = value;
    }
}

} /* extern "C" */
