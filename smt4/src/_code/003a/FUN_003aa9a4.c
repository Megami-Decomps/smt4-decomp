/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aa9a4` (_code @ 0x3aa9a4, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_00152530. */
/* Supplied declaration required: FUN_00231434. */
/* Supplied declaration required: FUN_002346ac. */
/* Supplied declaration required: FUN_0023470c. */
/* Supplied declaration required: FUN_0023474c. */


void FUN_003aa9a4(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int uStack_18;
  int temp_v2;
  
  FUN_00152530();
  FUN_00231434(0x1d,0x573,&temp_v1,&uStack_18,&temp_v0,&temp_v2);
  FUN_0023474c(param_1,temp_v1,uStack_18,temp_v0,temp_v2);
  FUN_00231434(0x1d,0x574,&temp_v1,&uStack_18,&temp_v0,&temp_v2);
  FUN_0023470c(param_1,temp_v1,uStack_18,temp_v0,temp_v2);
  FUN_00231434(0x1d,0x575,&temp_v1,&uStack_18,&temp_v0,&temp_v2);
  FUN_002346ac(param_1,temp_v1,uStack_18,temp_v0,temp_v2);
  return;
}
