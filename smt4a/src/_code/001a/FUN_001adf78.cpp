/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001adf78` (_code @ 0x1adf78, 0xab0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b4128(unsigned int *, int, int);
int FUN_001bbf0c(void);
int FUN_001bc124(void);

/* stack frame of param_6: 59 slot(s), 236 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
    unsigned int sp170; /* 0x170: local_170 */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned int sp178; /* 0x178: local_178 */
    unsigned int sp17C; /* 0x17c: local_17c */
    unsigned int sp180; /* 0x180: local_180 */
    unsigned int sp184; /* 0x184: local_184 */
    unsigned int sp188; /* 0x188: local_188 */
    unsigned int sp18C; /* 0x18c: local_18c */
    unsigned int sp190; /* 0x190: local_190 */
    unsigned int sp198; /* 0x198: local_198 */
    unsigned int sp1A8; /* 0x1a8: local_1a8 */
    unsigned int sp1AC; /* 0x1ac: local_1ac */
    unsigned int sp1B4; /* 0x1b4: local_1b4 */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
    unsigned int sp1BC; /* 0x1bc: local_1bc */
    unsigned int sp1C4; /* 0x1c4: local_1c4 */
    unsigned int sp1CC; /* 0x1cc: local_1cc */
    unsigned int sp1D4; /* 0x1d4: local_1d4 */
    unsigned int sp1DC; /* 0x1dc: local_1dc */
} param_6_stack;

extern int DAT_0063f744; /* 0x63f744 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_001b4128. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */


unsigned int * FUN_001adf78(unsigned int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,unsigned int *param_5,
                   unsigned int *param_6)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4, in_s5, in_s6, in_s7, in_s8, in_s9; 8 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  float *pfVar8;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int *puVar13;
  unsigned int *puVar14;
  unsigned int temp_v11;
  float in_s0;
  float temp_v12;
  float in_s1;
  float in_s2;
  float in_s3;
  float in_s4;
  float in_s5;
  float in_s6;
  float in_s7;
  unsigned int in_s8;
  float in_s9;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int uStack_16c;
  unsigned int temp_v29;
  unsigned int temp_v30;
  float temp_v31 [8];
  unsigned int temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38;
  unsigned int uStack_10c;
  unsigned int temp_v39;
  unsigned int temp_v40;
  unsigned int temp_v41;
  unsigned int temp_v42;
  unsigned int temp_v43;
  unsigned int temp_v44;
  unsigned int temp_v45;
  unsigned int temp_v46;
  unsigned int uStack_e8;
  unsigned int temp_v47;
  unsigned int temp_v48;
  unsigned int uStack_dc;
  unsigned int temp_v49;
  unsigned int uStack_d4;
  unsigned int temp_v50;
  unsigned int temp_v51;
  unsigned int temp_v52;
  unsigned int temp_v53;
  unsigned int temp_v54;
  unsigned int uStack_bc;
  unsigned int temp_v55;
  unsigned int temp_v56;
  unsigned int temp_v57;
  unsigned int uStack_ac;
  unsigned int temp_v58;
  unsigned int temp_v59;
  unsigned int temp_v60;
  unsigned int uStack_9c;
  unsigned int uStack_34;
  unsigned int *puStack_30;
  unsigned int *puStack_2c;
  unsigned int *temp_v61;
  
  temp_v31[3] = in_s1 + in_s3;
  temp_v31[4] = in_s0 + in_s2;
  temp_v31[6] = temp_v31[4];
  temp_v31[7] = temp_v31[3];
  temp_v17 = (in_s1 + temp_v31[3] + in_s1 + temp_v31[3]) * 0.25f;
  temp_v16 = (in_s0 + in_s0 + temp_v31[4] + temp_v31[4]) * 0.25f;
  temp_v19 = (unsigned long long)(unsigned int)(in_s9 * 3.141592f * 0.0055555557f);
  temp_v8 = 0;
  temp_v31[0] = in_s0;
  temp_v31[1] = in_s1;
  temp_v31[2] = in_s0;
  temp_v31[5] = in_s1;
  uStack_34 = param_1;
  puStack_30 = param_2;
  puStack_2c = param_3;
  temp_v61 = param_4;
  do {
    pfVar8 = temp_v31 + temp_v8 * 2;
    temp_v13 = *pfVar8 - temp_v16;
    temp_v15 = temp_v31[temp_v8 * 2 + 1] - temp_v17;
    temp_v18 = (float)temp_v19;
    FUN_001bbf0c();
    temp_v18 = temp_v18 * temp_v13;
    temp_v12 = (float)temp_v19;
    FUN_001bc124();
    temp_v14 = (float)temp_v19;
    *pfVar8 = temp_v18 - temp_v15 * temp_v12;
    FUN_001bc124();
    temp_v14 = temp_v14 * temp_v13;
    temp_v18 = (float)temp_v19;
    FUN_001bbf0c();
    temp_v14 = temp_v14 + temp_v15 * temp_v18;
    temp_v18 = *pfVar8;
    temp_v9 = temp_v8 + 1;
    temp_v31[temp_v8 * 2 + 1] = temp_v14;
    *pfVar8 = temp_v18 + temp_v16;
    temp_v31[temp_v8 * 2 + 1] = temp_v14 + temp_v17;
    temp_v8 = temp_v9;
  } while (temp_v9 < 4);
  in_s6 = in_s4 + in_s6;
  in_s7 = in_s5 + in_s7;
  if ((in_s8 & 0x7fffffff) == 0) {
    temp_v1 = (in_s8 >> 0x1f) << 0x17;
  }
  else {
    temp_v1 = ((in_s8 & 0x7fffff) >> 7) | ((in_s8 >> 0x1f) << 0x17) |
            *(unsigned int *)(((in_s8 & 0x7fffffff) >> 0x17) * 4 + 0x63f548);
  }
  if (romwright_fabs_4(in_s4) == 0.0f) {
    temp_v4 = ((unsigned int)in_s4 >> 0x1f) << 0x17;
  }
  else {
    temp_v4 = (((unsigned int)in_s4 & 0x7fffff) >> 7) | (((unsigned int)in_s4 >> 0x1f) << 0x17) |
            *(unsigned int *)(((unsigned int)romwright_fabs_4(in_s4) >> 0x17) * 4 + 0x63f548);
  }
  if (romwright_fabs_4(in_s5) == 0.0f) {
    temp_v7 = ((unsigned int)in_s5 >> 0x1f) << 0x17;
  }
  else {
    temp_v7 = *(unsigned int *)(((unsigned int)romwright_fabs_4(in_s5) >> 0x17) * 4 + 0x63f548) |
            (((unsigned int)in_s5 & 0x7fffff) >> 7) | (((unsigned int)in_s5 >> 0x1f) << 0x17);
  }
  if (romwright_fabs_4(in_s6) == 0.0f) {
    temp_v5 = ((unsigned int)in_s6 >> 0x1f) << 0x17;
  }
  else {
    temp_v5 = (((unsigned int)in_s6 & 0x7fffff) >> 7) | (((unsigned int)in_s6 >> 0x1f) << 0x17) |
            *(unsigned int *)(((unsigned int)romwright_fabs_4(in_s6) >> 0x17) * 4 + 0x63f548);
  }
  if (romwright_fabs_4(in_s7) == 0.0f) {
    temp_v10 = ((unsigned int)in_s7 >> 0x1f) << 0x17;
  }
  else {
    temp_v10 = *(unsigned int *)(((unsigned int)romwright_fabs_4(in_s7) >> 0x17) * 4 + 0x63f548) |
             (((unsigned int)in_s7 & 0x7fffff) >> 7) | (((unsigned int)in_s7 >> 0x1f) << 0x17);
  }
  if (romwright_fabs_4(temp_v31[0]) == 0.0f) {
    temp_v23 = ((unsigned int)temp_v31[0] >> 0x1f) << 0x17;
  }
  else {
    temp_v23 = (((unsigned int)temp_v31[0] & 0x7fffff) >> 7) | (((unsigned int)temp_v31[0] >> 0x1f) << 0x17) |
                *(unsigned int *)(((unsigned int)romwright_fabs_4(temp_v31[0]) >> 0x17) * 4 + 0x63f548);
  }
  if (romwright_fabs_4(temp_v31[1]) == 0.0f) {
    temp_v6 = ((unsigned int)temp_v31[1] >> 0x1f) << 0x17;
  }
  else {
    temp_v6 = (((unsigned int)temp_v31[1] & 0x7fffff) >> 7) | (((unsigned int)temp_v31[1] >> 0x1f) << 0x17) |
            *(unsigned int *)(((unsigned int)romwright_fabs_4(temp_v31[1]) >> 0x17) * 4 + 0x63f548);
  }
  temp_v0 = temp_v1 << 0x10;
  temp_v22 = temp_v0 | (temp_v6 >> 8);
  temp_v11 = (DAT_0063f744 << 8) | (temp_v1 >> 0x10);
  temp_v1 = temp_v7 >> 8;
  temp_v23 = temp_v23 | (temp_v6 << 0x18);
  temp_v6 = *param_3;
  temp_v30 = temp_v4 | (temp_v7 << 0x18);
  if ((temp_v6 & 0x7fffffff) == 0) {
    temp_v27 = (temp_v6 >> 0x1f) << 0x17;
  }
  else {
    temp_v27 = *(unsigned int *)(((temp_v6 & 0x7fffffff) >> 0x17) * 4 + 0x63f548) |
                ((temp_v6 & 0x7fffff) >> 7) | ((temp_v6 >> 0x1f) << 0x17);
  }
  temp_v6 = param_3[1];
  if ((temp_v6 & 0x7fffffff) == 0) {
    temp_v6 = (temp_v6 >> 0x1f) << 0x17;
  }
  else {
    temp_v6 = *(unsigned int *)(((temp_v6 & 0x7fffffff) >> 0x17) * 4 + 0x63f548) |
            ((temp_v6 & 0x7fffff) >> 7) | ((temp_v6 >> 0x1f) << 0x17);
  }
  temp_v2 = param_3[2];
  if ((temp_v2 & 0x7fffffff) == 0) {
    temp_v2 = (temp_v2 >> 0x1f) << 0x17;
  }
  else {
    temp_v2 = *(unsigned int *)(((temp_v2 & 0x7fffffff) >> 0x17) * 4 + 0x63f548) |
            ((temp_v2 & 0x7fffff) >> 7) | ((temp_v2 >> 0x1f) << 0x17);
  }
  temp_v3 = param_3[3];
  if ((temp_v3 & 0x7fffffff) == 0) {
    temp_v3 = (temp_v3 >> 0x1f) << 0x17;
  }
  else {
    temp_v3 = ((temp_v3 & 0x7fffff) >> 7) | ((temp_v3 >> 0x1f) << 0x17) |
            *(unsigned int *)(((temp_v3 & 0x7fffffff) >> 0x17) * 4 + 0x63f548);
  }
  temp_v24 = (temp_v3 << 8) | (temp_v2 >> 0x10);
  temp_v27 = temp_v27 | (temp_v6 << 0x18);
  temp_v26 = (temp_v2 << 0x10) | (temp_v6 >> 8);
  temp_v21 = 0x802f0233;
  temp_v25 = 0x802f0233;
  temp_v28 = 0x3f000000;
  uStack_16c = 0x802f0233;
  temp_v20 = temp_v11;
  temp_v29 = temp_v1;
  if (param_2 != (unsigned int *)0x0) {
    puVar13 = param_2 + 0xc;
    *param_2 = temp_v11;
    param_2[1] = 0x802f0233;
    param_2[2] = temp_v22;
    param_2[3] = temp_v23;
    param_2[4] = temp_v24;
    param_2[5] = 0x802f0233;
    param_2[6] = temp_v26;
    param_2[7] = temp_v27;
    param_2[8] = 0x3f000000;
    param_2[9] = 0x802f0233;
    param_2[10] = temp_v1;
    param_2[0xb] = temp_v30;
  }
  else {
    FUN_001b4128(&temp_v20,0x30,1);
    puVar13 = (unsigned int *)0x0;
  }
  if (romwright_fabs_4(temp_v31[2]) == 0.0f) {
    temp_v35 = ((unsigned int)temp_v31[2] >> 0x1f) << 0x17;
  }
  else {
    temp_v35 = *(unsigned int *)(((unsigned int)romwright_fabs_4(temp_v31[2]) >> 0x17) * 4 + 0x63f548) |
                (((unsigned int)temp_v31[2] & 0x7fffff) >> 7) | (((unsigned int)temp_v31[2] >> 0x1f) << 0x17);
  }
  if (romwright_fabs_4(temp_v31[3]) == 0.0f) {
    temp_v6 = ((unsigned int)temp_v31[3] >> 0x1f) << 0x17;
  }
  else {
    temp_v6 = *(unsigned int *)(((unsigned int)romwright_fabs_4(temp_v31[3]) >> 0x17) * 4 + 0x63f548) |
            (((unsigned int)temp_v31[3] & 0x7fffff) >> 7) | (((unsigned int)temp_v31[3] >> 0x1f) << 0x17);
  }
  temp_v2 = temp_v10 >> 8;
  temp_v42 = temp_v4 | (temp_v10 << 0x18);
  temp_v35 = temp_v35 | (temp_v6 << 0x18);
  temp_v34 = temp_v0 | (temp_v6 >> 8);
  temp_v4 = *temp_v61;
  if ((temp_v4 & 0x7fffffff) == 0) {
    uStack_10c = (temp_v4 >> 0x1f) << 0x17;
  }
  else {
    uStack_10c = *(unsigned int *)(((temp_v4 & 0x7fffffff) >> 0x17) * 4 + 0x63f548) |
                 ((temp_v4 & 0x7fffff) >> 7) | ((temp_v4 >> 0x1f) << 0x17);
  }
  temp_v4 = temp_v61[1];
  if ((temp_v4 & 0x7fffffff) == 0) {
    temp_v4 = (temp_v4 >> 0x1f) << 0x17;
  }
  else {
    temp_v4 = ((temp_v4 & 0x7fffff) >> 7) | ((temp_v4 >> 0x1f) << 0x17) |
            *(unsigned int *)(((temp_v4 & 0x7fffffff) >> 0x17) * 4 + 0x63f548);
  }
  temp_v6 = temp_v61[2];
  if ((temp_v6 & 0x7fffffff) == 0) {
    temp_v6 = (temp_v6 >> 0x1f) << 0x17;
  }
  else {
    temp_v6 = ((temp_v6 & 0x7fffff) >> 7) | ((temp_v6 >> 0x1f) << 0x17) |
            *(unsigned int *)(((temp_v6 & 0x7fffffff) >> 0x17) * 4 + 0x63f548);
  }
  temp_v3 = temp_v61[3];
  if ((temp_v3 & 0x7fffffff) == 0) {
    temp_v3 = (temp_v3 >> 0x1f) << 0x17;
  }
  else {
    temp_v3 = ((temp_v3 & 0x7fffff) >> 7) | ((temp_v3 >> 0x1f) << 0x17) |
            *(unsigned int *)(((temp_v3 & 0x7fffffff) >> 0x17) * 4 + 0x63f548);
  }
  temp_v36 = (temp_v3 << 8) | (temp_v6 >> 0x10);
  uStack_10c = uStack_10c | (temp_v4 << 0x18);
  temp_v38 = (temp_v6 << 0x10) | (temp_v4 >> 8);
  temp_v33 = 0x802f0233;
  temp_v37 = 0x802f0233;
  temp_v39 = 0x3f000000;
  temp_v40 = 0x802f0233;
  temp_v32 = temp_v11;
  temp_v41 = temp_v2;
  if (puVar13 != (unsigned int *)0x0) {
    *puVar13 = temp_v11;
    puVar13[1] = 0x802f0233;
    puVar13[2] = temp_v34;
    puVar13[3] = temp_v35;
    puVar13[4] = temp_v36;
    puVar13[5] = 0x802f0233;
    puVar13[6] = temp_v38;
    puVar13[7] = uStack_10c;
    puVar14 = puVar13 + 0xc;
    puVar13[8] = 0x3f000000;
    puVar13[9] = 0x802f0233;
    puVar13[10] = temp_v2;
    puVar13[0xb] = temp_v42;
  }
  else {
    FUN_001b4128(&temp_v32,0x30,1);
    puVar14 = (unsigned int *)0x0;
  }
  if (romwright_fabs_4(temp_v31[4]) == 0.0f) {
    temp_v46 = ((unsigned int)temp_v31[4] >> 0x1f) << 0x17;
  }
  else {
    temp_v46 = *(unsigned int *)(((unsigned int)romwright_fabs_4(temp_v31[4]) >> 0x17) * 4 + 0x63f548) |
               (((unsigned int)temp_v31[4] & 0x7fffff) >> 7) | (((unsigned int)temp_v31[4] >> 0x1f) << 0x17);
  }
  if (romwright_fabs_4(temp_v31[5]) == 0.0f) {
    temp_v4 = ((unsigned int)temp_v31[5] >> 0x1f) << 0x17;
  }
  else {
    temp_v4 = (((unsigned int)temp_v31[5] & 0x7fffff) >> 7) | (((unsigned int)temp_v31[5] >> 0x1f) << 0x17) |
            *(unsigned int *)(((unsigned int)romwright_fabs_4(temp_v31[5]) >> 0x17) * 4 + 0x63f548);
  }
  temp_v46 = temp_v46 | (temp_v4 << 0x18);
  temp_v51 = temp_v5 | (temp_v7 << 0x18);
  temp_v45 = temp_v0 | (temp_v4 >> 8);
  temp_v4 = *param_5;
  if ((temp_v4 & 0x7fffffff) == 0) {
    uStack_dc = (temp_v4 >> 0x1f) << 0x17;
  }
  else {
    uStack_dc = *(unsigned int *)(((temp_v4 & 0x7fffffff) >> 0x17) * 4 + 0x63f548) |
                ((temp_v4 & 0x7fffff) >> 7) | ((temp_v4 >> 0x1f) << 0x17);
  }
  temp_v4 = param_5[1];
  if ((temp_v4 & 0x7fffffff) == 0) {
    temp_v4 = (temp_v4 >> 0x1f) << 0x17;
  }
  else {
    temp_v4 = *(unsigned int *)(((temp_v4 & 0x7fffffff) >> 0x17) * 4 + 0x63f548) |
            ((temp_v4 & 0x7fffff) >> 7) | ((temp_v4 >> 0x1f) << 0x17);
  }
  temp_v7 = param_5[2];
  if ((temp_v7 & 0x7fffffff) == 0) {
    temp_v7 = (temp_v7 >> 0x1f) << 0x17;
  }
  else {
    temp_v7 = *(unsigned int *)(((temp_v7 & 0x7fffffff) >> 0x17) * 4 + 0x63f548) |
            ((temp_v7 & 0x7fffff) >> 7) | ((temp_v7 >> 0x1f) << 0x17);
  }
  temp_v6 = param_5[3];
  if ((temp_v6 & 0x7fffffff) == 0) {
    temp_v6 = (temp_v6 >> 0x1f) << 0x17;
  }
  else {
    temp_v6 = ((temp_v6 & 0x7fffff) >> 7) | ((temp_v6 >> 0x1f) << 0x17) |
            *(unsigned int *)(((temp_v6 & 0x7fffffff) >> 0x17) * 4 + 0x63f548);
  }
  uStack_e8 = (temp_v6 << 8) | (temp_v7 >> 0x10);
  temp_v47 = 0x802f0233;
  uStack_dc = uStack_dc | (temp_v4 << 0x18);
  temp_v48 = (temp_v7 << 0x10) | (temp_v4 >> 8);
  temp_v44 = 0x802f0233;
  temp_v49 = 0x3f000000;
  uStack_d4 = 0x802f0233;
  temp_v43 = temp_v11;
  temp_v50 = temp_v1;
  if (puVar14 != (unsigned int *)0x0) {
    puVar13 = puVar14 + 0xc;
    *puVar14 = temp_v11;
    puVar14[1] = 0x802f0233;
    puVar14[2] = temp_v45;
    puVar14[3] = temp_v46;
    puVar14[4] = uStack_e8;
    puVar14[5] = 0x802f0233;
    puVar14[6] = temp_v48;
    puVar14[7] = uStack_dc;
    puVar14[8] = 0x3f000000;
    puVar14[9] = 0x802f0233;
    puVar14[10] = temp_v1;
    puVar14[0xb] = temp_v51;
  }
  else {
    FUN_001b4128(&temp_v43,0x30,1);
    puVar13 = (unsigned int *)0x0;
  }
  if (romwright_fabs_4(temp_v31[6]) == 0.0f) {
    uStack_bc = ((unsigned int)temp_v31[6] >> 0x1f) << 0x17;
  }
  else {
    uStack_bc = *(unsigned int *)(((unsigned int)romwright_fabs_4(temp_v31[6]) >> 0x17) * 4 + 0x63f548) |
                (((unsigned int)temp_v31[6] & 0x7fffff) >> 7) | (((unsigned int)temp_v31[6] >> 0x1f) << 0x17);
  }
  if (romwright_fabs_4(temp_v31[7]) == 0.0f) {
    temp_v1 = ((unsigned int)temp_v31[7] >> 0x1f) << 0x17;
  }
  else {
    temp_v1 = (((unsigned int)temp_v31[7] & 0x7fffff) >> 7) | (((unsigned int)temp_v31[7] >> 0x1f) << 0x17) |
            *(unsigned int *)(((unsigned int)romwright_fabs_4(temp_v31[7]) >> 0x17) * 4 + 0x63f548);
  }
  uStack_bc = uStack_bc | (temp_v1 << 0x18);
  uStack_9c = temp_v5 | (temp_v10 << 0x18);
  temp_v54 = temp_v0 | (temp_v1 >> 8);
  temp_v1 = *param_6;
  if ((temp_v1 & 0x7fffffff) == 0) {
    uStack_ac = (temp_v1 >> 0x1f) << 0x17;
  }
  else {
    uStack_ac = *(unsigned int *)(((temp_v1 & 0x7fffffff) >> 0x17) * 4 + 0x63f548) |
                ((temp_v1 & 0x7fffff) >> 7) | ((temp_v1 >> 0x1f) << 0x17);
  }
  temp_v1 = param_6[1];
  if ((temp_v1 & 0x7fffffff) == 0) {
    temp_v1 = (temp_v1 >> 0x1f) << 0x17;
  }
  else {
    temp_v1 = *(unsigned int *)(((temp_v1 & 0x7fffffff) >> 0x17) * 4 + 0x63f548) |
            ((temp_v1 & 0x7fffff) >> 7) | ((temp_v1 >> 0x1f) << 0x17);
  }
  temp_v4 = param_6[2];
  if ((temp_v4 & 0x7fffffff) == 0) {
    temp_v4 = (temp_v4 >> 0x1f) << 0x17;
  }
  else {
    temp_v4 = *(unsigned int *)(((temp_v4 & 0x7fffffff) >> 0x17) * 4 + 0x63f548) |
            ((temp_v4 & 0x7fffff) >> 7) | ((temp_v4 >> 0x1f) << 0x17);
  }
  temp_v7 = param_6[3];
  if ((temp_v7 & 0x7fffffff) == 0) {
    temp_v7 = (temp_v7 >> 0x1f) << 0x17;
  }
  else {
    temp_v7 = ((temp_v7 & 0x7fffff) >> 7) | ((temp_v7 >> 0x1f) << 0x17) |
            *(unsigned int *)(((temp_v7 & 0x7fffffff) >> 0x17) * 4 + 0x63f548);
  }
  temp_v55 = (temp_v7 << 8) | (temp_v4 >> 0x10);
  uStack_ac = uStack_ac | (temp_v1 << 0x18);
  temp_v57 = (temp_v4 << 0x10) | (temp_v1 >> 8);
  temp_v53 = 0x802f0233;
  temp_v56 = 0x802f0233;
  temp_v58 = 0x3f000000;
  temp_v59 = 0x802f0233;
  if (puVar13 != (unsigned int *)0x0) {
    *puVar13 = temp_v11;
    puVar13[1] = 0x802f0233;
    puVar13[2] = temp_v54;
    puVar13[3] = uStack_bc;
    puVar13[4] = temp_v55;
    puVar13[5] = 0x802f0233;
    puVar13[6] = temp_v57;
    puVar13[7] = uStack_ac;
    puVar14 = puVar13 + 0xc;
    puVar13[8] = 0x3f000000;
    puVar13[9] = 0x802f0233;
    puVar13[10] = temp_v2;
    puVar13[0xb] = uStack_9c;
  }
  else {
    temp_v52 = temp_v11;
    temp_v60 = temp_v2;
    FUN_001b4128(&temp_v52,0x30,1);
    puVar14 = (unsigned int *)0x0;
  }
  return puVar14;
}

} /* extern "C" */
