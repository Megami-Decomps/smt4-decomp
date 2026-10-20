#include "shard/Shard003B.h"

extern "C" {

typedef struct MdlData {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 unk28;
} MdlData;

typedef struct MdlNode {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ MdlData *data;
} MdlNode;

typedef struct MdlBody {
    /* 0x000 */ u8 unk000[0x220];
    /* 0x220 */ MdlNode *node;
} MdlBody;

typedef struct MdlPart {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ MdlBody *body;
} MdlPart;

typedef struct MdlManager {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ MdlPart *part;
} MdlManager;

typedef struct ModelState {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s16 kind;
    /* 0x0E */ u8 unk0E[0x46];
    /* 0x54 */ MdlManager *manager;
} ModelState;

extern void asdMdlManagerDestroy(MdlManager *manager);
extern MdlManager *asdMdlManagerClone(MdlManager *source, u32 flags);

/* Copies the model state from `src` to `dst`; a kind-3 source clones its model manager and flags the clone. */
void modelStateCopy(ModelState *dst, ModelState *src)
{
    MdlManager *manager;

    if (src->kind == 3) {
        if (dst->manager != NULL) {
            asdMdlManagerDestroy(dst->manager);
        }
        manager = asdMdlManagerClone(src->manager, 0);
        dst->manager = manager;
        manager->part->body->node->data->unk28 = 1;
    }
    dst->kind = src->kind;
}

} /* extern "C" */
