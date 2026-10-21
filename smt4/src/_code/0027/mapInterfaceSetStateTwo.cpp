/* NON_MATCHING: compiler chooses a different base register for the map-interface state store. */
#include "common.h"
extern "C" {
struct MapInterfaceValue { u8 unk00[0x30]; u32 value; };
extern MapInterfaceValue *g_mapIf;
/* Set the map interface state to two. */
void mapInterfaceSetStateTwo(void) { g_mapIf->value = 2; }
}
