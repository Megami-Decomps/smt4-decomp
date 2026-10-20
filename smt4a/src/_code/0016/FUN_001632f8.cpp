/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void FUN_001632fc(void);

void FUN_001632f8(void)
{
    FUN_001632fc();
}

}
