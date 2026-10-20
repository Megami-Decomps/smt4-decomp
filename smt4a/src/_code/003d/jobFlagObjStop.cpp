#include "shard/Shard003D.h"

extern "C" {

typedef struct JobFlagObj {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 unk04[0x19];
    /* 0x1D */ u8 unk1D;
} JobFlagObj;

extern u8 FUN_001632fc(void);
extern void FUN_00203d04(s32 value);
extern u32 jobStop(u32 job, u16 arg);

/* Re-arms the object's flag at +0x1D when FUN_001632fc allows, then stops its job. */
void jobFlagObjStop(JobFlagObj **ref)
{
    JobFlagObj *obj = *ref;

    if (obj->unk1D != 0 && FUN_001632fc() != 0) {
        obj->unk1D = 0;
        FUN_00203d04(1);
    }
    jobStop(obj->job, 0);
}

} /* extern "C" */
