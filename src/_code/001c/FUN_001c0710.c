/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c0710` (_code @ 0x1c0710, 0x1cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern unsigned int DAT_004e0e88; /* 0x4e0e88 */
extern unsigned int DAT_004e0e8c; /* 0x4e0e8c */
extern unsigned char DAT_004e0e90; /* 0x4e0e90 */
extern unsigned int *DAT_004e1ed0; /* 0x4e1ed0 */
extern unsigned int DAT_004e1ed4; /* 0x4e1ed4 */
extern unsigned int DAT_004e1f14; /* 0x4e1f14 */
extern unsigned int DAT_004e1f18; /* 0x4e1f18 */
extern unsigned int DAT_004e1f1c; /* 0x4e1f1c */
extern unsigned int DAT_004e1f20; /* 0x4e1f20 */
extern unsigned int DAT_004e1f24; /* 0x4e1f24 */
extern unsigned int DAT_004e1f28; /* 0x4e1f28 */
extern unsigned int DAT_004e1f2c; /* 0x4e1f2c */
extern unsigned int DAT_004e1f30; /* 0x4e1f30 */
extern unsigned int DAT_004e1f34; /* 0x4e1f34 */
extern unsigned int DAT_004e1f38; /* 0x4e1f38 */
extern unsigned int DAT_004e1f3c; /* 0x4e1f3c */
extern unsigned int DAT_004e1f40; /* 0x4e1f40 */
extern unsigned int DAT_004e1f44; /* 0x4e1f44 */
extern unsigned int DAT_004e1f48; /* 0x4e1f48 */
extern unsigned int DAT_004e1f4c; /* 0x4e1f4c */
extern unsigned int DAT_004e1f50; /* 0x4e1f50 */
extern int DAT_004e1f54; /* 0x4e1f54 */
extern unsigned int DAT_004e1f58; /* 0x4e1f58 */
extern unsigned int DAT_004e1f5c; /* 0x4e1f5c */
extern unsigned int DAT_004e1f60; /* 0x4e1f60 */

/* Supplied declaration required: FUN_0035edac. */


unsigned int * FUN_001c0710(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3 [16];
  
  if ((DAT_004e0e88 & 1) == 0) {
    return (unsigned int *)0x0;
  }
  DAT_004e1f5c = 0;
  DAT_004e1f60 = 0;
  DAT_004e1f58 = 0x10;
  if (param_2 >= 0x11) {
    temp_v2 = 0x10;
  }
  else {
    temp_v2 = 0x10 - (0x10 - param_2);
    if (temp_v2 == 0) {
      DAT_004e1ed0 = param_1;
      DAT_004e1f54 = param_2;
      DAT_004e1f58 = 0x10;
      DAT_004e1f5c = 0;
      DAT_004e1f60 = 0;
      return (unsigned int *)0x0;
    }
  }
  temp_v3[0] = 0;
  temp_v3[1] = 0;
  temp_v3[2] = 0;
  temp_v3[3] = 0;
  temp_v3[4] = 0;
  temp_v3[5] = 0;
  temp_v3[6] = 0;
  temp_v3[7] = 0;
  temp_v3[8] = 0;
  temp_v3[9] = 0;
  temp_v3[10] = 0;
  temp_v3[0xb] = 0;
  temp_v3[0xc] = 0;
  temp_v3[0xd] = 0;
  temp_v3[0xe] = 0;
  temp_v3[0xf] = 0;
  DAT_004e1f14 = 0;
  DAT_004e1f18 = 0;
  DAT_004e1f1c = 0;
  DAT_004e1f20 = 0;
  DAT_004e1f24 = 0;
  DAT_004e1f28 = 0;
  DAT_004e1f2c = 0;
  DAT_004e1f30 = 0;
  DAT_004e1f34 = 0;
  DAT_004e1f38 = 0;
  DAT_004e1f3c = 0;
  DAT_004e1f40 = 0;
  DAT_004e1f44 = 0;
  DAT_004e1f48 = 0;
  DAT_004e1f4c = 0;
  DAT_004e1f50 = 0;
  DAT_004e1f54 = param_2;
  DAT_004e1ed0 = param_1;
  if ((int)temp_v2 < 1) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = temp_v2 & 1;
    if (temp_v1 == 1) {
      DAT_004e1ed4 = *param_1;
    }
  }
  for (; (int)temp_v1 < (int)temp_v2; temp_v1 = temp_v1 + 2) {
    (&DAT_004e1ed4)[temp_v1] = DAT_004e1ed0[temp_v1];
    *(unsigned int *)(temp_v1 * 4 + 0x4e1ed8) = DAT_004e1ed0[temp_v1 + 1];
  }
  puVar1 = &DAT_004e0e90;
  FUN_0035edac(&DAT_004e0e90,temp_v3,1,&DAT_004e1ed4,temp_v2);
  if (-1 < (int)puVar1) {
    temp_v0 = 0;
    if (temp_v0 < (int)temp_v2) {
      do {
        if (temp_v3[temp_v0] != 0) {
          DAT_004e0e8c = DAT_004e0e8c | 0x20000;
          (&DAT_004e1f14)[temp_v0] = temp_v3[temp_v0];
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)temp_v2);
    }
    DAT_004e0e8c = DAT_004e0e8c | 0x10000;
    return &DAT_004e1f14;
  }
  DAT_004e0e8c = DAT_004e0e8c | 0x40000;
  return (unsigned int *)0x0;
}
