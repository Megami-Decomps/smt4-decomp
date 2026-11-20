#include "common.h"
struct ValuePair { u32 first, second; };
extern "C" {
extern ValuePair g_moAllocationHooks;
/* Clears both global state words. */
void valuePairClear() { g_moAllocationHooks.first=0; g_moAllocationHooks.second=0; }
}
