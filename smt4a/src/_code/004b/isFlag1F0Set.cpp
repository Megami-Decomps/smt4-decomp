#include "shard/Shard004B.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code004b_Smt4a.h"

extern "C" {


u8 isFlag1F0Set(void)
{
    return asdTMTexTableNodeIsLoaded(0x1F, 0) != 0;
}

} /* extern "C" */
