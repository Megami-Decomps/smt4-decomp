#include "common.h"

extern "C" {

struct MapRequest {
    /* 0x00 */ u16 state;
    /* 0x02 */ u16 selection;
};
struct MapInterface {
    /* 0x0000 */ u8 unk0000[0xcc00];
    /* 0xcc00 */ u8 unkcc00[0xe8];
    /* 0xcce8 */ MapRequest request;
};
extern MapInterface *g_mapIf;

void mapIfResetRequest(void)
{
    if (g_mapIf->request.state != 0) {
        g_mapIf->request.state = 4;
        g_mapIf->request.selection = 0;
    }
}

} /* extern "C" */
