/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00399594` (_code @ 0x399594, 0x28c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char DAT_00404acc; /* 0x404acc */
extern unsigned char DAT_00404b20; /* 0x404b20 */
extern unsigned char DAT_00404b44; /* 0x404b44 */

/* Supplied declaration required: FUN_00232800. */
/* Supplied declaration required: FUN_00233600. */
/* Supplied declaration required: FUN_0027edf8. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf0a8. */
extern int FUN_002c2b1c(void);
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c3b48. */
/* Supplied declaration required: FUN_002c5b04. */
/* Supplied declaration required: FUN_00399e20. */
/* Supplied declaration required: FUN_003eb294. */


void FUN_00399594(unsigned char *param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  
  temp_v0 = FUN_002c2b1c();
  FUN_00399e20(param_1);
  FUN_002c5b04(0x33,0);
  param_1[0xc] = 0xff;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[0x55] = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  FUN_002c3b48(param_1 + 0x62,0x100);
  param_1[0x60] = 0;
  FUN_00232800(param_1 + 0x164,0,0,0x1c);
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  FUN_003eb294(param_1 + 0x56);
  puVar2 = param_1 + 0x5f8;
  FUN_002c3344();
  FUN_002c32f8(puVar2,&DAT_00404acc,0x54,&DAT_00404b20,0x24,0,0,0,0,&DAT_00404b44,0x8c);
  temp_v1 = 0;
  do {
    FUN_002bdb2c(param_1 + temp_v1 * 0x8c + 0x618,0x1c,0xfa1,puVar2,0x15);
    FUN_002bdac0(param_1 + temp_v1 * 0x8c + 0x618,4,0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 5);
  FUN_00233600(param_1 + 0x178);
  *(unsigned int *)(param_1 + 0xb84) = 0x78;
  *(unsigned int *)(param_1 + 0xb80) = 0xa0;
  *(unsigned int *)(param_1 + 0xb7c) = 0;
  if (*(char *)(temp_v0 + 0xd5a) == '\0') {
    *(unsigned char *)(temp_v0 + 0xd5a) = 0xc;
  }
  *(unsigned int *)(param_1 + 0x5a88) = 0;
  *(unsigned int *)(param_1 + 0x61b0) = 0;
  param_1[0x5a8c] = 0;
  param_1[0x5a8d] = 0;
  param_1[0x5a8e] = 0;
  param_1[0x5a8f] = 0;
  temp_v1 = 0x20;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v1 - 1;
    *(unsigned int *)(param_1 + temp_v0 * 8 + 0xb88) = 0;
    *(unsigned int *)(param_1 + temp_v0 * 8 + 0xb8c) = 0;
    *(unsigned int *)(param_1 + temp_v0 * 8 + 0xc88) = 0;
    *(unsigned int *)(param_1 + temp_v0 * 8 + 0xc8c) = 0;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 != 0);
  *(unsigned int *)(param_1 + 0x121cc) = 0;
  param_1[0x12268] = 0;
  param_1[0x121bc] = 0;
  *(unsigned short *)(param_1 + 0x121be) = 0;
  *(unsigned short *)(param_1 + 0x121c0) = 0xffff;
  FUN_0027edf8(param_1 + 0x122e8,1);
  temp_v1 = 0x20;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v1 - 1;
    *(unsigned short *)(param_1 + temp_v0 * 4 + 0x121e4) = 0;
    *(unsigned short *)(param_1 + temp_v0 * 4 + 0x121e6) = 0;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 != 0);
  *(unsigned int *)(param_1 + 0x12264) = 0;
  param_1[0x9ec] = 0;
  param_1[0x9ed] = 0;
  param_1[0x9ee] = 0;
  *(unsigned int *)(param_1 + 0x9f0) = 0;
  FUN_002bf0a8(param_1 + 0x9f8,0x1c,0x1121,0x1d,puVar2,0x15);
  FUN_002bdac0(param_1 + 0x9f8,0);
  param_1[0xa84] = 0;
  param_1[0xa85] = 0;
  param_1[0xa86] = 0;
  FUN_002bf0a8(param_1 + 0xa88,0x1c,0x111a,0x1c,puVar2,0x15);
  FUN_002bdac0(param_1 + 0xa88,5,0);
  return;
}
