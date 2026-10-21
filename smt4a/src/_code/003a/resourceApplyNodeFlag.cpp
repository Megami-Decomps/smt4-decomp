#include "common.h"
extern "C" {
void *asdTMTexTableGetNode(u32 table,u32 index);
u32 FUN_001acfac(void *node,u32 flags);
/* Resolve a texture-table node and apply its high flag bit. */
u32 resourceApplyNodeFlag(u32 table,u32 index) { return FUN_001acfac(asdTMTexTableGetNode(table,index),0x20000); }
}
