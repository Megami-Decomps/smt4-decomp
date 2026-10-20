#include "map/mapDepart.h"

extern "C" {

typedef struct {
    s32 unk00;
    u8 unk04[4];
    s32 unk08;
    s32 unk0C;
} MapIfExtra;

void FUN_002bfdd4(void);
void FUN_002dfefc(s32 arg);
s32 FUN_002c09d0(u32 id);

extern MapIfExtra *DAT_00447a98;
extern GameState g_gameState;

void FUN_001d34a8(s32 a, s32 b)
{
    MapIfExtra *extra;

    FUN_002bfdd4();
    extra = DAT_00447a98;
    DAT_00447a98->unk08 = a;
    extra->unk0C = b;
    if (g_gameState.unk18 == 0 && FUN_002c09d0(0x16) != 0 && DAT_00447a98->unk00 == 0) {
        FUN_002dfefc(0);
    }
}

} /* extern "C" */
