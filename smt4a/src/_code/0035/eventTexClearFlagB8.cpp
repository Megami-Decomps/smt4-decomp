#include "shard/Shard0035.h"

extern "C" {

extern u32 eventTexGetCurrentOrInvalid(void);
extern s32 jobIsValid(u32 job);
typedef struct WorkB8 {
    /* 0x00 */ u8 unk00[0xB8];
    /* 0xB8 */ u8 flag;
} WorkB8;

extern WorkB8 *jobGetWork(u32 job);

/* Clears the flag at +0xB8 in the work area of the current event texture job. */
void eventTexClearFlagB8(void)
{
    u32 slot = eventTexGetCurrentOrInvalid();

    if (slot != -1 && jobIsValid(slot) != 0) {
        jobGetWork(slot)->flag = 0;
    }
}

} /* extern "C" */
