#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

extern int requestIdToCode(void);
void FUN_00182054(void)
{
    asdTMTexTableNodeIsLoaded(46, requestIdToCode());
}

} /* extern "C" */
