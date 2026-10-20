/* NON_MATCHING: after the allocation retail loads the global's address into r1 (then clears r1) where built uses r2 for it. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

typedef struct BtlReflect {
    /* 0x00 */ void *owner;
    /* 0x04 */ u8 unk04[0x24];
    /* 0x28 */ void *drawTask;
} BtlReflect;

/* The reflect effect's work block: owner plus two cleared words. */
typedef struct BtlReflectWork {
    /* 0x00 */ BtlReflect *reflect;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
} BtlReflectWork;

void *taskCreateDraw(const char *name, int type, int a, int b, void *calc, void *draw, void *arg, void *value);
void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void FUN_0030fa74(void);
extern BtlReflectWork *DAT_00434290;

/* Creates the reflect effect's draw task and its work block. */
void FUN_002f34cc(BtlReflect *reflect)
{
    BtlReflectWork *work;

    reflect->drawTask = taskCreateDraw("btlActionReflect Calc", 2, 0, 0, (void *)0x002eb5b4, (void *)FUN_0030fa74, reflect, reflect->owner);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlActionReflect.cpp", 3138);
    work = (BtlReflectWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(BtlReflectWork), 1);
    DAT_00434290 = work;
    work->unk04 = 0;
    work->reflect = reflect;
    work->unk08 = 0;
    work->unk0c = 0;
}

} /* extern "C" */
