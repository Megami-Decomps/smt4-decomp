/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001593ac` (_code @ 0x1593ac, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif


void FUN_001593ac(unsigned int *param_1,unsigned int *param_2)

{
  long long temp_v0;
  long long temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v7 = param_2[1];
  temp_v2 = param_2[1];
  temp_v1 = (unsigned long long)temp_v7 * 0xd7b634db +
          romwright_piece_4_4(((int)temp_v7 >> 0x1f) * -0x2849cb25,
                   (int)((unsigned long long)*param_2 * 0xd7b634db >> 0x20));
  temp_v0 = (unsigned long long)*param_2 * 0x431bde82;
  temp_v6 = (unsigned int)((unsigned long long)temp_v1 >> 0x20);
  temp_v5 = (unsigned int)((unsigned long long)temp_v7 * 0x431bde82);
  temp_v3 = (int)((unsigned long long)temp_v0 >> 0x20) + (unsigned int)romwright_carry_4((unsigned int)temp_v0,(unsigned int)temp_v1);
  temp_v4 = ((int)temp_v3 >> 0x1f) + ((int)temp_v6 >> 0x1f) + (unsigned int)romwright_carry_4(temp_v3,temp_v6) +
          ((int)temp_v7 >> 0x1f) * 0x431bde82 + (int)((unsigned long long)temp_v7 * 0x431bde82 >> 0x20) +
          (unsigned int)romwright_carry_4(temp_v3 + temp_v6,temp_v5);
  temp_v3 = ((temp_v3 + temp_v6 + temp_v5) >> 0x12) | (temp_v4 * 0x4000);
  temp_v5 = temp_v3 + -((int)temp_v2 >> 0x1f);
  temp_v6 = *param_1;
  *param_1 = temp_v5 + temp_v6;
  param_1[1] = (temp_v4 >> 0x12) + (unsigned int)romwright_carry_4(temp_v3,-((int)temp_v2 >> 0x1f)) + param_1[1] +
               (unsigned int)romwright_carry_4(temp_v5,temp_v6);
  return;
}
