#include "common.h"

extern "C" {

void gxLcdClearForceBlackImpl(void);

/* Forwards to gxLcdClearForceBlackImpl, the function that follows it. */
void gxLcdClearForceBlack(void)
{
    gxLcdClearForceBlackImpl();
}

} /* extern "C" */
