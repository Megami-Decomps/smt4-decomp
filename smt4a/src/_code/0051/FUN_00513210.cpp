#include "common.h"
struct ValuePair { u32 first, second; };
extern "C" {
extern ValuePair DAT_00589510;
/* Clears both global state words. */
void FUN_00513210() { DAT_00589510.first=0; DAT_00589510.second=0; }
}
