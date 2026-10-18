/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4eb8` (_code @ 0x1b4eb8, 0x290 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
} param_2_stack;

extern char s______________________005b3274[113]; /* 0x5b3274 */
extern unsigned char DAT_006471dc; /* 0x6471dc */
extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */
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
extern unsigned int DAT_0064734c; /* 0x64734c */
extern unsigned int DAT_00647350; /* 0x647350 */
extern unsigned int DAT_00647354; /* 0x647354 */
extern unsigned int DAT_00647358; /* 0x647358 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_001bc460. */


void FUN_001b4eb8(float *param_1,float *param_2)

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
  char *pcVar9;
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
  
  pcVar9 = (char *)&DAT_006471dc;
  DAT_006472dc = *param_2;
  temp_v6 = param_2[1];
  temp_v7 = param_2[2];
  temp_v8 = param_2[3];
  DAT_006472e0 = temp_v6;
  DAT_006472e4 = temp_v7;
  DAT_006472e8 = temp_v8;
  param_1[0x10] = DAT_006472dc;
  param_1[0x11] = temp_v6;
  param_1[0x12] = temp_v7;
  param_1[0x13] = temp_v8;
  DAT_006472ec = *param_1;
  DAT_006472f0 = param_1[1];
  DAT_006472f4 = param_1[2];
  DAT_006472f8 = param_1[3];
  temp_v10 = DAT_006472dc + DAT_006472ec;
  temp_v6 = DAT_006472e0 + DAT_006472f0;
  temp_v7 = DAT_006472e4 + DAT_006472f4;
  temp_v11 = DAT_006472e8 + DAT_006472f8;
  DAT_006472dc = param_1[0x14];
  DAT_006472e0 = param_1[0x15];
  DAT_006472e4 = param_1[0x16];
  DAT_006472e8 = param_1[0x17];
  temp_v17 = CONCAT44(temp_v7,temp_v6);
  FUN_001bc460();
  temp_v5 = DAT_00647354;
  temp_v4 = DAT_00647350;
  temp_v3 = DAT_0064734c;
  temp_v2 = DAT_00647348;
  temp_v1 = DAT_00647340;
  temp_v6 = param_1[0x23];
  temp_v16 = param_1[0x18] * param_1[0x1d];
  temp_v9 = temp_v6 != 0.0f;
  temp_v7 = DAT_00647320;
  temp_v8 = DAT_00647324;
  temp_v20 = DAT_0064732c;
  temp_v21 = DAT_00647330;
  temp_v18 = DAT_0064731c;
  temp_v19 = DAT_00647328;
  temp_v26 = DAT_00647344;
  temp_v22 = DAT_00647358;
  temp_v25 = DAT_0064733c;
  temp_v23 = DAT_00647334;
  temp_v24 = DAT_00647338;
  if (temp_v9) {
    pcVar9 = s______________________005b3274;
  }
  while (temp_v9) {
    DAT_006472e0 = (float)temp_v17;
    if ((*(unsigned int *)((int)temp_v6 + 0x68) & 4) != 0) {
      DAT_006472e0 = 5.0f;
    }
    DAT_006472ec = *(float *)((int)temp_v6 + 0x40);
    DAT_006472f0 = *(float *)((int)temp_v6 + 0x44);
    DAT_006472f4 = *(float *)((int)temp_v6 + 0x48);
    if ((*(unsigned int *)((int)temp_v6 + 0x68) & 0x80) != 0) {
      DAT_006472ec = DAT_006472ec * temp_v16;
      DAT_006472f0 = DAT_006472f0 * temp_v16;
      DAT_006472f4 = DAT_006472f4 * temp_v16;
    }
    temp_v13 = DAT_006472ec * temp_v7;
    temp_v14 = DAT_006472ec * temp_v8;
    temp_v12 = DAT_006472ec * temp_v19;
    temp_v15 = DAT_006472f0 * temp_v23;
    temp_v0 = DAT_006472f0 * temp_v24;
    DAT_006472ec = DAT_006472ec * temp_v18 + DAT_006472f0 * temp_v20 + DAT_006472f4 * temp_v25;
    DAT_006472f0 = temp_v13 + DAT_006472f0 * temp_v21 + DAT_006472f4 * temp_v1;
    temp_v15 = temp_v14 + temp_v15 + DAT_006472f4 * temp_v26;
    DAT_006472f8 = temp_v12 + temp_v0 + DAT_006472f4 * temp_v2;
    temp_v27 = temp_v10 + DAT_006472ec;
    fStack_74 = DAT_006472e0 + DAT_006472f0;
    temp_v28 = (float)((unsigned long long)temp_v17 >> 0x20) + temp_v15;
    fStack_6c = temp_v11 + DAT_006472f8;
    DAT_006472dc = temp_v27;
    DAT_006472e0 = fStack_74;
    DAT_006472e4 = temp_v28;
    DAT_006472e8 = fStack_6c;
    DAT_006472f4 = temp_v15;
    DAT_0064731c = temp_v18;
    DAT_00647320 = temp_v7;
    DAT_00647324 = temp_v8;
    DAT_00647328 = temp_v19;
    DAT_0064732c = temp_v20;
    DAT_00647330 = temp_v21;
    DAT_00647334 = temp_v23;
    DAT_00647338 = temp_v24;
    DAT_0064733c = temp_v25;
    DAT_00647340 = temp_v1;
    DAT_00647344 = temp_v26;
    DAT_00647348 = temp_v2;
    DAT_0064734c = temp_v3;
    DAT_00647350 = temp_v4;
    DAT_00647354 = temp_v5;
    DAT_00647358 = temp_v22;
    if (*(romwright_code **)(pcVar9 + (unsigned int)*(unsigned short *)(*(int *)((int)temp_v6 + 0x90) + 4) * 0x44 + 0x20) !=
        (romwright_code *)0x0) {
      (**(romwright_code **)(pcVar9 + (unsigned int)*(unsigned short *)(*(int *)((int)temp_v6 + 0x90) + 4) * 0x44 + 0x20))
                (*(unsigned int *)(*(int *)((int)temp_v6 + 0x90) + 8),&temp_v27);
    }
    temp_v6 = *(float *)((int)temp_v6 + 0xac);
    temp_v9 = temp_v6 != 0.0f;
  }
  return;
}
