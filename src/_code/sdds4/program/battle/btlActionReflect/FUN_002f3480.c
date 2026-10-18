/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3480` (_code @ 0x2f3480, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_002eb574; /* 0x2eb574 */
extern unsigned char LAB_002f3514; /* 0x2f3514 */
extern int FUN_0030faa4(); /* 0x30faa4 */
extern int *DAT_00434290; /* 0x434290 */

extern int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */


void FUN_002f3480(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char *puVar1;
  int *piVar2;
  
  puVar1 = &LAB_002f3514;
  FUN_002c4c00(&LAB_002f3514,2,0,0,&LAB_002eb574,FUN_0030faa4,param_1,*param_1);
  param_1[10] = (unsigned int)puVar1;
  piVar2 = (int *)FUN_002c4b84(0x100,0x100,0,0x10,1);
  DAT_00434290 = piVar2;
  piVar2[1] = 0;
  *piVar2 = (int)param_1;
  piVar2[2] = 0;
  piVar2[3] = 0;
  return;
}
