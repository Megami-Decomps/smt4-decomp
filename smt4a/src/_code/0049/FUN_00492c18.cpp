/* NON_MATCHING: compiler uses ldrd/strd instead of retail ldm and separate stores. */
#include "common.h"
struct ValuePair { u32 first,second; };
struct Navigation { u8 unk00[96]; ValuePair value; };
extern "C" {
extern Navigation *g_naviMain;
/* Updates the navigation value pair. */
void FUN_00492c18(u32 unused, const ValuePair *value) { g_naviMain->value=*value; }
}
