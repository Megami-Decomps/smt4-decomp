/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017909c` (_code @ 0x17909c, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern romwright_code *DAT_0058918c; /* 0x58918c */
extern romwright_code *DAT_00589190; /* 0x589190 */
extern int *DAT_005b40e0; /* 0x5b40e0 */
extern unsigned int DAT_005b40e4; /* 0x5b40e4 */
extern int DAT_005b40f4; /* 0x5b40f4 */
extern unsigned int DAT_005b4404; /* 0x5b4404 */
extern unsigned int DAT_005b4408; /* 0x5b4408 */
extern unsigned int DAT_005b440c; /* 0x5b440c */
extern unsigned int DAT_005b4410; /* 0x5b4410 */
extern unsigned int DAT_005b4414; /* 0x5b4414 */
extern unsigned int DAT_005b4418; /* 0x5b4418 */
extern unsigned int DAT_005b441c; /* 0x5b441c */
extern unsigned int DAT_005b4420; /* 0x5b4420 */
extern unsigned int DAT_005b4424; /* 0x5b4424 */

/* Supplied declaration required: FUN_001a91ec. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: func_0x001a9124. */


void FUN_0017909c(unsigned int *param_1)

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
    temp_v2 = temp_v2 | *(unsigned int *)(temp_v0 + 0x53f2c0);
    *param_1 = temp_v2;
    temp_v2 = temp_v2 | *(unsigned int *)(temp_v3 + 0x53f2c4);
    *param_1 = temp_v2;
  } while (temp_v1 < 0x13);
  DAT_005b4404 = 0x1010000;
  DAT_005b4408 = 8000;
  DAT_005b440c = 0xff00ff10;
  DAT_005b441c = 3;
  DAT_005b4420 = 0xffffff;
  DAT_005b4410 = 0;
  DAT_005b4414 = 3;
  DAT_005b4418 = 0;
  DAT_005b4424 = 0x3000000;
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x10245;
    *DAT_005b40e0 = 1;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x10244;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x80289;
    *DAT_005b40e0 = -0x80000000;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xb0229;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0252;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0251;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0254;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x10253;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0242;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf024a;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x5025e;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  func_0x001a9124(0x101,7,0);
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf011f;
    *DAT_005b40e0 = 0x10140;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0100;
    *DAT_005b40e0 = 0xe40100;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0101;
    *DAT_005b40e0 = 0x1010000;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0107;
    *DAT_005b40e0 = 8000;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0105;
    *DAT_005b40e0 = -0xff00f0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x10061;
    *DAT_005b40e0 = 3;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x10062;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0065;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0066;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0067;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x10118;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf011b;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x7006a;
    *DAT_005b40e0 = 0xffffff;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0102;
    *DAT_005b40e0 = 3;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x80126;
    *DAT_005b40e0 = 0x3000000;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  func_0x001a9124(0x40,0x10,0);
  func_0x001a9124(0x50,7,0x1f1f1f1f);
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0058;
    *DAT_005b40e0 = 0x100;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf004c;
    *DAT_005b40e0 = 1;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf006f;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x20060;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xc0069;
    *DAT_005b40e0 = 0x20000;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = 0xf;
    DAT_005b40e0[1] = 0xf0113;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = 0xf;
    DAT_005b40e0[1] = 0xf0112;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0114;
    *DAT_005b40e0 = 3;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0115;
    *DAT_005b40e0 = 3;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  temp_v1 = 0;
  do {
    if (DAT_005b40e0 < DAT_005b40e4) {
      *DAT_005b40e0 = temp_v1 << 8;
      DAT_005b40e0[1] = 0xf01c5;
      DAT_005b40e0 = DAT_005b40e0 + 2;
    }
    temp_v3 = 0;
    do {
      func_0x001a9124(0x1c8,8,0);
      temp_v3 = temp_v3 + 8;
    } while (temp_v3 < 0x100);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 7);
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0290;
    *DAT_005b40e0 = -0x80000000;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  temp_v1 = 0;
  do {
    func_0x001a9124(0x291,8,0);
    temp_v1 = temp_v1 + 2;
  } while (temp_v1 < 0x60);
  if (DAT_0058918c == (romwright_code *)0x0) {
    temp_v4 = 0;
  }
  else {
    temp_v4 = (*DAT_0058918c)(0x10000,0x100,0,0x4000);
  }
  FUN_002e6354(temp_v4,0x4000);
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf02cb;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  FUN_001a91ec(0x2cc,0x200,temp_v4);
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf029b;
    *DAT_005b40e0 = 0x200;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  FUN_001a91ec(0x29c,0xe00,temp_v4);
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf02bf;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_00589190 != (romwright_code *)0x0) {
    (*DAT_00589190)(0x10000,0x100,0,temp_v4);
  }
  temp_v1 = 0;
  do {
    if (DAT_005b40e0 < DAT_005b40e4) {
      DAT_005b40e0[1] = (temp_v1 + 0x2b1U) | 0xf0000;
      *DAT_005b40e0 = 0;
      DAT_005b40e0 = DAT_005b40e0 + 2;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  func_0x001a9124(0x28b,2);
  func_0x001a9124(0x205,0x24,0);
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf01d4;
    *DAT_005b40e0 = 1;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf00ae;
    *DAT_005b40e0 = -0x1030710;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  temp_v1 = DAT_005b40f4;
  temp_v3 = 0;
  do {
    pbVar3 = (unsigned char *)(temp_v1 + temp_v3 + 0x16b1);
    if ((*pbVar3 != 0) && (DAT_005b40e0 < DAT_005b40e4)) {
      *DAT_005b40e0 = *(int *)(temp_v1 + temp_v3 * 4 + 0x1300);
      DAT_005b40e0[1] = *(unsigned int *)(temp_v3 * 4 + 0x64136c) | ((unsigned int)*pbVar3 << 0x10);
      DAT_005b40e0 = DAT_005b40e0 + 2;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0xbd);
  return;
}
