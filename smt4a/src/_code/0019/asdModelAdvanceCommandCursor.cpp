#include "common.h"

extern "C" {

extern s32 g_commandBufferCursor;

/* Adds `amount` to the word at 0x5B40E0. */
void asdModelAdvanceCommandCursor(s32 amount)
{
    g_commandBufferCursor = amount + g_commandBufferCursor;
}

} /* extern "C" */
