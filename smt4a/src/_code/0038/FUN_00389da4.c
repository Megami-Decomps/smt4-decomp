/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00389da4` (_code @ 0x389da4, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_6_stack;

extern unsigned char LAB_00389ef0; /* 0x389ef0 */
extern unsigned char LAB_00389efc; /* 0x389efc */
extern unsigned char LAB_00389f00; /* 0x389f00 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00180310. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184e64. */
extern int FUN_0035d89c(int);
/* Supplied declaration required: FUN_0035e458. */
extern int FUN_004bd098(void);


void FUN_00389da4(unsigned int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [68];
  
  temp_v0 = FUN_004bd098();
  temp_v3 = param_2;
  FUN_0035e458();
  temp_v1 = FUN_0035d89c(param_2);
  temp_v4 = param_6 + temp_v0;
  if (temp_v3 < param_6 + temp_v0) {
    temp_v4 = temp_v3;
  }
  if (temp_v4 < temp_v1) {
    temp_v4 = temp_v1;
  }
  if (temp_v4 != 0) {
    if (temp_v1 >= temp_v4) {
      FUN_00100388(temp_v5,&LAB_00389ef0);
      temp_v2 = 0xff00ffff;
    }
    else if (temp_v4 < 0) {
      FUN_00100388(temp_v5,&LAB_00389ef0);
      temp_v2 = 0xdc0f14ff;
    }
    else if (temp_v4 >= temp_v3) {
      FUN_00100388(temp_v5,&LAB_00389f00);
      temp_v2 = 0xfbeb39ff;
    }
    else {
      FUN_00100388(temp_v5,&LAB_00389f00);
      temp_v2 = 0x72e027ff;
    }
    FUN_00184e64(temp_v2);
    temp_v3 = FUN_001834a4(0xb,0x402);
    FUN_00180310(2,*(short *)(temp_v3 + 8) + param_3,*(short *)(temp_v3 + 10) + param_4,0,1,param_5 + 1,
                 temp_v5);
    temp_v3 = FUN_001834a4(0xb,0x401);
    if (temp_v4 < 0) {
      temp_v4 = -temp_v4;
    }
    FUN_00180310(2,*(short *)(temp_v3 + 8) + param_3,*(short *)(temp_v3 + 10) + param_4,0,1,param_5 + 1,
                 &LAB_00389efc,temp_v4);
    FUN_00183bb0();
  }
  return;
}
