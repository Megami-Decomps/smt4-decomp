/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00133568` (_code @ 0x133568, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern romwright_code *DAT_0044e330; /* 0x44e330 */
extern romwright_code *DAT_0044e334; /* 0x44e334 */
extern int *DAT_004652a0; /* 0x4652a0 */
extern unsigned int DAT_004652a4; /* 0x4652a4 */
extern int DAT_004652b4; /* 0x4652b4 */
extern unsigned int DAT_004655c4; /* 0x4655c4 */
extern unsigned int DAT_004655c8; /* 0x4655c8 */
extern unsigned int DAT_004655cc; /* 0x4655cc */
extern unsigned int DAT_004655d0; /* 0x4655d0 */
extern unsigned int DAT_004655d4; /* 0x4655d4 */
extern unsigned int DAT_004655d8; /* 0x4655d8 */
extern unsigned int DAT_004655dc; /* 0x4655dc */
extern unsigned int DAT_004655e0; /* 0x4655e0 */
extern unsigned int DAT_004655e4; /* 0x4655e4 */

/* Supplied declaration required: FUN_002aa790. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: func_0x002a691c. */


void FUN_00133568(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  *param_1 = 0x40000;
  temp_v2 = *param_1;
  temp_v1 = 1;
  do {
    temp_v0 = temp_v1 * 4;
    temp_v3 = temp_v1 * 4;
    temp_v1 = temp_v1 + 2;
    temp_v2 = temp_v2 | *(unsigned int *)(temp_v0 + 0x40b6ac);
    *param_1 = temp_v2;
    temp_v2 = temp_v2 | *(unsigned int *)(temp_v3 + 0x40b6b0);
    *param_1 = temp_v2;
  } while (temp_v1 < 0x13);
  DAT_004655c4 = 0x1010000;
  DAT_004655c8 = 8000;
  DAT_004655cc = 0xff00ff10;
  DAT_004655dc = 3;
  DAT_004655e0 = 0xffffff;
  DAT_004655d0 = 0;
  DAT_004655d4 = 3;
  DAT_004655d8 = 0;
  DAT_004655e4 = 0x3000000;
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0x10245;
    *DAT_004652a0 = 1;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0x10244;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0x80289;
    *DAT_004652a0 = -0x80000000;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xb0229;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf0252;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf0251;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf0254;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0x10253;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf0242;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf024a;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0x5025e;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  func_0x002a691c(0x101,7,0);
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf011f;
    *DAT_004652a0 = 0x10140;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf0100;
    *DAT_004652a0 = 0xe40100;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf0101;
    *DAT_004652a0 = 0x1010000;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf0107;
    *DAT_004652a0 = 8000;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf0105;
    *DAT_004652a0 = -0xff00f0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0x10061;
    *DAT_004652a0 = 3;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0x10062;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf0065;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf0066;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf0067;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0x10118;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf011b;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0x7006a;
    *DAT_004652a0 = 0xffffff;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf0102;
    *DAT_004652a0 = 3;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0x80126;
    *DAT_004652a0 = 0x3000000;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  func_0x002a691c(0x40,0x10,0);
  func_0x002a691c(0x50,7,0x1f1f1f1f);
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf0058;
    *DAT_004652a0 = 0x100;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf004c;
    *DAT_004652a0 = 1;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf006f;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0x20060;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xc0069;
    *DAT_004652a0 = 0x20000;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    *DAT_004652a0 = 0xf;
    DAT_004652a0[1] = 0xf0113;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    *DAT_004652a0 = 0xf;
    DAT_004652a0[1] = 0xf0112;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf0114;
    *DAT_004652a0 = 3;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf0115;
    *DAT_004652a0 = 3;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  temp_v1 = 0;
  do {
    if (DAT_004652a0 < DAT_004652a4) {
      *DAT_004652a0 = temp_v1 << 8;
      DAT_004652a0[1] = 0xf01c5;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    temp_v3 = 0;
    do {
      func_0x002a691c(0x1c8,8,0);
      temp_v3 = temp_v3 + 8;
    } while (temp_v3 < 0x100);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 7);
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf0290;
    *DAT_004652a0 = -0x80000000;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  temp_v1 = 0;
  do {
    func_0x002a691c(0x291,8,0);
    temp_v1 = temp_v1 + 2;
  } while (temp_v1 < 0x60);
  if (DAT_0044e330 == (romwright_code *)0x0) {
    temp_v4 = 0;
  }
  else {
    temp_v4 = (*DAT_0044e330)(0x10000,0x100,0,0x4000);
  }
  FUN_002c4938(temp_v4,0x4000);
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf02cb;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  FUN_002aa790(0x2cc,0x200,temp_v4);
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf029b;
    *DAT_004652a0 = 0x200;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  FUN_002aa790(0x29c,0xe00,temp_v4);
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf02bf;
    *DAT_004652a0 = 0;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_0044e334 != (romwright_code *)0x0) {
    (*DAT_0044e334)(0x10000,0x100,0,temp_v4);
  }
  temp_v1 = 0;
  do {
    if (DAT_004652a0 < DAT_004652a4) {
      DAT_004652a0[1] = (temp_v1 + 0x2b1U) | 0xf0000;
      *DAT_004652a0 = 0;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  func_0x002a691c(0x28b,2);
  func_0x002a691c(0x205,0x24,0);
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf01d4;
    *DAT_004652a0 = 1;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    DAT_004652a0[1] = 0xf00ae;
    *DAT_004652a0 = -0x1030710;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  temp_v1 = DAT_004652b4;
  temp_v3 = 0;
  do {
    pbVar3 = (unsigned char *)(temp_v1 + temp_v3 + 0x16b1);
    if ((*pbVar3 != 0) && (DAT_004652a0 < DAT_004652a4)) {
      *DAT_004652a0 = *(int *)(temp_v1 + temp_v3 * 4 + 0x1300);
      DAT_004652a0[1] = *(unsigned int *)(temp_v3 * 4 + 0x4e4f54) | ((unsigned int)*pbVar3 << 0x10);
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0xbd);
  return;
}
