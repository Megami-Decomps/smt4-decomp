/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021c598` (_code @ 0x21c598, 0x152c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 18 slot(s), 72 byte(s) */
typedef struct {
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
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned int sp178; /* 0x178: local_178 */
    unsigned int sp17C; /* 0x17c: local_17c */
} param_1_stack;

extern unsigned int DAT_00407fc0; /* 0x407fc0 */
extern unsigned int DAT_00407fc4; /* 0x407fc4 */
extern unsigned int DAT_00407fc8; /* 0x407fc8 */
extern unsigned int DAT_00407fcc; /* 0x407fcc */
extern int DAT_00447a28; /* 0x447a28 */
extern unsigned char DAT_004a1264; /* 0x4a1264 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_0024f5ec. */
/* Supplied declaration required: FUN_002ad6d8. */


/* WARNING: Removing unreachable block (ram,0x0021c72c) */
/* WARNING: Removing unreachable block (ram,0x0021d388) */
/* WARNING: Removing unreachable block (ram,0x0021d398) */
/* WARNING: Removing unreachable block (ram,0x0021c73c) */
/* WARNING: Removing unreachable block (ram,0x0021d2c8) */
/* WARNING: Removing unreachable block (ram,0x0021c668) */

int FUN_0021c598(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  float *pfVar3;
  int *piVar4;
  int temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  unsigned long long *puVar8;
  float *pfVar9;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  unsigned int temp_v18;
  unsigned long long temp_v19;
  unsigned long long temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  unsigned int temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  unsigned char temp_v38 [12];
  float temp_v39;
  float temp_v40;
  float temp_v41;
  unsigned int temp_v42;
  float temp_v43;
  float temp_v44;
  float temp_v45;
  unsigned int temp_v46;
  float temp_v47;
  float temp_v48;
  float temp_v49;
  unsigned int temp_v50;
  float afStack_110 [3];
  unsigned char temp_v51 [12];
  unsigned char temp_v52 [12];
  unsigned char temp_v53 [12];
  unsigned char temp_v54 [12];
  unsigned char temp_v55 [12];
  unsigned char temp_v56 [12];
  unsigned char temp_v57 [152];
  
  temp_v0 = DAT_00447a28;
  temp_v26 = -0.5f;
  temp_v29 = 0x3f800000;
  *(int *)(DAT_00447a28 * 4 + 0x4a0fe4) = param_1;
  temp_v28 = 0.5f;
  temp_v9 = 0.0f;
  piVar4 = *(int **)(*(int *)(param_1 + 0x14) + 0x1c);
  if (*piVar4 != 1) {
    if (*piVar4 == 2) {
      pfVar9 = *(float **)(param_1 + 0xc);
      temp_v24 = (float)piVar4[3];
      temp_v25 = pfVar9[4];
      temp_v22 = *pfVar9;
      temp_v20 = *(unsigned long long *)(pfVar9 + 1);
      temp_v19 = *(unsigned long long *)(piVar4 + 1);
      temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v25 * 0.7111111f) << 0x1d);
      for (temp_v8 = romwright_fabs_4(temp_v25 * 0.7111111f); (int)temp_v8 >= 0x47800000; temp_v8 = temp_v8 - 65536.0f) {
      }
      temp_v11 = VectorFloatToUnsigned(0,3);
      temp_v21 = (float)((unsigned long long)temp_v19 >> 0x20) * -0.5f;
      temp_v12 = VectorFloatToUnsigned(temp_v8,3);
      temp_v13 = VectorFloatToUnsigned(0,3);
      temp_v3 = temp_v12;
      temp_v15 = (float)VectorUnsignedToFloat(temp_v12 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
      temp_v12 = temp_v11 & 0xff;
      temp_v14 = (float)VectorUnsignedToFloat(temp_v11 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
      temp_v11 = temp_v13 & 0xff;
      temp_v16 = (float)VectorUnsignedToFloat(temp_v13 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
      temp_v49 = (float)((unsigned long long)*(unsigned long long *)(&DAT_00407fc0 + temp_v3 * 4) >> 0x20) +
                  (temp_v8 - temp_v15) * (float)(&DAT_00407fcc)[temp_v3 * 4];
      temp_v8 = (float)*(unsigned long long *)(&DAT_00407fc0 + temp_v3 * 4) +
               (temp_v8 - temp_v15) * (float)(&DAT_00407fc8)[temp_v3 * 4];
      temp_v15 = (float)(&DAT_00407fc0)[temp_v12 * 4] +
               (0.0f - temp_v14) * (float)(&DAT_00407fc8)[temp_v12 * 4];
      temp_v14 = (float)(&DAT_00407fc4)[temp_v12 * 4] +
               (0.0f - temp_v14) * (float)(&DAT_00407fcc)[temp_v12 * 4];
      temp_v17 = (float)(&DAT_00407fc0)[temp_v11 * 4] +
               (0.0f - temp_v16) * (float)(&DAT_00407fc8)[temp_v11 * 4];
      temp_v16 = (float)(&DAT_00407fc4)[temp_v11 * 4] +
               (0.0f - temp_v16) * (float)(&DAT_00407fcc)[temp_v11 * 4];
      if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
        temp_v8 = -temp_v8;
      }
      temp_v39 = temp_v16 * temp_v49;
      temp_v47 = -temp_v8;
      temp_v43 = temp_v17 * temp_v49;
      temp_v48 = temp_v15 * temp_v49;
      temp_v49 = temp_v14 * temp_v49;
      temp_v40 = temp_v15 * temp_v16 * temp_v8 - temp_v14 * temp_v17;
      temp_v45 = temp_v14 * temp_v17 * temp_v8 - temp_v15 * temp_v16;
      temp_v41 = temp_v15 * temp_v17 + temp_v14 * temp_v16 * temp_v8;
      temp_v44 = temp_v14 * temp_v16 + temp_v15 * temp_v17 * temp_v8;
      temp_v42 = 0;
      temp_v46 = 0;
      temp_v8 = temp_v24 * 0.5f;
      temp_v50 = 0;
      temp_v33 = (float)temp_v19;
      temp_v32 = temp_v21;
      temp_v34 = temp_v8;
      FUN_002ad6d8(afStack_110,&temp_v39,&temp_v32);
      temp_v28 = (float)((unsigned long long)temp_v19 >> 0x20) * temp_v28;
      temp_v33 = (float)temp_v19;
      temp_v32 = temp_v28;
      temp_v34 = temp_v8;
      FUN_002ad6d8(temp_v51,&temp_v39,&temp_v32);
      temp_v18 = (unsigned int)temp_v19;
      temp_v24 = temp_v24 * temp_v26;
      temp_v32 = temp_v21;
      temp_v33 = (float)temp_v18;
      temp_v34 = temp_v24;
      FUN_002ad6d8(temp_v52,&temp_v39,&temp_v32);
      temp_v32 = temp_v28;
      temp_v33 = (float)temp_v18;
      temp_v34 = temp_v24;
      FUN_002ad6d8(temp_v53,&temp_v39,&temp_v32);
      temp_v32 = temp_v21;
      temp_v33 = temp_v9;
      temp_v34 = temp_v8;
      FUN_002ad6d8(temp_v54,&temp_v39,&temp_v32);
      temp_v32 = temp_v28;
      temp_v33 = temp_v9;
      temp_v34 = temp_v8;
      FUN_002ad6d8(temp_v55,&temp_v39,&temp_v32);
      temp_v32 = temp_v21;
      temp_v33 = temp_v9;
      temp_v34 = temp_v24;
      FUN_002ad6d8(temp_v56,&temp_v39,&temp_v32);
      temp_v32 = temp_v28;
      temp_v33 = temp_v9;
      temp_v34 = temp_v24;
      FUN_002ad6d8(temp_v57,&temp_v39,&temp_v32);
      temp_v4 = 0;
      temp_v0 = temp_v0 * 0x178;
      pfVar9 = (float *)(&DAT_004a1264 + temp_v0);
      do {
        temp_v2 = temp_v4 * 0xc;
        pfVar3 = pfVar9 + temp_v4 * 3;
        temp_v19 = *(unsigned long long *)(afStack_110 + temp_v4 * 3);
        temp_v4 = temp_v4 + 1;
        temp_v28 = *(float *)(temp_v51 + (temp_v2 - 4));
        *pfVar3 = (float)temp_v19 + temp_v22;
        pfVar3[1] = (float)((unsigned long long)temp_v19 >> 0x20) + (float)temp_v20;
        pfVar3[2] = temp_v28 + (float)((unsigned long long)temp_v20 >> 0x20);
      } while (temp_v4 < 8);
      *(float *)(temp_v0 + 0x4a12dc) = temp_v25;
      temp_v32 = temp_v9;
      temp_v33 = temp_v9;
      temp_v34 = (float)temp_v29;
      FUN_002ad6d8(temp_v0 + 0x4a12d0,&temp_v39,&temp_v32);
      temp_v19 = *(unsigned long long *)pfVar9;
      temp_v9 = *(float *)(temp_v0 + 0x4a126c);
      FUN_0024f5ec(&temp_v35,&temp_v36,&temp_v37,temp_v38);
      *(float *)(temp_v0 + 0x4a12e0) = -temp_v35;
      *(float *)(temp_v0 + 0x4a12e4) = -temp_v36;
      *(float *)(temp_v0 + 0x4a12e8) = -temp_v37;
      *(float *)(temp_v0 + 0x4a1328) =
           (float)*(unsigned long long *)(temp_v0 + 0x4a12e0) * (float)temp_v19 +
           (float)((unsigned long long)*(unsigned long long *)(temp_v0 + 0x4a12e0) >> 0x20) *
           (float)((unsigned long long)temp_v19 >> 0x20) + *(float *)(temp_v0 + 0x4a12e8) * temp_v9;
      temp_v8 = 0.25f;
      *(float *)(temp_v0 + 0x4a1340) =
           (*pfVar9 + *(float *)(temp_v0 + 0x4a1270) + *(float *)(temp_v0 + 0x4a127c) +
           *(float *)(temp_v0 + 0x4a1288)) * 0.25f;
      *(float *)(temp_v0 + 0x4a1344) =
           (*(float *)(temp_v0 + 0x4a1268) + *(float *)(temp_v0 + 0x4a1274) +
            *(float *)(temp_v0 + 0x4a1280) + *(float *)(temp_v0 + 0x4a128c)) * 0.25f;
      *(float *)(temp_v0 + 0x4a1348) =
           (*(float *)(temp_v0 + 0x4a126c) + *(float *)(temp_v0 + 0x4a1278) +
            *(float *)(temp_v0 + 0x4a1284) + *(float *)(temp_v0 + 0x4a1290)) * 0.25f;
      temp_v19 = *(unsigned long long *)(temp_v0 + 0x4a1270);
      temp_v9 = *(float *)(temp_v0 + 0x4a1278);
      FUN_0024f5ec(&temp_v35,&temp_v36,&temp_v37,temp_v38);
      *(float *)(temp_v0 + 0x4a12ec) = -temp_v35;
      *(float *)(temp_v0 + 0x4a12f0) = -temp_v36;
      *(float *)(temp_v0 + 0x4a12f4) = -temp_v37;
      *(float *)(temp_v0 + 0x4a132c) =
           (float)*(unsigned long long *)(temp_v0 + 0x4a12ec) * (float)temp_v19 +
           (float)((unsigned long long)*(unsigned long long *)(temp_v0 + 0x4a12ec) >> 0x20) *
           (float)((unsigned long long)temp_v19 >> 0x20) + *(float *)(temp_v0 + 0x4a12f4) * temp_v9;
      temp_v19 = *(unsigned long long *)pfVar9;
      *(float *)(temp_v0 + 0x4a134c) =
           ((float)temp_v19 + *(float *)(temp_v0 + 0x4a1270) + *(float *)(temp_v0 + 0x4a1294) +
           *(float *)(temp_v0 + 0x4a12a0)) * temp_v8;
      *(float *)(temp_v0 + 0x4a1350) =
           ((float)((unsigned long long)temp_v19 >> 0x20) + *(float *)(temp_v0 + 0x4a1274) +
            *(float *)(temp_v0 + 0x4a1298) + *(float *)(temp_v0 + 0x4a12a4)) * temp_v8;
      *(float *)(temp_v0 + 0x4a1354) =
           (*(float *)(temp_v0 + 0x4a126c) + *(float *)(temp_v0 + 0x4a1278) +
            *(float *)(temp_v0 + 0x4a129c) + *(float *)(temp_v0 + 0x4a12a8)) * temp_v8;
      temp_v28 = *pfVar9;
      temp_v9 = *(float *)(temp_v0 + 0x4a1268);
      temp_v26 = *(float *)(temp_v0 + 0x4a126c);
      FUN_0024f5ec(&temp_v35,&temp_v36,&temp_v37,temp_v38);
      *(float *)(temp_v0 + 0x4a12f8) = -temp_v35;
      *(float *)(temp_v0 + 0x4a12fc) = -temp_v36;
      *(float *)(temp_v0 + 0x4a1300) = -temp_v37;
      *(float *)(temp_v0 + 0x4a1330) =
           (float)*(unsigned long long *)(temp_v0 + 0x4a12f8) * temp_v28 +
           (float)((unsigned long long)*(unsigned long long *)(temp_v0 + 0x4a12f8) >> 0x20) * temp_v9 +
           *(float *)(temp_v0 + 0x4a1300) * temp_v26;
      temp_v19 = *(unsigned long long *)pfVar9;
      *(float *)(temp_v0 + 0x4a1358) =
           ((float)temp_v19 + *(float *)(temp_v0 + 0x4a127c) + *(float *)(temp_v0 + 0x4a1294) +
           *(float *)(temp_v0 + 0x4a12ac)) * temp_v8;
      *(float *)(temp_v0 + 0x4a135c) =
           ((float)((unsigned long long)temp_v19 >> 0x20) + *(float *)(temp_v0 + 0x4a1280) +
            *(float *)(temp_v0 + 0x4a1298) + *(float *)(temp_v0 + 0x4a12b0)) * temp_v8;
      *(float *)(temp_v0 + 0x4a1360) =
           (*(float *)(temp_v0 + 0x4a126c) + *(float *)(temp_v0 + 0x4a1284) +
            *(float *)(temp_v0 + 0x4a129c) + *(float *)(temp_v0 + 0x4a12b4)) * temp_v8;
      temp_v19 = *(unsigned long long *)(temp_v0 + 0x4a1288);
      temp_v9 = *(float *)(temp_v0 + 0x4a1290);
      FUN_0024f5ec(&temp_v35,&temp_v36,&temp_v37,temp_v38);
      *(float *)(temp_v0 + 0x4a1304) = -temp_v35;
      *(float *)(temp_v0 + 0x4a1308) = -temp_v36;
      *(float *)(temp_v0 + 0x4a130c) = -temp_v37;
      *(float *)(temp_v0 + 0x4a1334) =
           (float)*(unsigned long long *)(temp_v0 + 0x4a1304) * (float)temp_v19 +
           (float)((unsigned long long)*(unsigned long long *)(temp_v0 + 0x4a1304) >> 0x20) *
           (float)((unsigned long long)temp_v19 >> 0x20) + *(float *)(temp_v0 + 0x4a130c) * temp_v9;
      *(float *)(temp_v0 + 0x4a1364) =
           (*(float *)(temp_v0 + 0x4a1270) + *(float *)(temp_v0 + 0x4a1288) +
            *(float *)(temp_v0 + 0x4a12a0) + *(float *)(temp_v0 + 0x4a12b8)) * temp_v8;
      *(float *)(temp_v0 + 0x4a1368) =
           (*(float *)(temp_v0 + 0x4a1274) + *(float *)(temp_v0 + 0x4a128c) +
            *(float *)(temp_v0 + 0x4a12a4) + *(float *)(temp_v0 + 0x4a12bc)) * temp_v8;
      *(float *)(temp_v0 + 0x4a136c) =
           (*(float *)(temp_v0 + 0x4a1278) + *(float *)(temp_v0 + 0x4a1290) +
            *(float *)(temp_v0 + 0x4a12a8) + *(float *)(temp_v0 + 0x4a12c0)) * temp_v8;
      temp_v19 = *(unsigned long long *)(temp_v0 + 0x4a127c);
      temp_v9 = *(float *)(temp_v0 + 0x4a1284);
      FUN_0024f5ec(&temp_v35,&temp_v36,&temp_v37,temp_v38);
      *(float *)(temp_v0 + 0x4a1310) = -temp_v35;
      *(float *)(temp_v0 + 0x4a1314) = -temp_v36;
      *(float *)(temp_v0 + 0x4a1318) = -temp_v37;
      *(float *)(temp_v0 + 0x4a1338) =
           *(float *)(temp_v0 + 0x4a1310) * (float)temp_v19 +
           *(float *)(temp_v0 + 0x4a1314) * (float)((unsigned long long)temp_v19 >> 0x20) +
           *(float *)(temp_v0 + 0x4a1318) * temp_v9;
      *(float *)(temp_v0 + 0x4a1370) =
           ((float)*(unsigned long long *)(temp_v0 + 0x4a127c) + *(float *)(temp_v0 + 0x4a1288) +
            *(float *)(temp_v0 + 0x4a12ac) + *(float *)(temp_v0 + 0x4a12b8)) * temp_v8;
      *(float *)(temp_v0 + 0x4a1374) =
           ((float)((unsigned long long)*(unsigned long long *)(temp_v0 + 0x4a127c) >> 0x20) +
            *(float *)(temp_v0 + 0x4a128c) + *(float *)(temp_v0 + 0x4a12b0) +
           *(float *)(temp_v0 + 0x4a12bc)) * temp_v8;
      *(float *)(temp_v0 + 0x4a1378) =
           (*(float *)(temp_v0 + 0x4a1284) + *(float *)(temp_v0 + 0x4a1290) +
            *(float *)(temp_v0 + 0x4a12b4) + *(float *)(temp_v0 + 0x4a12c0)) * temp_v8;
      temp_v19 = *(unsigned long long *)(temp_v0 + 0x4a12ac);
      temp_v9 = *(float *)(temp_v0 + 0x4a12b4);
      FUN_0024f5ec(&temp_v35,&temp_v36,&temp_v37,temp_v38);
      *(float *)(temp_v0 + 0x4a131c) = -temp_v35;
      *(float *)(temp_v0 + 0x4a1320) = -temp_v36;
      *(float *)(temp_v0 + 0x4a1324) = -temp_v37;
      *(float *)(temp_v0 + 0x4a133c) =
           (float)*(unsigned long long *)(temp_v0 + 0x4a131c) * (float)temp_v19 +
           (float)((unsigned long long)*(unsigned long long *)(temp_v0 + 0x4a131c) >> 0x20) *
           (float)((unsigned long long)temp_v19 >> 0x20) + *(float *)(temp_v0 + 0x4a1324) * temp_v9;
      *(float *)(temp_v0 + 0x4a137c) =
           (*(float *)(temp_v0 + 0x4a1294) + *(float *)(temp_v0 + 0x4a12a0) +
            *(float *)(temp_v0 + 0x4a12ac) + *(float *)(temp_v0 + 0x4a12b8)) * temp_v8;
      *(float *)(temp_v0 + 0x4a1380) =
           (*(float *)(temp_v0 + 0x4a1298) + *(float *)(temp_v0 + 0x4a12a4) +
            *(float *)(temp_v0 + 0x4a12b0) + *(float *)(temp_v0 + 0x4a12bc)) * temp_v8;
      *(float *)(temp_v0 + 0x4a1384) =
           (*(float *)(temp_v0 + 0x4a129c) + *(float *)(temp_v0 + 0x4a12a8) +
            *(float *)(temp_v0 + 0x4a12b4) + *(float *)(temp_v0 + 0x4a12c0)) * temp_v8;
      *(float *)(temp_v0 + 0x4a12c4) = temp_v22;
      *(int *)(temp_v0 + 0x4a12c8) = (int)temp_v20;
      *(int *)(temp_v0 + 0x4a12cc) = (int)((unsigned long long)temp_v20 >> 0x20);
    }
  }
  else {
    puVar8 = *(unsigned long long **)(param_1 + 0xc);
    temp_v26 = (float)piVar4[2];
    temp_v4 = piVar4[1];
    temp_v24 = *(float *)(puVar8 + 2);
    temp_v20 = *puVar8;
    temp_v8 = *(float *)(puVar8 + 1);
    temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v24 * 0.7111111f) << 0x1d);
    for (temp_v28 = romwright_fabs_4(temp_v24 * 0.7111111f); (int)temp_v28 >= 0x47800000; temp_v28 = temp_v28 - 65536.0f) {
    }
    temp_v13 = VectorFloatToUnsigned(0,3);
    temp_v21 = temp_v26 * -0.5f;
    temp_v11 = VectorFloatToUnsigned(temp_v28,3);
    temp_v10 = VectorFloatToUnsigned(0,3);
    temp_v3 = temp_v11;
    temp_v14 = (float)VectorUnsignedToFloat(temp_v11 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
    temp_v12 = temp_v13 & 0xff;
    temp_v11 = temp_v10 & 0xff;
    temp_v22 = (float)VectorUnsignedToFloat(temp_v13 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
    temp_v15 = (float)VectorUnsignedToFloat(temp_v10 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
    temp_v16 = (float)(&DAT_00407fc0)[temp_v12 * 4] +
             (0.0f - temp_v22) * (float)(&DAT_00407fc8)[temp_v12 * 4];
    temp_v25 = (float)(&DAT_00407fc4)[temp_v12 * 4] +
             (0.0f - temp_v22) * (float)(&DAT_00407fcc)[temp_v12 * 4];
    temp_v22 = (float)*(unsigned long long *)(&DAT_00407fc0 + temp_v3 * 4) +
             (temp_v28 - temp_v14) * (float)(&DAT_00407fc8)[temp_v3 * 4];
    temp_v17 = (float)(&DAT_00407fc0)[temp_v11 * 4] +
             (0.0f - temp_v15) * (float)(&DAT_00407fc8)[temp_v11 * 4];
    temp_v15 = (float)(&DAT_00407fc4)[temp_v11 * 4] +
             (0.0f - temp_v15) * (float)(&DAT_00407fcc)[temp_v11 * 4];
    temp_v49 = (float)((unsigned long long)*(unsigned long long *)(&DAT_00407fc0 + temp_v3 * 4) >> 0x20) +
                (temp_v28 - temp_v14) * (float)(&DAT_00407fcc)[temp_v3 * 4];
    if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
      temp_v22 = -temp_v22;
    }
    temp_v39 = temp_v15 * temp_v49;
    temp_v47 = -temp_v22;
    temp_v43 = temp_v17 * temp_v49;
    temp_v48 = temp_v16 * temp_v49;
    temp_v49 = temp_v25 * temp_v49;
    temp_v40 = temp_v16 * temp_v15 * temp_v22 - temp_v25 * temp_v17;
    temp_v45 = temp_v25 * temp_v17 * temp_v22 - temp_v16 * temp_v15;
    temp_v41 = temp_v16 * temp_v17 + temp_v25 * temp_v15 * temp_v22;
    temp_v44 = temp_v25 * temp_v15 + temp_v16 * temp_v17 * temp_v22;
    temp_v42 = 0;
    temp_v46 = 0;
    temp_v50 = 0;
    temp_v34 = 0.0f;
    temp_v32 = temp_v21;
    temp_v33 = (float)temp_v4;
    FUN_002ad6d8(afStack_110,&temp_v39,&temp_v32);
    temp_v32 = temp_v26 * 0.5f;
    temp_v33 = (float)temp_v4;
    temp_v34 = temp_v9;
    temp_v28 = temp_v32;
    FUN_002ad6d8(temp_v51,&temp_v39,&temp_v32);
    temp_v32 = temp_v21;
    temp_v33 = temp_v9;
    temp_v34 = temp_v9;
    FUN_002ad6d8(temp_v52,&temp_v39,&temp_v32);
    temp_v32 = temp_v28;
    temp_v33 = temp_v9;
    temp_v34 = temp_v9;
    FUN_002ad6d8(temp_v53,&temp_v39,&temp_v32);
    temp_v0 = temp_v0 * 0x178;
    pfVar9 = (float *)(&DAT_004a1264 + temp_v0);
    temp_v4 = 0;
    do {
      temp_v2 = temp_v4 + 1;
      temp_v28 = afStack_110[temp_v4 * 3];
      temp_v26 = afStack_110[temp_v4 * 3 + 1];
      pfVar3 = pfVar9 + temp_v4 * 3;
      pfVar3[2] = *(float *)(temp_v51 + (temp_v4 * 0xc - 4)) + temp_v8;
      *pfVar3 = temp_v28 + (float)temp_v20;
      pfVar3[1] = temp_v26 + (float)((unsigned long long)temp_v20 >> 0x20);
      temp_v4 = temp_v2;
    } while (temp_v2 < 4);
    *(float *)(temp_v0 + 0x4a12dc) = temp_v24;
    temp_v32 = temp_v9;
    temp_v33 = temp_v9;
    temp_v34 = (float)temp_v29;
    FUN_002ad6d8(temp_v0 + 0x4a12d0,&temp_v39,&temp_v32);
    temp_v27 = *pfVar9;
    temp_v21 = *(float *)(temp_v0 + 0x4a1268);
    temp_v30 = *(float *)(temp_v0 + 0x4a126c);
    temp_v22 = *(float *)(temp_v0 + 0x4a1270);
    temp_v25 = *(float *)(temp_v0 + 0x4a1274);
    temp_v14 = *(float *)(temp_v0 + 0x4a1278);
    temp_v15 = *(float *)(temp_v0 + 0x4a127c);
    temp_v16 = *(float *)(temp_v0 + 0x4a1280);
    temp_v17 = *(float *)(temp_v0 + 0x4a1284);
    temp_v19 = *(unsigned long long *)(temp_v0 + 0x4a128c);
    temp_v31 = *(float *)(temp_v0 + 0x4a1288);
    FUN_0024f5ec(&temp_v35,&temp_v36,&temp_v37,temp_v38);
    *(float *)(temp_v0 + 0x4a12e0) = temp_v35;
    *(float *)(temp_v0 + 0x4a12e4) = temp_v36;
    *(float *)(temp_v0 + 0x4a12e8) = temp_v37;
    *(float *)(temp_v0 + 0x4a1328) = temp_v35 * temp_v27 + temp_v36 * temp_v21 + temp_v37 * temp_v30;
    *(float *)(temp_v0 + 0x4a1340) =
         (*pfVar9 + *(float *)(temp_v0 + 0x4a1270) + *(float *)(temp_v0 + 0x4a127c) +
         *(float *)(temp_v0 + 0x4a1288)) * 0.25f;
    *(float *)(temp_v0 + 0x4a1344) =
         (*(float *)(temp_v0 + 0x4a1268) + *(float *)(temp_v0 + 0x4a1274) + *(float *)(temp_v0 + 0x4a1280)
         + *(float *)(temp_v0 + 0x4a128c)) * 0.25f;
    temp_v26 = romwright_fabs_4(temp_v35);
    temp_v28 = romwright_fabs_4(temp_v36);
    temp_v24 = romwright_fabs_4(temp_v37);
    *(float *)(temp_v0 + 0x4a1348) =
         (*(float *)(temp_v0 + 0x4a126c) + *(float *)(temp_v0 + 0x4a1278) + *(float *)(temp_v0 + 0x4a1284)
         + *(float *)(temp_v0 + 0x4a1290)) * 0.25f;
    *(int *)(temp_v0 + 0x4a12c4) = (int)temp_v20;
    *(int *)(temp_v0 + 0x4a12c8) = (int)((unsigned long long)temp_v20 >> 0x20);
    *(float *)(temp_v0 + 0x4a12cc) = temp_v8;
    temp_v5 = temp_v26 < temp_v28;
    temp_v6 = temp_v26 == temp_v28;
    temp_v7 = NAN(temp_v26) || NAN(temp_v28);
    temp_v8 = 10.0f;
    if (!temp_v6 && !temp_v5) {
      temp_v5 = temp_v26 < temp_v24;
      temp_v6 = temp_v26 == temp_v24;
      temp_v7 = NAN(temp_v26) || NAN(temp_v24);
    }
    temp_v23 = (float)temp_v19;
    if (!(temp_v6 || temp_v5 != temp_v7)) {
      *(unsigned short *)(temp_v0 + 0x4a13d8) = 0;
      temp_v26 = (temp_v21 + temp_v25 + temp_v16 + temp_v23) * 0.25f;
      temp_v24 = (temp_v30 + temp_v14 + temp_v17 + (float)((unsigned long long)temp_v19 >> 0x20)) * 0.25f;
      FUN_0024f5ec(&temp_v35,&temp_v36,&temp_v37,temp_v38);
      *(float *)(temp_v0 + 0x4a12ec) = temp_v35;
      *(float *)(temp_v0 + 0x4a12f0) = temp_v36;
      *(float *)(temp_v0 + 0x4a12f4) = temp_v37;
      temp_v28 = temp_v35 * temp_v9 + temp_v36 * temp_v21 + temp_v37 * temp_v30;
      *(float *)(temp_v0 + 0x4a132c) = temp_v28;
      if ((temp_v9 * temp_v35 + temp_v26 * temp_v36 + temp_v24 * temp_v37) - temp_v28 < temp_v9) {
        *(float *)(temp_v0 + 0x4a12ec) = -temp_v35;
        *(float *)(temp_v0 + 0x4a12f0) = -temp_v36;
        *(float *)(temp_v0 + 0x4a12f4) = -temp_v37;
        *(float *)(temp_v0 + 0x4a132c) =
             *(float *)(temp_v0 + 0x4a12ec) * temp_v9 + -temp_v36 * temp_v21 + -temp_v37 * temp_v30;
      }
      temp_v25 = 0.5f;
      *(float *)(temp_v0 + 0x4a134c) = (*pfVar9 + *(float *)(temp_v0 + 0x4a1270)) * 0.5f;
      *(float *)(temp_v0 + 0x4a1350) =
           (*(float *)(temp_v0 + 0x4a1268) + *(float *)(temp_v0 + 0x4a1274)) * 0.5f;
      *(float *)(temp_v0 + 0x4a1354) =
           (*(float *)(temp_v0 + 0x4a126c) + *(float *)(temp_v0 + 0x4a1278)) * 0.5f;
      temp_v28 = temp_v9;
      FUN_0024f5ec(&temp_v35,&temp_v36,&temp_v37,temp_v38);
      *(float *)(temp_v0 + 0x4a12f8) = temp_v35;
      *(float *)(temp_v0 + 0x4a12fc) = temp_v36;
      *(float *)(temp_v0 + 0x4a1300) = temp_v37;
      temp_v22 = temp_v35 * temp_v9 + temp_v36 * temp_v16 + temp_v37 * temp_v17;
      *(float *)(temp_v0 + 0x4a1330) = temp_v22;
      if ((temp_v9 * temp_v35 + temp_v26 * temp_v36 + temp_v24 * temp_v37) - temp_v22 < temp_v28) {
        *(float *)(temp_v0 + 0x4a12f8) = -temp_v35;
        *(float *)(temp_v0 + 0x4a12fc) = -temp_v36;
        *(float *)(temp_v0 + 0x4a1300) = -temp_v37;
        *(float *)(temp_v0 + 0x4a1330) =
             *(float *)(temp_v0 + 0x4a12f8) * temp_v9 + *(float *)(temp_v0 + 0x4a12fc) * temp_v16 +
             *(float *)(temp_v0 + 0x4a1300) * temp_v17;
      }
      *(float *)(temp_v0 + 0x4a1358) = (*pfVar9 + *(float *)(temp_v0 + 0x4a127c)) * temp_v25;
      *(float *)(temp_v0 + 0x4a135c) =
           (*(float *)(temp_v0 + 0x4a1268) + *(float *)(temp_v0 + 0x4a1280)) * temp_v25;
      *(float *)(temp_v0 + 0x4a1360) =
           (*(float *)(temp_v0 + 0x4a126c) + *(float *)(temp_v0 + 0x4a1284)) * temp_v25;
      FUN_0024f5ec(&temp_v35,&temp_v36,&temp_v37,temp_v38);
      *(float *)(temp_v0 + 0x4a1304) = temp_v35;
      *(float *)(temp_v0 + 0x4a1308) = temp_v36;
      *(float *)(temp_v0 + 0x4a130c) = temp_v37;
      temp_v14 = (float)((unsigned long long)temp_v19 >> 0x20);
      temp_v22 = temp_v35 * temp_v8 + temp_v36 * (float)temp_v19 + temp_v37 * temp_v14;
      *(float *)(temp_v0 + 0x4a1334) = temp_v22;
      if ((temp_v9 * temp_v35 + temp_v26 * temp_v36 + temp_v24 * temp_v37) - temp_v22 < temp_v28) {
        *(float *)(temp_v0 + 0x4a1304) = -temp_v35;
        *(float *)(temp_v0 + 0x4a1308) = -temp_v36;
        *(float *)(temp_v0 + 0x4a130c) = -temp_v37;
        *(float *)(temp_v0 + 0x4a1334) =
             *(float *)(temp_v0 + 0x4a1304) * temp_v8 + *(float *)(temp_v0 + 0x4a1308) * (float)temp_v19 +
             -temp_v37 * temp_v14;
      }
      *(float *)(temp_v0 + 0x4a1364) =
           (*(float *)(temp_v0 + 0x4a1270) + *(float *)(temp_v0 + 0x4a1288)) * temp_v25;
      *(float *)(temp_v0 + 0x4a1368) =
           (*(float *)(temp_v0 + 0x4a1274) + *(float *)(temp_v0 + 0x4a128c)) * temp_v25;
      *(float *)(temp_v0 + 0x4a136c) =
           (*(float *)(temp_v0 + 0x4a1278) + *(float *)(temp_v0 + 0x4a1290)) * temp_v25;
      FUN_0024f5ec(&temp_v35,&temp_v36,&temp_v37,temp_v38);
      *(float *)(temp_v0 + 0x4a1310) = temp_v35;
      *(float *)(temp_v0 + 0x4a1314) = temp_v36;
      *(float *)(temp_v0 + 0x4a1318) = temp_v37;
      temp_v22 = (float)((unsigned long long)temp_v19 >> 0x20);
      temp_v8 = temp_v35 * temp_v9 + temp_v36 * (float)temp_v19 + temp_v37 * temp_v22;
      *(float *)(temp_v0 + 0x4a1338) = temp_v8;
      if ((temp_v9 * temp_v35 + temp_v26 * temp_v36 + temp_v24 * temp_v37) - temp_v8 < temp_v28) {
        *(float *)(temp_v0 + 0x4a1318) = -temp_v37;
        *(float *)(temp_v0 + 0x4a1310) = -temp_v35;
        *(float *)(temp_v0 + 0x4a1314) = -temp_v36;
        *(float *)(temp_v0 + 0x4a1338) =
             -temp_v35 * temp_v9 + -temp_v36 * (float)temp_v19 +
             *(float *)(temp_v0 + 0x4a1318) * temp_v22;
      }
      *(float *)(temp_v0 + 0x4a1378) =
           (*(float *)(temp_v0 + 0x4a1284) + *(float *)(temp_v0 + 0x4a1290)) * temp_v25;
      *(float *)(temp_v0 + 0x4a1370) =
           (*(float *)(temp_v0 + 0x4a127c) + *(float *)(temp_v0 + 0x4a1288)) * temp_v25;
      *(float *)(temp_v0 + 0x4a1374) =
           (*(float *)(temp_v0 + 0x4a1280) + *(float *)(temp_v0 + 0x4a128c)) * temp_v25;
    }
    else {
      temp_v5 = temp_v28 < temp_v26;
      temp_v6 = temp_v28 == temp_v26;
      temp_v7 = NAN(temp_v28) || NAN(temp_v26);
      if (!temp_v6 && !temp_v5) {
        temp_v5 = temp_v28 < temp_v24;
        temp_v6 = temp_v28 == temp_v24;
        temp_v7 = NAN(temp_v28) || NAN(temp_v24);
      }
      if (!(temp_v6 || temp_v5 != temp_v7)) {
        *(unsigned short *)(temp_v0 + 0x4a13d8) = 1;
      }
      else {
        *(unsigned short *)(temp_v0 + 0x4a13d8) = 2;
        temp_v26 = (temp_v27 + temp_v22 + temp_v15 + temp_v31) * 0.25f;
        temp_v24 = (temp_v21 + temp_v25 + temp_v16 + temp_v23) * 0.25f;
        FUN_0024f5ec(&temp_v35,&temp_v36,&temp_v37,temp_v38);
        *(float *)(temp_v0 + 0x4a12ec) = temp_v35;
        *(float *)(temp_v0 + 0x4a12f0) = temp_v36;
        *(float *)(temp_v0 + 0x4a12f4) = temp_v37;
        temp_v28 = temp_v35 * temp_v27 + temp_v36 * temp_v21 + temp_v37 * temp_v9;
        *(float *)(temp_v0 + 0x4a132c) = temp_v28;
        if ((temp_v26 * temp_v35 + temp_v24 * temp_v36 + temp_v9 * temp_v37) - temp_v28 < temp_v9) {
          *(float *)(temp_v0 + 0x4a12ec) = -temp_v35;
          *(float *)(temp_v0 + 0x4a12f0) = -temp_v36;
          *(float *)(temp_v0 + 0x4a12f4) = -temp_v37;
          *(float *)(temp_v0 + 0x4a132c) =
               *(float *)(temp_v0 + 0x4a12ec) * temp_v27 + *(float *)(temp_v0 + 0x4a12f0) * temp_v21 +
               -temp_v37 * temp_v9;
        }
        temp_v25 = 0.5f;
        *(float *)(temp_v0 + 0x4a134c) = (*pfVar9 + *(float *)(temp_v0 + 0x4a1270)) * 0.5f;
        *(float *)(temp_v0 + 0x4a1350) =
             (*(float *)(temp_v0 + 0x4a1268) + *(float *)(temp_v0 + 0x4a1274)) * 0.5f;
        *(float *)(temp_v0 + 0x4a1354) =
             (*(float *)(temp_v0 + 0x4a126c) + *(float *)(temp_v0 + 0x4a1278)) * 0.5f;
        temp_v28 = temp_v9;
        FUN_0024f5ec(&temp_v35,&temp_v36,&temp_v37,temp_v38);
        *(float *)(temp_v0 + 0x4a12f8) = temp_v35;
        *(float *)(temp_v0 + 0x4a12fc) = temp_v36;
        *(float *)(temp_v0 + 0x4a1300) = temp_v37;
        temp_v22 = temp_v35 * temp_v15 + temp_v36 * temp_v16 + temp_v37 * temp_v9;
        *(float *)(temp_v0 + 0x4a1330) = temp_v22;
        if ((temp_v26 * temp_v35 + temp_v24 * temp_v36 + temp_v9 * temp_v37) - temp_v22 < temp_v28) {
          *(float *)(temp_v0 + 0x4a12f8) = -temp_v35;
          *(float *)(temp_v0 + 0x4a12fc) = -temp_v36;
          *(float *)(temp_v0 + 0x4a1300) = -temp_v37;
          *(float *)(temp_v0 + 0x4a1330) =
               -temp_v35 * temp_v15 + *(float *)(temp_v0 + 0x4a12fc) * temp_v16 +
               *(float *)(temp_v0 + 0x4a1300) * temp_v9;
        }
        *(float *)(temp_v0 + 0x4a1358) = (*pfVar9 + *(float *)(temp_v0 + 0x4a127c)) * temp_v25;
        *(float *)(temp_v0 + 0x4a135c) =
             (*(float *)(temp_v0 + 0x4a1268) + *(float *)(temp_v0 + 0x4a1280)) * temp_v25;
        *(float *)(temp_v0 + 0x4a1360) =
             (*(float *)(temp_v0 + 0x4a126c) + *(float *)(temp_v0 + 0x4a1284)) * temp_v25;
        FUN_0024f5ec(&temp_v35,&temp_v36,&temp_v37,temp_v38);
        *(float *)(temp_v0 + 0x4a1304) = temp_v35;
        *(float *)(temp_v0 + 0x4a1308) = temp_v36;
        *(float *)(temp_v0 + 0x4a130c) = temp_v37;
        temp_v22 = temp_v35 * temp_v31 + temp_v36 * temp_v23 + temp_v37 * temp_v8;
        *(float *)(temp_v0 + 0x4a1334) = temp_v22;
        if ((temp_v26 * temp_v35 + temp_v24 * temp_v36 + temp_v9 * temp_v37) - temp_v22 < temp_v28) {
          *(float *)(temp_v0 + 0x4a1304) = -temp_v35;
          *(float *)(temp_v0 + 0x4a1308) = -temp_v36;
          *(float *)(temp_v0 + 0x4a130c) = -temp_v37;
          *(float *)(temp_v0 + 0x4a1334) =
               *(float *)(temp_v0 + 0x4a1304) * temp_v31 + -temp_v36 * temp_v23 +
               *(float *)(temp_v0 + 0x4a130c) * temp_v8;
        }
        *(float *)(temp_v0 + 0x4a1364) =
             (*(float *)(temp_v0 + 0x4a1270) + *(float *)(temp_v0 + 0x4a1288)) * temp_v25;
        *(float *)(temp_v0 + 0x4a1368) =
             (*(float *)(temp_v0 + 0x4a1274) + *(float *)(temp_v0 + 0x4a128c)) * temp_v25;
        *(float *)(temp_v0 + 0x4a136c) =
             (*(float *)(temp_v0 + 0x4a1278) + *(float *)(temp_v0 + 0x4a1290)) * temp_v25;
        FUN_0024f5ec(&temp_v35,&temp_v36,&temp_v37,temp_v38);
        *(float *)(temp_v0 + 0x4a1310) = temp_v35;
        *(float *)(temp_v0 + 0x4a1314) = temp_v36;
        *(float *)(temp_v0 + 0x4a1318) = temp_v37;
        temp_v8 = temp_v35 * temp_v31 + temp_v36 * temp_v23 + temp_v37 * temp_v9;
        *(float *)(temp_v0 + 0x4a1338) = temp_v8;
        if ((temp_v26 * temp_v35 + temp_v24 * temp_v36 + temp_v9 * temp_v37) - temp_v8 < temp_v28) {
          *(float *)(temp_v0 + 0x4a1310) = -temp_v35;
          *(float *)(temp_v0 + 0x4a1314) = -temp_v36;
          *(float *)(temp_v0 + 0x4a1318) = -temp_v37;
          *(float *)(temp_v0 + 0x4a1338) =
               -temp_v35 * temp_v31 + -temp_v36 * temp_v23 + *(float *)(temp_v0 + 0x4a1318) * temp_v9;
        }
        *(float *)(temp_v0 + 0x4a1370) =
             (*(float *)(temp_v0 + 0x4a127c) + *(float *)(temp_v0 + 0x4a1288)) * temp_v25;
        *(float *)(temp_v0 + 0x4a1374) =
             (*(float *)(temp_v0 + 0x4a1280) + *(float *)(temp_v0 + 0x4a128c)) * temp_v25;
        *(float *)(temp_v0 + 0x4a1378) =
             (*(float *)(temp_v0 + 0x4a1284) + *(float *)(temp_v0 + 0x4a1290)) * temp_v25;
      }
    }
  }
  temp_v0 = DAT_00447a28;
  DAT_00447a28 = DAT_00447a28 + 1;
  return temp_v0;
}
