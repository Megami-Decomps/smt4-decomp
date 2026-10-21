/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00154180` (_code @ 0x154180, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdModelCommitCommandRange(unsigned int *, unsigned int *);
int FUN_0019eafc(void);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: asdModelCommitCommandRange. */
/* Supplied declaration required: FUN_0019eafc. */


void FUN_00154180(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  temp_v7 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = temp_v7 * 0.5f;
  temp_v2 = 0;
  if ((romwright_fabs_4(temp_v5) != 0.0f) && (temp_v2 = ((unsigned int)romwright_fabs_4(temp_v5) >> 0x17) - 0x40, -1 >= temp_v2)) {
    temp_v3 = ((unsigned int)temp_v5 >> 0x1f) << 0x17;
  }
  else {
    temp_v3 = (((unsigned int)temp_v5 & 0x7fffff) >> 7) | (temp_v2 << 0x10) | (((unsigned int)temp_v5 >> 0x1f) << 0x17);
  }
  temp_v7 = 2.0f / temp_v7;
  if (romwright_fabs_4(temp_v7) != 0.0f) {
    temp_v2 = ((unsigned int)romwright_fabs_4(temp_v7) >> 0x17) - 0x40;
    if (-1 >= temp_v2) {
      temp_v1 = ((unsigned int)temp_v7 >> 0x1f) << 0x1e;
    }
    else {
      temp_v1 = ((unsigned int)temp_v7 & 0x7fffff) | (temp_v2 << 0x17) | (((unsigned int)temp_v7 >> 0x1f) << 0x1e);
    }
  }
  else {
    temp_v2 = 0;
    temp_v1 = ((unsigned int)temp_v7 & 0x7fffff) | (temp_v2 << 0x17) | (((unsigned int)temp_v7 >> 0x1f) << 0x1e);
  }
  temp_v5 = temp_v6 * 0.5f;
  temp_v2 = 0;
  if ((romwright_fabs_4(temp_v5) != 0.0f) && (temp_v2 = ((unsigned int)romwright_fabs_4(temp_v5) >> 0x17) - 0x40, -1 >= temp_v2)) {
    temp_v4 = ((unsigned int)temp_v5 >> 0x1f) << 0x17;
  }
  else {
    temp_v4 = (((unsigned int)temp_v5 & 0x7fffff) >> 7) | (temp_v2 << 0x10) | (((unsigned int)temp_v5 >> 0x1f) << 0x17);
  }
  temp_v6 = 2.0f / temp_v6;
  if (romwright_fabs_4(temp_v6) != 0.0f) {
    temp_v2 = ((unsigned int)romwright_fabs_4(temp_v6) >> 0x17) - 0x40;
    if (temp_v2 < 0) {
      puVar3 = (unsigned int *)(((unsigned int)temp_v6 >> 0x1f) << 0x1e);
    }
    else {
      puVar3 = (unsigned int *)(((unsigned int)temp_v6 & 0x7fffff) | (temp_v2 << 0x17) | (((unsigned int)temp_v6 >> 0x1f) << 0x1e)
                       );
    }
  }
  else {
    temp_v2 = 0;
    puVar3 = (unsigned int *)(((unsigned int)temp_v6 & 0x7fffff) | (temp_v2 << 0x17) | (((unsigned int)temp_v6 >> 0x1f) << 0x1e));
  }
  temp_v0 = (int)puVar3 << 1;
  FUN_0019eafc();
  *puVar3 = temp_v3;
  puVar3[1] = 0x70041;
  puVar3[2] = temp_v1 << 1;
  puVar3[3] = 0xf0042;
  puVar3[4] = temp_v4;
  puVar3[5] = 0x70043;
  puVar3[6] = temp_v0;
  puVar3[7] = 0xf0044;
  puVar3[8] = param_1 | (param_2 << 0x10);
  puVar3[9] = 0xf0068;
  asdModelCommitCommandRange(puVar3,puVar3 + 10);
  return;
}

} /* extern "C" */
