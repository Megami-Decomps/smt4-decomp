#include "common.h"
#include "AsdSDK/AsdDebug.h"
struct ValuePair { u32 first,second; };
extern "C" {
extern ValuePair DAT_00589510;
/* Publishes the two state words after the release-build debug hook. */
void FUN_00513250(u32 first,u32 second) { asdDebugTrace(NULL,67108969); DAT_00589510.first=first;DAT_00589510.second=second; }
}
