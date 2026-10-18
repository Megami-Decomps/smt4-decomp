/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df164` (_code @ 0x3df164, 0x170 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

extern unsigned char LAB_003df2d4; /* 0x3df2d4 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
extern unsigned long long FUN_00100bee(unsigned int, unsigned int, unsigned int);
extern int FUN_002b45f8(unsigned int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002b5b94. */


void FUN_003df164(int *param_1,int *param_2)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned long long temp_v0;
  long long temp_v1;
  long long temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned long long temp_v11;
  unsigned int temp_v12 [3];
  
  temp_v7 = 0;
  temp_v6 = *param_2;
  temp_v8 = *(unsigned int *)(temp_v6 + 0x1c);
  if (temp_v8 != 0) {
    do {
      temp_v3 = FUN_002b45f8(*(unsigned int *)(*(int *)(temp_v6 + 0x18) + temp_v7 * 8),&LAB_003df2d4,0x40);
      if (temp_v3 == 0) {
        temp_v4 = *(unsigned int *)(*(int *)(temp_v6 + 0x18) + temp_v7 * 8 + 4);
        goto LAB_003df1bc;
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < temp_v8);
  }
  temp_v4 = 0;
LAB_003df1bc:
  temp_v11 = FUN_00100bee(temp_v4,0,10);
  puVar6 = temp_v12;
  FUN_002b5b94(puVar6,0x7b2,1,1,0,0,0,0);
  temp_v0 = (temp_v11 & 0xffffffff) * 1000000;
  temp_v9 = (int)(temp_v11 >> 0x20) * 1000000 + (int)(temp_v0 >> 0x20);
  temp_v5 = *puVar6;
  temp_v6 = (int)temp_v9 >> 0x1f;
  temp_v2 = (unsigned long long)temp_v9 * 0xd7b634db +
          romwright_piece_4_4(temp_v6 * -0x2849cb25,(int)((temp_v0 & 0xffffffff) * 0xd7b634db >> 0x20));
  temp_v1 = (temp_v0 & 0xffffffff) * 0x431bde82;
  temp_v8 = (unsigned int)((unsigned long long)temp_v2 >> 0x20);
  temp_v10 = (unsigned int)((unsigned long long)temp_v9 * 0x431bde82);
  temp_v7 = (int)((unsigned long long)temp_v1 >> 0x20) + (unsigned int)romwright_carry_4((unsigned int)temp_v2,(unsigned int)temp_v1);
  temp_v3 = temp_v6 * 0x431bde82 + (int)((unsigned long long)temp_v9 * 0x431bde82 >> 0x20) +
          ((int)temp_v7 >> 0x1f) + ((int)temp_v8 >> 0x1f) + (unsigned int)romwright_carry_4(temp_v7,temp_v8) +
          (unsigned int)romwright_carry_4(temp_v10,temp_v7 + temp_v8);
  temp_v7 = ((temp_v10 + temp_v7 + temp_v8) >> 0x12) | (temp_v3 * 0x4000);
  temp_v8 = -temp_v6 + temp_v7;
  param_1[1] = (temp_v3 >> 0x12) + (unsigned int)romwright_carry_4(-temp_v6,temp_v7) + puVar6[1] + (unsigned int)romwright_carry_4(temp_v8,temp_v5)
  ;
  *param_1 = temp_v8 + temp_v5;
  return;
}
