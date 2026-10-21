#include "common.h"

extern "C" {

int gameMoneyAdd(u32 value);
extern u32 DAT_00434228;
extern int messageMainTargetIsClear(void);

int messageMainFlushMoney(void)
{
    int result = messageMainTargetIsClear();

    if (result == 1) {
        gameMoneyAdd(DAT_00434228);
        DAT_00434228 = 0;
    }
    return result;
}

} /* extern "C" */
