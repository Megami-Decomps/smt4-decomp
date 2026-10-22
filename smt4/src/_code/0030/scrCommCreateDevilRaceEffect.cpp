#include "common.h"

extern "C" {

int btlGetMainState(void);
int devilCreateRaceEffect(u32 a, u32 b);
extern u32 scrGetArg(u32 index);

u32 scrCommCreateDevilRaceEffect(void)
{
    u32 a;
    u32 b;

    btlGetMainState();
    a = scrGetArg(0);
    b = scrGetArg(1);
    devilCreateRaceEffect(a, b);
    return 1;
}

} /* extern "C" */
