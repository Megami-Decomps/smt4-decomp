#include "common.h"

extern "C" {

void asdMemFree(void *memory);

typedef struct Object Object;
typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*destroy)(Object *object);
} ObjectVtbl;
struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
};

typedef struct CecProcess {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Object *object;
} CecProcess;
extern CecProcess *g_cecProcess;

/* Destroys the CEC process: its object (if any), then the process itself. */
void FUN_00237680(void)
{
    CecProcess *process;

    process = g_cecProcess;
    if (g_cecProcess->object != NULL) {
        g_cecProcess->object->vtbl->destroy(g_cecProcess->object);
    }
    process->object = NULL;
    asdMemFree(process);
    g_cecProcess = NULL;
}

} /* extern "C" */
