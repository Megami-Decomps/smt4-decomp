#include "shard/Shard0041.h"
#include "shard/Shard0047.h"

extern "C" {

extern PartyBlockB *gameFlagBlockGet(void);

u16 rosterGetLeaderId(void)
{
    return gameFlagBlockGet()->unk8E0;
}

} /* extern "C" */
