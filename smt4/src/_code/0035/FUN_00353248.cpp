/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353248` (_code @ 0x353248, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0035f808(void);
int nn_fnd_DateTime_DateTime_sub_object(unsigned int *, int, int, int, int, int, int, int);

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Supplied declaration required: FUN_0035f808. */
/* Supplied declaration required: nn_fnd_DateTime_DateTime_sub_object. */


void FUN_00353248(unsigned int param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned long long temp_v1;
  long long temp_v2;
  long long temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13 [3];
  unsigned int uStack_2c;
  int *temp_v14;
  
  puVar5 = &temp_v11;
  uStack_2c = param_1;
  temp_v14 = param_2;
  FUN_0035f808();
  if (-1 < (int)puVar5) {
    puVar5 = temp_v13;
    nn_fnd_DateTime_DateTime_sub_object(puVar5,0x7b2,1,1,0,0,0,0);
    temp_v1 = (unsigned long long)temp_v11 * 1000000;
    temp_v6 = temp_v12 * 1000000 + (int)(temp_v1 >> 0x20);
    temp_v7 = *puVar5;
    temp_v0 = (int)temp_v6 >> 0x1f;
    temp_v9 = puVar5[1];
    temp_v3 = (unsigned long long)temp_v6 * 0xd7b634db +
            romwright_piece_4_4(temp_v0 * -0x2849cb25,(int)((temp_v1 & 0xffffffff) * 0xd7b634db >> 0x20));
    temp_v2 = (temp_v1 & 0xffffffff) * 0x431bde82;
    temp_v8 = (unsigned int)((unsigned long long)temp_v3 >> 0x20);
    temp_v10 = (unsigned int)((unsigned long long)temp_v6 * 0x431bde82);
    temp_v4 = (int)((unsigned long long)temp_v2 >> 0x20) + (unsigned int)romwright_carry_4((unsigned int)temp_v3,(unsigned int)temp_v2);
    temp_v5 = temp_v0 * 0x431bde82 + (int)((unsigned long long)temp_v6 * 0x431bde82 >> 0x20) +
            ((int)temp_v4 >> 0x1f) + ((int)temp_v8 >> 0x1f) + (unsigned int)romwright_carry_4(temp_v4,temp_v8) +
            (unsigned int)romwright_carry_4(temp_v10,temp_v4 + temp_v8);
    temp_v4 = ((temp_v10 + temp_v4 + temp_v8) >> 0x12) | (temp_v5 * 0x4000);
    temp_v6 = -temp_v0 + temp_v4;
    *temp_v14 = temp_v7 + temp_v6;
    temp_v14[1] = (temp_v5 >> 0x12) + (unsigned int)romwright_carry_4(-temp_v0,temp_v4) + temp_v9 + (unsigned int)romwright_carry_4(temp_v7,temp_v6);
  }
  return;
}

} /* extern "C" */
