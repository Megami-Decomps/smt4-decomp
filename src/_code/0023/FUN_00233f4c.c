/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00233f4c` (_code @ 0x233f4c, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_00233fd4; /* 0x233fd4 */
extern unsigned char LAB_00233ff0; /* 0x233ff0 */
extern int FUN_0038fae8(); /* 0x38fae8 */
extern int FUN_0038fb3c(); /* 0x38fb3c */

/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_00233f4c(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  
  param_1[0x5e7] = param_2;
  if ((*param_1 & 0x100) == 0) {
    *param_1 = *param_1 | 0x100;
    puVar1 = &LAB_00233fd4;
    FUN_002c5978(&LAB_00233fd4,2,0,0,FUN_0038fae8,0,param_1);
    param_1[0x5e5] = (unsigned int)puVar1;
    FUN_002c4c00(&LAB_00233ff0,0xe8,1,0,FUN_0038fb3c,0,param_1,puVar1);
  }
  return;
}
