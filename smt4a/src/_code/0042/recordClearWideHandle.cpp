/* NON_MATCHING: compiler uses STRD instead of retail separate zero-word stores. */
#include "common.h"
extern "C" {
void FUN_00429d58(u64 handle);
/* Release a nonzero wide handle and clear its owner. */
void recordClearWideHandle(u64 *handle) { if (*handle!=0) { FUN_00429d58(*handle); *handle=0; } }
}
