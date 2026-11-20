#include "common.h"
extern "C" {
void streamReaderAdvanceU32(void *work, u32 *value);
/* Retrieves the scalar value from the work object. */
u32 FUN_00304e82(void *work) {
    u32 value;
    streamReaderAdvanceU32(work, &value);
    return value;
}
}
