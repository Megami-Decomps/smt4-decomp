#include "common.h"
struct ValuePair { u32 first, second; };
extern "C" {
extern ValuePair DAT_00589508;
/* Clears both global state words. */
void FUN_00512e38() { DAT_00589508.first=0; DAT_00589508.second=0; }
}
