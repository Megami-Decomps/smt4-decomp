/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051b830` (_code @ 0x51b830, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


unsigned short * FUN_0051b830(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  unsigned short *puVar1;
  unsigned short *puVar2;
  unsigned int in_fpscr;
  float in_s0;
  int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  
  puVar2 = *(unsigned short **)(param_1 + 0x20);
  temp_v1 = (unsigned int)((in_s0 / *(float *)(param_1 + 0x18)) * 32.0f);
  if (temp_v1 < *puVar2) {
    return puVar2;
  }
  puVar1 = puVar2 + ((unsigned int)*(unsigned short *)(param_1 + 0xe) * 3 - 3);
  if (temp_v1 < *puVar1) {
    temp_v2 = (float)VectorSignedToFloat(*(unsigned short *)(param_1 + 0xe) - 1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v0 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1c) * temp_v2 * in_s0,3);
    puVar1 = puVar2 + temp_v0 * 3;
    if (*puVar1 <= temp_v1) {
      do {
        puVar2 = puVar1;
        puVar1 = puVar2 + 3;
      } while (*puVar1 <= temp_v1);
      return puVar2;
    }
    do {
      puVar1 = puVar1 + -3;
    } while (temp_v1 < *puVar1);
  }
  return puVar1;
}
