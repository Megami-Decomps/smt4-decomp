#include "common.h"

extern "C" {

extern int FUN_002adba8(void);
extern void FUN_0018206c(int kind, int value);
void FUN_00182054(void)
{
    FUN_0018206c(46, FUN_002adba8());
}

} /* extern "C" */
