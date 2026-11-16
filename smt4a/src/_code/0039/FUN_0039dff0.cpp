#include "common.h"

extern "C" {
u32 btlGetActiveShareRating(void);
u32 messageAuxDispatch(u32 message, u32 name);

/* Dispatches message 0 with the name btlGetActiveShareRating returns. */
void FUN_0039dff0(void)
{
    messageAuxDispatch(0, btlGetActiveShareRating());
}
}
