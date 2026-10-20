/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f26d4` (_code @ 0x3f26d4, 0x2b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003efc40(int);
int FUN_003efe78(int);
int FUN_003f2aec(int, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
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
extern unsigned int DAT_00573ac8; /* 0x573ac8 */
extern unsigned int DAT_00573acc; /* 0x573acc */
extern unsigned int DAT_00573ad8; /* 0x573ad8 */
extern unsigned int DAT_00573adc; /* 0x573adc */
extern unsigned int DAT_00573ae0; /* 0x573ae0 */
extern unsigned int DAT_00573ae4; /* 0x573ae4 */

extern short FUN_0034ef58(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003efc40. */
/* Supplied declaration required: FUN_003efe78. */
/* Supplied declaration required: FUN_003f2aec. */


void FUN_003f26d4(int param_1)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int unaff_r6;
  int *piVar10;
  
  temp_v4 = 0;
  temp_v1 = 0;
  do {
    temp_v5 = temp_v4 + 1;
    temp_v1 = temp_v1 + 2;
    *(unsigned short *)(param_1 + temp_v4 * 2 + 0x3006) = 0xffff;
    temp_v4 = temp_v4 + 2;
    *(unsigned short *)(param_1 + temp_v5 * 2 + 0x3006) = 0xffff;
  } while (temp_v1 < 0xc);
  *(unsigned short *)(param_1 + 0x301e) = 0xffff;
  temp_v2 = *(unsigned int *)(param_1 + 0x45a0);
  temp_v6 = *(unsigned int *)(param_1 + 0x45a4);
  if ((DAT_00573ac8 & temp_v2) != 0 || (DAT_00573acc & temp_v6) != 0) {
    FUN_003efe78(param_1);
    return;
  }
  if (((0 < *(int *)(param_1 + 0x4d6c)) &&
      ((temp_v6 & DAT_005739f4) == 0 && (temp_v2 & DAT_005739f0) == 0)) &&
     ((temp_v6 & DAT_00573a2c) == 0 && (temp_v2 & DAT_00573a28) == 0)) {
    FUN_003efc40(param_1);
    return;
  }
  if (((DAT_00573ad8 & temp_v2) == 0 && (DAT_00573adc & temp_v6) == 0) &&
     ((DAT_00573ae0 & temp_v2) == 0 && (DAT_00573ae4 & temp_v6) == 0)) {
    if ((DAT_005739f4 & temp_v6) != 0 || (DAT_005739f0 & temp_v2) != 0) {
      temp_v2 = 4;
      temp_v1 = 0x32;
    }
    else if ((temp_v2 & DAT_00573a28) == 0 && (temp_v6 & DAT_00573a2c) == 0) {
      temp_v2 = 0;
      temp_v1 = 4;
    }
    else {
      temp_v2 = 0x36;
      temp_v1 = 1;
    }
  }
  else {
    temp_v2 = 0x36;
    temp_v1 = 1;
  }
  temp_v6 = temp_v2 + temp_v1;
  if (temp_v2 < temp_v6) {
    unaff_r6 = param_1 + 0x1c00;
  }
  temp_v1 = 0;
  if (temp_v2 < temp_v6) {
    piVar10 = (int *)(unaff_r6 + 0x3fc);
    do {
      puVar4 = (unsigned int *)(*piVar10 + temp_v2 * 0x408);
      temp_v7 = *puVar4;
      temp_v3 = puVar4[1];
      if (((DAT_00573978 & temp_v7) != 0 || (DAT_0057397c & temp_v3) != 0) &&
         ((temp_v3 & DAT_005739a4) == 0 && (temp_v7 & DAT_005739a0) == 0)) {
        *(unsigned short *)(param_1 + temp_v1 * 2 + 0x3006) =
             *(unsigned short *)(*piVar10 + temp_v2 * 0x408 + 0x6e);
        temp_v4 = temp_v2 * 0x408 + 0x390;
        *(unsigned short *)(*piVar10 + temp_v4) = 0;
        puVar4 = (unsigned int *)(*piVar10 + temp_v2 * 0x408);
        if ((*puVar4 & DAT_00573980) != 0 || (puVar4[1] & DAT_00573984) != 0) {
          *(unsigned short *)(*piVar10 + temp_v4) = 5;
        }
        if ((*(unsigned int *)(param_1 + 0x45a4) & DAT_00573a54) == 0 &&
            (DAT_00573a50 & *(unsigned int *)(param_1 + 0x45a0)) == 0) {
          temp_v0 = FUN_0034ef58(0xfffffffd,3);
          *(short *)(*piVar10 + temp_v4) = temp_v0 + *(short *)(*piVar10 + temp_v4);
        }
        temp_v1 = temp_v1 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < (int)temp_v6);
    if (0 < temp_v1) {
      *(unsigned short *)(param_1 + 0x301e) = 0;
      FUN_003f2aec(param_1,0);
      *(unsigned short *)(param_1 + 0x2004) =
           *(unsigned short *)(param_1 + *(short *)(param_1 + 0x301e) * 2 + 0x3006);
      return;
    }
  }
  *(unsigned short *)(param_1 + 0x301e) = 0xffff;
  *(unsigned short *)(param_1 + 0x2004) = 0xffff;
  return;
}

} /* extern "C" */
