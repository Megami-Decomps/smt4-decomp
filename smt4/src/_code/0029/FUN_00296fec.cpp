/* NON_MATCHING: retail pairs the stores to +4/+8 into one stm before the child check and writes +0x0C with write-back so the +0x238 store uses it as base; built orders the stores differently. */
#include "common.h"
#include "shard/GameDataBlocks.h"
#include "gamedata/GameDataAccess_Smt4.h"

extern "C" {

typedef struct Child296fec Child296fec;

typedef struct ChildVtbl296fec {
    void *unk00;
    void (*destroy)(Child296fec *self);  /* 0x04 */
} ChildVtbl296fec;

struct Child296fec {
    ChildVtbl296fec *vtbl;
};

typedef struct Obj296fec {
    /* 0x000 */ u32 unk00;
    /* 0x004 */ u32 unk04;
    /* 0x008 */ u32 unk08;
    /* 0x00C */ u32 unk0c;
    /* 0x010 */ u8 unk10[0x1f8];
    /* 0x208 */ Child296fec *child;
    /* 0x20C */ u8 unk20c[0x2c];
    /* 0x238 */ u32 unk238;
} Obj296fec;

void messageMainSetEnabled(int a);

/* Resets the object: drops its child, clears the counters and re-initialises the two subsystems. */
void FUN_00296fec(Obj296fec *obj)
{
    obj->unk04 = 0;
    obj->unk08 = 0;
    if (obj->child != NULL) {
        obj->child->vtbl->destroy(obj->child);
        obj->child = NULL;
    }
    obj->unk00 = 0;
    obj->unk0c = 0;
    obj->unk238 = 50;
    gameDataBlocksAddFlags(4);
    gameDataFlagsSetBits(4);
    messageMainSetEnabled(0);
}

} /* extern "C" */
