#include "common.h"
extern "C" {
void *asdTMTexTableCallFileB(u32 table,u32 index);
u32 FUN_002a6114(void *node,u32 flags);
/* Resolve a texture-table node and apply its high flag bit. */
u32 resourceApplyNodeFlag(u32 table,u32 index) { return FUN_002a6114(asdTMTexTableCallFileB(table,index),0x20000); }
}
