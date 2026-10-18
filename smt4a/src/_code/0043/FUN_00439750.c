/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00439750` (_code @ 0x439750, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_19: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp78; /* 0x78: local_78 */
} param_19_stack;

/* Supplied declaration required: FUN_00426204. */
/* Supplied declaration required: FUN_00439a74. */


void FUN_00439750(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
                 unsigned int param_9,unsigned int param_10,unsigned int param_11,unsigned int param_12,
                 unsigned int param_13,unsigned int param_14,unsigned int param_15,unsigned int param_16,
                 unsigned int param_17,unsigned int param_18,unsigned int param_19)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_00426204();
  if (temp_v0 != 0) {
    FUN_00439a74(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_18,
                 param_19);
  }
  return;
}
