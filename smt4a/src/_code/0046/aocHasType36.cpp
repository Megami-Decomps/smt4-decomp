#include "shard/Shard0046.h"
#include "addon/AocSystemA.h"

extern "C" {

/* Whether a package has a kind-0x36 record keyed `id`. */
u8 aocHasType36(AocSystemA *system, u32 id)
{
    return packageFindRecordByName(system, 0x36, id) != NULL;
}

} /* extern "C" */
