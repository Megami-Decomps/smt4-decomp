/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void sysFatalBreak(void);

void sysRequestFatalBreak(void)
{
    sysFatalBreak();
}

}
