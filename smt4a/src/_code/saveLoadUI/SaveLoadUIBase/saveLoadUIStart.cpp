#include "common.h"
#include "Model/MoriModelManager.h"

struct SaveLoadScreenModels {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ struct SaveLoadScreenObject *object;
};

struct SaveLoadScreenObject {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 flags;
};

/* The save/load screen (the part this reads). */
struct SaveLoadScreen {
    /* 0x000 */ u8 unk000[7];
    /* 0x007 */ u8 state;
    /* 0x008 */ u32 frame;
    /* 0x00C */ u8 nextState;
    /* 0x00D */ u8 previousState;
    /* 0x00E */ u8 unk00e[0x4a];
    /* 0x058 */ SaveLoadScreenModels *models;
    /* 0x05C */ u8 unk05c[0xc];
    /* 0x068 */ u8 suspended;
    /* 0x069 */ u8 unk069[0x28b];
    /* 0x2F4 */ s32 slotCount;
};

// Switch to a new state, remembering the previous one.
static inline void saveLoadSetState(SaveLoadScreen *screen, u8 state)
{
    screen->previousState = screen->state;
    screen->state = state;
    screen->frame = 0;
    screen->nextState = 0;
}

extern "C" {
extern const char DAT_00533ec0[];
extern const char DAT_00533f34[];
void FUN_002c7e6c(void);
void FUN_002c85b0(s32 value);
void gameGlobalsSetMenuOpenFlag(s32 value);
void FUN_0033449c(s32 value);
void FUN_0023b45c(s32 value);
void FUN_002c8538(s32 value);
void FUN_002f0384(s32 value);
void FUN_00215bd0(void);
void *asdMemoryAllocTraced(u32 size, const char *file, u32 line);
SaveLoadScreenModels *modelListInit(SaveLoadScreenModels *list);
void resourceOwnerLoadFileSync(SaveLoadScreenModels *list, const char *name);
void FUN_0040ab7c(SaveLoadScreenModels *list, s32 value);
void moriModelContentLoadBody(SaveLoadScreenModels *list, s32 mode);
void FUN_0045b538(void *object);
void modelPlayClip(SaveLoadScreenObject *object, s32 index, s32 mode, f32 first, f32 second);
void controllerSetPositionXyz(SaveLoadScreenObject *object, f32 x, f32 y, f32 z);
void saveLoadProcessCreate(s32 slot, s32 mode);

// Start the save/load screen: build its model list on first use, then queue the process.
void saveLoadUIStart(SaveLoadScreen *screen)
{
    FUN_002c7e6c();
    FUN_002c85b0(10);
    gameGlobalsSetMenuOpenFlag(1);
    FUN_0033449c(0);
    FUN_0023b45c(1);
    FUN_002c8538(1);
    FUN_002f0384(0);
    screen->suspended = 0;
    FUN_00215bd0();
    if (screen->models == NULL) {
        SaveLoadScreenModels *list = static_cast<SaveLoadScreenModels *>(asdMemoryAllocTraced(32, DAT_00533ec0, 0x930));
        if (list != NULL) {
            list = modelListInit(list);
        }
        screen->models = list;
        resourceOwnerLoadFileSync(list, DAT_00533f34);
        FUN_0040ab7c(screen->models, 0);
        moriModelContentLoadBody(screen->models, 0);
        FUN_0045b538(reinterpret_cast<u8 *>(reinterpret_cast<void **>(screen->models)[3]) + 0xc);
        SaveLoadScreenObject *object = screen->models->object;
        handleRegistryRegisterObject(g_handleRegistry, object);
        modelPlayClip(object, 0, 2, 0.0f, 0.0f);
        controllerSetPositionXyz(object, 0.0f, -10000.0f, 0.0f);
        object->flags |= 1;
    }
    saveLoadProcessCreate(screen->slotCount + 1, 1);
    saveLoadSetState(screen, 2);
}
}
