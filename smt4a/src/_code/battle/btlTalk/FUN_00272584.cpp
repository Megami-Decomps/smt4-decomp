/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00272584` (_code @ 0x272584, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int jobIsValid(...);
int FUN_001b4a90(...);
int FUN_004ab854(...);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned char LAB_0024e2f4; /* 0x24e2f4 */
extern unsigned char LAB_002726a4; /* 0x2726a4 */
extern int FUN_002df5c8(...); /* 0x2df5c8 */
extern int *g_btlTalk; /* 0x57a7b8 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: jobIsValid. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_004ab854. */


void FUN_00272584(unsigned int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  int *piVar3;
  
  jobIsValid(param_1[0x10]);
  piVar1 = (int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x14c,1);
  puVar2 = &LAB_002726a4;
  g_btlTalk = piVar1;
  taskCreateDraw(&LAB_002726a4,4,0,0,&LAB_0024e2f4,FUN_002df5c8,param_1,*param_1);
  param_1[0x10] = (unsigned int)puVar2;
  piVar1 = g_btlTalk;
  piVar3 = g_btlTalk + 7;
  *g_btlTalk = (int)param_1;
  piVar1[1] = param_2;
  *piVar3 = param_3;
  piVar1[8] = param_4;
  *(unsigned char *)(piVar1 + 0x51) = 0;
  *(unsigned char *)((int)piVar1 + 0x145) = 0;
  piVar1[0x52] = -1;
  piVar1[0xc] = (int)*(short *)(*(int *)(param_2 + 0x28) + 0x1c0);
  FUN_001b4a90(piVar1 + 0xd,0x100,0xffffffff);
  FUN_004ab854(DAT_0057a9c8);
  piVar1[6] = 0;
  return;
}

} /* extern "C" */
