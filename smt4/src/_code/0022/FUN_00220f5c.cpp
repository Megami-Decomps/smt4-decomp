#include "common.h"

extern "C" {

int statusCameraDestroy(void);
int lmapSceneSetUnk134(int value);
int FUN_002a72c0(int arg);
extern int lmapSceneGetScript(void);

struct Script;
typedef struct ScriptVtbl {
    /* 0x0 */ void *unk0;
    /* 0x4 */ void (*destroy)(struct Script *script);
} ScriptVtbl;

typedef struct Script {
    /* 0x0 */ ScriptVtbl *vtbl;
} Script;

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ Script *script;
    /* 0x20 */ u8 unk20[0xC];
    /* 0x2C */ u8 unk2C;
} Obj;

void FUN_00220f5c(Obj *obj)
{
    statusCameraDestroy();
    if (lmapSceneGetScript() != 0) {
        lmapSceneSetUnk134(1);
    }
    if (obj->unk2C != 0) {
        FUN_002a72c0(0);
    }
    if (obj->script == NULL) {
        return;
    }
    obj->script->vtbl->destroy(obj->script);
}

} /* extern "C" */
