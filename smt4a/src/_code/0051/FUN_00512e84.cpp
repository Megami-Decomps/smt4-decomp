#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/FUN_00512e84.h"
struct ValuePair { u32 first,second; };
extern "C" {
extern ValuePair DAT_00589508;
/* Publishes the two state words after the release-build debug hook. */
void FUN_00512e84(u32 first,u32 second) { asdDebugTrace(NULL,67108936); DAT_00589508.first=first;DAT_00589508.second=second; }
}
