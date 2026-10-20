#include "common.h"

extern "C" {

int FUN_0013a410(void);
int FUN_002bb20c(void);
extern int nn_snd_CTR_Dspsnd_IsInitialized(void);

extern struct {
    u8 unk0[4];
    s8 unk4;
} DAT_0044e360;

void FUN_002b5904(int flag)
{
    if (flag != 0) {
        if (DAT_0044e360.unk4 != 0) {
            FUN_0013a410();
            DAT_0044e360.unk4 = 0;
        }
    } else {
        if (nn_snd_CTR_Dspsnd_IsInitialized() != 0) {
            FUN_002bb20c();
            DAT_0044e360.unk4 = 1;
        }
    }
}

} /* extern "C" */
