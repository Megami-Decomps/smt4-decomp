#include "common.h"

extern "C" {

int btlTalkBustUpCreate(void);

u32 scrComm_Talk_InitBustUp(void)
{
    btlTalkBustUpCreate();
    return 1;
}

} /* extern "C" */
