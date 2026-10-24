#include "common.h"

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
extern void *g_handleRegistry;
void FUN_002c7e6c(void);
void FUN_002c85b0(s32 value);
void FUN_003343f0(s32 value);
void FUN_0033449c(s32 value);
void FUN_0023b45c(s32 value);
void FUN_002c8538(s32 value);
void FUN_002f0384(s32 value);
void FUN_00215bd0(void);
void *FUN_00178b04(u32 size, const char *file, u32 line);
SaveLoadScreenModels *modelListInit(SaveLoadScreenModels *list);
void FUN_0040aa6c(SaveLoadScreenModels *list, const char *name);
void FUN_0040ab7c(SaveLoadScreenModels *list, s32 value);
void FUN_0040aad4(SaveLoadScreenModels *list, s32 mode);
void FUN_0045b538(void *object);
void handleRegistryRegisterObject(void *registry, SaveLoadScreenObject *object);
void FUN_003fe86c(SaveLoadScreenObject *object, s32 index, s32 mode, f32 first, f32 second);
void FUN_003fd7b4(SaveLoadScreenObject *object, f32 x, f32 y, f32 z);
void saveLoadProcessCreate(s32 slot, s32 mode);

// Start the save/load screen: build its model list on first use, then queue the process.
void saveLoadUIStart(SaveLoadScreen *screen)
{
    FUN_002c7e6c();
    FUN_002c85b0(10);
    FUN_003343f0(1);
    FUN_0033449c(0);
    FUN_0023b45c(1);
    FUN_002c8538(1);
    FUN_002f0384(0);
    screen->suspended = 0;
    FUN_00215bd0();
    if (screen->models == NULL) {
        SaveLoadScreenModels *list = static_cast<SaveLoadScreenModels *>(FUN_00178b04(32, DAT_00533ec0, 0x930));
        if (list != NULL) {
            list = modelListInit(list);
        }
        screen->models = list;
        FUN_0040aa6c(list, DAT_00533f34);
        FUN_0040ab7c(screen->models, 0);
        FUN_0040aad4(screen->models, 0);
        FUN_0045b538(reinterpret_cast<u8 *>(reinterpret_cast<void **>(screen->models)[3]) + 0xc);
        SaveLoadScreenObject *object = screen->models->object;
        handleRegistryRegisterObject(g_handleRegistry, object);
        FUN_003fe86c(object, 0, 2, 0.0f, 0.0f);
        FUN_003fd7b4(object, 0.0f, -10000.0f, 0.0f);
        object->flags |= 1;
    }
    saveLoadProcessCreate(screen->slotCount + 1, 1);
    saveLoadSetState(screen, 2);
}
}
