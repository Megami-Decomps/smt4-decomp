/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3ab0` (_code @ 0x2a3ab0, 0x29c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_002a2c7c(void);

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
} param_2_stack;

extern unsigned char g_handlerTable; /* 0x464110 */
extern unsigned char DAT_004ea81c; /* 0x4ea81c */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */
extern float DAT_004ea95c; /* 0x4ea95c */
extern float DAT_004ea960; /* 0x4ea960 */
extern float DAT_004ea964; /* 0x4ea964 */
extern float DAT_004ea968; /* 0x4ea968 */
extern float DAT_004ea96c; /* 0x4ea96c */
extern float DAT_004ea970; /* 0x4ea970 */
extern float DAT_004ea974; /* 0x4ea974 */
extern float DAT_004ea978; /* 0x4ea978 */
extern float DAT_004ea97c; /* 0x4ea97c */
extern float DAT_004ea980; /* 0x4ea980 */
extern float DAT_004ea984; /* 0x4ea984 */
extern float DAT_004ea988; /* 0x4ea988 */
extern unsigned int DAT_004ea98c; /* 0x4ea98c */
extern unsigned int DAT_004ea990; /* 0x4ea990 */
extern unsigned int DAT_004ea994; /* 0x4ea994 */
extern unsigned int DAT_004ea998; /* 0x4ea998 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_002a2c7c. */


void FUN_002a3ab0(float *param_1,float *param_2)

{
/* irregular: 2 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned char *puVar9;
  float temp_v8;
  unsigned char temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned int temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float fStack_74;
  float temp_v28;
  float fStack_6c;
  
  puVar9 = &DAT_004ea81c;
  DAT_004ea91c = *param_2;
  temp_v6 = param_2[1];
  temp_v7 = param_2[2];
  temp_v8 = param_2[3];
  DAT_004ea920 = temp_v6;
  DAT_004ea924 = temp_v7;
  DAT_004ea928 = temp_v8;
  param_1[0x10] = DAT_004ea91c;
  param_1[0x11] = temp_v6;
  param_1[0x12] = temp_v7;
  param_1[0x13] = temp_v8;
  DAT_004ea92c = *param_1;
  DAT_004ea930 = param_1[1];
  DAT_004ea934 = param_1[2];
  DAT_004ea938 = param_1[3];
  temp_v10 = DAT_004ea91c + DAT_004ea92c;
  temp_v6 = DAT_004ea920 + DAT_004ea930;
  temp_v7 = DAT_004ea924 + DAT_004ea934;
  temp_v11 = DAT_004ea928 + DAT_004ea938;
  DAT_004ea91c = param_1[0x14];
  DAT_004ea920 = param_1[0x15];
  DAT_004ea924 = param_1[0x16];
  DAT_004ea928 = param_1[0x17];
  temp_v17 = CONCAT44(temp_v7,temp_v6);
  FUN_002a2c7c();
  temp_v5 = DAT_004ea994;
  temp_v4 = DAT_004ea990;
  temp_v3 = DAT_004ea98c;
  temp_v2 = DAT_004ea988;
  temp_v1 = DAT_004ea980;
  temp_v6 = param_1[0x23];
  temp_v16 = param_1[0x18] * param_1[0x1d];
  temp_v9 = temp_v6 != 0.0f;
  temp_v7 = DAT_004ea960;
  temp_v8 = DAT_004ea964;
  temp_v20 = DAT_004ea96c;
  temp_v21 = DAT_004ea970;
  temp_v18 = DAT_004ea95c;
  temp_v19 = DAT_004ea968;
  temp_v26 = DAT_004ea984;
  temp_v22 = DAT_004ea998;
  temp_v25 = DAT_004ea97c;
  temp_v23 = DAT_004ea974;
  temp_v24 = DAT_004ea978;
  if (temp_v9) {
    puVar9 = &g_handlerTable;
  }
  while (temp_v9) {
    DAT_004ea920 = (float)temp_v17;
    if ((*(unsigned int *)((int)temp_v6 + 0x68) & 4) != 0) {
      DAT_004ea920 = 5.0f;
    }
    DAT_004ea92c = *(float *)((int)temp_v6 + 0x40);
    DAT_004ea930 = *(float *)((int)temp_v6 + 0x44);
    DAT_004ea934 = *(float *)((int)temp_v6 + 0x48);
    if ((*(unsigned int *)((int)temp_v6 + 0x68) & 0x80) != 0) {
      DAT_004ea92c = DAT_004ea92c * temp_v16;
      DAT_004ea930 = DAT_004ea930 * temp_v16;
      DAT_004ea934 = DAT_004ea934 * temp_v16;
    }
    temp_v13 = DAT_004ea92c * temp_v7;
    temp_v14 = DAT_004ea92c * temp_v8;
    temp_v12 = DAT_004ea92c * temp_v19;
    temp_v15 = DAT_004ea930 * temp_v23;
    temp_v0 = DAT_004ea930 * temp_v24;
    DAT_004ea92c = DAT_004ea92c * temp_v18 + DAT_004ea930 * temp_v20 + DAT_004ea934 * temp_v25;
    DAT_004ea930 = temp_v13 + DAT_004ea930 * temp_v21 + DAT_004ea934 * temp_v1;
    temp_v15 = temp_v14 + temp_v15 + DAT_004ea934 * temp_v26;
    DAT_004ea938 = temp_v12 + temp_v0 + DAT_004ea934 * temp_v2;
    temp_v27 = temp_v10 + DAT_004ea92c;
    fStack_74 = DAT_004ea920 + DAT_004ea930;
    temp_v28 = (float)((unsigned long long)temp_v17 >> 0x20) + temp_v15;
    fStack_6c = temp_v11 + DAT_004ea938;
    DAT_004ea91c = temp_v27;
    DAT_004ea920 = fStack_74;
    DAT_004ea924 = temp_v28;
    DAT_004ea928 = fStack_6c;
    DAT_004ea934 = temp_v15;
    DAT_004ea95c = temp_v18;
    DAT_004ea960 = temp_v7;
    DAT_004ea964 = temp_v8;
    DAT_004ea968 = temp_v19;
    DAT_004ea96c = temp_v20;
    DAT_004ea970 = temp_v21;
    DAT_004ea974 = temp_v23;
    DAT_004ea978 = temp_v24;
    DAT_004ea97c = temp_v25;
    DAT_004ea980 = temp_v1;
    DAT_004ea984 = temp_v26;
    DAT_004ea988 = temp_v2;
    DAT_004ea98c = temp_v3;
    DAT_004ea990 = temp_v4;
    DAT_004ea994 = temp_v5;
    DAT_004ea998 = temp_v22;
    if (*(romwright_code **)(puVar9 + (unsigned int)*(unsigned short *)(*(int *)((int)temp_v6 + 0x90) + 4) * 0x44 + 0x20) !=
        (romwright_code *)0x0) {
      (**(romwright_code **)(puVar9 + (unsigned int)*(unsigned short *)(*(int *)((int)temp_v6 + 0x90) + 4) * 0x44 + 0x20))
                (*(unsigned int *)(*(int *)((int)temp_v6 + 0x90) + 8),&temp_v27);
    }
    temp_v6 = *(float *)((int)temp_v6 + 0xac);
    temp_v9 = temp_v6 != 0.0f;
  }
  return;
}

} /* extern "C" */
