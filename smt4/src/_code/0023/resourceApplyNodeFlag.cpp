#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
extern "C" {
u32 FUN_002a6114(void *node,u32 flags);
/* Resolve a texture-table node and apply its high flag bit. */
u32 resourceApplyNodeFlag(u32 table,u32 index) { return FUN_002a6114(asdTMTexTableCallFileB(table,index),0x20000); }
}
