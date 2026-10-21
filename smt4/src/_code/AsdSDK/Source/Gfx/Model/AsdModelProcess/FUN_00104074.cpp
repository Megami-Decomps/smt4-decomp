/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104074` (_code @ 0x104074, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessSetAuxiliaryCallback(void);
int asdMdlManagerStart(void);
int asdMemFree(unsigned int *);
int asdMemAlloc(int, int, int, int, int);
int asdProcessCreateSimple(...);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned char LAB_0010417c; /* 0x10417c */
extern unsigned char LAB_00104198; /* 0x104198 */
extern unsigned char LAB_001041b4; /* 0x1041b4 */
extern int asdModelProcessShutdown(...); /* 0x10a1b8 */
extern unsigned char LAB_0010af48; /* 0x10af48 */
extern unsigned char LAB_0010b844; /* 0x10b844 */
extern int FUN_0010b854(...); /* 0x10b854 */
extern unsigned char *g_asdModelProcess; /* 0x464be8 */

/* Supplied declaration required: asdProcessSetAuxiliaryCallback. */
/* Supplied declaration required: asdMdlManagerStart. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: asdProcessCreateSimple. */


unsigned char * FUN_00104074(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x100;
  asdMemAlloc(0x100,0x100,0,0xc,1);
  puVar2 = (unsigned char *)0x0;
  if (puVar1 != (unsigned int *)0x0) {
    puVar2 = &LAB_0010417c;
    asdProcessCreateSimple(&LAB_0010417c,param_1,0,0,&LAB_0010af48,asdModelProcessShutdown,puVar1);
    g_asdModelProcess = puVar2;
    if (puVar2 == (unsigned char *)0x0) {
      asdMemFree(puVar1);
      return (unsigned char *)0x0;
    }
    puVar2 = &LAB_00104198;
    asdProcessCreateSimple(&LAB_00104198,param_2,0,0,FUN_0010b854,0,puVar1);
    *puVar1 = (unsigned int)puVar2;
    asdProcessSetAuxiliaryCallback();
    puVar2 = &LAB_001041b4;
    asdProcessCreateSimple(&LAB_001041b4,param_3,0,0,&LAB_0010b844,0,puVar1);
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
