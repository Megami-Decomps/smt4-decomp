/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00204d6c` (_code @ 0x204d6c, 0x254 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_5_stack;

extern unsigned char LAB_00204fd0; /* 0x204fd0 */
extern unsigned char LAB_00204fdc; /* 0x204fdc */
extern unsigned char LAB_00204fe0; /* 0x204fe0 */
extern unsigned char LAB_0020501c; /* 0x20501c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_0028d498(int);
/* Supplied declaration required: FUN_002b6f74. */
/* Supplied declaration required: FUN_002bcff0. */
/* Supplied declaration required: FUN_002be16c. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf558. */
extern int FUN_002bf6d0(unsigned int, unsigned int);


void FUN_00204d6c(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  unsigned char temp_v4 [84];
  
  temp_v0 = FUN_002bf6d0(0x1a,param_4);
  FUN_002bf558(2,0x1a,0x19,*(short *)(temp_v0 + 8) + param_1,*(short *)(temp_v0 + 10) + param_2,0xb5);
  if (param_3 != 0) {
    temp_v1 = FUN_002bf6d0(0x1a,0x40f);
    temp_v2 = param_3;
    FUN_002bcff0(param_3);
    FUN_002be7fc(temp_v4,&LAB_00204fd0,temp_v2);
    VectorSignedToFloat((int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(2,param_5,temp_v4,(int)*(short *)(temp_v1 + 8));
    temp_v2 = FUN_002bf6d0(0x1a,0x40e);
    FUN_002b6f74((int)(short)param_3,
                 (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v0 + 8) + param_1,
                 (int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0xb5,0,0);
    temp_v2 = FUN_002bf6d0(0x1a,0x521);
    temp_v3 = FUN_0028d498(param_3);
    FUN_002be7fc(temp_v4,&LAB_00204fdc,temp_v3);
    FUN_002be16c(0,(int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v0 + 10) + param_2,1,8,0xb5,
                 temp_v4);
    return;
  }
  temp_v2 = FUN_002bf6d0(0x1a,0x40f);
  FUN_002be7fc(temp_v4,&LAB_00204fe0);
  VectorSignedToFloat((int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be77c(2,0x5a5a5aff,temp_v4,(int)*(short *)(temp_v2 + 8));
  temp_v2 = FUN_002bf6d0(0x1a,0x521);
  FUN_002be7fc(temp_v4,&LAB_0020501c);
  FUN_002be16c(0,(int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
               (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v0 + 10) + param_2,1,8,0xb5,
               temp_v4);
  return;
}
