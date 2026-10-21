#include "common.h"

extern "C" {

struct MapInterface {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u32 mode;
    /* 0x40 */ u32 opacity;
    /* 0x44 */ u32 targetMode;
};
extern MapInterface *g_mapIf;
void mapIfSetOpaqueMode(void)
{
    g_mapIf->mode = 2;
    g_mapIf->opacity = 255;
    g_mapIf->targetMode = 2;
}

} /* extern "C" */
