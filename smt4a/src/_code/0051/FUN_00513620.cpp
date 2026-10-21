#include "common.h"
struct ValuePair { u32 first, second; };
extern "C" {
extern ValuePair g_mwmofilterDeblocker;
/* Clears both global state words. */
void FUN_00513620() { g_mwmofilterDeblocker.first=0; g_mwmofilterDeblocker.second=0; }
}
