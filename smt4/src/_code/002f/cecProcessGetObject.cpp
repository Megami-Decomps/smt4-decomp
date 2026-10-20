/* Passes the CEC process's object at +4 on, or returns 0 if there is no process. */
#include "common.h"

extern "C" {

struct CecProcess002fcabc {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *object;
};

extern CecProcess002fcabc *g_cecProcess;

u32 FUN_003bbcf4(void *object);

u32 cecProcessGetObject(void)
{
    CecProcess002fcabc *process = g_cecProcess;
    u32 result = 0;

    if (process != NULL) {
        result = FUN_003bbcf4(process->object);
    }
    return result;
}

}
