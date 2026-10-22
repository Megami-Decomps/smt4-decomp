#include "shard/Shard003C.h"

extern "C" {

extern MessageGlobalsA g_messageMain;

void messageMainSetTargetFlags(u8 value)
{
    if (g_messageMain.panel != NULL) {
        g_messageMain.panel->unk2F = value;
    }
}

} /* extern "C" */
