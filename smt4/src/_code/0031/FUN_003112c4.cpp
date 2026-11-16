#include "common.h"

extern "C" {

int scrSetResult(void);
int rosterGetLeaderId(void);

u32 FUN_003112c4(void)
{
    rosterGetLeaderId();
    scrSetResult();
    return 1;
}

} /* extern "C" */
