#include "common.h"

extern "C" {

int asdMemFree(void *ptr);

struct CecObject;
typedef struct CecObjectVtbl {
    /* 0x0 */ void *unk0;
    /* 0x4 */ void (*destroy)(struct CecObject *object);
} CecObjectVtbl;

typedef struct CecObject {
    /* 0x0 */ CecObjectVtbl *vtbl;
} CecObject;

typedef struct CecProcess {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ CecObject *object;
} CecProcess;

extern CecProcess *g_cecProcess; /* 0x43de68 */

void cecProcessDestroy(void)
{
    CecProcess *process = g_cecProcess;

    if (g_cecProcess->object != NULL) {
        g_cecProcess->object->vtbl->destroy(g_cecProcess->object);
    }
    process->object = NULL;
    asdMemFree(process);
    g_cecProcess = NULL;
}

} /* extern "C" */
