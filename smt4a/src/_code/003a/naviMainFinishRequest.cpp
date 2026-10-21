#include "common.h"

extern "C" {

struct Navi { u8 unk00[0x68]; u32 request; };
extern Navi *g_naviMain;
s32 FUN_0048e40c(u32 *request);
void menuMarkActive(u32 *request);

void naviMainFinishRequest(void)
{
    Navi *navi = g_naviMain;
    if (navi != NULL && FUN_0048e40c(&navi->request)) {
        menuMarkActive(&navi->request);
    }
}

} /* extern "C" */
