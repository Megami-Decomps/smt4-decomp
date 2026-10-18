/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124c48` (_code @ 0x124c48, 0x2ac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int DAT_0043e190; /* 0x43e190 */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002ba46c. */
/* Supplied declaration required: FUN_002bdeb8. */
/* Supplied declaration required: FUN_002bef14. */
extern int FUN_002bef70(int);
/* Supplied declaration required: FUN_002bef7c. */
/* Supplied declaration required: FUN_002bef88. */
/* Supplied declaration required: FUN_002befdc. */
/* Supplied declaration required: FUN_002bf558. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf710. */
extern int FUN_002c0ba8(unsigned int);
extern unsigned int FUN_002c5f7c(unsigned int, unsigned int);


void FUN_00124c48(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  
  temp_v0 = FUN_002c0ba8(0x402);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002bef7c(DAT_0043e190 + 0x754);
    temp_v1 = FUN_002bef70(DAT_0043e190 + 0x754);
    if ('\0' < *(char *)(DAT_0043e190 + 0x82)) {
      temp_v2 = FUN_002bef7c(DAT_0043e190 + 0x7e0);
      temp_v0 = temp_v0 + temp_v2;
      temp_v2 = FUN_002bef70(DAT_0043e190 + 0x7e0);
      temp_v1 = temp_v1 + temp_v2;
    }
    temp_v3 = FUN_002c5f7c(1,0);
    FUN_002befdc(DAT_0044ea00,3,temp_v3);
    FUN_002bf710();
    FUN_002bef14();
    temp_v5 = 0.27f;
    if (param_1 != 0) {
      temp_v4 = temp_v5;
      temp_v2 = FUN_002bf6d0(0xe,0x94);
      temp_v5 = temp_v4;
      FUN_002ba46c(DAT_0044ea00);
      temp_v0 = temp_v0 + (int)temp_v4;
    }
    else {
      temp_v2 = FUN_002bf6d0(0xe,0xc0);
    }
    FUN_002bf558(2,0xe,0,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0xb);
    FUN_002bdeb8(*(unsigned int *)(DAT_0043e190 + 0x6c),*(short *)(temp_v2 + 8) + temp_v0,
                 *(short *)(temp_v2 + 10) + temp_v1,0);
    if (*(char *)(DAT_0043e190 + 0x80) != '\0') {
      if (param_1 != 0) {
        temp_v2 = FUN_002bf6d0(0xe,0x100);
      }
      else {
        temp_v2 = FUN_002bf6d0(0xe,0x11f);
      }
      FUN_002bf558(2,0xe,0xc,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0xb);
      FUN_002bdeb8(*(unsigned int *)(DAT_0043e190 + 0x74),*(short *)(temp_v2 + 8) + temp_v0,
                   *(short *)(temp_v2 + 10) + temp_v1,1);
    }
    temp_v0 = DAT_0043e190;
    if (*(char *)(DAT_0043e190 + 0xa1) != '\0') {
      temp_v1 = DAT_0043e190 + 0x754;
      temp_v3 = FUN_002bef7c();
      temp_v1 = FUN_002bef70(temp_v1);
      FUN_002ba46c(DAT_0044ea00);
      temp_v4 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = FUN_002bf6d0(0xe,0x100);
      FUN_002bf558(2,0xe,0x16,(int)*(short *)(temp_v2 + 8) + (int)(temp_v5 + temp_v4),
                   *(short *)(temp_v2 + 10) + temp_v1,0xb);
      FUN_002bdeb8(-*(int *)(temp_v0 + 0x9c),(int)*(short *)(temp_v2 + 8) + (int)(temp_v5 + temp_v4),
                   *(short *)(temp_v2 + 10) + temp_v1,1);
    }
    FUN_002bf710();
    FUN_002bef14();
    FUN_002bef88(DAT_0044ea00,3);
  }
  return;
}
