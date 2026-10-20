/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00182540` (_code @ 0x182540, 0x334 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001acb48(float *, unsigned char [36]);
int FUN_001ad5ec(...);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */
extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_001acb48. */
/* Supplied declaration required: FUN_001ad5ec. */


void FUN_00182540(float *param_1)

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
    DAT_006472ec = *param_1;
    DAT_006472f0 = param_1[1];
    DAT_006472f4 = param_1[2];
    DAT_006472f8 = param_1[3];
    temp_v11 = param_1[0x10] + DAT_006472ec;
    fStack_64 = param_1[0x11] + DAT_006472f0;
    fStack_60 = param_1[0x12] + DAT_006472f4;
    temp_v12 = param_1[0x13] + DAT_006472f8;
    DAT_006472dc = temp_v11;
    DAT_006472e0 = fStack_64;
    DAT_006472e4 = fStack_60;
    DAT_006472e8 = temp_v12;
    if ((((unsigned int)temp_v6 & 0x60) != 0) && (((unsigned int)temp_v6 & 0x80000000) == 0)) {
      temp_v8 = *(unsigned long long *)(param_1 + 0x14);
      temp_v10 = *(unsigned long long *)(param_1 + 0x16);
      FUN_001ad5ec(param_1,&temp_v11,temp_v14);
      FUN_001acb48(param_1,temp_v14);
      param_1[0x14] = (float)temp_v8;
      param_1[0x15] = (float)((unsigned long long)temp_v8 >> 0x20);
      param_1[0x16] = (float)temp_v10;
      param_1[0x17] = (float)((unsigned long long)temp_v10 >> 0x20);
    }
    temp_v0 = DAT_0059dbb4;
    temp_v1 = param_1[0x21];
    temp_v5 = param_1[0x23];
    temp_v7 = param_1[0x18] * param_1[0x1d];
    temp_v3 = *(int *)(DAT_0059dbb4 + 0x12b8);
    piVar8 = (int *)(DAT_0059dbb4 + 0x12b8);
    temp_v2 = *(int *)(DAT_0059dbb4 + temp_v3 * 4 + 0x12c0);
    temp_v4 = piVar8[temp_v3 + 2];
    *piVar8 = temp_v3 + 1;
    piVar8[temp_v3 + 3] = temp_v2;
    if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v4 != temp_v2) {
      (**(romwright_code **)(temp_v0 + 0x12d4))();
      *(unsigned char *)(temp_v0 + 0x12d0) = 0;
    }
    if (temp_v5 != 0.0f) {
      temp_v9 = 5.0f;
      do {
        if ((*(int *)((int)temp_v5 + 0x80) <= (int)temp_v1 - 1) &&
           ((*(unsigned int *)((int)temp_v5 + 0x84) & 2) == 0)) {
          if (((unsigned int)temp_v6 & 0x80000000) == 0) {
            if ((*(unsigned int *)((int)temp_v5 + 0x68) & 0x18) != 0) {
              DAT_006472e0 = fStack_64;
              if ((*(unsigned int *)((int)temp_v5 + 0x68) & 4) != 0) {
                DAT_006472e0 = temp_v9;
              }
              DAT_006472ec = temp_v13;
              DAT_006472f0 = fStack_54;
              DAT_006472f4 = fStack_50;
              DAT_006472f8 = fStack_4c;
              if ((*(unsigned int *)((int)temp_v5 + 0x68) & 0x80) != 0) {
                DAT_006472ec = temp_v13 * temp_v7;
                DAT_006472f0 = fStack_54 * temp_v7;
                DAT_006472f4 = fStack_50 * temp_v7;
                DAT_006472f8 = fStack_4c * temp_v7;
              }
              temp_v13 = temp_v11 + DAT_006472ec;
              fStack_54 = DAT_006472e0 + DAT_006472f0;
              fStack_50 = fStack_60 + DAT_006472f4;
              fStack_4c = temp_v12 + DAT_006472f8;
              pcVar6 = *(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)((int)temp_v5 + 0x90) + 4) * 0x44 +
                                 0x5b3294);
              DAT_006472dc = temp_v13;
              DAT_006472e0 = fStack_54;
              DAT_006472e4 = fStack_50;
              DAT_006472e8 = fStack_4c;
              if (pcVar6 != (romwright_code *)0x0) {
                (*pcVar6)(*(unsigned int *)(*(int *)((int)temp_v5 + 0x90) + 8),&temp_v13);
              }
            }
            if ((*(unsigned int *)((int)temp_v5 + 0x68) & 0x60) != 0) {
              FUN_001ad5ec(temp_v5,&temp_v11,temp_v14);
              pcVar6 = *(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)((int)temp_v5 + 0x90) + 4) * 0x44 +
                                 0x5b3298);
              if (pcVar6 != (romwright_code *)0x0) {
                (*pcVar6)(*(unsigned int *)(*(int *)((int)temp_v5 + 0x90) + 8),temp_v14);
              }
            }
          }
          (**(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)((int)temp_v5 + 0x90) + 4) * 0x44 + 0x5b3280))
                    (*(unsigned int *)(*(int *)((int)temp_v5 + 0x90) + 8));
        }
        temp_v5 = *(float *)((int)temp_v5 + 0xac);
      } while (temp_v5 != 0.0f);
    }
    param_1[0x1a] = romwright_fabs_4(param_1[0x1a]);
    temp_v0 = DAT_0059dbb4;
    piVar8 = (int *)(DAT_0059dbb4 + 0x12b8);
    temp_v2 = *piVar8;
    temp_v3 = piVar8[temp_v2 + 2];
    *piVar8 = temp_v2 - 1;
    if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v3 != piVar8[temp_v2 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x12d4))();
      *(unsigned char *)(temp_v0 + 0x12d0) = 0;
    }
  }
  return;
}

} /* extern "C" */
