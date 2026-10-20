/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e21c8` (_code @ 0x3e21c8, 0x28c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001568f8(int, int);
int FUN_002e5924(int);
int FUN_003e0bb8(unsigned int *, int);
int FUN_003f0b80(int);
int FUN_003f0c78(int);
int words10CopyHighToLow(unsigned int);
int FUN_004fb43c(int, int, int, int, int, int, int);
int rt_memcpy_w(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int DAT_00571508; /* 0x571508 */
extern unsigned int DAT_00573870; /* 0x573870 */
extern unsigned int DAT_00573874; /* 0x573874 */
extern unsigned int DAT_00573888; /* 0x573888 */
extern unsigned int DAT_0057388c; /* 0x57388c */

/* Supplied declaration required: FUN_001568f8. */
/* Supplied declaration required: FUN_002e5924. */
/* Supplied declaration required: FUN_003e0bb8. */
extern int FUN_003e0f94(unsigned int *, int);
/* Supplied declaration required: FUN_003f0b80. */
/* Supplied declaration required: FUN_003f0c78. */
extern int FUN_003f10c8(int, unsigned short);
/* Supplied declaration required: words10CopyHighToLow. */
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_003e21c8(unsigned int *param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  char temp_v2;
  char temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int *puVar9;
  
  temp_v4 = param_1[1];
  if (temp_v4 == 0) {
    return;
  }
  puVar9 = (unsigned int *)(param_2 + 0x45a0);
  if (((*(unsigned int *)(param_2 + 0x45a4) & DAT_00573874) == 0 && (DAT_00573870 & *puVar9) == 0) &&
     (*(char *)(temp_v4 + 10) == '\x01')) {
    temp_v0 = *(char *)(temp_v4 + 4);
    temp_v1 = *(char *)(temp_v4 + 5);
    temp_v2 = *(char *)(temp_v4 + 6);
    temp_v3 = *(char *)(temp_v4 + 7);
    temp_v7 = *(int *)(temp_v4 + 0xc);
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v4 + 8) + temp_v4;
    *(unsigned int *)(param_2 + 0x1ee0) = 0;
    *(unsigned int *)(param_2 + 0x1ee4) = 0;
    *(unsigned int *)(param_2 + 0x1ee8) = 0;
    *(unsigned int *)(param_2 + 0x1eec) = 0;
    *(unsigned int *)(param_2 + 0x1ef0) = 0;
    *(unsigned int *)(param_2 + 0x1ef4) = 0;
    *(unsigned int *)(param_2 + 0x1ef8) = 0;
    if ((int)temp_v3 + ((temp_v0 * 1000 + temp_v1 * 100 + temp_v2 * 10) - 0xd050) == 0x44c) {
      rt_memcpy_w((unsigned int *)(param_2 + 0x1ee0),temp_v4,0x118);
      temp_v4 = temp_v4 + 0x118;
    }
    temp_v6 = (temp_v7 - 0x118U) / 0x18;
    if (*(unsigned char *)(param_2 + 0x1ed9) < temp_v6) {
      temp_v6 = (unsigned int)*(unsigned char *)(param_2 + 0x1ed9);
    }
    rt_memcpy_w(*(unsigned int *)(param_2 + 0x1ff8),temp_v4,temp_v6 * 0x18);
  }
  FUN_003f0c78(param_2);
  FUN_003f0b80(param_2);
  words10CopyHighToLow(DAT_00571508);
  temp_v4 = FUN_003e0f94(param_1,param_2);
  if ((temp_v4 == 1 || temp_v4 == 2) || temp_v4 == 5) {
    temp_v4 = 4;
    do {
      temp_v7 = *(int *)(param_2 + 0x1ed4) + temp_v4 * 0x1d0;
      if ((((*(unsigned int *)(temp_v7 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v7 + 0x50) & 2) != 0) &&
          ((*(unsigned int *)(temp_v7 + 0x58) & 8) != 0)) &&
         (*(unsigned int *)(temp_v7 + 0x58) = *(unsigned int *)(temp_v7 + 0x58) & 0xfffffff7,
         (*(unsigned short *)(temp_v7 + 0x60) & 0x800) == 0)) {
        temp_v5 = param_2;
        FUN_001568f8(param_2,(int)*(short *)(temp_v7 + 0x6a));
        temp_v5 = FUN_003f10c8(param_2,*(unsigned short *)(temp_v5 + 2));
        if (temp_v5 == 0) {
          *(unsigned short *)(temp_v7 + 0x60) = *(unsigned short *)(temp_v7 + 0x60) | 0x800;
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x36);
    FUN_004fb43c(0,0,0x100021b,0,0,0,0);
  }
  param_1[4] = 0;
  *param_1 = 0x17;
  param_1[3] = 0;
  temp_v4 = FUN_003e0f94(param_1,param_2);
  if ((temp_v4 != 2 && temp_v4 != 5) &&
     ((*(unsigned int *)(param_2 + 0x45a4) & DAT_0057388c) == 0 && (*puVar9 & DAT_00573888) == 0)) {
    FUN_002e5924(2);
    temp_v6 = DAT_0057388c | *(unsigned int *)(param_2 + 0x45a4);
    *puVar9 = DAT_00573888 | *puVar9;
    *(unsigned int *)(param_2 + 0x45a4) = temp_v6;
  }
  FUN_003e0bb8(param_1,param_2);
  return;
}

} /* extern "C" */
