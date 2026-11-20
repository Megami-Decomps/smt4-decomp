#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match3_RotationY.h"
struct ValuePair { u32 first,second; };
extern "C" {
extern ValuePair g_moAllocator;
/* Publishes the two state words after the release-build debug hook. */
void FUN_00512e84(u32 first,u32 second) { asdDebugTrace(NULL,67108936); g_moAllocator.first=first;g_moAllocator.second=second; }
}
