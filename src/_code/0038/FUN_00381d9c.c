/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00381d9c` (_code @ 0x381d9c, 0x19c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_00381f38; /* 0x381f38 */
extern unsigned char LAB_00381f5c; /* 0x381f5c */
extern unsigned char DAT_00405898; /* 0x405898 */
extern unsigned char DAT_004058b0; /* 0x4058b0 */

/* Supplied declaration required: FUN_001a15a0. */
/* Supplied declaration required: FUN_002639f4. */
/* Supplied declaration required: FUN_0028f15c. */
/* Supplied declaration required: FUN_00297704. */
extern int FUN_0029923c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a6214. */
/* Supplied declaration required: FUN_002a7540. */
/* Supplied declaration required: FUN_002b6700. */
extern unsigned int FUN_002bda1c(unsigned int);
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002c4e28. */
/* Supplied declaration required: FUN_003854d8. */
/* Supplied declaration required: FUN_00385cbc. */
/* Supplied declaration required: FUN_00385cfc. */
/* Supplied declaration required: FUN_00385d04. */


void FUN_00381d9c(unsigned int *param_1)

{
/* irregular: 15 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  FUN_003854d8();
  *param_1 = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[0x168] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x169] = 0;
  FUN_002c4b30(param_1 + 0x1b3,0x640);
  FUN_00297704(&LAB_00381f38,param_1 + 0x168,0);
  FUN_00297704(&LAB_00381f5c,param_1 + 0x169,0);
  FUN_002c3344(param_1 + 9);
  FUN_002c32f8(param_1 + 9,0,0,&DAT_00405898,0x18,0,0,0,0,&DAT_004058b0,0xa8);
  FUN_00385cbc(param_1 + 8);
  FUN_00385cfc(param_1 + 8);
  FUN_00385d04(param_1 + 8);
  param_1[0x369] = 0;
  param_1[0x3ed] = 0;
  param_1[0x3ec] = 0;
  param_1[0x363] = 0;
  param_1[7] = 0xffffffff;
  param_1[0x167] = 0;
  *(unsigned char *)(param_1 + 0x350) = 0;
  FUN_002c4e28(0x31);
  FUN_002a6214(0x31,0);
  temp_v2 = 0;
  do {
    param_1[temp_v2 + 0xa3] = 0;
    temp_v0 = FUN_002bda1c(0);
    temp_v3 = temp_v2 + 1;
    param_1[temp_v2 + 0xa3] = temp_v0;
    temp_v2 = temp_v3;
  } while (temp_v3 < 4);
  FUN_002639f4();
  FUN_002a7540(0);
  FUN_001a15a0(0);
  temp_v2 = 0x15e;
  do {
    temp_v3 = temp_v2;
    FUN_002b6700();
    if (((temp_v3 != 0) && (*(char *)(temp_v3 + 6) == '\0')) &&
       (temp_v1 = FUN_0029923c(temp_v2,1), temp_v1 == 0)) {
      FUN_0028f15c(temp_v2);
    }
    temp_v2 = (temp_v2 + 1) & 0xffff;
  } while (temp_v2 < 400);
  return;
}
