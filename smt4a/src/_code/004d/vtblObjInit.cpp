#include "shard/Shard004D.h"

extern "C" {

typedef struct VtblObj VtblObj;
typedef struct VtblObjVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void *unk04;
    /* 0x08 */ void *unk08;
    /* 0x0C */ s32 (*slot3)(VtblObj *obj, u32 arg);
    /* 0x10 */ void (*slot4)(VtblObj *obj, u32 a, u32 b);
    /* 0x14 */ void *unk14;
    /* 0x18 */ s32 (*slot6)(VtblObj *obj, u32 arg);
    /* 0x1C */ void (*slot7)(VtblObj *obj, u32 arg);
} VtblObjVtbl;
struct VtblObj {
    /* 0x00 */ const VtblObjVtbl *vtbl;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 unk08;
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ s32 unk10;
};

void vtblObjInit(VtblObj *obj, u32 a, u32 b, u32 c)
{
    obj->vtbl->slot4(obj, a, b);
    obj->unk04 = 0;
    obj->unk08 = 0;
    obj->unk0C = 0;
    obj->unk10 = obj->vtbl->slot6(obj, c);
}

} /* extern "C" */
