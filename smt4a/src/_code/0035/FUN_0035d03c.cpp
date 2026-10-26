#include "shard/Shard0035.h"
#include "code/Code0035_Smt4a.h"

extern "C" {

extern MessageGlobalsA g_messageMain;

void FUN_0035d03c(u8 value)
{
    g_messageMain.state->unk19E8 = value;
}

} /* extern "C" */
