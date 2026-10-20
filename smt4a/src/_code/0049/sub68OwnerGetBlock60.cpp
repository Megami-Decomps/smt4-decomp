#include "shard/Shard0049.h"

extern "C" {

extern Sub68Owner *DAT_00587f28;

u8 *sub68OwnerGetBlock60(void)
{
    return DAT_00587f28->block60;
}

} /* extern "C" */
