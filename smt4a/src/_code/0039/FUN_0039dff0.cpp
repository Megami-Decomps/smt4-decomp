#include "common.h"

extern "C" {
u32 FUN_0027099c(void);
u32 messageAuxDispatch(u32 message, u32 name);

/* Dispatches message 0 with the name FUN_0027099c returns. */
void FUN_0039dff0(void)
{
    messageAuxDispatch(0, FUN_0027099c());
}
}
