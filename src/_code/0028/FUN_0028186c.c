/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028186c` (_code @ 0x28186c, 0x334 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_0025c8f0. */
/* Supplied declaration required: FUN_002a3958. */


void FUN_0028186c(float *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  float temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  romwright_code *pcVar6;
  float temp_v5;
  int *piVar8;
  float temp_v6;
  float temp_v7;
  unsigned long long temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  float temp_v11;
  float fStack_64;
  float fStack_60;
  float temp_v12;
  float temp_v13;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  unsigned char temp_v14 [36];
  
  if (0 < (int)param_1[0x21]) {
    temp_v6 = param_1[0x1a];
    DAT_004ea92c = *param_1;
    DAT_004ea930 = param_1[1];
    DAT_004ea934 = param_1[2];
    DAT_004ea938 = param_1[3];
    temp_v11 = param_1[0x10] + DAT_004ea92c;
    fStack_64 = param_1[0x11] + DAT_004ea930;
    fStack_60 = param_1[0x12] + DAT_004ea934;
    temp_v12 = param_1[0x13] + DAT_004ea938;
    DAT_004ea91c = temp_v11;
    DAT_004ea920 = fStack_64;
    DAT_004ea924 = fStack_60;
    DAT_004ea928 = temp_v12;
    if ((((unsigned int)temp_v6 & 0x60) != 0) && (((unsigned int)temp_v6 & 0x80000000) == 0)) {
      temp_v8 = *(unsigned long long *)(param_1 + 0x14);
      temp_v10 = *(unsigned long long *)(param_1 + 0x16);
      FUN_0025c8f0(param_1,&temp_v11,temp_v14);
      FUN_002a3958(param_1,temp_v14);
      param_1[0x14] = (float)temp_v8;
      param_1[0x15] = (float)((unsigned long long)temp_v8 >> 0x20);
      param_1[0x16] = (float)temp_v10;
      param_1[0x17] = (float)((unsigned long long)temp_v10 >> 0x20);
    }
    temp_v0 = DAT_0044ea00;
    temp_v1 = param_1[0x21];
    temp_v5 = param_1[0x23];
    temp_v7 = param_1[0x18] * param_1[0x1d];
    temp_v3 = *(int *)(DAT_0044ea00 + 0x12ac);
    piVar8 = (int *)(DAT_0044ea00 + 0x12ac);
    temp_v2 = *(int *)(DAT_0044ea00 + temp_v3 * 4 + 0x12b4);
    temp_v4 = piVar8[temp_v3 + 2];
    *piVar8 = temp_v3 + 1;
    piVar8[temp_v3 + 3] = temp_v2;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v4 != temp_v2) {
      (**(romwright_code **)(temp_v0 + 0x12c8))();
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
    if (temp_v5 != 0.0f) {
      temp_v9 = 5.0f;
      do {
        if ((*(int *)((int)temp_v5 + 0x80) <= (int)temp_v1 - 1) &&
           ((*(unsigned int *)((int)temp_v5 + 0x84) & 2) == 0)) {
          if (((unsigned int)temp_v6 & 0x80000000) == 0) {
            if ((*(unsigned int *)((int)temp_v5 + 0x68) & 0x18) != 0) {
              DAT_004ea920 = fStack_64;
              if ((*(unsigned int *)((int)temp_v5 + 0x68) & 4) != 0) {
                DAT_004ea920 = temp_v9;
              }
              DAT_004ea92c = temp_v13;
              DAT_004ea930 = fStack_54;
              DAT_004ea934 = fStack_50;
              DAT_004ea938 = fStack_4c;
              if ((*(unsigned int *)((int)temp_v5 + 0x68) & 0x80) != 0) {
                DAT_004ea92c = temp_v13 * temp_v7;
                DAT_004ea930 = fStack_54 * temp_v7;
                DAT_004ea934 = fStack_50 * temp_v7;
                DAT_004ea938 = fStack_4c * temp_v7;
              }
              temp_v13 = temp_v11 + DAT_004ea92c;
              fStack_54 = DAT_004ea920 + DAT_004ea930;
              fStack_50 = fStack_60 + DAT_004ea934;
              fStack_4c = temp_v12 + DAT_004ea938;
              pcVar6 = *(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)((int)temp_v5 + 0x90) + 4) * 0x44 +
                                 0x464130);
              DAT_004ea91c = temp_v13;
              DAT_004ea920 = fStack_54;
              DAT_004ea924 = fStack_50;
              DAT_004ea928 = fStack_4c;
              if (pcVar6 != (romwright_code *)0x0) {
                (*pcVar6)(*(unsigned int *)(*(int *)((int)temp_v5 + 0x90) + 8),&temp_v13);
              }
            }
            if ((*(unsigned int *)((int)temp_v5 + 0x68) & 0x60) != 0) {
              FUN_0025c8f0(temp_v5,&temp_v11,temp_v14);
              pcVar6 = *(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)((int)temp_v5 + 0x90) + 4) * 0x44 +
                                 0x464134);
              if (pcVar6 != (romwright_code *)0x0) {
                (*pcVar6)(*(unsigned int *)(*(int *)((int)temp_v5 + 0x90) + 8),temp_v14);
              }
            }
          }
          (**(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)((int)temp_v5 + 0x90) + 4) * 0x44 + 0x46411c))
                    (*(unsigned int *)(*(int *)((int)temp_v5 + 0x90) + 8));
        }
        temp_v5 = *(float *)((int)temp_v5 + 0xac);
      } while (temp_v5 != 0.0f);
    }
    param_1[0x1a] = romwright_fabs_4(param_1[0x1a]);
    temp_v0 = DAT_0044ea00;
    piVar8 = (int *)(DAT_0044ea00 + 0x12ac);
    temp_v2 = *piVar8;
    temp_v3 = piVar8[temp_v2 + 2];
    *piVar8 = temp_v2 - 1;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v3 != piVar8[temp_v2 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x12c8))();
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
  }
  return;
}
