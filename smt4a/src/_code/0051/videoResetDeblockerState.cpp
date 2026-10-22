#include "common.h"
struct ValuePair { u32 first, second; };
extern "C" {
extern ValuePair g_mwmofilterDeblocker;
/* Clears both global state words. */
void videoResetDeblockerState() { g_mwmofilterDeblocker.first=0; g_mwmofilterDeblocker.second=0; }
}
