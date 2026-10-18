/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001881e8` (_code @ 0x1881e8, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_2_stack;

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0019b738. */
/* Supplied declaration required: FUN_0019c0e0. */
extern int FUN_0019f29c(unsigned int, unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_0019f30c. */
/* Supplied declaration required: FUN_001ac8ec. */
/* Supplied declaration required: FUN_001acb48. */
/* Supplied declaration required: FUN_001b4eb8. */


void FUN_001881e8(int param_1,int *param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  unsigned int temp_v18;
  unsigned char temp_v19 [32];
  
  temp_v14 = 0x3f800000;
  temp_v3 = *(unsigned int *)(param_1 + 8);
  if ((*param_2 != 0) && (temp_v0 = 0, 0 < *param_2)) {
    do {
      temp_v1 = *(int *)(param_2[1] + temp_v0 * 4);
      temp_v2 = *(unsigned int *)(temp_v1 + 0xc);
      FUN_0019b738(temp_v19,0x20);
      FUN_00100388(temp_v19,"h_eff%02d",*(unsigned int *)(temp_v1 + 8));
      temp_v1 = FUN_0019f29c(temp_v3,temp_v19,(unsigned int *)&temp_v4);
      if (temp_v1 != 0) {
        temp_v11 = temp_v4;
        temp_v12 = temp_v5;
        temp_v13 = temp_v6;
        FUN_001b4eb8(temp_v2,&temp_v11);
        FUN_0019f30c(temp_v3,temp_v19,&temp_v7);
        temp_v15 = -temp_v7;
        temp_v16 = -temp_v8;
        temp_v17 = -temp_v9;
        temp_v18 = temp_v10;
        FUN_001acb48(temp_v2,&temp_v15);
        FUN_001ac8ec(temp_v2);
        FUN_0019c0e0(temp_v2);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *param_2);
  }
  return;
}
