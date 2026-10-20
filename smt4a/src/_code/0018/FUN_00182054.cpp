#include "common.h"

extern "C" {

extern int requestIdToCode(void);
extern void asdTMTexTableNodeIsLoaded(int kind, int value);
void FUN_00182054(void)
{
    asdTMTexTableNodeIsLoaded(46, requestIdToCode());
}

} /* extern "C" */
