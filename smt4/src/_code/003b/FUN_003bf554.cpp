#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/BtlGlobals.h"

extern "C" {


u32 FUN_003bf554(u32 id)
{
    u32 btl = reinterpret_cast<u32>(btlGetMainState());

    btlMainFindEntryByListedId(reinterpret_cast<BtlMainState *>(btl), id);
    return 0;
}

} /* extern "C" */
