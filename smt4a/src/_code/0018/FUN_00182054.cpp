#include "common.h"

extern "C" {

extern int FUN_002adba8(void);
extern void asdTMTexTableNodeIsLoaded(int kind, int value);
void FUN_00182054(void)
{
    asdTMTexTableNodeIsLoaded(46, FUN_002adba8());
}

} /* extern "C" */
