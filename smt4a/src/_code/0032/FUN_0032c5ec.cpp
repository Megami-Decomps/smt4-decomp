/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032c5ec` (_code @ 0x32c5ec, 0x208 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, unsigned int);
int FUN_00167bc8(int, float *, int);
int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int FUN_002a1850(...);
int FUN_0032c810(...);

/* stack frame of param_3: 22 slot(s), 88 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
} param_3_stack;

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
extern unsigned int FUN_00152f54(void);
/* Supplied declaration required: FUN_00167bc8. */
/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: FUN_001b63b0. */
/* Supplied declaration required: FUN_002a1850. */
/* Supplied declaration required: FUN_0032c810. */
extern int FUN_0040970c(unsigned int);


void FUN_0032c5ec(float *param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_s0, in_s1; 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  float in_s0;
  float temp_v3;
  float in_s1;
  float temp_v4;
  unsigned int temp_v5;
  unsigned long long temp_v6;
  float temp_v7;
  unsigned long long temp_v8;
  unsigned long long temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  unsigned int temp_v26 [22];
  unsigned int temp_v27 [11];
  int temp_v28;
  unsigned int uStack_60;
  unsigned char temp_v29 [12];
  float temp_v30;
  float fStack_48;
  float temp_v31;
  
  temp_v4 = 0.0f;
  temp_v0 = FUN_00152f54();
  if (param_3 == 0) {
    param_3 = FUN_0040970c(DAT_0059dbb4);
  }
  FUN_00167bc8(param_3,&temp_v10,0x40);
  temp_v13 = *param_1;
  temp_v17 = param_1[1];
  temp_v21 = param_1[2];
  FUN_002a1850(temp_v29,0,temp_v0,param_1);
  temp_v6 = 0x3f20d97c;
  temp_v9 = 0x4222f983;
  temp_v8 = 0x3f80000000000000;
  temp_v2 = 0;
  puVar1 = temp_v26;
  do {
    puVar3 = puVar1;
    temp_v5 = (unsigned int)temp_v6;
    temp_v7 = temp_v4 * (float)temp_v9;
    temp_v3 = temp_v7;
    FUN_001b63b0();
    temp_v7 = temp_v7 * in_s0;
    FUN_001a1ee0();
    temp_v3 = temp_v3 * in_s0;
    temp_v6 = CONCAT44(temp_v22,temp_v5);
    temp_v31 = (float)((unsigned long long)temp_v8 >> 0x20) /
               (temp_v23 * in_s1 + temp_v24 * temp_v3 + temp_v25 + temp_v22 * temp_v7);
    temp_v30 = (temp_v11 * in_s1 + temp_v12 * temp_v3 + temp_v13 + temp_v10 * temp_v7) * temp_v31;
    fStack_48 = (temp_v15 * in_s1 + temp_v16 * temp_v3 + temp_v17 + temp_v14 * temp_v7) * temp_v31;
    temp_v31 = (temp_v19 * in_s1 + temp_v20 * temp_v3 + temp_v21 + temp_v18 * temp_v7) * temp_v31;
    FUN_002a1850(&temp_v28,0,temp_v0,&temp_v30);
    temp_v5 = uStack_60;
    *puVar3 = temp_v28;
    puVar3[1] = temp_v5;
    FUN_0032c810(param_2);
    temp_v4 = temp_v4 + (float)temp_v6;
    temp_v27[temp_v2] = param_2;
    temp_v2 = temp_v2 + 1;
    puVar1 = puVar3 + 2;
  } while (temp_v2 < 10);
  temp_v27[10] = param_2;
  puVar3[2] = temp_v26[0];
  puVar3[3] = temp_v26[1];
  temp_v1 = 0;
  do {
    FUN_0032c810(temp_v27[temp_v1],temp_v27[temp_v1 + 1]);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 10);
  return;
}

} /* extern "C" */
