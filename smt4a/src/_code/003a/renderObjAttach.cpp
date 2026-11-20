#include "battle/btlPartnerAttack.h"
#include "shard/Shard003A.h"
#include "camp/RenderCtxA.h"

extern "C" {

typedef struct RenderRes {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ struct AsdTexture *texture;
} RenderRes;

extern BtlPartnerAttackA *g_btlPartnerAttack;
extern void jobGetWork(u32 job);
extern RenderRes *asdTMTexTableGetNode(s32 a, s32 b);
extern void btlLabelDrawActiveEntries(void *p);

u32 renderObjAttach(u32 job)
{
    BtlPartnerAttackA *obj;
    RenderRes *res;

    jobGetWork(job);
    obj = g_btlPartnerAttack;
    if (obj != NULL && obj->entries != NULL) {
        res = asdTMTexTableGetNode(8, 0);
        renderCtxSelectTexture(g_renderCtx, res->texture);
        renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
        btlLabelDrawActiveEntries(obj->entries);
    }
    return 0;
}

} /* extern "C" */
