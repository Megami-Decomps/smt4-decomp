#include "common.h"

extern "C" {

/* Global block: a handler object pointer at +8. */
typedef struct {
    u8 unk00[8];
    void *handler;      /* 0x08 */
} HandlerBlock;

extern HandlerBlock DAT_00434388;

u32 jobGetWork(void);
int FUN_003c64ec(void *handler, u32 context);

/* Runs FUN_003c64ec for the global handler with the current context; 0 when no handler is installed. */
int FUN_001d3da0(void)
{
    u32 context = jobGetWork();

    if (DAT_00434388.handler == NULL) {
        return 0;
    }
    return FUN_003c64ec(DAT_00434388.handler, context);
}

} /* extern "C" */
