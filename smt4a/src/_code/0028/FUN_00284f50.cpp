#include "common.h"

extern "C" {

void vec2GetXInt(u8 *member);

typedef struct Object {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u8 member34[1];
} Object;
extern Object *g_placeWin;

/* Calls vec2GetXInt on the member at 0x34 of the object at 0x57F578, if there is one. */
void FUN_00284f50(void)
{
    if (g_placeWin != NULL) {
        vec2GetXInt(g_placeWin->member34);
        return;
    }
}

} /* extern "C" */
