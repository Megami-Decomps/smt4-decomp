/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3bf8` (_code @ 0x2a3bf8, 0x150 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern unsigned int DAT_004ea92c; /* 0x4ea92c */
extern unsigned int DAT_004ea930; /* 0x4ea930 */
extern unsigned int DAT_004ea934; /* 0x4ea934 */
extern unsigned int DAT_004ea938; /* 0x4ea938 */
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

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_002a2ea0. */
/* Supplied declaration required: FUN_002a2f1c. */
/* Supplied declaration required: FUN_002a3d50. */


void FUN_002a3bf8(float *param_1,float *param_2)

{
/* irregular: 4 native warning(s); review required */
  romwright_code *pcVar1;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  unsigned long long temp_v6;
  unsigned long long temp_v7;
  float temp_v8;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  DAT_004ea91c = *param_2;
  temp_v0 = param_2[1];
  temp_v1 = param_2[2];
  temp_v3 = param_2[3];
  DAT_004ea920 = temp_v0;
  DAT_004ea924 = temp_v1;
  DAT_004ea928 = temp_v3;
  param_1[0x14] = DAT_004ea91c;
  param_1[0x15] = temp_v0;
  param_1[0x16] = temp_v1;
  param_1[0x17] = temp_v3;
  temp_v6 = CONCAT44(DAT_004ea920,DAT_004ea91c);
  temp_v7 = CONCAT44(DAT_004ea928,DAT_004ea924);
  FUN_002a2f1c();
  temp_v0 = param_1[4];
  temp_v1 = param_1[5];
  temp_v3 = param_1[6];
  temp_v5 = temp_v0 * DAT_004ea95c + temp_v1 * DAT_004ea96c + temp_v3 * DAT_004ea97c;
  temp_v2 = temp_v0 * DAT_004ea960 + temp_v1 * DAT_004ea970 + temp_v3 * DAT_004ea980;
  temp_v4 = temp_v0 * DAT_004ea964 + temp_v1 * DAT_004ea974 + temp_v3 * DAT_004ea984;
  DAT_004ea928 = temp_v0 * DAT_004ea968 + temp_v1 * DAT_004ea978 + temp_v3 * DAT_004ea988;
  DAT_004ea91c = temp_v5;
  DAT_004ea920 = temp_v2;
  DAT_004ea924 = temp_v4;
  param_1[3] = DAT_004ea928;
  *param_1 = temp_v5;
  param_1[1] = temp_v2;
  param_1[2] = temp_v4;
  for (temp_v0 = param_1[0x23]; temp_v0 != 0.0f; temp_v0 = *(float *)((int)temp_v0 + 0xac)) {
    DAT_004ea91c = *(float *)((int)temp_v0 + 0x50);
    DAT_004ea920 = *(float *)((int)temp_v0 + 0x54);
    DAT_004ea924 = *(float *)((int)temp_v0 + 0x58);
    DAT_004ea928 = *(float *)((int)temp_v0 + 0x5c);
    DAT_004ea92c = (unsigned int)temp_v6;
    DAT_004ea930 = (unsigned int)((unsigned long long)temp_v6 >> 0x20);
    DAT_004ea934 = (unsigned int)temp_v7;
    DAT_004ea938 = (unsigned int)((unsigned long long)temp_v7 >> 0x20);
    FUN_002a2ea0();
    temp_v8 = DAT_004ea91c;
    fStack_34 = DAT_004ea920;
    fStack_30 = DAT_004ea924;
    fStack_2c = DAT_004ea928;
    pcVar1 = *(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)((int)temp_v0 + 0x90) + 4) * 0x44 + 0x464134);
    if (pcVar1 != (romwright_code *)0x0) {
      (*pcVar1)(*(unsigned int *)(*(int *)((int)temp_v0 + 0x90) + 8),&temp_v8);
    }
  }
  FUN_002a3d50(param_1,param_1 + 0x10);
  return;
}
