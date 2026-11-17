#include "common.h"
#include "gamedata/NamedVariantTable.h"

extern "C" {

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x1CFC];
    /* 0x1CFC */ const NamedVariantTableEntry *unk1CFC;
} Obj;

void FUN_002454c4(Obj *obj, const char *name, u32 a, int flag)
{
    const NamedVariantTableEntry *value = namedVariantTableGetEntries(a, name, flag != 0);

    obj->unk1CFC = value;
}

} /* extern "C" */
