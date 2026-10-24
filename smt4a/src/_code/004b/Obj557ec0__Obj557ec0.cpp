#include "classes/Obj557ec0.h"

extern "C" {
s32 FUN_0028022c(void);
void asdCecInit(void);
u32 asdLoadFileSyncDefault(const char *path);
u32 FUN_0042d694(u32 id);
void asdCecSetBoxArgs(u32 unk00, u32 unk04);
extern u32 g_resourceDispatchContext;
}

/* Opens the CEC module and loads both icon packs, then points its message box at the 0x19a2 id. */
Obj557ec0::Obj557ec0() : icon48(0), icon40(0)
{
    FUN_0028022c();
    asdCecInit();
    icon48 = asdLoadFileSyncDefault("cec_icon/CecIcon48.ctpk");
    icon40 = asdLoadFileSyncDefault("cec_icon/CecIcon40.ctpk");
    asdCecSetBoxArgs(FUN_0042d694(0x19a2), g_resourceDispatchContext);
}
