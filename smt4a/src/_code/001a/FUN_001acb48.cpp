/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001acb48` (_code @ 0x1acb48, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_001b4eb8(float *, float *);
int FUN_001bc3e4(void);
int FUN_001bc460(void);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern unsigned int DAT_006472ec; /* 0x6472ec */
extern unsigned int DAT_006472f0; /* 0x6472f0 */
extern unsigned int DAT_006472f4; /* 0x6472f4 */
extern unsigned int DAT_006472f8; /* 0x6472f8 */
extern float DAT_0064731c; /* 0x64731c */
extern float DAT_00647320; /* 0x647320 */
extern float DAT_00647324; /* 0x647324 */
extern float DAT_00647328; /* 0x647328 */
extern float DAT_0064732c; /* 0x64732c */
extern float DAT_00647330; /* 0x647330 */
extern float DAT_00647334; /* 0x647334 */
extern float DAT_00647338; /* 0x647338 */
extern float DAT_0064733c; /* 0x64733c */
extern float DAT_00647340; /* 0x647340 */
extern float DAT_00647344; /* 0x647344 */
extern float DAT_00647348; /* 0x647348 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_001b4eb8. */
/* Supplied declaration required: FUN_001bc3e4. */
/* Supplied declaration required: FUN_001bc460. */


void FUN_001acb48(float *param_1,float *param_2)

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
  
  DAT_006472dc = *param_2;
  temp_v0 = param_2[1];
  temp_v1 = param_2[2];
  temp_v3 = param_2[3];
  DAT_006472e0 = temp_v0;
  DAT_006472e4 = temp_v1;
  DAT_006472e8 = temp_v3;
  param_1[0x14] = DAT_006472dc;
  param_1[0x15] = temp_v0;
  param_1[0x16] = temp_v1;
  param_1[0x17] = temp_v3;
  temp_v6 = CONCAT44(DAT_006472e0,DAT_006472dc);
  temp_v7 = CONCAT44(DAT_006472e8,DAT_006472e4);
  FUN_001bc460();
  temp_v0 = param_1[4];
  temp_v1 = param_1[5];
  temp_v3 = param_1[6];
  temp_v5 = temp_v0 * DAT_0064731c + temp_v1 * DAT_0064732c + temp_v3 * DAT_0064733c;
  temp_v2 = temp_v0 * DAT_00647320 + temp_v1 * DAT_00647330 + temp_v3 * DAT_00647340;
  temp_v4 = temp_v0 * DAT_00647324 + temp_v1 * DAT_00647334 + temp_v3 * DAT_00647344;
  DAT_006472e8 = temp_v0 * DAT_00647328 + temp_v1 * DAT_00647338 + temp_v3 * DAT_00647348;
  DAT_006472dc = temp_v5;
  DAT_006472e0 = temp_v2;
  DAT_006472e4 = temp_v4;
  param_1[3] = DAT_006472e8;
  *param_1 = temp_v5;
  param_1[1] = temp_v2;
  param_1[2] = temp_v4;
  for (temp_v0 = param_1[0x23]; temp_v0 != 0.0f; temp_v0 = *(float *)((int)temp_v0 + 0xac)) {
    DAT_006472dc = *(float *)((int)temp_v0 + 0x50);
    DAT_006472e0 = *(float *)((int)temp_v0 + 0x54);
    DAT_006472e4 = *(float *)((int)temp_v0 + 0x58);
    DAT_006472e8 = *(float *)((int)temp_v0 + 0x5c);
    DAT_006472ec = (unsigned int)temp_v6;
    DAT_006472f0 = (unsigned int)((unsigned long long)temp_v6 >> 0x20);
    DAT_006472f4 = (unsigned int)temp_v7;
    DAT_006472f8 = (unsigned int)((unsigned long long)temp_v7 >> 0x20);
    FUN_001bc3e4();
    temp_v8 = DAT_006472dc;
    fStack_34 = DAT_006472e0;
    fStack_30 = DAT_006472e4;
    fStack_2c = DAT_006472e8;
    pcVar1 = *(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)((int)temp_v0 + 0x90) + 4) * 0x44 + 0x5b3298);
    if (pcVar1 != (romwright_code *)0x0) {
      (*pcVar1)(*(unsigned int *)(*(int *)((int)temp_v0 + 0x90) + 8),&temp_v8);
    }
  }
  FUN_001b4eb8(param_1,param_1 + 0x10);
  return;
}

} /* extern "C" */
