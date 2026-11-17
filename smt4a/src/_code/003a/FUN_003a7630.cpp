#include "ui/MessageMainA.h"
#include "shard/Shard003A.h"
#include "code/Code003a.h"

extern "C" {

void FUN_003a7630(u8 value)
{
    g_messageMain.banner->unk0033 = value;
}

} /* extern "C" */
