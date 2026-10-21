#include "common.h"
extern "C" {
struct NavigationRequest { u8 unk00[0x12334]; u8 field[1]; };
extern NavigationRequest *g_naviMain;
void requestBeginProcessing(void *field,s8 mode,u32 value);
/* Forward an optional navigation request with a signed-byte mode. */
void navigationRequestFieldMode(s32 mode,u32 value) { if (g_naviMain!=NULL) requestBeginProcessing(g_naviMain->field,(s8)mode,value); }
}
