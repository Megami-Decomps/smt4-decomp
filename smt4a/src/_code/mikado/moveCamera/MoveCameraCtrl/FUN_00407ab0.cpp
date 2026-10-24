/* NON_MATCHING: sets up the mikado move-camera controller (camera model, camera data, named points and the two marker models); written from the decompilation, allocation tracing and register scheduling not compared with retail */
#include "common.h"

struct McVec3 {
    u32 x, y, z;
};

struct McModelList {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 object;          /* the registered scene object */
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u8 *data;
};

struct McNameTable {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ u8 *entries;         /* 0xC bytes each, the name pointer at 0x14 relative to 0x78 base */
};

struct McSceneObject {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ struct { u8 unk[8]; s32 count; } *nameList;
    /* 0x10C */ u8 unk10C[0x104];
    /* 0x210 */ McNameTable *table;
};

struct McOwner {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ struct { u8 unk[0x48]; u32 **cameraData; } *scene;
};

struct MoveCameraCtrl {
    /* 0x000 */ u32 unk00;
    /* 0x004 */ u32 unk04;
    /* 0x008 */ u32 unk08;
    /* 0x00C */ s32 pointCount;
    /* 0x010 */ u8 unk10[5];
    /* 0x015 */ u8 hasPoints;
    /* 0x016 */ u8 unk16[2];
    /* 0x018 */ McModelList *cameraModel;
    /* 0x01C */ McModelList *pointModel;
    /* 0x020 */ McModelList *arrowModel;
    /* 0x024 */ u8 unk24[0x570];
    /* 0x594 */ McOwner *owner;
    /* 0x598 */ u8 unk598[0x1C];
    /* 0x5B4 */ McVec3 position;
    /* 0x5C0 */ McVec3 target;
    /* 0x5CC */ u8 unk5CC[0x18];
    /* 0x5E4 */ McVec3 positionB;
    /* 0x5F0 */ McVec3 targetB;
    /* 0x5FC */ u8 unk5FC[0xC];
    /* 0x608 */ McVec3 pointStart;
    /* 0x614 */ u8 unk614[0xC];
    /* 0x620 */ McVec3 points[0x20];
};

extern "C" {
extern u32 g_handleRegistry;

void textFormatBuffer(char *out, const char *format, ...);
void *FUN_00178b04(u32 size, const char *file, u32 line);
McModelList *modelListInit(void *memory);
void FUN_0040aa6c(void);
void FUN_0040aad4(McModelList *list, s32 flag);
void FUN_0040ab7c(McModelList *list, s32 flag);
void handleRegistryRegisterObject(u32 registry, u32 object);
void FUN_003fe86c(u32 object, s32 a, s32 b);
void controllerSetPosition(u32 object);
void FUN_003fd7b4(u32 object);
void FUN_00407110(MoveCameraCtrl *ctrl, const char *name);
void resourceOwnerLoadNamed(u32 registry, const char *name);
s32 FUN_0040af60(u32 registry);
void FUN_0040ae70(u32 registry, s32 flag);
void FUN_0045b538(u8 *data);
const char *FUN_00102c30(const void *name, const char *prefix);
void lookupNameEntry(McSceneObject *object, const char *entry, McVec3 *out);

#define MC_SOURCE "c:\\SMT4F\\SMT4F\\sdds4\\program\\mikado\\moveCamera\\MoveCameraCtrl.cpp"

/* Allocates and constructs one model list. */
static __inline McModelList *mcCreateModelList(u32 line)
{
    void *memory = FUN_00178b04(0x20, MC_SOURCE, line);
    return memory != NULL ? modelListInit(memory) : NULL;
}

void FUN_00407ab0(MoveCameraCtrl *ctrl, const char *cameraName, const char *dataName)
{
    ctrl->cameraModel = NULL;
    ctrl->unk00 = 0;
    ctrl->unk08 = 0;
    ctrl->unk04 = 0;
    ctrl->pointCount = 0;
    if (dataName == NULL)
        dataName = cameraName;
    ctrl->hasPoints = 0;

    char path[128];
    textFormatBuffer(path, "%s.bam", dataName);
    ctrl->cameraModel = mcCreateModelList(0xF5);
    FUN_0040aa6c();
    FUN_0040aad4(ctrl->cameraModel, 0);
    FUN_0045b538(ctrl->cameraModel->data + 0xC);
    u32 object = ctrl->cameraModel->object;
    handleRegistryRegisterObject(g_handleRegistry, object);
    FUN_003fe86c(object, 0, 1);
    controllerSetPosition(object);
    FUN_003fd7b4(object);

    textFormatBuffer(path, "%s_cam.bch", cameraName);
    FUN_00407110(ctrl, path);
    textFormatBuffer(path, "%s.bch", cameraName);
    u32 registry = g_handleRegistry;
    resourceOwnerLoadNamed(registry, path);
    if (FUN_0040af60(registry) != 0)
        FUN_0040ae70(registry, 1);

    u32 *cameraData = *ctrl->owner->scene->cameraData;
    u32 *cameraPose = reinterpret_cast<u32 *>(cameraData[0x30 / 4]);
    ctrl->positionB.x = cameraData[0x1C / 4];
    ctrl->positionB.y = cameraData[0x20 / 4];
    ctrl->positionB.z = cameraData[0x24 / 4];
    ctrl->targetB.x = cameraPose[0];
    ctrl->targetB.y = cameraPose[1];
    ctrl->targetB.z = cameraPose[2];
    ctrl->target = ctrl->targetB;
    ctrl->position = ctrl->positionB;

    McSceneObject *sceneObject = reinterpret_cast<McSceneObject *>(object);
    s32 nodeCount = sceneObject->nameList->count;
    u8 *nodes = sceneObject->table->entries;
    for (s32 i = 0; i < nodeCount; i++) {
        const char *entry = FUN_00102c30(*reinterpret_cast<void **>(nodes + i * 0xC + 0x14), "Dum_");
        if (entry != NULL) {
            McVec3 point;
            lookupNameEntry(sceneObject, entry, &point);
            ctrl->points[ctrl->pointCount] = point;
            ctrl->pointCount++;
        }
    }

    if (ctrl->pointCount > 0) {
        ctrl->hasPoints = 1;
        textFormatBuffer(path, "mikado/yaji.bam");
        ctrl->arrowModel = mcCreateModelList(0x15E);
        FUN_0040aa6c();
        FUN_0040ab7c(ctrl->arrowModel, 0);
        FUN_0040aad4(ctrl->arrowModel, 0);
        u32 arrow = ctrl->arrowModel->object;
        handleRegistryRegisterObject(g_handleRegistry, arrow);
        FUN_003fe86c(arrow, 0, 1);
        controllerSetPosition(arrow);
        FUN_003fd7b4(arrow);

        textFormatBuffer(path, "mikado/point.bam");
        ctrl->pointModel = mcCreateModelList(0x16C);
        FUN_0040aa6c();
        FUN_0040ab7c(ctrl->pointModel, 0);
        FUN_0040aad4(ctrl->pointModel, 0);
        u32 marker = ctrl->pointModel->object;
        handleRegistryRegisterObject(g_handleRegistry, marker);
        FUN_003fe86c(marker, 0, 1);
        controllerSetPosition(marker);
        ctrl->pointStart = ctrl->points[0];
        FUN_003fd7b4(marker);
    }
}

} /* extern "C" */
