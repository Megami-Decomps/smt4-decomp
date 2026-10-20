/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f34cc` (_code @ 0x2f34cc, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemAlloc(...);
int taskCreateDraw(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_002eb5b4; /* 0x2eb5b4 */
extern unsigned char LAB_002f3560; /* 0x2f3560 */
extern int FUN_0030fa74(...); /* 0x30fa74 */
extern int *DAT_00434290; /* 0x434290 */

/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */


void FUN_002f34cc(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  int *piVar2;
  
  puVar1 = &LAB_002f3560;
  taskCreateDraw(&LAB_002f3560,2,0,0,&LAB_002eb5b4,FUN_0030fa74,param_1,*param_1);
  param_1[10] = (unsigned int)puVar1;
  piVar2 = (int *)0x100;
  asdMemAlloc(0x100,0x100,0,0x10,1);
  DAT_00434290 = piVar2;
  piVar2[1] = 0;
  *piVar2 = (int)param_1;
  piVar2[2] = 0;
  piVar2[3] = 0;
  return;
}

} /* extern "C" */
