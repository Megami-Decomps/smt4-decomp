#include "battle/btlPartnerAttack.h"
#include "shard/Shard003A.h"

extern "C" {

typedef struct RenderRes {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
} RenderRes;

extern BtlPartnerAttackA *g_btlPartnerAttack;
extern u32 g_renderCtx;
extern void jobGetWork(u32 job);
extern RenderRes *asdTMTexTableGetNode(s32 a, s32 b);
extern void FUN_0016c4b8(u32 ctx, u32 value);
extern void FUN_00157558(u32 ctx);
extern void FUN_00416664(void *p);

u32 renderObjAttach(u32 job)
{
    BtlPartnerAttackA *obj;
    RenderRes *res;

    jobGetWork(job);
    obj = g_btlPartnerAttack;
    if (obj != NULL && obj->entries != NULL) {
        res = asdTMTexTableGetNode(8, 0);
        FUN_0016c4b8(g_renderCtx, res->unk08);
        FUN_00157558(g_renderCtx);
        FUN_00416664(obj->entries);
    }
    return 0;
}

} /* extern "C" */
