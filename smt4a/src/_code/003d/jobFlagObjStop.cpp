#include "shard/Shard003D.h"

extern "C" {

typedef struct JobFlagObj {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 unk04[0x19];
    /* 0x1D */ u8 unk1D;
} JobFlagObj;

extern u8 infoWinHasValue(void);
extern void dialogClose(s32 value);
extern u32 jobStop(u32 job, u16 arg);

extern JobFlagObj *g_mapIf;

/* Clears the object's flag when allowed, then stops its job. */
void jobFlagObjStop(void)
{
    JobFlagObj *obj = g_mapIf;

    if (obj->unk1D != 0 && infoWinHasValue() != 0) {
        obj->unk1D = 0;
        dialogClose(1);
    }
    jobStop(obj->job, 0);
}

} /* extern "C" */
