/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138b18` (_code @ 0x138b18, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessSetAuxiliaryCallback(void);
int asdMdlManagerStart(void);
int asdProcessCreateSimple(...);
int asdMemoryAllocTracked(int, int, int, int, int);
int asdMemFree(unsigned int *);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned char LAB_00138c58; /* 0x138c58 */
extern unsigned char LAB_00138c74; /* 0x138c74 */
extern unsigned char LAB_00138c90; /* 0x138c90 */
extern int asdModelProcessShutdown(...); /* 0x13ea8c */
extern unsigned char LAB_001400f8; /* 0x1400f8 */
extern unsigned char LAB_00141260; /* 0x141260 */
extern int FUN_00141270(...); /* 0x141270 */
extern unsigned char *g_asdModelProcess; /* 0x5b3cd4 */

/* Supplied declaration required: asdProcessSetAuxiliaryCallback. */
/* Supplied declaration required: asdMdlManagerStart. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: asdMemFree. */


unsigned char * FUN_00138b18(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0xc,1);
  puVar2 = (unsigned char *)0x0;
  if (puVar1 != (unsigned int *)0x0) {
    puVar2 = &LAB_00138c58;
    asdProcessCreateSimple(&LAB_00138c58,param_1,0,0,&LAB_001400f8,asdModelProcessShutdown,puVar1);
    g_asdModelProcess = puVar2;
    if (puVar2 == (unsigned char *)0x0) {
      asdMemFree(puVar1);
      return (unsigned char *)0x0;
    }
    puVar2 = &LAB_00138c74;
    asdProcessCreateSimple(&LAB_00138c74,param_2,0,0,FUN_00141270,0,puVar1);
    *puVar1 = (unsigned int)puVar2;
    asdProcessSetAuxiliaryCallback();
    puVar2 = &LAB_00138c90;
    asdProcessCreateSimple(&LAB_00138c90,param_3,0,0,&LAB_00141260,0,puVar1);
    puVar1[2] = (unsigned int)puVar2;
    asdMdlManagerStart();
    puVar2 = (unsigned char *)0x0;
    if (param_1 != 0) {
      puVar2 = g_asdModelProcess;
    }
  }
  return puVar2;
}

} /* extern "C" */
