/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 29 vs built 25 rows, 5 diff lines. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

void *asdMemoryAlloc(int, int, int, s32 size, int align);
AsdMdlNode *FUN_002bd97c(void);

/* Allocates a zeroed model object and gives it a node. */
AsdMdlObject *asdMdlObjectNew(void)
{
    AsdMdlObject *obj = (AsdMdlObject *)asdMemoryAlloc(0x100, 0x100, 0, 0x1c, 1);

    obj->flags = 0;
    obj->unk04 = NULL;
    obj->node = NULL;
    obj->unk0c = 0;
    obj->unk10 = 0;
    obj->unk14 = 0;
    obj->records = NULL;
    obj->node = FUN_002bd97c();
    obj->flags |= 0x200000;
    return obj;
}

} /* extern "C" */
