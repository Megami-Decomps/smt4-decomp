/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003699e4` (_code @ 0x3699e4, 0xa40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 68 slot(s), 272 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
    unsigned int sp16C; /* 0x16c: local_16c */
    unsigned int sp170; /* 0x170: local_170 */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned int sp178; /* 0x178: local_178 */
    unsigned int sp17C; /* 0x17c: local_17c */
    unsigned int sp180; /* 0x180: local_180 */
    unsigned int sp184; /* 0x184: local_184 */
    unsigned int sp188; /* 0x188: local_188 */
    unsigned int sp18C; /* 0x18c: local_18c */
    unsigned int sp190; /* 0x190: local_190 */
    unsigned int sp194; /* 0x194: local_194 */
    unsigned int sp198; /* 0x198: local_198 */
    unsigned int sp19C; /* 0x19c: local_19c */
    unsigned int sp1A0; /* 0x1a0: local_1a0 */
    unsigned int sp1A4; /* 0x1a4: local_1a4 */
    unsigned int sp1A8; /* 0x1a8: local_1a8 */
    unsigned int sp1AC; /* 0x1ac: local_1ac */
    unsigned int sp1B0; /* 0x1b0: local_1b0 */
    unsigned int sp1B4; /* 0x1b4: local_1b4 */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
    unsigned int sp1C4; /* 0x1c4: local_1c4 */
    unsigned int sp1C8; /* 0x1c8: local_1c8 */
    unsigned int sp1CC; /* 0x1cc: local_1cc */
    unsigned int sp1E4; /* 0x1e4: local_1e4 */
    unsigned int sp1F4; /* 0x1f4: local_1f4 */
    unsigned int sp1F8; /* 0x1f8: local_1f8 */
    unsigned int sp1FC; /* 0x1fc: local_1fc */
    unsigned int sp200; /* 0x200: local_200 */
    unsigned int sp204; /* 0x204: local_204 */
    unsigned int sp208; /* 0x208: local_208 */
    unsigned int sp20C; /* 0x20c: local_20c */
    unsigned int sp210; /* 0x210: local_210 */
    unsigned int sp214; /* 0x214: local_214 */
    unsigned int sp218; /* 0x218: local_218 */
    unsigned int sp21C; /* 0x21c: local_21c */
    unsigned int sp220; /* 0x220: local_220 */
    unsigned int sp224; /* 0x224: local_224 */
} param_1_stack;

extern int DAT_00580238; /* 0x580238 */
extern unsigned int DAT_005c4c28; /* 0x5c4c28 */
extern float DAT_0064c030; /* 0x64c030 */
extern float DAT_0064c034; /* 0x64c034 */
extern float DAT_0064c038; /* 0x64c038 */
extern float DAT_0064c03c; /* 0x64c03c */
extern float DAT_0064c040; /* 0x64c040 */
extern float DAT_0064c044; /* 0x64c044 */
extern float DAT_0064c048; /* 0x64c048 */
extern float DAT_0064c04c; /* 0x64c04c */
extern float DAT_0064c050; /* 0x64c050 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
extern int FUN_00152f54(void);
/* Supplied declaration required: FUN_0019a0fc. */
/* Supplied declaration required: FUN_001a6fbc. */
extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: FUN_00399290. */
/* Supplied declaration required: FUN_003b5c54. */
/* Supplied declaration required: nn_math_ARMv6_MTX33CopyAsm. */


void FUN_003699e4(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
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
  unsigned long long temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned long long temp_v25;
  float temp_v26;
  float temp_v27;
  unsigned long long temp_v28;
  float temp_v29;
  float temp_v30;
  unsigned long long temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  unsigned long long temp_v38;
  float temp_v39;
  unsigned long long temp_v40;
  float temp_v41 [15];
  float temp_v42;
  float temp_v43;
  float temp_v44;
  float temp_v45;
  float temp_v46;
  float temp_v47;
  float temp_v48;
  float temp_v49;
  float temp_v50;
  float temp_v51;
  float temp_v52;
  float temp_v53;
  float temp_v54;
  float temp_v55;
  float temp_v56;
  float temp_v57;
  float temp_v58;
  float temp_v59;
  float temp_v60;
  float temp_v61;
  float temp_v62;
  float temp_v63;
  float temp_v64;
  int temp_v65;
  float temp_v66;
  unsigned int temp_v67;
  float temp_v68;
  unsigned int uStack_15c;
  unsigned int temp_v69;
  unsigned int uStack_154;
  float temp_v70;
  float temp_v71;
  float temp_v72;
  float temp_v73;
  float temp_v74;
  float temp_v75;
  float temp_v76;
  float temp_v77;
  float temp_v78;
  float temp_v79 [16];
  float *temp_v80;
  float temp_v81;
  unsigned int temp_v82;
  float temp_v83;
  float temp_v84;
  float temp_v85;
  
  temp_v0 = DAT_00580238;
  if (DAT_00580238 != 0) {
    param_1 = *(int *)(DAT_00580238 + 0xae4);
  }
  if (DAT_00580238 != 0 && param_1 != 0) {
    temp_v1 = FUN_00152f54();
    temp_v19 = 0.0f;
    temp_v79[0] = 1.0f;
    temp_v79[1] = 1.0f;
    temp_v79[2] = 0.0f;
    temp_v79[3] = 1.0f;
    temp_v79[4] = -1.0f;
    temp_v79[5] = 0.0f;
    temp_v79[8] = 0.0f;
    temp_v79[6] = -1.0f;
    temp_v79[7] = 1.0f;
    temp_v79[9] = -1.0f;
    temp_v79[10] = -1.0f;
    temp_v79[0xb] = 0.0f;
    temp_v41[0] = 1.0f;
    temp_v41[1] = 1.0f;
    temp_v41[2] = -1.0f;
    temp_v41[3] = 1.0f;
    temp_v41[4] = -1.0f;
    temp_v41[5] = -1.0f;
    temp_v41[6] = -1.0f;
    temp_v41[7] = 1.0f;
    temp_v41[8] = -1.0f;
    temp_v41[9] = -1.0f;
    temp_v41[10] = -1.0f;
    temp_v41[0xb] = -1.0f;
    FUN_0019a0fc(&temp_v46,temp_v1 + 0xa8,temp_v1 + 0x68);
    temp_v78 = temp_v50 * temp_v57;
    temp_v74 = temp_v51 * temp_v57;
    temp_v77 = temp_v52 * temp_v55;
    temp_v72 = temp_v50 * temp_v56;
    temp_v75 = temp_v53 * temp_v56;
    temp_v76 = temp_v53 * temp_v54;
    temp_v70 = temp_v51 * temp_v54;
    temp_v16 = (((((temp_v51 * temp_v56 * temp_v61 + temp_v52 * temp_v57 * temp_v59 +
                 temp_v53 * temp_v55 * temp_v60) * temp_v46 +
                 temp_v47 *
                 (temp_v78 * temp_v60 + temp_v52 * temp_v54 * temp_v61 + temp_v75 * temp_v58)
                 + temp_v48 *
                   (temp_v50 * temp_v55 * temp_v61 + temp_v74 * temp_v58 +
                   temp_v76 * temp_v59) +
                temp_v49 * (temp_v72 * temp_v59 + temp_v70 * temp_v60 + temp_v77 * temp_v58))
               - temp_v46 * (temp_v74 * temp_v60 + temp_v77 * temp_v61 + temp_v75 * temp_v59)
               ) - temp_v47 *
                   (temp_v72 * temp_v61 + temp_v52 * temp_v57 * temp_v58 +
                   temp_v76 * temp_v60)) -
             temp_v48 *
             (temp_v78 * temp_v59 + temp_v70 * temp_v61 + temp_v53 * temp_v55 * temp_v58)) -
             temp_v49 *
             (temp_v50 * temp_v55 * temp_v60 + temp_v51 * temp_v56 * temp_v58 +
             temp_v52 * temp_v54 * temp_v59);
    temp_v66 = temp_v76;
    if (temp_v16 != temp_v19) {
      temp_v32 = temp_v53 * temp_v59 - temp_v51 * temp_v61;
      temp_v35 = temp_v54 * temp_v61 - temp_v57 * temp_v58;
      temp_v22 = temp_v52 * temp_v61 - temp_v53 * temp_v60;
      temp_v26 = temp_v50 * temp_v61 - temp_v53 * temp_v58;
      temp_v39 = temp_v56 * temp_v59 - temp_v55 * temp_v60;
      temp_v66 = temp_v56 * temp_v61 - temp_v57 * temp_v60;
      temp_v20 = temp_v56 * temp_v58 - temp_v54 * temp_v60;
      temp_v16 = 1.0f / temp_v16;
      temp_v29 = temp_v50 * temp_v59 - temp_v51 * temp_v58;
      temp_v7 = temp_v48 * temp_v26;
      temp_v37 = temp_v50 * temp_v39;
      temp_v17 = temp_v55 * temp_v58 - temp_v54 * temp_v59;
      temp_v24 = temp_v51 * temp_v60 - temp_v52 * temp_v59;
      temp_v68 = temp_v55 * temp_v61 - temp_v57 * temp_v59;
      temp_v10 = temp_v48 * temp_v17;
      temp_v34 = temp_v50 * temp_v68;
      temp_v11 = temp_v52 * temp_v68;
      temp_v30 = temp_v48 * temp_v68;
      temp_v19 = temp_v49 * temp_v39;
      temp_v12 = temp_v53 * temp_v39;
      temp_v27 = temp_v52 * temp_v58 - temp_v50 * temp_v60;
      temp_v13 = temp_v48 * temp_v29;
      temp_v23 = temp_v77 - temp_v51 * temp_v56;
      temp_v4 = temp_v52 * temp_v17;
      temp_v18 = temp_v75 - temp_v52 * temp_v57;
      temp_v15 = temp_v76 - temp_v50 * temp_v57;
      temp_v8 = temp_v70 - temp_v50 * temp_v55;
      temp_v9 = temp_v74 - temp_v53 * temp_v55;
      temp_v45 = ((temp_v46 * temp_v66 - temp_v48 * temp_v35) - temp_v49 * temp_v20) * temp_v16;
      temp_v14 = temp_v72 - temp_v52 * temp_v54;
      temp_v33 = temp_v48 * temp_v15;
      temp_v55 = ((temp_v47 * temp_v35 + temp_v49 * temp_v17) - temp_v46 * temp_v68) * temp_v16;
      temp_v36 = temp_v49 * temp_v8;
      temp_v8 = temp_v48 * temp_v8;
      temp_v5 = temp_v48 * temp_v9;
      temp_v48 = (temp_v47 * temp_v22 + temp_v48 * temp_v32 + temp_v49 * temp_v24) * temp_v16;
      temp_v50 = ((temp_v52 * temp_v35 + temp_v53 * temp_v20) - temp_v50 * temp_v66) * temp_v16;
      temp_v6 = temp_v49 * temp_v14;
      temp_v52 = ((temp_v7 + temp_v49 * temp_v27) - temp_v46 * temp_v22) * temp_v16;
      temp_v54 = ((temp_v34 - temp_v51 * temp_v35) - temp_v53 * temp_v17) * temp_v16;
      temp_v56 = ((temp_v49 * temp_v29 - temp_v46 * temp_v32) - temp_v47 * temp_v26) * temp_v16;
      temp_v58 = ((temp_v37 - temp_v51 * temp_v20) + temp_v4) * temp_v16;
      temp_v59 = ((temp_v47 * temp_v20 - temp_v10) - temp_v46 * temp_v39) * temp_v16;
      temp_v49 = (temp_v47 * temp_v18 + temp_v5 + temp_v49 * temp_v23) * temp_v16;
      temp_v60 = ((-temp_v13 - temp_v46 * temp_v24) - temp_v47 * temp_v27) * temp_v16;
      temp_v53 = ((temp_v33 + temp_v6) - temp_v46 * temp_v18) * temp_v16;
      temp_v57 = ((temp_v36 - temp_v46 * temp_v9) - temp_v47 * temp_v15) * temp_v16;
      temp_v61 = ((-temp_v8 - temp_v46 * temp_v23) - temp_v47 * temp_v14) * temp_v16;
      temp_v46 = ((temp_v51 * temp_v66 - temp_v11) - temp_v12) * temp_v16;
      temp_v47 = ((temp_v30 + temp_v19) - temp_v47 * temp_v66) * temp_v16;
      temp_v51 = temp_v45;
    }
    temp_v16 = 1.0f;
    temp_v1 = 0;
    do {
      temp_v19 = temp_v79[temp_v1 * 3];
      temp_v5 = temp_v79[temp_v1 * 3 + 1];
      temp_v6 = temp_v79[temp_v1 * 3 + 2];
      temp_v2 = temp_v1 + 1;
      temp_v4 = 1.0f / (temp_v59 * temp_v5 + temp_v60 * temp_v6 + temp_v61 + temp_v58 * temp_v19);
      temp_v79[temp_v1 * 3 + 2] =
           (temp_v55 * temp_v5 + temp_v56 * temp_v6 + temp_v57 + temp_v54 * temp_v19) * temp_v4;
      temp_v79[temp_v1 * 3] =
           (temp_v47 * temp_v5 + temp_v48 * temp_v6 + temp_v49 + temp_v46 * temp_v19) * temp_v4;
      temp_v79[temp_v1 * 3 + 1] =
           (temp_v51 * temp_v5 + temp_v52 * temp_v6 + temp_v53 + temp_v50 * temp_v19) * temp_v4;
      temp_v5 = temp_v41[temp_v1 * 3 + 1];
      temp_v6 = temp_v41[temp_v1 * 3];
      temp_v19 = temp_v41[temp_v1 * 3 + 2];
      temp_v4 = 1.0f / (temp_v59 * temp_v5 + temp_v60 * temp_v19 + temp_v61 + temp_v58 * temp_v6);
      temp_v41[temp_v1 * 3] =
           (temp_v47 * temp_v5 + temp_v48 * temp_v19 + temp_v49 + temp_v46 * temp_v6) * temp_v4;
      temp_v41[temp_v1 * 3 + 1] =
           (temp_v51 * temp_v5 + temp_v52 * temp_v19 + temp_v53 + temp_v50 * temp_v6) * temp_v4;
      temp_v41[temp_v1 * 3 + 2] =
           (temp_v55 * temp_v5 + temp_v56 * temp_v19 + temp_v57 + temp_v54 * temp_v6) * temp_v4;
      temp_v1 = temp_v2;
    } while (temp_v2 < 4);
    temp_v19 = temp_v79[0] - temp_v41[0];
    temp_v4 = temp_v79[1] - temp_v41[1];
    temp_v5 = temp_v79[2] - temp_v41[2];
    temp_v12 = temp_v4 * (temp_v41[5] - temp_v41[2]) - temp_v5 * (temp_v41[4] - temp_v41[1]);
    temp_v10 = temp_v5 * (temp_v41[3] - temp_v41[0]) - temp_v19 * (temp_v41[5] - temp_v41[2]);
    temp_v6 = temp_v19 * (temp_v41[4] - temp_v41[1]) - temp_v4 * (temp_v41[3] - temp_v41[0]);
    temp_v11 = 1.0f / romwright_sqrt_4(temp_v12 * temp_v12 + temp_v10 * temp_v10 + temp_v6 * temp_v6);
    temp_v21 = CONCAT44(temp_v10 * temp_v11,temp_v6 * temp_v11);
    temp_v8 = (temp_v41[7] - temp_v41[1]) * temp_v5 - (temp_v41[8] - temp_v41[2]) * temp_v4;
    temp_v13 = (temp_v41[6] - temp_v41[0]) * temp_v4 - (temp_v41[7] - temp_v41[1]) * temp_v19;
    temp_v19 = (temp_v41[8] - temp_v41[2]) * temp_v19 - (temp_v41[6] - temp_v41[0]) * temp_v5;
    temp_v25 = CONCAT44(temp_v12 * temp_v11 * temp_v41[0] + temp_v10 * temp_v11 * temp_v41[1] +
                      temp_v6 * temp_v11 * temp_v41[2],temp_v12 * temp_v11);
    temp_v4 = 1.0f / romwright_sqrt_4(temp_v8 * temp_v8 + temp_v19 * temp_v19 + temp_v13 * temp_v13);
    temp_v28 = CONCAT44(temp_v19 * temp_v4,temp_v13 * temp_v4);
    temp_v11 = temp_v8 * temp_v4 * temp_v41[0] + temp_v19 * temp_v4 * temp_v41[1] +
             temp_v13 * temp_v4 * temp_v41[2];
    temp_v10 = (temp_v79[10] - temp_v79[4]) * (temp_v41[5] - temp_v79[5]) -
             (temp_v79[0xb] - temp_v79[5]) * (temp_v41[4] - temp_v79[4]);
    temp_v6 = (temp_v79[0xb] - temp_v79[5]) * (temp_v41[3] - temp_v79[3]) -
            (temp_v79[9] - temp_v79[3]) * (temp_v41[5] - temp_v79[5]);
    temp_v5 = (temp_v79[9] - temp_v79[3]) * (temp_v41[4] - temp_v79[4]) -
            (temp_v79[10] - temp_v79[4]) * (temp_v41[3] - temp_v79[3]);
    temp_v19 = 1.0f / romwright_sqrt_4(temp_v10 * temp_v10 + temp_v6 * temp_v6 + temp_v5 * temp_v5);
    temp_v12 = 0.0f;
    temp_v40 = CONCAT44(temp_v10 * temp_v19,temp_v6 * temp_v19);
    temp_v38 = CONCAT44(temp_v5 * temp_v19,0x3fb504f3);
    temp_v31 = CONCAT44(temp_v8 * temp_v4,0x3f000000);
    temp_v83 = temp_v10 * temp_v19 * temp_v79[3] + temp_v6 * temp_v19 * temp_v79[4] +
               temp_v5 * temp_v19 * temp_v79[5];
    temp_v42 = (temp_v41[6] - temp_v79[6]) * (temp_v79[10] - temp_v79[7]) -
                (temp_v41[7] - temp_v79[7]) * (temp_v79[9] - temp_v79[6]);
    temp_v43 = (temp_v41[7] - temp_v79[7]) * (temp_v79[0xb] - temp_v79[8]) -
                (temp_v41[8] - temp_v79[8]) * (temp_v79[10] - temp_v79[7]);
    temp_v44 = (temp_v41[8] - temp_v79[8]) * (temp_v79[9] - temp_v79[6]) -
                (temp_v41[6] - temp_v79[6]) * (temp_v79[0xb] - temp_v79[8]);
    temp_v19 = 1.0f / romwright_sqrt_4(temp_v43 * temp_v43 + temp_v44 * temp_v44 + temp_v42 * temp_v42);
    temp_v43 = temp_v43 * temp_v19;
    temp_v44 = temp_v44 * temp_v19;
    temp_v42 = temp_v42 * temp_v19;
    temp_v84 = temp_v43 * temp_v79[6] + temp_v44 * temp_v79[7] + temp_v42 * temp_v79[8];
    temp_v71 = temp_v70;
    for (temp_v3 = 0; temp_v3 < *(unsigned int *)(*(int *)(*(int *)(temp_v0 + 0xae4) + 8) + 0x10);
        temp_v3 = temp_v3 + 1) {
      temp_v19 = temp_v12;
      temp_v62 = temp_v12;
      temp_v63 = temp_v12;
      temp_v64 = temp_v12;
      if (((DAT_005c4c28 & 1) == 0) && (temp_v1 = FUN_002eba64(&DAT_005c4c28), temp_v1 != 0)) {
        DAT_0064c030 = temp_v16;
        DAT_0064c034 = temp_v19;
        DAT_0064c038 = temp_v19;
        DAT_0064c03c = temp_v19;
        DAT_0064c040 = temp_v16;
        DAT_0064c044 = temp_v19;
        DAT_0064c048 = temp_v19;
        DAT_0064c04c = temp_v19;
        DAT_0064c050 = temp_v16;
      }
      nn_math_ARMv6_MTX33CopyAsm(&temp_v65,&DAT_0064c030);
      temp_v80 = &temp_v62;
      temp_v1 = DAT_00580238 + temp_v3 * 0x88;
      temp_v65 = *(unsigned int *)(temp_v1 + 0xb00);
      temp_v66 = *(float *)(temp_v1 + 0xb04);
      temp_v69 = *(unsigned int *)(temp_v1 + 0xb14);
      temp_v67 = *(unsigned int *)(temp_v1 + 0xb08);
      temp_v68 = *(float *)(temp_v1 + 0xb0c);
      uStack_15c = *(unsigned int *)(temp_v1 + 0xb10);
      temp_v71 = *(float *)(temp_v1 + 0xb20);
      uStack_154 = *(unsigned int *)(temp_v1 + 0xb18);
      temp_v70 = *(float *)(temp_v1 + 0xb1c);
      temp_v62 = temp_v19 + *(float *)(temp_v1 + 0xaf4) * temp_v16;
      temp_v63 = temp_v19 + *(float *)(temp_v1 + 0xaf8) * temp_v16;
      temp_v64 = temp_v19 + *(float *)(temp_v1 + 0xafc) * temp_v16;
      temp_v74 = (float)temp_v31;
      temp_v72 = *(float *)(temp_v1 + 0xb24) * temp_v16 * temp_v74;
      temp_v73 = *(float *)(temp_v1 + 0xb28) * temp_v16 * temp_v74;
      temp_v74 = *(float *)(temp_v1 + 0xb2c) * temp_v16 * temp_v74;
      temp_v81 = temp_v66;
      temp_v82 = temp_v69;
      temp_v85 = temp_v71;
      FUN_001a6fbc(temp_v80);
      temp_v19 = temp_v73;
      if (temp_v73 < temp_v72) {
        temp_v19 = temp_v72;
      }
      temp_v4 = temp_v74;
      if (temp_v74 < temp_v19) {
        temp_v4 = temp_v19;
      }
      temp_v4 = temp_v4 * (float)temp_v38;
      if ((((temp_v4 >= ((float)temp_v25 * temp_v62 + (float)((unsigned long long)temp_v21 >> 0x20) * temp_v63 +
                      (float)temp_v21 * temp_v64) - (float)((unsigned long long)temp_v25 >> 0x20)) &&
           (temp_v4 >= ((float)((unsigned long long)temp_v31 >> 0x20) * temp_v62 +
                      (float)((unsigned long long)temp_v28 >> 0x20) * temp_v63 + (float)temp_v28 * temp_v64) -
                     temp_v11)) &&
          (temp_v4 >= ((float)((unsigned long long)temp_v40 >> 0x20) * temp_v62 + (float)temp_v40 * temp_v63 +
                    (float)((unsigned long long)temp_v38 >> 0x20) * temp_v64) - temp_v83)) &&
         (temp_v4 >= (temp_v43 * temp_v62 + temp_v44 * temp_v63 + temp_v42 * temp_v64) -
                   temp_v84)) {
        FUN_00399290(temp_v3,1);
      }
      else {
        FUN_00399290(temp_v3,0);
      }
    }
    if ((*(int *)(DAT_00580238 + 0x40) != 100) && (*(int *)(temp_v0 + 0x4ef8) != 0)) {
      for (temp_v3 = 0; temp_v3 < *(unsigned int *)(*(int *)(*(int *)(temp_v0 + 0x4ef8) + 8) + 0x10);
          temp_v3 = temp_v3 + 1) {
        if (*(char *)(temp_v0 + temp_v3 * 0x88 + 0x4f84) != '\0') {
          FUN_003b5c54(temp_v3,1);
        }
      }
    }
  }
  return;
}
