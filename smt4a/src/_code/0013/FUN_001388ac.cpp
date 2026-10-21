#include "common.h"

extern "C" {

struct Panel;
extern Panel *g_renderCtx;
void FUN_00157558(Panel *panel);
s32 FUN_001388ac(void)
{
    FUN_00157558(g_renderCtx);
    return 0;
}

} /* extern "C" */
