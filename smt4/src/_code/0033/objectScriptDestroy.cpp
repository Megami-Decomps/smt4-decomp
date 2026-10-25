#include "common.h"

extern "C" {

void mdlPartsRelease(void *model);

struct Script;
typedef struct ScriptVtbl {
    /* 0x0 */ void *unk0;
    /* 0x4 */ void (*destroy)(struct Script *script);
} ScriptVtbl;

typedef struct Script {
    /* 0x0 */ ScriptVtbl *vtbl;
} Script;

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x4394];
    /* 0x4394 */ Script *script;
} Obj;

void objectScriptDestroy(Obj *obj)
{
    if (obj->script != NULL) {
        mdlPartsRelease(obj->script);
        if (obj->script != NULL) {
            obj->script->vtbl->destroy(obj->script);
        }
        obj->script = NULL;
    }
}

} /* extern "C" */
