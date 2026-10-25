#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

int btlMainFindEntryByListedId(u32 btl, u32 id);

u32 FUN_003bf554(u32 id)
{
    u32 btl = reinterpret_cast<u32>(btlGetMainState());

    btlMainFindEntryByListedId(btl, id);
    return 0;
}

} /* extern "C" */
