/* NON_MATCHING: readable rewrite compiles (189 vs 210 rows); retail keeps the address of the 0x80-byte block at +0x56c in a register and schedules the field clears differently */
#include "common.h"

struct Vec3 {
    u32 x, y, z;    // raw words, copied verbatim
};

// Scene viewer object: a model loaded from `<name>.bam` with a camera and
// environment, plus the "Dum_" dummy nodes found in the model and two marker models.
struct MikadoScene {
    u32 unk00;
    u32 unk04;
    u32 unk08;
    s32 dummyCount;         // 0x0c: number of "Dum_" nodes recorded
    u32 unk10;
    u8 unk14;
    u8 hasMarkers;          // 0x15
    u8 unk16[2];
    u32 unk18;
    u32 model;              // 0x1c
    u32 pointModel;         // 0x20
    u32 arrowModel;         // 0x24
    u8 unk28[0x56c - 0x28];
    u32 cameraBlock;        // 0x56c: 0x80-byte cleared block, first word is the camera node
    u8 unk570[0x1604 - 0x570];
    Vec3 viewStart;         // 0x1604
    Vec3 viewCurrent;       // 0x1610
    u8 unk161c[0x1634 - 0x161c];
    Vec3 cameraPos;         // 0x1634
    Vec3 cameraTarget;      // 0x1640
    u8 unk164c[0x1658 - 0x164c];
    Vec3 markerPos;         // 0x1658
    u8 unk1664[0x1670 - 0x1664];
    Vec3 dummies[1];        // 0x1670 (variable length)
};

extern "C" {

void memClear(void* block, s32 size);
void textFormatBuffer(char* out, const char* format, ...);
u32 asdMdlManagerCreateLoaded(const char* name, s32 mode);
void FUN_002a0428(u32 model, s32 arg);
void FUN_00341340(MikadoScene* scene, const char* name);
void FUN_002a09b4(const char* name, s32 arg);
void FUN_002a04f0(s32 arg);
u32* FUN_002a86a4(u32 node);
s32 FUN_00100c4c(const char* name, const char* prefix);
void nodeSetTranslation(u32 node, s32 index, Vec3* translation);

// Loads the scene model `name` (or `override` when given) with its camera and records its dummy nodes.
void FUN_00234f5c(MikadoScene* scene, const char* name, const char* override)
{
    char path[128];
    scene->model = 0;
    scene->unk18 = 0;
    scene->unk00 = 0;
    scene->unk08 = 0;
    scene->unk04 = 0;
    scene->dummyCount = 0;
    scene->hasMarkers = 0;
    memClear(&scene->cameraBlock, 0x80);
    if (override != NULL) {
        textFormatBuffer(path, "%s.bam", override);
    } else {
        textFormatBuffer(path, "%s.bam", name);
    }
    scene->model = asdMdlManagerCreateLoaded(path, 7);
    FUN_002a0428(scene->model, 1);
    textFormatBuffer(path, "%s.bccam", name);
    FUN_00341340(scene, path);
    textFormatBuffer(path, "%s.bcenv", name);
    FUN_002a09b4(path, 0);
    FUN_002a04f0(0);

    // Camera position and target come from the camera node and its look-at.
    u32* camera = reinterpret_cast<u32*>(scene->cameraBlock);
    scene->cameraPos.x = camera[0x58 / 4];
    scene->cameraPos.y = camera[0x68 / 4];
    scene->cameraPos.z = camera[0x78 / 4];
    u32* target = FUN_002a86a4(scene->cameraBlock);
    scene->cameraTarget.x = target[0];
    scene->cameraTarget.y = target[1];
    scene->cameraTarget.z = target[2];
    scene->viewStart = scene->cameraPos;
    scene->viewCurrent.x = target[0];
    scene->viewCurrent.y = target[1];
    scene->viewCurrent.z = target[2];

    // Walk the model's node table and record every node named "Dum_*".
    u32* resource = *reinterpret_cast<u32**>(*reinterpret_cast<s32*>(*reinterpret_cast<s32*>(scene->model + 8) + 0x2c) + 8);
    if (resource != NULL && (~*resource & 0x40000092) != 0) resource = NULL;
    u32 nodesOffset = resource[0x38];
    s32* nodes = nodesOffset != 0 ? reinterpret_cast<s32*>(nodesOffset + (s32)(resource + 0x38)) : NULL;
    s32 nodeCount = nodes[0x18 / 4];
    for (s32 i = 0; i < nodeCount; i++) {
        s32* table = nodes[0x1c / 4] != 0 ? reinterpret_cast<s32*>((s32)&nodes[0x1c / 4] + nodes[0x1c / 4]) : NULL;
        s32* node = NULL;
        if (table != NULL) {
            s32* entry = reinterpret_cast<s32*>((s32)table + i * 0x10 + 0x28);
            node = *entry != 0 ? reinterpret_cast<s32*>((s32)entry + *entry) : NULL;
        }
        const char* nodeName = *node != 0 ? reinterpret_cast<const char*>((s32)node + *node) : NULL;
        if (FUN_00100c4c(nodeName, "Dum_")) {
            scene->dummies[scene->dummyCount].x = node[0xe];
            scene->dummies[scene->dummyCount].y = node[0xf];
            scene->dummies[scene->dummyCount].z = node[0x10];
            scene->dummyCount++;
        }
    }
    if (scene->dummyCount > 0) {
        scene->hasMarkers = 1;
        textFormatBuffer(path, "mikado/yaji.bam");
        scene->arrowModel = asdMdlManagerCreateLoaded(path, 7);
        FUN_002a0428(scene->arrowModel, 1);
        textFormatBuffer(path, "mikado/point.bam");
        scene->pointModel = asdMdlManagerCreateLoaded(path, 7);
        FUN_002a0428(scene->pointModel, 1);
        scene->markerPos = scene->dummies[0];
        nodeSetTranslation(*reinterpret_cast<u32*>(scene->pointModel + 8), 0, &scene->markerPos);
    }
}

} /* extern "C" */
