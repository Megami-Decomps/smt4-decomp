/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fd7c0` (_code @ 0x3fd7c0, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_00178150. */
/* Supplied declaration required: FUN_0045ab90. */
/* Supplied declaration required: FUN_0045b384. */
/* Supplied declaration required: FUN_0045b498. */


void FUN_003fd7c0(int param_1,unsigned int param_2,unsigned char param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_s0; 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_s0;
  unsigned int temp_v4;
  
  temp_v0 = 0;
  if (*(int *)(param_1 + 0x20c) != 0) {
    temp_v0 = *(int *)(param_1 + 0x20c) + 0xc;
  }
  if ((param_2 < *(unsigned short *)(*(int *)(temp_v0 + 0x30) + 0x70)) &&
     (temp_v0 = *(int *)(*(int *)(*(int *)(temp_v0 + 0x30) + 0x6c) + param_2 * 4), temp_v0 != 0)) {
    *(unsigned int *)(param_1 + 0x84) = param_2;
    *(unsigned int *)(param_1 + 0x88) = in_s0;
    *(int *)(param_1 + 0x90) = temp_v0;
    FUN_0045ab90(param_1 + 0x98,temp_v0,*(unsigned int *)(param_1 + 0x210));
    FUN_00178150(temp_v0,param_1 + 0x10c,param_1 + 0x98);
    *(unsigned char *)(param_1 + 0xa4) = param_3;
    temp_v0 = *(int *)(param_1 + 0x90);
    temp_v1 = 0;
    temp_v3 = *(int *)(temp_v0 + 0x1c);
    if (*(unsigned int *)(temp_v0 + 0x10) != 0) {
      do {
        if (*(short *)(*(int *)(*(int *)(temp_v0 + 0xc) + temp_v1 * 4) + 6) == 6) {
          temp_v2 = *(int *)(param_1 + 0xb0);
          temp_v4 = param_4;
          if (temp_v2 == 0) {
            temp_v2 = 0x10000;
            temp_v4 = 1;
            FUN_001630d4(0x10000,0x100,0,temp_v3 << 2);
            *(int *)(param_1 + 0xb0) = temp_v2;
          }
          FUN_0045b498(param_1 + 0xa8,temp_v2,temp_v3);
          temp_v3 = *(int *)(param_1 + 0x20c) + 0xc;
          if (temp_v3 == 0) {
            return;
          }
          FUN_0045b384(param_1 + 0xa8,temp_v0,temp_v3,temp_v4);
          return;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(unsigned int *)(temp_v0 + 0x10));
    }
  }
  return;
}
