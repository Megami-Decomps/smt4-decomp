/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00254f58` (_code @ 0x254f58, 0x180 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern short FUN_00255de0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0033b4ac. */


void FUN_00254f58(int param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int *piVar8;
  unsigned int temp_v7;
  
  temp_v4 = 0;
  temp_v2 = 0;
  do {
    temp_v5 = temp_v4 + 1;
    temp_v2 = temp_v2 + 2;
    *(unsigned short *)(param_1 + temp_v4 * 2 + 0x2f06) = 0xffff;
    temp_v4 = temp_v4 + 2;
    *(unsigned short *)(param_1 + temp_v5 * 2 + 0x2f06) = 0xffff;
  } while (temp_v2 < 0xc);
  *(unsigned short *)(param_1 + 0x2f1e) = 0xffff;
  temp_v3 = *(unsigned int *)(param_1 + 0x44a0);
  if ((temp_v3 & 4) != 0) {
    temp_v3 = 4;
    temp_v2 = 0x32;
  }
  else if ((temp_v3 & 0x1000) != 0) {
    temp_v3 = 0x36;
    temp_v2 = 1;
  }
  else {
    temp_v3 = 0;
    temp_v2 = 4;
  }
  temp_v7 = temp_v3 + temp_v2;
  temp_v2 = 0;
  if (temp_v3 < temp_v7) {
    piVar8 = (int *)(param_1 + 0x1fc0);
    do {
      temp_v6 = *(unsigned int *)(*piVar8 + temp_v3 * 0x288);
      if (((temp_v6 & 1) != 0) && ((temp_v6 & 0x40) == 0)) {
        *(unsigned short *)(param_1 + temp_v2 * 2 + 0x2f06) =
             *(unsigned short *)(*piVar8 + temp_v3 * 0x288 + 0x6e);
        temp_v4 = temp_v3 * 0x288 + 0x254;
        *(unsigned short *)(*piVar8 + temp_v4) = 0;
        if ((*(unsigned int *)(*piVar8 + temp_v3 * 0x288) & 2) != 0) {
          *(unsigned short *)(*piVar8 + temp_v4) = 5;
        }
        if ((*(unsigned int *)(param_1 + 0x44a0) & 0x40000) == 0) {
          temp_v0 = FUN_00255de0(0xfffffffd,3);
          *(short *)(*piVar8 + temp_v4) = temp_v0 + *(short *)(*piVar8 + temp_v4);
        }
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while ((int)temp_v3 < (int)temp_v7);
    if (0 < temp_v2) {
      *(unsigned short *)(param_1 + 0x2f1e) = 0;
      FUN_0033b4ac(param_1,0);
      temp_v1 = *(unsigned short *)(param_1 + *(short *)(param_1 + 0x2f1e) * 2 + 0x2f06);
      *(unsigned short *)(param_1 + 0x1fc8) = temp_v1;
      return;
    }
  }
  temp_v1 = 0xffff;
  *(unsigned short *)(param_1 + 0x2f1e) = 0xffff;
  *(unsigned short *)(param_1 + 0x1fc8) = temp_v1;
  return;
}
