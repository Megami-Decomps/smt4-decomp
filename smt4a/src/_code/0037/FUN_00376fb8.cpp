#include "shard/Shard0037.h"
#include "shard/FUN_00376fb8.h"

extern "C" {

extern Flags0C0C *gameFlagsGetBlock(void);

void FUN_00376fb8(u8 value)
{
    gameFlagsGetBlock()->unk03 = value;
}

} /* extern "C" */
