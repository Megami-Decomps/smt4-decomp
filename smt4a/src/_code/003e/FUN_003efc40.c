/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003efc40` (_code @ 0x3efc40, 0x234 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_00573980; /* 0x573980 */
extern unsigned int DAT_00573984; /* 0x573984 */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */
extern unsigned int DAT_005739f0; /* 0x5739f0 */
extern unsigned int DAT_005739f4; /* 0x5739f4 */
extern unsigned int DAT_00573a28; /* 0x573a28 */
extern unsigned int DAT_00573a2c; /* 0x573a2c */
extern unsigned int DAT_00573a50; /* 0x573a50 */
extern unsigned int DAT_00573a54; /* 0x573a54 */

extern short FUN_0034ef58(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003f2aec. */


void FUN_003efc40(int param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int *piVar9;
  unsigned int temp_v7;
  int temp_v8;
  
  piVar9 = (int *)(param_1 + 0x1ffc);
  temp_v2 = *piVar9;
  if ((((*(unsigned int *)(temp_v2 + 0xd9b4) & DAT_0057397c) != 0 ||
        (*(unsigned int *)(temp_v2 + 0xd9b0) & DAT_00573978) != 0) &&
      ((*(unsigned int *)(temp_v2 + 0xd9b4) & DAT_005739a4) == 0 &&
       (DAT_005739a0 & *(unsigned int *)(temp_v2 + 0xd9b0)) == 0)) && (0 < *(int *)(param_1 + 0x4d6c))) {
    temp_v6 = 0;
    do {
      *(unsigned short *)(param_1 + temp_v6 * 2 + 0x3006) = *(unsigned short *)(temp_v2 + 0xda1e);
      *(unsigned short *)(temp_v2 + 0xdd40) = 0;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < *(int *)(param_1 + 0x4d6c));
    temp_v3 = *(unsigned int *)(param_1 + 0x45a0);
    if (!((DAT_005739f0 & temp_v3) == 0 && (DAT_005739f4 & *(unsigned int *)(param_1 + 0x45a4)) == 0)) {
      temp_v3 = 4;
      temp_v2 = 0x32;
    }
    else if (!((temp_v3 & DAT_00573a28) == 0 && (*(unsigned int *)(param_1 + 0x45a4) & DAT_00573a2c) == 0)) {
      temp_v3 = 0x36;
      temp_v2 = 1;
    }
    else {
      temp_v3 = 0;
      temp_v2 = 4;
    }
    temp_v7 = temp_v3 + temp_v2;
    temp_v2 = temp_v6;
    if (temp_v3 < temp_v7) {
      do {
        puVar5 = (unsigned int *)(*piVar9 + temp_v3 * 0x408);
        temp_v5 = *puVar5;
        temp_v4 = puVar5[1];
        if (((DAT_00573978 & temp_v5) != 0 || (DAT_0057397c & temp_v4) != 0) &&
           ((temp_v4 & DAT_005739a4) == 0 && (temp_v5 & DAT_005739a0) == 0)) {
          *(unsigned short *)(param_1 + temp_v2 * 2 + 0x3006) =
               *(unsigned short *)(*piVar9 + temp_v3 * 0x408 + 0x6e);
          temp_v8 = temp_v3 * 0x408 + 0x390;
          *(unsigned short *)(*piVar9 + temp_v8) = 0;
          puVar5 = (unsigned int *)(*piVar9 + temp_v3 * 0x408);
          if ((puVar5[1] & DAT_00573984) != 0 || (DAT_00573980 & *puVar5) != 0) {
            *(unsigned short *)(*piVar9 + temp_v8) = 5;
          }
          if ((*(unsigned int *)(param_1 + 0x45a4) & DAT_00573a54) == 0 &&
              (*(unsigned int *)(param_1 + 0x45a0) & DAT_00573a50) == 0) {
            temp_v0 = FUN_0034ef58(0xfffffffd,3);
            *(short *)(*piVar9 + temp_v8) = temp_v0 + *(short *)(*piVar9 + temp_v8);
          }
          temp_v2 = temp_v2 + 1;
        }
        temp_v3 = temp_v3 + 1;
      } while ((int)temp_v3 < (int)temp_v7);
    }
    if (temp_v2 < 1) {
      temp_v1 = 0xffff;
    }
    else {
      temp_v1 = 0;
    }
    *(unsigned short *)(param_1 + 0x301e) = temp_v1;
    if (0 < temp_v2) {
      FUN_003f2aec(param_1,temp_v6);
      temp_v1 = *(unsigned short *)(param_1 + *(short *)(param_1 + 0x301e) * 2 + 0x3006);
    }
    *(unsigned short *)(param_1 + 0x2004) = temp_v1;
  }
  return;
}
