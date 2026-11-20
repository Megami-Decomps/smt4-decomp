#include "common.h"
struct ValuePair { u32 first, second; };
extern "C" {
extern ValuePair g_moAllocator;
/* Clears both global state words. */
void FUN_00512e38() { g_moAllocator.first=0; g_moAllocator.second=0; }
}
