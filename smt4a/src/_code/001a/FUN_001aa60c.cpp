#include "common.h"

extern "C" {

extern void FUN_001aa610(void);

/* Tail-calls FUN_001aa610 with the caller's arguments untouched. */
void FUN_001aa60c(void)
{
    FUN_001aa610();
}

} /* extern "C" */
