#include "common.h"
struct Navigation { u8 unk00[0x5C]; f32 value; };
extern "C" {
extern Navigation *g_naviMain;
/* Returns the navigation object's current value. */
f32 naviMainGetValue() { return g_naviMain->value; }
}
