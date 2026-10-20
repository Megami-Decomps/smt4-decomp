#include "shard/Shard003A.h"

extern "C" {

typedef struct ScriptObj {
    /* 0x000 */ u8 unk000[0x30];
    /* 0x030 */ void *unk30;
} ScriptObj;

typedef struct RenderRes {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
} RenderRes;

extern ScriptObj *DAT_00573c50;
extern u32 g_renderCtx;
extern void jobGetWork(u32 job);
extern RenderRes *FUN_001861c4(s32 a, s32 b);
extern void FUN_0016c4b8(u32 ctx, u32 value);
extern void FUN_00157558(u32 ctx);
extern void FUN_00416664(void *p);

u32 renderObjAttach(u32 job)
{
    ScriptObj *obj;
    RenderRes *res;

    jobGetWork(job);
    obj = DAT_00573c50;
    if (obj != NULL && obj->unk30 != NULL) {
        res = FUN_001861c4(8, 0);
        FUN_0016c4b8(g_renderCtx, res->unk08);
        FUN_00157558(g_renderCtx);
        FUN_00416664(obj->unk30);
    }
    return 0;
}

} /* extern "C" */
