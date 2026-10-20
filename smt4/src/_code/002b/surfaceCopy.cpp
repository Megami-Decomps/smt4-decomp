#include "common.h"

extern "C" {

int asdGfxCmdBufferForward5(u32 a, u32 b, u32 c, u32 d, u32 e);
int FUN_002bc1e4(void);

typedef struct Unit {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u8 unk20[4];
    /* 0x24 */ u32 buffer;
} Unit;

void surfaceCopy(Unit *src, Unit *dst)
{
    FUN_002bc1e4();
    asdGfxCmdBufferForward5(src->buffer, dst->buffer, src->unk14, src->unk18, src->unk1C);
}

} /* extern "C" */
