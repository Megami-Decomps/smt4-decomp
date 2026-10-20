#include "common.h"

extern "C" {

int soundChannelRequestIfEnabled(u32 value, int a, int b);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x47C];
    /* 0x47C */ u32 unk47C;
} Obj;

extern Obj *g_unite;

u32 FUN_001add6c(void)
{
    if (g_unite == NULL) {
        return 0;
    }
    soundChannelRequestIfEnabled(g_unite->unk47C, 0, 0x3c);
    return 1;
}

} /* extern "C" */
