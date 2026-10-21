#include "common.h"
struct ValuePair { u32 first, second; };
extern "C" {
extern ValuePair DAT_00589530;
/* Clears both global state words. */
void FUN_00513f6c() { DAT_00589530.first=0; DAT_00589530.second=0; }
}
