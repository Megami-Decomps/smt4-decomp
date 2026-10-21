#include "common.h"
#include <new>

struct Obj557ae8 {
    Obj557ae8();

    u8* dispatchTable;       // 0x00
    u8 unk04[0x12C];         // 0x04
};

struct LmapScene {
    u8 unk00[0x1A8];         // 0x000
    Obj557ae8* object;       // 0x1A8
};

extern "C" {
void* asdOperatorNew(u32 size);
extern u8 DAT_00557c60;
extern LmapScene* g_lmapScene;

void FUN_002964f8(void)
{
    Obj557ae8* object = static_cast<Obj557ae8*>(asdOperatorNew(0x130));
    if (object != NULL) {
        object = new (object) Obj557ae8;
        object->dispatchTable = &DAT_00557c60;
    }
    g_lmapScene->object = object;
}
}
