#include "common.h"

extern "C" {

extern int rosterHasLeader(void);
extern int rosterGetLeaderId(void);

int FUN_0027d968(void)
{
    int result = rosterHasLeader();

    if ((result == 0) || (result = rosterGetLeaderId(), result <= 0)) {
        result = -1;
    }
    return result;
}

} /* extern "C" */
