/* NON_MATCHING: romwright 0.5.0 decompilation of `event3dOpeningCreate` (_code @ 0x37d770, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c884(...);
int uiSetFloatPair(...);
int asdProcessCreateSimple(...);
int FUN_0014f0dc(...);
int FUN_001523b8(...);
int FUN_00162ea4(...);
int asdMemoryAllocTracked(...);
int asdEnvResetModelBank(...);
int sysMemClear(...);
int FUN_0036b824(...);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int FUN_002caea0(...); /* 0x2caea0 */
extern int event3dOpeningDestroy(...); /* 0x372540 */
extern unsigned char LAB_0037d970; /* 0x37d970 */
extern unsigned int *g_event3dOpening; /* 0x57f4c0 */

/* Supplied declaration required: FUN_0013c884. */
/* Supplied declaration required: uiSetFloatPair. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001523b8. */
/* Supplied declaration required: FUN_00162ea4. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: asdEnvResetModelBank. */
extern unsigned int asdMdlManagerCreateSecondList(char *, unsigned int);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_0036b824. */
extern unsigned int FUN_00387350(char *);


unsigned int event3dOpeningCreate(void)

{
/* irregular: 12 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  
  if (g_event3dOpening == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x578,1);
    g_event3dOpening = puVar1;
    sysMemClear();
    FUN_0013c884(puVar1 + 1,1);
    puVar1[0x144] = 0;
    puVar1[0x145] = 0;
    puVar1[0x146] = 0;
    puVar1[0x147] = 0;
    puVar1[0x148] = 0;
    puVar1[0x149] = 0x40a00000;
    puVar1[0x14d] = 0x41f00000;
    puVar1[0x14e] = 0x3f800000;
    puVar1[0x14f] = 0x461c4000;
    puVar1[0x14a] = 0;
    puVar1[0x14b] = 0x3f800000;
    puVar1[0x14c] = 0;
    puVar1[0x150] = 0x3fd55555;
    puVar1[0x155] = 0x40a00000;
    uiSetFloatPair(puVar1 + 1);
    FUN_0014f0dc(puVar1 + 1,puVar1 + 0x144,puVar1 + 0x147,puVar1 + 0x14a);
    FUN_001523b8(puVar1 + 1,1);
    FUN_0036b824(puVar1 + 1);
    puVar2 = &LAB_0037d970;
    asdProcessCreateSimple(&LAB_0037d970,4,0,0,FUN_002caea0,event3dOpeningDestroy,puVar1);
    *puVar1 = (unsigned int)puVar2;
    FUN_00162ea4();
    puVar1[0x15a] = 1;
    puVar1[0x15b] = 0;
    asdEnvResetModelBank("event/oc/oc_loop.bcenv",0);
    puVar1[0x157] = 0;
    temp_v0 = FUN_00387350("event/oc/oc_loop.bccam");
    puVar1[0x158] = temp_v0;
    temp_v0 = FUN_00387350("event/oc/oc_start.bccam");
    puVar1[0x159] = temp_v0;
    temp_v0 = asdMdlManagerCreateSecondList("event/oc/oc_loop.bam",0x38);
    puVar1[0x156] = temp_v0;
    puVar1[0x15d] = 1;
  }
  return *g_event3dOpening;
}

} /* extern "C" */
