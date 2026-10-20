/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00285320` (_code @ 0x285320, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(...);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


void FUN_00285320(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  
  temp_v0 = 1;
  if ('\x02' < *(char *)(param_1 + 0x2e2)) {
    *(unsigned char *)(param_1 + 0x2e2) = 4;
  }
  temp_v1 = (int)*(char *)(param_1 + 0x2e2);
  if (temp_v1 + 1 < 4) {
    do {
      temp_v2 = *(int *)(param_2 + (temp_v1 + temp_v0) * 0x44 + 0x14) -
              *(int *)(param_2 + temp_v1 * 0x44 + 0x14);
      *(int *)(param_1 + 0x318) = temp_v2;
      if (0 < temp_v2) {
        temp_v3 = param_1 + temp_v1 * 0x44;
        temp_v2 = param_1 + (temp_v1 + temp_v0) * 0x44;
        temp_v6 = (float)VectorSignedToFloat(*(int *)(temp_v2 + 0x14) - *(int *)(temp_v3 + 0x14),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v4 = (float)VectorSignedToFloat((unsigned int)*(unsigned char *)(temp_v2 + 0x37) -
                                           (unsigned int)*(unsigned char *)(temp_v3 + 0x37),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(param_1 + 0x21c) = temp_v4 / temp_v6;
        temp_v5 = VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v2 + 0x37),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(param_1 + 0x248) = temp_v5;
        *(char *)(param_1 + 0x2e2) = (char)(temp_v1 + temp_v0);
        return;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v1 + temp_v0 < 4);
    return;
  }
  return;
}

} /* extern "C" */
