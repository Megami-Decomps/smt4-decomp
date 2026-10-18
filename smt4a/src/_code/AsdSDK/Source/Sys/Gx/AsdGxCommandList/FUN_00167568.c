/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00167568` (_code @ 0x167568, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0017cdb4. */
/* Supplied declaration required: FUN_00196068. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019d4d8. */


void FUN_00167568(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_1[5] != 0) {
    FUN_0019a5a0();
    param_1[5] = 0;
  }
  if (param_1[2] != 0) {
    temp_v0 = *param_1;
    FUN_00196068(temp_v0,param_1[1],param_1[2],param_1[3],param_1[4],0,0);
    param_1[6] = temp_v0;
    temp_v0 = 0x100;
    FUN_0019d4d8(0x100,0x100,0,param_1[6],0x10,1);
    param_1[5] = temp_v0;
    FUN_00196068(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[6],temp_v0);
    FUN_0017cdb4();
    return;
  }
  return;
}
