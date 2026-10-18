/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011cfa4` (_code @ 0x11cfa4, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_0013a92c. */


void FUN_0011cfa4(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int temp_v1;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int temp_v2;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  FUN_0013a92c(param_2,param_1 + 0x4b8,&temp_v0);
  *(unsigned int *)(param_1 + 0x4c4) = temp_v0;
  *(unsigned int *)(param_1 + 0x4c8) = uStack_2c;
  *(unsigned int *)(param_1 + 0x4cc) = uStack_28;
  *(unsigned int *)(param_1 + 0x4d0) = temp_v1;
  *(unsigned int *)(param_1 + 0x4d4) = uStack_20;
  *(unsigned int *)(param_1 + 0x4d8) = uStack_1c;
  *(unsigned int *)(param_1 + 0x4dc) = temp_v2;
  *(unsigned int *)(param_1 + 0x4e0) = uStack_14;
  *(unsigned int *)(param_1 + 0x4e4) = uStack_10;
  return;
}
