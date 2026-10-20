#include "shard/Shard0038.h"

extern "C" {

typedef struct ObjBRecord {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
    /* 0x0C */ u16 d;
} ObjBRecord;

extern ObjBRef g_gameGlobals;

/* Copies a 14-byte record (three words and a halfword) into the object. */
void objBSetRecord2000(ObjBRecord *src)
{
    ObjB *obj = g_gameGlobals.instance;

    obj->unk2000 = src->a;
    obj->unk2004 = src->b;
    obj->unk2008 = src->c;
    obj->unk200C = src->d;
}

} /* extern "C" */
