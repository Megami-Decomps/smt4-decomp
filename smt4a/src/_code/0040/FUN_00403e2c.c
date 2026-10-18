/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00403e2c` (_code @ 0x403e2c, 0x218 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_001641b4. */
extern int FUN_001643a0(void);
extern unsigned int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_00212724. */
/* Supplied declaration required: FUN_00228b04. */
/* Supplied declaration required: FUN_0023b27c. */
extern unsigned int FUN_002a4860(int);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_0031f208. */
/* Supplied declaration required: FUN_0031f27c. */
/* Supplied declaration required: FUN_003450d4. */
/* Supplied declaration required: FUN_0039b984. */
/* Supplied declaration required: FUN_004029f4. */
/* Supplied declaration required: FUN_00404974. */


void FUN_00403e2c(int param_1)

{
/* irregular: 15 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [16];
  
  FUN_00163aa4(param_1 + 0x2f0);
  FUN_00163aa4(param_1 + 0x37c);
  FUN_00228b04(param_1 + 0x90,1);
  temp_v0 = FUN_002a4860(param_1 + 0x90);
  *(unsigned int *)(param_1 + 0xf8) = temp_v0;
  temp_v1 = FUN_002a4894(param_1 + 0x90);
  *(int *)(param_1 + 0xf4) = temp_v1;
  temp_v2 = (unsigned int)*(unsigned short *)(param_1 + (temp_v1 + *(int *)(param_1 + 0xf8)) * 2 + 0x408);
  *(unsigned int *)(param_1 + 0x100) = temp_v2;
  FUN_0039b984();
  *(unsigned int *)(param_1 + 0x664) = temp_v2;
  temp_v4[0] = 0;
  temp_v1 = FUN_001643a0();
  temp_v0 = FUN_001834a4(0x32,0x8b);
  temp_v3 = param_1 + 0x90;
  FUN_003450d4(temp_v3,temp_v0,param_1 + 0x10c,(int)*(short *)(param_1 + 0x126),
               (int)*(short *)(param_1 + 0x122),(int)*(short *)(param_1 + 0x124),temp_v4,0,1);
  if (temp_v3 == 0) {
    temp_v3 = 0;
    FUN_001517b4(0,1);
    if ((temp_v3 != 0) || (temp_v1 == 6)) {
      FUN_001641b4(0x100020e);
      FUN_00404974(param_1);
      FUN_00184758(param_1 + 0x1d8,1,0);
      FUN_00184c00(param_1 + 0x1d8,0);
      FUN_004029f4(param_1,5,7);
      return;
    }
    temp_v1 = 1;
    FUN_001517b4();
    if (temp_v1 != 0) {
      FUN_001641b4(0x100020f);
      FUN_00184758(param_1 + 0x14c,2,0);
      FUN_00184c00(param_1 + 0x14c,1,0);
      FUN_00212724();
      FUN_004029f4(param_1,2,0);
    }
    else {
      temp_v1 = 9;
      FUN_001517b4(9,1);
      if (temp_v1 != 0) {
        FUN_0031f27c(0x1e,0);
        FUN_0031f208(0x34);
        FUN_0031f208(0x1b);
        FUN_0023b27c();
        FUN_0019de98(0,0xf4f4f4ff);
        FUN_001641b4(0x100020e);
        FUN_004029f4(param_1,8,0);
        return;
      }
    }
  }
  return;
}
