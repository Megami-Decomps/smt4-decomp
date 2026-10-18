/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021ad44` (_code @ 0x21ad44, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_0020ec0c(); /* 0x20ec0c */
extern unsigned char LAB_0021ae34; /* 0x21ae34 */
extern int FUN_002e05d8(); /* 0x2e05d8 */
extern int *DAT_00434260; /* 0x434260 */

/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002c4360. */
extern int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */


void FUN_0021ad44(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  
  DAT_00434260 = (int *)FUN_002c4b84(0x100,0x100,0,0x90,1);
  puVar2 = &LAB_0021ae34;
  FUN_002c4c00(&LAB_0021ae34,2,0,0,FUN_0020ec0c,FUN_002e05d8,param_1,*param_1);
  param_1[0x12] = (unsigned int)puVar2;
  piVar1 = DAT_00434260;
  if (DAT_00434260[1] != 0) {
    FUN_002a755c();
    piVar1[1] = 0;
  }
  if (*piVar1 != 0) {
    FUN_002c4360();
    *piVar1 = 0;
  }
  piVar1[3] = 0;
  return;
}
