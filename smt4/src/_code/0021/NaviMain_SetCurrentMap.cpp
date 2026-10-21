/* NON_MATCHING: compiler emits STRD rather than the retail STM for the map and counter pair. */
#include "common.h"
extern "C" {
struct NavigationMapWork { u8 unk00[0x28]; u32 map; u32 counter; u8 unk30[0x10]; u32 field; };
extern NavigationMapWork *g_naviMain;
void FUN_002314e8(u32 *field,u32 map);
/* Select the current navigation map and reset its counter. */
void NaviMain_SetCurrentMap(u32 map) { g_naviMain->map=map; g_naviMain->counter=0; FUN_002314e8(&g_naviMain->field,map); }
}
