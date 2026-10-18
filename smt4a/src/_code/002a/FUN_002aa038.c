/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aa038` (_code @ 0x2aa038, 0x528 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
extern int FUN_001654d8(int);
extern int FUN_001654e4(int);
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
extern int FUN_0022e9b8(void);
/* Supplied declaration required: FUN_00240210. */
extern int FUN_00284140(int);
/* Supplied declaration required: FUN_002a4860. */
extern int FUN_002a4894(int);
extern unsigned int FUN_002ab7c4(unsigned int);
extern int FUN_002c2c68(int);


void FUN_002aa038(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int in_fpscr;
  unsigned char temp_v12 [64];
  int temp_v13;
  
  temp_v0 = FUN_0022e9b8();
  if (temp_v0 == 0) {
    return;
  }
  temp_v1 = temp_v0 + 0x4fc;
  temp_v2 = FUN_002a4860();
  temp_v3 = FUN_002a4894(temp_v1);
  temp_v4 = FUN_002ab7c4(*(unsigned int *)(temp_v0 + (temp_v3 + temp_v2) * 4 + 0x927c));
  FUN_001677c0();
  temp_v2 = FUN_002a4894(temp_v1);
  temp_v2 = FUN_001834a4(0x1a,temp_v2 + 0xb6);
  if (*(int *)(temp_v0 + 0x3fc) >= 4) {
    FUN_001835b4(2,0x1a,0xb5,param_1,param_2,0x97);
  }
  temp_v13 = FUN_002a4860(temp_v0 + 0x560);
  temp_v3 = 0;
  do {
    temp_v5 = FUN_001834a4(0x1a,temp_v3 + 0xb6);
    temp_v7 = *(int *)(temp_v0 + 0x3fc);
    temp_v11 = (int)*(short *)(temp_v5 + 8);
    if (temp_v7 >= 4) {
      temp_v5 = (int)*(short *)(temp_v5 + 10);
    }
    else {
      temp_v11 = (temp_v11 - *(short *)(temp_v2 + 8)) * 0x1000;
      temp_v11 = (int)*(short *)(temp_v2 + 8) +
               (((int)(temp_v11 + ((unsigned int)(temp_v11 >> 0x1f) >> 0x1e)) >> 2) * temp_v7 >> 0xc);
      temp_v5 = ((int)*(short *)(temp_v5 + 10) - (int)*(short *)(temp_v2 + 10)) * 0x1000;
      temp_v5 = (int)*(short *)(temp_v2 + 10) +
              (((int)(temp_v5 + ((unsigned int)(temp_v5 >> 0x1f) >> 0x1e)) >> 2) * temp_v7 >> 0xc);
    }
    FUN_001835b4(2,0x1a,0xb1,param_1 + temp_v11,param_2 + temp_v5,0x9c);
    temp_v7 = FUN_002c2c68(temp_v0 + 0x560);
    temp_v8 = temp_v13 + temp_v3;
    if (temp_v8 < temp_v7) {
      temp_v6 = FUN_001834a4(0x1a,0xb2);
      temp_v7 = temp_v0;
      FUN_00240210(temp_v0,temp_v4,temp_v12,temp_v8);
      if (temp_v7 == 0) {
        temp_v9 = 0xffffffff;
      }
      else {
        temp_v9 = 0x57d8ffff;
      }
      VectorSignedToFloat((int)*(short *)(temp_v6 + 10) + param_2 + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3
                         );
      VectorSignedToFloat((int)*(short *)(temp_v6 + 8) + param_1 + temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3
                         );
      FUN_00162790(2,temp_v9,temp_v12);
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 8);
  temp_v1 = FUN_002a4894(temp_v1);
  temp_v1 = FUN_001834a4(0x1a,temp_v1 + 200);
  temp_v2 = FUN_002a4860(temp_v0 + 0x560);
  temp_v3 = FUN_002a4894(temp_v0 + 0x560);
  temp_v5 = FUN_002a4894(temp_v0 + 0x560);
  temp_v5 = FUN_001834a4(0x1a,temp_v5 + 200);
  temp_v7 = *(int *)(temp_v0 + 0x3fc);
  if (temp_v7 >= 4) {
    temp_v11 = (int)*(short *)(temp_v5 + 8);
    temp_v1 = (int)*(short *)(temp_v5 + 10);
  }
  else {
    temp_v11 = ((int)*(short *)(temp_v5 + 8) - (int)*(short *)(temp_v1 + 8)) * 0x1000;
    temp_v11 = (int)*(short *)(temp_v1 + 8) +
             (((int)(temp_v11 + ((unsigned int)(temp_v11 >> 0x1f) >> 0x1e)) >> 2) * temp_v7 >> 0xc);
    temp_v5 = ((int)*(short *)(temp_v5 + 10) - (int)*(short *)(temp_v1 + 10)) * 0x1000;
    temp_v1 = (int)*(short *)(temp_v1 + 10) +
            (((int)(temp_v5 + ((unsigned int)(temp_v5 >> 0x1f) >> 0x1e)) >> 2) * temp_v7 >> 0xc);
  }
  FUN_001677c0();
  param_2 = param_2 + temp_v1;
  temp_v11 = temp_v11 + param_1;
  FUN_001835b4(2,0x1a,0xbe,temp_v11,param_2,0xab);
  FUN_001835b4(2,0x1a,0xbf,temp_v11,param_2,0xab);
  FUN_001835b4(2,0x1a,0xc0,temp_v11,param_2,0xab);
  FUN_001677c0();
  FUN_001835b4(2,0x1a,0xc1,temp_v11,param_2,0xb5);
  temp_v1 = FUN_002a4894(temp_v0 + 0x560);
  temp_v1 = FUN_00284140((int)*(short *)(temp_v0 + temp_v1 * 2 + 0x44c));
  if (!((temp_v1 == 1 || temp_v1 == 2) || temp_v1 == 6)) {
    FUN_001835b4(2,0x1a,0x247,temp_v11,param_2,0xb5);
    FUN_001835b4(2,0x1a,0xc2,temp_v11,param_2,0xba);
    FUN_001835b4(2,0x1a,0xc3,temp_v11,param_2,0xba);
  }
  else {
    FUN_001835b4(2,0x1a,0x287,temp_v11,param_2,0xb5);
    if (!((temp_v1 == 1 || temp_v1 == 2) || temp_v1 == 6)) {
      FUN_001835b4(2,0x1a,0xc2,temp_v11,param_2,0xba);
      FUN_001835b4(2,0x1a,0xc3,temp_v11,param_2,0xba);
    }
    else {
      FUN_001835b4(2,0x1a,0x284,temp_v11,param_2,0xba);
      FUN_001835b4(2,0x1a,0x285,temp_v11,param_2,0xba);
    }
  }
  FUN_001677c0();
  if (!((temp_v1 == 1 || temp_v1 == 2) || temp_v1 == 6)) {
    temp_v5 = FUN_001654e4(temp_v0 + 0xb0);
    temp_v7 = FUN_001654d8(temp_v0 + 0xb0);
    FUN_001835b4(2,0x1a,0xc4,temp_v7 + temp_v11,temp_v5 + param_2,0xbf);
  }
  else {
    temp_v5 = FUN_001654e4(temp_v0 + 0xb0);
    temp_v7 = FUN_001654d8(temp_v0 + 0xb0);
    FUN_001835b4(2,0x1a,0x286,temp_v7 + temp_v11,temp_v5 + param_2,0xbf);
  }
  FUN_001677c0();
  temp_v5 = FUN_001834a4(0x1a,0xc5);
  FUN_00240210(temp_v0,temp_v4,temp_v12,temp_v2 + temp_v3);
  temp_v4 = temp_v10;
  if (temp_v0 != 0) {
    temp_v4 = 0x57d8ffff;
  }
  if (temp_v0 == 0) {
    temp_v4 = 0x9fe7ffff;
  }
  VectorSignedToFloat(*(short *)(temp_v5 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v5 + 8) + temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((temp_v1 == 1 || temp_v1 == 2) || temp_v1 == 6) {
    temp_v4 = 0xf5ff9fff;
  }
  FUN_00162790(3,temp_v4,temp_v12);
  FUN_001677c0();
  return;
}
