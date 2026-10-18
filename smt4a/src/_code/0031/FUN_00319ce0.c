/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00319ce0` (_code @ 0x319ce0, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_3_stack;

/* Supplied declaration required: FUN_00102af4. */
/* Supplied declaration required: FUN_0025c874. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6dd0. */


void FUN_00319ce0(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0 [256];
  unsigned int uStack_18;
  int temp_v1;
  unsigned int uStack_10;
  
  uStack_18 = param_1;
  temp_v1 = param_2;
  uStack_10 = param_3;
  FUN_002e6dd0(temp_v0,0x100);
  FUN_002e342c(temp_v0,param_1);
  FUN_00102af4(temp_v1,temp_v0,0x100);
  FUN_0025c874(&temp_v1,param_3);
  return;
}
