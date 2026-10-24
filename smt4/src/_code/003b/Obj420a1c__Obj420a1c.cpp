#include "classes/Obj420a1c.h"

extern "C" {
s32 FUN_001db548(void);
void asdCecInit(void);
u32 asdLoadFileSyncDefault(const char *path);
u32 FUN_00357818(u32 id);
void asdCecSetBoxArgs(u32 unk00, u32 unk04);
extern u32 DAT_0043ddb8;
}

/* Opens the CEC module and loads both icon packs, then points its message box at the 0xe5c id. */
Obj420a1c::Obj420a1c() : icon48(0), icon40(0)
{
    FUN_001db548();
    asdCecInit();
    icon48 = asdLoadFileSyncDefault("cec_icon/CecIcon48.ctpk");
    icon40 = asdLoadFileSyncDefault("cec_icon/CecIcon40.ctpk");
    asdCecSetBoxArgs(FUN_00357818(0xe5c), DAT_0043ddb8);
}
