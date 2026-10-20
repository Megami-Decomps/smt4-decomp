/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037693c` (_code @ 0x37693c, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015155c(...);
int FUN_00163060(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_00369258(...); /* 0x369258 */
extern unsigned char LAB_003769d0; /* 0x3769d0 */
extern int FUN_003a3a48(...); /* 0x3a3a48 */
extern int *DAT_005712f0; /* 0x5712f0 */

/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */


void FUN_0037693c(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  int *piVar2;
  
  puVar1 = &LAB_003769d0;
  FUN_0015155c(&LAB_003769d0,4,0,0,FUN_00369258,FUN_003a3a48,param_1,*param_1);
  param_1[0x12] = (unsigned int)puVar1;
  piVar2 = (int *)0x100;
  FUN_00163060(0x100,0x100,0,0x10,1);
  DAT_005712f0 = piVar2;
  piVar2[1] = 0;
  *piVar2 = (int)param_1;
  piVar2[2] = 0;
  piVar2[3] = 0;
  return;
}

} /* extern "C" */
