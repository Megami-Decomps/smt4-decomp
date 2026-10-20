/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00332fd8` (_code @ 0x332fd8, 0x270 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbf0c(void);
int FUN_001bc124(int, int);
int FUN_00272e64(void);
int FUN_00352bc4(int, int);
int FUN_003534b0(...);
int VectorSignedToFloat(int, int);

/* stack frame of void: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern unsigned char LAB_00333264; /* 0x333264 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
extern int FUN_002393cc(unsigned int);
/* Supplied declaration required: FUN_00272e64. */
/* Supplied declaration required: FUN_00352bc4. */
/* Supplied declaration required: FUN_003534b0. */
extern unsigned int FUN_003857c8(int);


void FUN_00332fd8(void)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int in_fpscr;
  unsigned int temp_v7;
  
  temp_v2 = FUN_00162e8c();
  if (*(char *)(temp_v2 + 0xe09) != '\0') {
    temp_v0 = *(char *)(temp_v2 + 0xe0a);
    temp_v1 = *(char *)(temp_v2 + 0xe0b);
    temp_v3 = FUN_003857c8((int)*(float *)(temp_v2 + 0x15c4));
    VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(char *)(temp_v2 + 0xe00),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(char *)(temp_v2 + 0xe01),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00352bc4((int)*(char *)(temp_v2 + 0xe00),(int)*(char *)(temp_v2 + 0xe01));
    FUN_00272e64();
    temp_v4 = (short)*(char *)(temp_v2 + 0xe0a) * 700 + 0x15e;
    temp_v2 = (short)*(char *)(temp_v2 + 0xe0b) * 700 + 0x15e;
    VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001bc124(temp_v2,temp_v4);
    FUN_001bbf0c();
    temp_v6 = 0x12;
    temp_v2 = FUN_002393cc(temp_v3);
    if (temp_v2 != 0) {
      switch(temp_v3) {
      case 2:
        temp_v6 = 0x13;
        break;
      case 3:
        temp_v6 = 0x14;
        break;
      case 4:
        temp_v6 = 0x15;
        break;
      case 5:
        temp_v6 = 0x16;
        break;
      case 6:
        temp_v6 = 0x17;
        break;
      case 7:
        temp_v6 = 0x18;
        break;
      case 8:
        temp_v6 = 0x19;
      }
      temp_v7 = 0x24;
      temp_v5 = 0x52;
      temp_v3 = 0;
    }
    else {
      temp_v6 = 1;
      temp_v7 = 0xc;
      temp_v3 = 0x205;
      temp_v5 = 0x56;
    }
    FUN_003534b0(temp_v3,0,&LAB_00333264,temp_v5,temp_v7,0xffffffff,0,0,0,0,0,0,0,0xd,1,temp_v6,1,0xffffffff
                 ,0);
  }
  return;
}

} /* extern "C" */
