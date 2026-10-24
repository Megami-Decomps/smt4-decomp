/* NON_MATCHING: the final store of the element array pointer (scene+0xe8) is scheduled ahead of the strd of elements/count; the element constructor _ZN16MoriSceneElementC1Ev still needs its _ZN16MoriSceneElementC1Ev name */
// Builds a model scene: allocates its resource pool from the extra heap and constructs its element array.
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

/* Number of scene element slots and the memory/model limits a scene is built with. */
struct MoriSceneConfig {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 elementCount;
    /* 0x08 */ u16 unk08;
    /* 0x0A */ u8 unk0A;
    /* 0x0B */ u8 unk0B;
    /* 0x0C */ u8 unk0C;
    /* 0x0D */ u8 unk0D;
};

extern "C" void *asdMemoryAllocDefault(u32 size, const char *file, u32 line);

struct MoriSceneElement {
    u8 unk00[0x704];

    MoriSceneElement();
    ~MoriSceneElement();
    static void *operator new[](u32 bytes, const char *file, u32 line) throw() { return asdMemoryAllocDefault(bytes, file, line); }
};

struct MoriSceneElementArray {
    /* 0x0 */ MoriSceneElement *elements;
    /* 0x4 */ u32 count;
};

struct MoriModelScene {
    /* 0x000 */ u8 unk000[0xc];
    /* 0x00C */ void *heapBlock;
    /* 0x010 */ u8 unk010[0xd8];
    /* 0x0E8 */ MoriSceneElementArray *elementArray;
    /* 0x0EC */ MoriSceneConfig defaultConfig;
    /* 0x0FC */ MoriSceneElementArray elements;
    /* 0x104 */ u32 unk104;
};

extern "C" {
u32 FUN_0045ab0c(const MoriSceneConfig *config);
void FUN_0045a6a4(void *pool, void *heapBlock, const MoriSceneConfig *config);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 option);
extern const char DAT_005260d0[];

/* Builds a model scene: allocates its pool from the extra heap and creates the element array. */
void FUN_004063b0(MoriModelScene *scene, const MoriSceneConfig *config)
{
    if (config == NULL) {
        scene->defaultConfig.unk04 = 2;
        scene->defaultConfig.elementCount = 2;
        scene->defaultConfig.unk08 = 1;
        scene->defaultConfig.unk0A = 0;
        scene->defaultConfig.unk0B = 0;
        scene->defaultConfig.unk0C = 1;
        scene->defaultConfig.unk00 = 0xffff;
        config = &scene->defaultConfig;
        scene->defaultConfig.unk0D = 0;
    }
    scene->unk104 = config->elementCount;
    u32 poolSize = FUN_0045ab0c(config);
    asdDebugTrace(DAT_005260d0, 83);
    scene->heapBlock = asdMemoryAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, poolSize, 1);
    FUN_0045a6a4(scene->unk010, scene->heapBlock, config);

    MoriSceneElement *elements = new (DAT_005260d0, 88) MoriSceneElement[scene->defaultConfig.elementCount];
    scene->elements.count = scene->defaultConfig.elementCount;
    scene->elements.elements = elements;
    scene->elementArray = &scene->elements;
}
}
