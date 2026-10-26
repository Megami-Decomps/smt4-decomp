#include "common.h"
#include "code/Code0022_Smt4.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x530];
    /* 0x530 */ u32 entries[1];
} Obj;

extern int flaggedValueHolderGetTotal(void);

u32 FUN_0022b8c0(Obj *obj)
{
    int index = flaggedValueHolderGetTotal();

    return obj->entries[index];
}

} /* extern "C" */
