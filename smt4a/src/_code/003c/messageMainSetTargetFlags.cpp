#include "ui/MessageMainA.h"
#include "shard/Shard003C.h"

extern "C" {

void messageMainSetTargetFlags(u8 value)
{
    if (g_messageMain.banner != NULL) {
        g_messageMain.banner->unk002F = value;
    }
}

} /* extern "C" */
