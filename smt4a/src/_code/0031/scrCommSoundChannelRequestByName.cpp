#include "common.h"

extern "C" {

int FUN_002bf09c(int name);
int soundChannelRequestIfEnabled(int id, int arg1, int arg2);
extern int scrGetArg(u32 index);
extern int scrGetArgString(u32 index);

/* Script command: looks up the sound named by string argument 0 and requests it with the two arguments clamped at 0. */
u32 scrCommSoundChannelRequestByName(void)
{
    int id = FUN_002bf09c(scrGetArgString(0));
    int arg1;
    int arg2;

    if (id < 0) {
        return 1;
    }
    arg1 = scrGetArg(1);
    arg2 = scrGetArg(2);
    if (arg1 < 0) {
        arg1 = 0;
    }
    if (arg2 < 0) {
        arg2 = 0;
    }
    soundChannelRequestIfEnabled(id, arg1, arg2);
    return 1;
}

} /* extern "C" */
