/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019c0e0` (_code @ 0x19c0e0, 0x278 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001acb48(float *, unsigned char [32]);
int FUN_001ad5ec(...);

typedef int romwright_code(...);
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */

/* Supplied declaration required: FUN_001acb48. */
extern int FUN_001acf08(void);
/* Supplied declaration required: FUN_001ad5ec. */


void FUN_0019c0e0(float *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  romwright_code *pcVar2;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  unsigned long long temp_v4;
  float temp_v5;
  unsigned long long temp_v6;
  float temp_v7;
  float fStack_54;
  float fStack_50;
  float temp_v8;
  float temp_v9;
  float fStack_44;
  float fStack_40;
  float temp_v10;
  unsigned char temp_v11 [32];
  
  DAT_006472ec = *param_1;
  DAT_006472f0 = param_1[1];
  DAT_006472f4 = param_1[2];
  DAT_006472f8 = param_1[3];
  temp_v7 = param_1[0x10] + DAT_006472ec;
  fStack_54 = param_1[0x11] + DAT_006472f0;
  fStack_50 = param_1[0x12] + DAT_006472f4;
  temp_v8 = param_1[0x13] + DAT_006472f8;
  DAT_006472dc = temp_v7;
  DAT_006472e0 = fStack_54;
  DAT_006472e4 = fStack_50;
  DAT_006472e8 = temp_v8;
  if (((unsigned int)param_1[0x1a] & 0x60) != 0) {
    temp_v4 = *(unsigned long long *)(param_1 + 0x14);
    temp_v6 = *(unsigned long long *)(param_1 + 0x16);
    FUN_001ad5ec(param_1,&temp_v7,temp_v11);
    FUN_001acb48(param_1,temp_v11);
    param_1[0x14] = (float)temp_v4;
    param_1[0x15] = (float)((unsigned long long)temp_v4 >> 0x20);
    param_1[0x16] = (float)temp_v6;
    param_1[0x17] = (float)((unsigned long long)temp_v6 >> 0x20);
  }
  temp_v1 = param_1[0x23];
  temp_v2 = param_1[0x21];
  temp_v3 = param_1[0x18] * param_1[0x1d];
  if (temp_v1 != 0.0f) {
    temp_v5 = 5.0f;
    do {
      if ((*(int *)((int)temp_v1 + 0x80) <= (int)temp_v2) && ((*(unsigned int *)((int)temp_v1 + 0x84) & 2) == 0))
      {
        if ((*(unsigned int *)((int)temp_v1 + 0x68) & 0x18) != 0) {
          DAT_006472e0 = fStack_54;
          if ((*(unsigned int *)((int)temp_v1 + 0x68) & 4) != 0) {
            DAT_006472e0 = temp_v5;
          }
          DAT_006472ec = temp_v9;
          DAT_006472f0 = fStack_44;
          DAT_006472f4 = fStack_40;
          DAT_006472f8 = temp_v10;
          if ((*(unsigned int *)((int)temp_v1 + 0x68) & 0x80) != 0) {
            DAT_006472ec = temp_v9 * temp_v3;
            DAT_006472f0 = fStack_44 * temp_v3;
            DAT_006472f4 = fStack_40 * temp_v3;
            DAT_006472f8 = temp_v10 * temp_v3;
          }
          temp_v9 = temp_v7 + DAT_006472ec;
          fStack_44 = DAT_006472e0 + DAT_006472f0;
          fStack_40 = fStack_50 + DAT_006472f4;
          temp_v10 = temp_v8 + DAT_006472f8;
          pcVar2 = *(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)((int)temp_v1 + 0x90) + 4) * 0x44 + 0x5b3294);
          DAT_006472dc = temp_v9;
          DAT_006472e0 = fStack_44;
          DAT_006472e4 = fStack_40;
          DAT_006472e8 = temp_v10;
          if (pcVar2 != (romwright_code *)0x0) {
            (*pcVar2)(*(unsigned int *)(*(int *)((int)temp_v1 + 0x90) + 8));
          }
        }
        if ((*(unsigned int *)((int)temp_v1 + 0x68) & 0x60) != 0) {
          FUN_001ad5ec(temp_v1,&temp_v7,temp_v11);
          pcVar2 = *(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)((int)temp_v1 + 0x90) + 4) * 0x44 + 0x5b3298);
          if (pcVar2 != (romwright_code *)0x0) {
            (*pcVar2)(*(unsigned int *)(*(int *)((int)temp_v1 + 0x90) + 8),temp_v11);
          }
        }
        (**(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)((int)temp_v1 + 0x90) + 4) * 0x44 + 0x5b327c))
                  (*(unsigned int *)(*(int *)((int)temp_v1 + 0x90) + 8));
      }
      temp_v1 = *(float *)((int)temp_v1 + 0xac);
    } while (temp_v1 != 0.0f);
  }
  param_1[0x1a] = (float)((unsigned int)param_1[0x1a] | 0x80000000);
  temp_v0 = FUN_001acf08();
  param_1[0x21] = (float)(temp_v0 + (int)param_1[0x21]);
  return;
}

} /* extern "C" */
