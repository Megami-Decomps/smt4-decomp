#include "common.h"

extern "C" {

struct Scene { u8 unk000[0x190]; void *object; };
extern Scene *g_lmapScene;
void *FUN_00178b04(u32 size, const char *file, u32 line);
void *modelListInit(void *memory);
void FUN_001cd3ec(void *object, const char *name);

void lmapCreateJadeKnife(void)
{
    void *object = FUN_00178b04(32, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapPlayer.cpp", 0x31a1);
    if (object != NULL) {
        object = modelListInit(object);
    }
    g_lmapScene->object = object;
    FUN_001cd3ec(object, "map/all/jade_knife_e.bam");
}

} /* extern "C" */
