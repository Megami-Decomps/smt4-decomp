/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void questSysLoadStep(void);

void questSysUpdateLoad(void)
{
    questSysLoadStep();
}

}
