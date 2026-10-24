#include "map/lmapMain.h"
#include "common.h"
#include <new>

struct Obj557ae8 {
    Obj557ae8();

    u8* dispatchTable;       // 0x00
    u8 unk04[0x12C];         // 0x04
};



extern "C" {
void* asdOperatorNew(u32 size);
extern u8 _ZTV9Obj557c58[]; /* the status-screen model holder's vtable (classes/Obj557c58.h) */
extern LmapSceneA *g_lmapScene;

void FUN_002964f8(void)
{
    Obj557ae8* object = static_cast<Obj557ae8*>(asdOperatorNew(0x130));
    if (object != NULL) {
        object = new (object) Obj557ae8;
        object->dispatchTable = &_ZTV9Obj557c58[8];
    }
    g_lmapScene->script = reinterpret_cast<LmapScript *>(object);
}
}
