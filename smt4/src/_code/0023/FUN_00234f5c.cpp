/* NON_MATCHING: retail reads the camera node straight from the scene ([r4,#0x56c]) but the payload argument through the block address, and keeps the argument registers in r5/r6 order; the self-relative node walk (nw::ut::RelativePointer) and the copies match in shape. */
#include "common.h"
#include <stdio.h>
#include "AsdSDK/AsdMemUtil.h"
#include "shard/S1NwGfx.h"

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

u32 asdMdlManagerCreateLoaded(const char* name, s32 mode);
void lightOwnerRegister(u32 model, s32 arg);
void FUN_00341340(MikadoScene* scene, const char* name);
void FUN_002a09b4(const char* name, s32 arg);
void FUN_002a04f0(s32 arg);
u32* cameraGetProviderEntryPayload(u32 node);
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
    u32* block = &scene->cameraBlock;
    memClear(block, 0x80);
    if (override != NULL) {
        sprintf(path, "%s.bam", override);
    } else {
        sprintf(path, "%s.bam", name);
    }
    scene->model = asdMdlManagerCreateLoaded(path, 7);
    lightOwnerRegister(scene->model, 1);
    sprintf(path, "%s.bccam", name);
    FUN_00341340(scene, path);
    sprintf(path, "%s.bcenv", name);
    FUN_002a09b4(path, 0);
    FUN_002a04f0(0);

    // Camera position and target come from the camera node and its look-at.
    u32* camera = reinterpret_cast<u32*>(*block);
    Vec3 position;
    position.x = camera[0x58 / 4];
    position.y = camera[0x68 / 4];
    position.z = camera[0x78 / 4];
    scene->cameraPos = position;
    Vec3 target = *reinterpret_cast<Vec3*>(cameraGetProviderEntryPayload(*block));
    scene->cameraTarget = target;
    scene->viewStart = scene->cameraPos;
    scene->viewCurrent = target;

    // Walk the model's node table and record every node named "Dum_*".
    u32* resource = *reinterpret_cast<u32**>(*reinterpret_cast<s32*>(*reinterpret_cast<s32*>(scene->model + 8) + 0x2c) + 8);
    if (resource != NULL && (~*resource & 0x40000092) != 0) resource = NULL;
    s32* nodes = static_cast<s32*>(reinterpret_cast<RelativePointer*>(&resource[0x38])->get());
    s32 nodeCount = nodes[0x18 / 4];
    for (s32 i = 0; i < nodeCount; i++) {
        u8* table = static_cast<u8*>(reinterpret_cast<RelativePointer*>(&nodes[0x1c / 4])->get());
        s32* node = NULL;
        if (table != NULL) {
            node = static_cast<s32*>(reinterpret_cast<RelativePointer*>(table + i * 0x10 + 0x28)->get());
        }
        const char* nodeName = static_cast<const char*>(reinterpret_cast<RelativePointer*>(node)->get());
        if (FUN_00100c4c(nodeName, "Dum_")) {
            Vec3 translation = *reinterpret_cast<Vec3*>(&node[0xe]);
            scene->dummies[scene->dummyCount].x = translation.x;
            scene->dummies[scene->dummyCount].y = translation.y;
            scene->dummies[scene->dummyCount].z = translation.z;
            scene->dummyCount++;
        }
    }
    if (scene->dummyCount > 0) {
        scene->hasMarkers = 1;
        sprintf(path, "mikado/yaji.bam");
        scene->arrowModel = asdMdlManagerCreateLoaded(path, 7);
        lightOwnerRegister(scene->arrowModel, 1);
        sprintf(path, "mikado/point.bam");
        scene->pointModel = asdMdlManagerCreateLoaded(path, 7);
        lightOwnerRegister(scene->pointModel, 1);
        scene->markerPos = scene->dummies[0];
        nodeSetTranslation(*reinterpret_cast<u32*>(scene->pointModel + 8), 0, &scene->markerPos);
    }
}

} /* extern "C" */
