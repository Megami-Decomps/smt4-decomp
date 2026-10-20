/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00337f98` (_code @ 0x337f98, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


void FUN_00337f98(int param_1,int param_2)

{
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int unaff_r5;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v3 = 0;
  temp_v0 = 0;
  do {
    temp_v1 = *(unsigned int *)(param_2 + temp_v3 * 4 + 0xc);
    if (temp_v1 != 0) {
      unaff_r5 = (unsigned int)*(unsigned short *)(param_1 + 0x1e8c);
    }
    if (temp_v1 != 0 && unaff_r5 != temp_v1) {
      unaff_r5 = (unsigned int)*(unsigned short *)(param_1 + 0x1e8e);
      temp_v5 = unaff_r5 != temp_v1;
      if (temp_v5) {
        unaff_r5 = (unsigned int)*(unsigned short *)(param_1 + 0x1e90);
      }
      if (temp_v5 && unaff_r5 != temp_v1) {
        unaff_r5 = (unsigned int)*(unsigned short *)(param_1 + 0x1e92);
        temp_v5 = unaff_r5 != temp_v1;
        if (temp_v5) {
          unaff_r5 = (unsigned int)*(unsigned short *)(param_1 + 0x1e94);
        }
        if (temp_v5 && unaff_r5 != temp_v1) {
          temp_v4 = param_1 + temp_v0 * 2;
          unaff_r5 = temp_v4 + 0x1e00;
          temp_v0 = temp_v0 + 1;
          *(short *)(temp_v4 + 0x1e8c) = (short)temp_v1;
        }
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x32);
  if (((temp_v0 != 0) && (temp_v1 = 0, temp_v0 < 5)) && (temp_v2 = temp_v0, temp_v0 < 5)) {
    do {
      temp_v3 = temp_v1 * 2;
      temp_v4 = temp_v2 * 2;
      temp_v1 = (temp_v1 + 1) & 0xff;
      if (temp_v0 < temp_v1) {
        temp_v1 = 0;
      }
      temp_v2 = temp_v2 + 1;
      *(unsigned short *)(param_1 + temp_v4 + 0x1e8c) = *(unsigned short *)(param_1 + temp_v3 + 0x1e8c);
    } while ((int)temp_v2 < 5);
  }
  return;
}

} /* extern "C" */
