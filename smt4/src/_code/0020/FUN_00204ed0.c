/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00204ed0` (_code @ 0x204ed0, 0x254 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_5_stack;

extern unsigned char LAB_00205134; /* 0x205134 */
extern unsigned char LAB_00205140; /* 0x205140 */
extern unsigned char LAB_00205144; /* 0x205144 */
extern unsigned char LAB_00205180; /* 0x205180 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_0028d1f4(int);
/* Supplied declaration required: FUN_002b6c34. */
extern unsigned int FUN_002bce00(int);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf380. */
extern int FUN_002bf4f8(unsigned int, unsigned int);


void FUN_00204ed0(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  unsigned char temp_v3 [84];
  
  temp_v0 = FUN_002bf4f8(0x1a,param_4);
  FUN_002bf380(2,0x1a,0x19,*(short *)(temp_v0 + 8) + param_1,*(short *)(temp_v0 + 10) + param_2,0xb5);
  if (param_3 != 0) {
    temp_v1 = FUN_002bf4f8(0x1a,0x40f);
    temp_v2 = FUN_002bce00(param_3);
    FUN_002be624(temp_v3,&LAB_00205134,temp_v2);
    VectorSignedToFloat((int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,param_5,temp_v3,(int)*(short *)(temp_v1 + 8));
    temp_v1 = FUN_002bf4f8(0x1a,0x40e);
    FUN_002b6c34((int)(short)param_3,
                 (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v0 + 8) + param_1,
                 (int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,0xb5,0,0);
    temp_v1 = FUN_002bf4f8(0x1a,0x521);
    temp_v2 = FUN_0028d1f4(param_3);
    FUN_002be624(temp_v3,&LAB_00205140,temp_v2);
    FUN_002bdf94(0,(int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                 (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v0 + 10) + param_2,1,8,0xb5,
                 temp_v3);
    return;
  }
  temp_v1 = FUN_002bf4f8(0x1a,0x40f);
  FUN_002be624(temp_v3,&LAB_00205144);
  VectorSignedToFloat((int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be5a4(2,0x5a5a5aff,temp_v3,(int)*(short *)(temp_v1 + 8));
  temp_v1 = FUN_002bf4f8(0x1a,0x521);
  FUN_002be624(temp_v3,&LAB_00205180);
  FUN_002bdf94(0,(int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
               (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v0 + 10) + param_2,1,8,0xb5,
               temp_v3);
  return;
}
