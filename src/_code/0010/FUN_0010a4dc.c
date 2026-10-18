/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a4dc` (_code @ 0x10a4dc, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif


void FUN_0010a4dc(void)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned int *puVar4;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  
  temp_v0 = 0;
  temp_v2 = 0x80;
  piVar3 = (int *)0x4e319c;
  do {
    temp_v3 = temp_v0 - 0x3f;
    piVar3[1] = (temp_v0 - 0x40) * 0x10000;
    temp_v2 = temp_v2 - 1;
    temp_v0 = temp_v0 + 2;
    piVar3 = piVar3 + 2;
    *piVar3 = temp_v3 * 0x10000;
  } while (temp_v2 != 0);
  temp_v0 = 0;
  temp_v2 = 0x100;
  puVar4 = (unsigned int *)0x4e35a0;
  do {
    temp_v4 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = temp_v4 * 0.003921569f;
    if (romwright_fabs_4(temp_v4) == 0.0f) {
      temp_v1 = ((unsigned int)temp_v4 >> 0x1f) << 0x17;
    }
    else {
      temp_v1 = (((unsigned int)temp_v4 & 0x7fffff) >> 7) | (((unsigned int)temp_v4 >> 0x1f) << 0x17) |
              *(unsigned int *)(((unsigned int)romwright_fabs_4(temp_v4) >> 0x17) * 4 + 0x4e31a0);
    }
    temp_v2 = temp_v2 - 1;
    temp_v0 = temp_v0 + 1;
    *puVar4 = temp_v1;
    puVar4 = puVar4 + 1;
  } while (temp_v2 != 0);
  return;
}
