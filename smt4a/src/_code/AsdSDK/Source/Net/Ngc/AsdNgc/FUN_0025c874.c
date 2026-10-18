/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025c874` (_code @ 0x25c874, 0x1cc bytes) from smt4a.cxi.
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

extern unsigned int DAT_0063d108; /* 0x63d108 */
extern unsigned int DAT_0063d10c; /* 0x63d10c */
extern unsigned char DAT_0063d110; /* 0x63d110 */
extern unsigned int *DAT_0063e150; /* 0x63e150 */
extern unsigned int DAT_0063e154; /* 0x63e154 */
extern unsigned int DAT_0063e194; /* 0x63e194 */
extern unsigned int DAT_0063e198; /* 0x63e198 */
extern unsigned int DAT_0063e19c; /* 0x63e19c */
extern unsigned int DAT_0063e1a0; /* 0x63e1a0 */
extern unsigned int DAT_0063e1a4; /* 0x63e1a4 */
extern unsigned int DAT_0063e1a8; /* 0x63e1a8 */
extern unsigned int DAT_0063e1ac; /* 0x63e1ac */
extern unsigned int DAT_0063e1b0; /* 0x63e1b0 */
extern unsigned int DAT_0063e1b4; /* 0x63e1b4 */
extern unsigned int DAT_0063e1b8; /* 0x63e1b8 */
extern unsigned int DAT_0063e1bc; /* 0x63e1bc */
extern unsigned int DAT_0063e1c0; /* 0x63e1c0 */
extern unsigned int DAT_0063e1c4; /* 0x63e1c4 */
extern unsigned int DAT_0063e1c8; /* 0x63e1c8 */
extern unsigned int DAT_0063e1cc; /* 0x63e1cc */
extern unsigned int DAT_0063e1d0; /* 0x63e1d0 */
extern int DAT_0063e1d4; /* 0x63e1d4 */
extern unsigned int DAT_0063e1d8; /* 0x63e1d8 */
extern unsigned int DAT_0063e1dc; /* 0x63e1dc */
extern unsigned int DAT_0063e1e0; /* 0x63e1e0 */

/* Supplied declaration required: FUN_00438c34. */


unsigned int * FUN_0025c874(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3 [16];
  
  if ((DAT_0063d108 & 1) == 0) {
    return (unsigned int *)0x0;
  }
  DAT_0063e1dc = 0;
  DAT_0063e1e0 = 0;
  DAT_0063e1d8 = 0x10;
  if (param_2 >= 0x11) {
    temp_v2 = 0x10;
  }
  else {
    temp_v2 = 0x10 - (0x10 - param_2);
    if (temp_v2 == 0) {
      DAT_0063e150 = param_1;
      DAT_0063e1d4 = param_2;
      DAT_0063e1d8 = 0x10;
      DAT_0063e1dc = 0;
      DAT_0063e1e0 = 0;
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
  DAT_0063e194 = 0;
  DAT_0063e198 = 0;
  DAT_0063e19c = 0;
  DAT_0063e1a0 = 0;
  DAT_0063e1a4 = 0;
  DAT_0063e1a8 = 0;
  DAT_0063e1ac = 0;
  DAT_0063e1b0 = 0;
  DAT_0063e1b4 = 0;
  DAT_0063e1b8 = 0;
  DAT_0063e1bc = 0;
  DAT_0063e1c0 = 0;
  DAT_0063e1c4 = 0;
  DAT_0063e1c8 = 0;
  DAT_0063e1cc = 0;
  DAT_0063e1d0 = 0;
  DAT_0063e1d4 = param_2;
  DAT_0063e150 = param_1;
  if ((int)temp_v2 < 1) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = temp_v2 & 1;
    if (temp_v1 == 1) {
      DAT_0063e154 = *param_1;
    }
  }
  for (; (int)temp_v1 < (int)temp_v2; temp_v1 = temp_v1 + 2) {
    (&DAT_0063e154)[temp_v1] = DAT_0063e150[temp_v1];
    *(unsigned int *)(temp_v1 * 4 + 0x63e158) = DAT_0063e150[temp_v1 + 1];
  }
  puVar1 = &DAT_0063d110;
  FUN_00438c34(&DAT_0063d110,temp_v3,1,&DAT_0063e154,temp_v2);
  if (-1 < (int)puVar1) {
    temp_v0 = 0;
    if (temp_v0 < (int)temp_v2) {
      do {
        if (temp_v3[temp_v0] != 0) {
          DAT_0063d10c = DAT_0063d10c | 0x20000;
          (&DAT_0063e194)[temp_v0] = temp_v3[temp_v0];
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)temp_v2);
    }
    DAT_0063d10c = DAT_0063d10c | 0x10000;
    return &DAT_0063e194;
  }
  DAT_0063d10c = DAT_0063d10c | 0x40000;
  return (unsigned int *)0x0;
}
