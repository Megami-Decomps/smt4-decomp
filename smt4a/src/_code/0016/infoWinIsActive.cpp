/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void infoWinHasValue(void);

void infoWinIsActive(void)
{
    infoWinHasValue();
}

}
