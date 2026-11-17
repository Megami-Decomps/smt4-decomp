#include "common.h"
#include "Model/MoriModelContent.h"
#include "code/Code001c.h"

extern "C" {

struct Scene { u8 unk000[0x190]; MoriModelContent *object; };
extern Scene *g_lmapScene;
void *asdMemoryAllocTraced(u32 size, const char *file, u32 line);

void lmapCreateJadeKnife(void)
{
    MoriModelContent *object = static_cast<MoriModelContent *>(asdMemoryAllocTraced(32, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapPlayer.cpp", 0x31a1));
    if (object != NULL) {
        object = modelListInit(object);
    }
    g_lmapScene->object = object;
    modelLoadFileAsyncByName(object, "map/all/jade_knife_e.bam");
}

} /* extern "C" */
