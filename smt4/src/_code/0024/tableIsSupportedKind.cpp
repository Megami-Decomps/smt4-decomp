#include "common.h"
extern "C" {
struct KindStateTable { u8 unk00[0x4A24]; u32 kinds[1]; };
/* Report whether the selected kind is outside zero, one, and two. */
s32 tableIsSupportedKind(const KindStateTable *table,u32 index) { u32 kind=table->kinds[index]; if (kind==0 || kind==1 || kind==2) return 0; return 1; }
}
