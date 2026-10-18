/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003afd18` (_code @ 0x3afd18, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_003fb848. */
/* Supplied declaration required: FUN_003fbc38. */


void FUN_003afd18(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5 [12];
  
  if (*(int *)(param_1 + 0x48) != 0) {
    temp_v0 = param_1 + 0x20;
    FUN_003fbc38(temp_v0,*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x40) * 0x10);
    if (temp_v0 != 0) {
      temp_v4 = *(int *)(param_1 + 0x1c) != 0;
      temp_v0 = param_1 + 4;
      if (temp_v4) {
        param_3 = *(int *)(param_1 + 8);
      }
      temp_v1 = *(int *)(*(int *)((*(int *)(param_1 + 0x2c) * 0x10 + *(int *)(param_1 + 0x24)) - 0xc)
                      + 0xc);
      if (!temp_v4) {
        param_3 = 0;
      }
      else {
        param_3 = param_3 + *(int *)(param_1 + 0x14);
      }
      temp_v3 = param_3 + temp_v1;
      if ((unsigned int)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) <= temp_v3) {
        temp_v3 = temp_v3 - *(int *)(param_1 + 0x10);
      }
      if (*(int *)(param_1 + 0x1c) != 0) {
        temp_v2 = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
      }
      else {
        temp_v2 = 0;
      }
      FUN_003fb848(temp_v5,temp_v0,temp_v0,temp_v2,*(int *)(param_1 + 0x14),temp_v0,temp_v3,
                   *(int *)(param_1 + 0x14) + temp_v1);
      temp_v0 = *(int *)(param_1 + 0x48) - 1;
      *(int *)(param_1 + 0x48) = temp_v0;
      if (temp_v0 == 0) {
        *(unsigned int *)(param_1 + 0x44) = 0;
        *(unsigned int *)(param_1 + 0x40) = 0;
      }
      else {
        temp_v0 = *(int *)(param_1 + 0x40) + 1;
        *(int *)(param_1 + 0x40) = temp_v0;
        if (temp_v0 == *(int *)(param_1 + 0x3c)) {
          *(unsigned int *)(param_1 + 0x40) = 0;
        }
      }
    }
  }
  return;
}
