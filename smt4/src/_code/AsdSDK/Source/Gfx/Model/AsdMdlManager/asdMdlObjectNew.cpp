#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_004093e0[]; /* "c:\SMT4\XRD686\sdds4\Patch\AsdSDK\Source\Gfx\Model\AsdMdlManager.cpp": __FILE__ */

void *asdMemoryAlloc(int, int, int, s32 size, int align);
AsdMdlNode *FUN_001fe514(void);

/* Allocates a zeroed model object and gives it a node. */
AsdMdlObject *asdMdlObjectNew(void)
{
    asdDebugTrace(DAT_004093e0, 101);
    AsdMdlObject *obj = (AsdMdlObject *)asdMemoryAlloc(0x100, 0x100, 0, 0x1c, 1);

    obj->flags = 0;
    obj->request = NULL;
    obj->node = NULL;
    obj->unk0c = 0;
    obj->unk10 = 0;
    obj->unk14 = 0;
    obj->records = NULL;
    obj->node = FUN_001fe514();
    obj->flags |= 0x200000;
    return obj;
}

} /* extern "C" */
