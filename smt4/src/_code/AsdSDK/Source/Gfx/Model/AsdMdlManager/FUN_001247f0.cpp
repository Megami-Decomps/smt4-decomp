/* NON_MATCHING: per-frame update of the model manager (advance model blends and swap finished ones, run node handlers, refresh the animation tables, then move finished loads from the pending list to the active list); written from the decompilation, the per-frame weight update of the animation node reached through an RTTI cast (blend ratio and its inverse written into the node's two weight pairs) is not reproduced, only the blend timing and the finish swap */
#include "common.h"

#define MDL_FLAG_HIDDEN_MASK 0x200002
#define MDL_FLAG_FORCE_UPDATE 8
#define MDL_BODY_FLAG_BLENDING 1
#define MDL_NODE_FLAG_HAS_HANDLER 2

struct MdlNode {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 owner;
};

struct MdlBody {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x3C];
    /* 0x40 */ f32 blendTime;
    /* 0x44 */ f32 blendDuration;
    /* 0x48 */ u8 unk48[4];
    /* 0x4C */ u32 owner;
    /* 0x50 */ u32 finishedHandle;
    /* 0x54 */ u32 nextHandle;
    /* 0x58 */ u32 unk58;
    /* 0x5C */ u8 unk5C[0x4C];
    /* 0xA0 */ s32 nodeCount;
    /* 0xA4 */ MdlNode *nodes;       /* 0xC bytes each */
};

struct MdlModel {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u32 requestHandle;
    /* 0x08 */ MdlBody *body;
    /* 0x0C */ u8 unk0C[0xC];
    /* 0x18 */ u32 tables;             /* per-node instance tables (0x1C bytes each) */
};

struct MdlListEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ MdlModel *model;
    /* 0x0C */ u8 unk0C[0xC];
    /* 0x18 */ MdlListEntry *next;
};

extern "C" {
extern MdlListEntry *g_asdMdlList;
extern MdlListEntry *g_asdMdlList2;
extern s32 DAT_004dae28;                  /* models accepted from the pending list per frame */

void FUN_00138c14(void);
void FUN_00138d0c(u32 instance, MdlModel *model, s32 node, u32 index);
void asdModelRebuildAttributeRecords(MdlBody *body, u32 argument);
void asdMdlNodeInit(s32 owner, u32 index);
void asdListAdd(MdlListEntry **list, MdlListEntry *entry, s32 flag);
void indexedListErase(MdlListEntry **list, MdlListEntry *entry);
void asdMdlObjectBuildBounds(MdlListEntry *entry);
void FUN_002b2988(u32 result, s32 size);
void FUN_002b2ae8(u32 owner, s32 node, s32 *out);
void resOwnerRunNodeHandlers(u32 owner);
u32 FUN_002b2b64(MdlBody *body);
u32 asdFileRequestGetResult(u32 handle, s32 *size);
s32 asdFileRequestIsFinished(void);

static __inline bool mdlUpdatable(const MdlModel *model)
{
    return model != NULL && ((model->flags & MDL_FLAG_HIDDEN_MASK) == 0 || (model->flags & MDL_FLAG_FORCE_UPDATE) != 0);
}

void FUN_001247f0(void)
{
    for (MdlListEntry *entry = g_asdMdlList; entry != NULL;) {
        MdlModel *model = entry->model;
        entry = entry->next;
        if (!mdlUpdatable(model))
            continue;
        MdlBody *body = model->body;

        if ((body->flags & MDL_BODY_FLAG_BLENDING) != 0) {
            body->blendTime += 1.0f;
            f32 ratio = 1.0f;
            if (body->blendDuration != 0.0f) {
                ratio = body->blendTime / body->blendDuration;
                if (ratio > 1.0f)
                    ratio = 1.0f;
            }
            if (ratio >= 1.0f) {
                u32 next = body->nextHandle;
                body->nextHandle = 0;
                body->finishedHandle = next;
                body->flags &= ~MDL_BODY_FLAG_BLENDING;
                asdModelRebuildAttributeRecords(body, body->unk58);
            }
        }
        FUN_002b2b64(body);
        for (s32 node = 0; node < body->nodeCount; node++) {
            if ((body->nodes[node].flags & MDL_NODE_FLAG_HAS_HANDLER) != 0)
                resOwnerRunNodeHandlers(body->nodes[node].owner);
        }

        if (model->body != NULL && model->body->owner != 0 && model->tables != 0) {
            s32 nodeCount = body->nodeCount;
            for (s32 node = 0; node < nodeCount; node++) {
                u32 *table = reinterpret_cast<u32 *>(model->tables + node * 0x1C);
                for (u32 index = 0; index < table[1]; index++)
                    FUN_00138d0c(table[0] + index * 0x84, model, node, index);
                s32 bounds[3];
                FUN_002b2ae8(model->body->owner, node, bounds);
                table[2] = bounds[0];
                table[3] = bounds[1];
                table[4] = bounds[2];
            }
        }
    }

    for (MdlListEntry *entry = g_asdMdlList; entry != NULL; entry = entry->next) {
        if (mdlUpdatable(entry->model))
            FUN_00138c14();
    }

    s32 accepted = 0;
    MdlListEntry *pending = g_asdMdlList2;
    while (pending != NULL && accepted < DAT_004dae28) {
        MdlListEntry *entry = pending;
        MdlModel *model = entry->model;
        pending = entry->next;
        if (model->requestHandle == 0 || asdFileRequestIsFinished() == 0)
            continue;
        s32 size;
        u32 result = asdFileRequestGetResult(model->requestHandle, &size);
        FUN_002b2988(result, size);
        *reinterpret_cast<u32 *>(model->body->owner + 4) = result;
        asdMdlNodeInit(model->body->owner, *reinterpret_cast<u32 *>(model->body->owner + 8) & 0xFFFF);
        asdMdlObjectBuildBounds(entry);
        indexedListErase(&g_asdMdlList2, entry);
        asdListAdd(&g_asdMdlList, entry, 0);
        accepted++;
    }
}

} /* extern "C" */
