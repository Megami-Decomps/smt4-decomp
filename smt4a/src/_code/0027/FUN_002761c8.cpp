#include "common.h"

extern "C" {

/* Global block: a handler object pointer at +8. */
typedef struct {
    u8 unk00[8];
    void *handler;      /* 0x08 */
} HandlerBlock;

extern HandlerBlock DAT_005715f8;

u32 jobGetWork(void);
int FUN_004d6104(void *handler, u32 context);

/* Runs FUN_004d6104 for the global handler with the current context; 0 when no handler is installed. */
int FUN_002761c8(void)
{
    u32 context = jobGetWork();

    if (DAT_005715f8.handler == NULL) {
        return 0;
    }
    return FUN_004d6104(DAT_005715f8.handler, context);
}

} /* extern "C" */
