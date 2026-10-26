#include "battle/btlReflect.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

typedef struct BtlReflect {
    /* 0x00 */ void *owner;
    /* 0x04 */ u8 unk04[0x24];
    /* 0x28 */ void *drawTask;
} BtlReflect;

/* The reflect effect's work block: owner plus two cleared words. */

void *taskCreateDraw(const char *name, int type, int a, int b, void (*calc)(u32), void (*destroy)(), void *arg, void *value);
void FUN_0030fa74(void);
void FUN_002eb5b4(u32 job);
extern ReflectContext *g_btlActionReflect;

/* Creates the reflect effect's draw task and its work block. */
void FUN_002f34cc(BtlReflect *reflect)
{
    ReflectContext *work;

    reflect->drawTask = taskCreateDraw("btlActionReflect Calc", 2, 0, 0, FUN_002eb5b4, FUN_0030fa74, reflect, reflect->owner);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlActionReflect.cpp", 3138);
    work = (ReflectContext *)asdMemAlloc(0x100, 0x100, 0, sizeof(ReflectContext), 1);
    g_btlActionReflect = work;
    work->count = 0;
    work->owner = reflect;
    work->head = 0;
    work->tail = 0;
}

} /* extern "C" */
