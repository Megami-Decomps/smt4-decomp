/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00154ef0` (_code @ 0x154ef0, 0x22c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_004ea168; /* 0x4ea168 */

/* Supplied declaration required: FUN_00147370. */
/* Supplied declaration required: FUN_00156400. */
/* Supplied declaration required: FUN_00156420. */
extern unsigned int FUN_00157220(void);
/* Supplied declaration required: FUN_00157554. */
/* Supplied declaration required: FUN_00158eac. */
/* Supplied declaration required: FUN_0015a3e0. */
/* Supplied declaration required: FUN_0015a498. */
/* Supplied declaration required: FUN_002bd27c. */


void FUN_00154ef0(int param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned long long temp_v5;
  unsigned char temp_v6 [24];
  
  if (*(char *)(param_1 + 0x15) != '\0') {
    if ((*(unsigned short *)(param_1 + 0x20) & 4) != 0) {
      temp_v1 = 0;
      if (temp_v1 < *(int *)(param_1 + 8)) {
        do {
          if (*(int *)(param_1 + temp_v1 * 4) != 0) {
            FUN_002bd27c();
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < *(int *)(param_1 + 8));
      }
      *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) & 0xfffb;
    }
    if ((*(unsigned short *)(param_1 + 0x20) & 0x40) != 0) {
      FUN_00158eac(&DAT_004ea168);
      temp_v1 = 0;
      if (temp_v1 < *(int *)(param_1 + 8)) {
        do {
          if (*(int *)(param_1 + temp_v1 * 4) != 0) {
            FUN_00147370();
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < *(int *)(param_1 + 8));
      }
      *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) & 0xffbf;
    }
    if ((*(unsigned short *)(param_1 + 0x20) & 8) != 0) {
      FUN_00157554(param_1);
      *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) & 0xfff7;
    }
    if ((*(unsigned short *)(param_1 + 0x20) & 0x10) != 0) {
      temp_v0 = FUN_00157220();
      temp_v1 = 0;
      if (temp_v1 < *(int *)(param_1 + 8)) {
        do {
          temp_v2 = *(int *)(param_1 + temp_v1 * 4);
          if (temp_v2 != 0) {
            if (temp_v0 >= 16000) {
              FUN_0015a3e0(temp_v2,0);
            }
            else {
              FUN_0015a3e0(temp_v2,1);
              FUN_00156420(temp_v2,temp_v0);
            }
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < *(int *)(param_1 + 8));
      }
      *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) & 0xffef;
    }
    if ((*(unsigned short *)(param_1 + 0x20) & 0x20) != 0) {
      temp_v1 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        temp_v5 = 0;
        do {
          temp_v2 = *(int *)(param_1 + temp_v1 * 4);
          if (temp_v2 != 0) {
            piVar4 = *(int **)((unsigned int)*(unsigned char *)(param_1 + 0x22) * 4 + 0x4ea1ec);
            temp_v4 = piVar4 == (int *)0x0;
            temp_v3 = 1;
            if (!temp_v4) {
              temp_v4 = *(float *)(param_1 + 0x3c) == (float)temp_v5;
              temp_v3 = (float)temp_v5 <= *(float *)(param_1 + 0x3c);
            }
            if (!(temp_v3 && !temp_v4)) {
              FUN_00156400(temp_v2,0);
            }
            else {
              FUN_00156400(temp_v2,1);
              (**(romwright_code **)(*piVar4 + 8))(piVar4,*(unsigned char *)(param_1 + 0x22),temp_v6);
              FUN_0015a498(temp_v2,temp_v6);
            }
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < *(int *)(param_1 + 8));
      }
      *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) & 0xffdf;
    }
  }
  return;
}
