#include "common.h"

extern "C" {

struct SaveLoadProcess {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ s8 state;
};
extern SaveLoadProcess g_saveLoadProcess;
s32 asdFsIsSdCardDetected(void);

s32 saveLoadProcessGetState(void)
{
    return asdFsIsSdCardDetected() != 0 ? g_saveLoadProcess.state : 0;
}

} /* extern "C" */
