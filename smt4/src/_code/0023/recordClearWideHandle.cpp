/* NON_MATCHING: compiler uses STRD instead of retail separate zero-word stores. */
#include "common.h"
extern "C" {
void FUN_0023a170(u64 handle);
/* Release a nonzero wide handle and clear its owner. */
void recordClearWideHandle(u64 *handle) { if (*handle!=0) { FUN_0023a170(*handle); *handle=0; } }
}
