/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7bca` (_code @ 0x2b7bca, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: FUN_002b79cc. */


void FUN_002b7bca(unsigned int param_1,unsigned int param_2,unsigned int param_3,romwright_code *param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  if ((param_3 != 0) && (param_2 != 0)) {
    if (param_2 >= 11) {
      FUN_002b79cc();
    }
    temp_v5 = param_1;
    while (temp_v5 < param_3 * (param_2 - 1) + param_1) {
      temp_v4 = temp_v5 + param_3;
      while ((param_1 <= temp_v5 && (temp_v1 = (*param_4)(temp_v5,temp_v4), 0 < temp_v1))) {
        temp_v5 = temp_v5 - param_3;
      }
      puVar4 = (unsigned int *)(temp_v5 + param_3);
      temp_v2 = 0;
      temp_v5 = temp_v4;
      if (((param_3 | temp_v4) & 3) != 0) {
        for (temp_v2 = 0; temp_v2 < param_3; temp_v2 = temp_v2 + 1) {
          puVar5 = (unsigned int *)(temp_v4 + temp_v2);
          temp_v0 = *(unsigned char *)puVar5;
          while (puVar5 = (unsigned int *)((int)puVar5 - param_3), puVar4 <= puVar5) {
            *(unsigned char *)((int)puVar5 + param_3) = *(unsigned char *)puVar5;
          }
          *(unsigned char *)((int)puVar5 + param_3) = temp_v0;
        }
      }
      else {
        for (; temp_v2 < param_3; temp_v2 = temp_v2 + 4) {
          puVar5 = (unsigned int *)(temp_v4 + temp_v2);
          temp_v3 = *puVar5;
          while (puVar5 = (unsigned int *)((int)puVar5 - param_3), puVar4 <= puVar5) {
            *(unsigned int *)((int)puVar5 + param_3) = *puVar5;
          }
          *(unsigned int *)((int)puVar5 + param_3) = temp_v3;
        }
      }
    }
  }
  return;
}
