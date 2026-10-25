#include "shard/Shard0034.h"
#include "util/CalleeContracts.h"

extern "C" {

extern MessageGlobalsA g_messageMain;

u8 FUN_0034919c(void)
{
    return g_messageMain.panel->unk8E != 0;
}

} /* extern "C" */
