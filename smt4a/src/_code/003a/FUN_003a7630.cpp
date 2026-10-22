#include "shard/Shard003A.h"

extern "C" {

extern MessageGlobalsA g_messageMain;

void FUN_003a7630(u8 value)
{
    g_messageMain.panel->unk33 = value;
}

} /* extern "C" */
