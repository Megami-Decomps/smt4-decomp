/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020f12c` (_code @ 0x20f12c, 0x2fec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00311880(...);

int CONCAT44(...);
int FUN_002c0dbc(...);
int FUN_002de124(...);
int FUN_00398438(void);
int FUN_003a3070(void);
int FUN_003a315c(void);
int FUN_003b998c(void);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(...);

/* stack frame of param_2: 36 slot(s), 144 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB8; /* 0xb8: local_b8 */
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
} param_2_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern unsigned int DAT_005f15fc; /* 0x5f15fc */
extern unsigned int DAT_005f1804; /* 0x5f1804 */
extern unsigned int DAT_005f1808; /* 0x5f1808 */
extern unsigned int DAT_005f180c; /* 0x5f180c */
extern unsigned int DAT_005f1810; /* 0x5f1810 */
extern unsigned int DAT_005f1814; /* 0x5f1814 */
extern unsigned int DAT_005f1818; /* 0x5f1818 */
extern unsigned int DAT_005f181c; /* 0x5f181c */
extern unsigned int DAT_005f1820; /* 0x5f1820 */
extern unsigned int DAT_005f1824; /* 0x5f1824 */
extern unsigned int *DAT_005f1828; /* 0x5f1828 */
extern unsigned int *DAT_005f182c; /* 0x5f182c */
extern int DAT_005f1830; /* 0x5f1830 */
extern unsigned int DAT_005f1834; /* 0x5f1834 */
extern int DAT_005f1838; /* 0x5f1838 */
extern unsigned int DAT_005f183c; /* 0x5f183c */
extern unsigned int DAT_005f1840; /* 0x5f1840 */
extern unsigned int *DAT_00613174; /* 0x613174 */
extern unsigned char DAT_00613178; /* 0x613178 */
extern unsigned int DAT_00614d78; /* 0x614d78 */
extern unsigned int DAT_006160dc; /* 0x6160dc */
extern unsigned char DAT_006160e0; /* 0x6160e0 */
extern unsigned int *DAT_00616ee0; /* 0x616ee0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
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
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
extern int FUN_0014bef4(unsigned int);
extern int FUN_00162e8c(void);
extern int FUN_0018719c(void);
/* Supplied declaration required: FUN_002c0dbc. */
/* Supplied declaration required: FUN_002de124. */
/* Supplied declaration required: FUN_00311880. */
extern unsigned int *FUN_0033aaac(int);
extern char *FUN_0033f868(int);
extern char *FUN_003858d4(int);
/* Supplied declaration required: FUN_00398438. */
/* Supplied declaration required: FUN_003a3070. */
/* Supplied declaration required: FUN_003a315c. */
extern unsigned int FUN_003ae498(int);
/* Supplied declaration required: FUN_003b998c. */
extern int FUN_003c30ac(void);
extern int FUN_003c311c(void);
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x002108a4) */
/* WARNING: Removing unreachable block (ram,0x00211c38) */
/* WARNING: Removing unreachable block (ram,0x0020fd10) */
/* WARNING: Removing unreachable block (ram,0x00211c40) */
/* WARNING: Removing unreachable block (ram,0x00210e54) */
/* WARNING: Removing unreachable block (ram,0x002108bc) */
/* WARNING: Removing unreachable block (ram,0x00210680) */
/* WARNING: Removing unreachable block (ram,0x00211e58) */
/* WARNING: Removing unreachable block (ram,0x00211788) */
/* WARNING: Removing unreachable block (ram,0x0020f62c) */
/* WARNING: Removing unreachable block (ram,0x0020fd24) */
/* WARNING: Removing unreachable block (ram,0x002117b0) */
/* WARNING: Removing unreachable block (ram,0x00211e68) */
/* WARNING: Removing unreachable block (ram,0x0021068c) */
/* WARNING: Removing unreachable block (ram,0x00210e48) */
/* WARNING: Removing unreachable block (ram,0x00211064) */
/* WARNING: Removing unreachable block (ram,0x0020f634) */
/* WARNING: Removing unreachable block (ram,0x0020ff3c) */
/* WARNING: Removing unreachable block (ram,0x00211074) */
/* WARNING: Removing unreachable block (ram,0x0020ff4c) */
/* WARNING: Removing unreachable block (ram,0x0020f86c) */
/* WARNING: Removing unreachable block (ram,0x00211568) */
/* WARNING: Removing unreachable block (ram,0x0020f87c) */
/* WARNING: Removing unreachable block (ram,0x00211570) */

void FUN_0020f12c(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 5 goto(s); irregular input(s): in_fpscr; 36 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  char *pcVar5;
  char *pcVar6;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned short temp_v7;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  unsigned int temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  unsigned long long temp_v30;
  float temp_v31;
  unsigned long long temp_v32;
  unsigned int temp_v33;
  long long temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float temp_v43;
  float temp_v44;
  float temp_v45;
  float temp_v46;
  float temp_v47;
  float temp_v48;
  float temp_v49;
  unsigned int temp_v50;
  float temp_v51;
  float temp_v52;
  float temp_v53;
  unsigned int temp_v54;
  float temp_v55;
  float temp_v56;
  float temp_v57;
  unsigned int temp_v58;
  int temp_v59;
  float temp_v60;
  float fStack_ac;
  float fStack_a8;
  unsigned int temp_v61;
  unsigned int temp_v62;
  unsigned int temp_v63;
  unsigned int temp_v64;
  unsigned int temp_v65;
  int temp_v66;
  int *temp_v67;
  unsigned int temp_v68;
  int temp_v69;
  unsigned int temp_v70;
  
  temp_v2 = FUN_00162e8c();
  DAT_00613174 = (unsigned int *)0x0;
  temp_v67 = (int *)&DAT_00614d78;
  DAT_00614d78 = 0;
  temp_v6 = 0;
  DAT_006160dc = 0;
  puVar4 = (unsigned int *)&DAT_006160e0;
  DAT_00616ee0 = (unsigned int *)0x0;
  DAT_005f1804 = 0;
  DAT_005f1808 = 0;
  DAT_005f180c = 0;
  DAT_005f1810 = 0;
  DAT_005f1814 = 0;
  DAT_005f1818 = 0;
  DAT_005f181c = 0;
  DAT_005f1820 = 0;
  DAT_005f1824 = 0;
  DAT_005f1828 = (unsigned int *)0x0;
  DAT_005f182c = (unsigned int *)0x0;
  DAT_005f1830 = 0;
  DAT_005f1834 = 0;
  DAT_005f1838 = 0;
  DAT_005f183c = 0;
  DAT_005f1840 = 0;
  FUN_00398438();
  temp_v31 = 0.7111111f;
  temp_v29 = 0.0f;
  temp_v30 = 0x40a0000047800000;
  if (0 < (int)puVar4) {
    do {
      pcVar5 = (char *)FUN_0033f868(temp_v6);
      puVar4 = (unsigned int *)(int)*pcVar5;
      if (puVar4 == (unsigned int *)0xffffffff) break;
      temp_v0 = pcVar5[2];
      if (temp_v0 != '\x06') {
        if (temp_v0 != '\a') {
          if (((int)param_1 < 100) || (temp_v0 != '\x01')) {
            temp_v8 = puVar4 == param_1;
            if (temp_v8) {
              puVar4 = (unsigned int *)(int)pcVar5[1];
            }
            if ((temp_v8 && puVar4 == param_2) &&
               ((temp_v0 != '\x02' ||
                (puVar4 = (unsigned int *)FUN_0033aaac((int)pcVar5[3]), puVar4 == (unsigned int *)0x0)))
               ) {
              temp_v36 = (float)((unsigned long long)temp_v30 >> 0x20);
              temp_v44 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 10),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v41 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 10),
                                                     (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v43 = (float)VectorSignedToFloat(-(int)*(short *)(pcVar5 + 0xc),
                                                     (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v37 = (float)VectorSignedToFloat(-(int)*(short *)(pcVar5 + 0xc),
                                                     (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 0x10),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v23 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v29 <= temp_v10 * temp_v31) << 0x1d);
              temp_v63 = (unsigned int)!romwright_subpiece_4_1_0(temp_v23 >> 0x1d,0);
              temp_v64 = 0;
              temp_v65 = 0;
              temp_v11 = (float)temp_v30;
              for (temp_v10 = romwright_fabs_4(temp_v10 * temp_v31); temp_v26 = temp_v29, (int)temp_v10 >= 0x47800000;
                  temp_v10 = temp_v10 - temp_v11) {
              }
              for (; temp_v28 = temp_v29, (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - temp_v11) {
              }
              for (; (int)temp_v28 >= 0x47800000; temp_v28 = temp_v28 - temp_v11) {
              }
              temp_v18 = VectorFloatToUnsigned(temp_v10,3);
              temp_v19 = VectorFloatToUnsigned(temp_v26,3);
              temp_v20 = VectorFloatToUnsigned(temp_v28,3);
              temp_v27 = (float)VectorUnsignedToFloat(temp_v18 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
              temp_v25 = (float)VectorUnsignedToFloat(temp_v19 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
              temp_v21 = (float)VectorUnsignedToFloat(temp_v20 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
              temp_v18 = temp_v18 & 0xff;
              temp_v20 = temp_v20 & 0xff;
              temp_v19 = temp_v19 & 0xff;
              temp_v22 = (float)(&DAT_00536d14)[temp_v18 * 4] +
                       (temp_v10 - temp_v27) * (float)(&DAT_00536d1c)[temp_v18 * 4];
              temp_v11 = (float)(&DAT_00536d14)[temp_v19 * 4] +
                       (temp_v26 - temp_v25) * (float)(&DAT_00536d1c)[temp_v19 * 4];
              temp_v14 = (float)(&DAT_00536d14)[temp_v20 * 4] +
                       (temp_v28 - temp_v21) * (float)(&DAT_00536d1c)[temp_v20 * 4];
              if (temp_v63 != 0) {
                temp_v22 = -temp_v22;
              }
              temp_v10 = (float)(&DAT_00536d18)[temp_v18 * 4] +
                       (temp_v10 - temp_v27) * (float)(&DAT_00536d20)[temp_v18 * 4];
              temp_v28 = (float)(&DAT_00536d18)[temp_v20 * 4] +
                       (temp_v28 - temp_v21) * (float)(&DAT_00536d20)[temp_v20 * 4];
              temp_v55 = -temp_v11;
              temp_v57 = (float)(&DAT_00536d18)[temp_v19 * 4] +
                         (temp_v26 - temp_v25) * (float)(&DAT_00536d20)[temp_v19 * 4];
              temp_v47 = temp_v28 * temp_v57;
              temp_v51 = temp_v14 * temp_v57;
              temp_v56 = temp_v22 * temp_v57;
              temp_v57 = temp_v10 * temp_v57;
              temp_v48 = temp_v22 * temp_v28 * temp_v11 - temp_v10 * temp_v14;
              temp_v49 = temp_v22 * temp_v14 + temp_v10 * temp_v28 * temp_v11;
              temp_v53 = temp_v10 * temp_v14 * temp_v11 - temp_v22 * temp_v28;
              temp_v52 = temp_v10 * temp_v28 + temp_v22 * temp_v14 * temp_v11;
              temp_v50 = 0;
              temp_v54 = 0;
              temp_v58 = 0;
              temp_v11 = temp_v29;
              temp_v35 = temp_v29;
              temp_v38 = temp_v29;
              temp_v39 = temp_v36;
              temp_v40 = temp_v29;
              temp_v42 = temp_v36;
              temp_v45 = temp_v36;
              temp_v46 = temp_v29;
              temp_v60 = temp_v29;
              fStack_ac = temp_v36;
              fStack_a8 = temp_v29;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v38,&temp_v47,&temp_v60);
              temp_v60 = temp_v44;
              fStack_ac = temp_v45;
              fStack_a8 = temp_v46;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v47,&temp_v60);
              temp_v60 = temp_v41;
              fStack_ac = temp_v42;
              fStack_a8 = temp_v43;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v41,&temp_v47,&temp_v60);
              temp_v60 = temp_v35;
              fStack_ac = temp_v36;
              fStack_a8 = temp_v37;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v35,&temp_v47,&temp_v60);
              temp_v65 = 0;
              temp_v63 = 0;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 0xe),
                                                  (unsigned char)(temp_v23 >> 0x16) & 3);
              in_fpscr = (temp_v23 & 0xfffffff) | ((unsigned int)(temp_v11 <= temp_v10 * temp_v31) << 0x1d);
              temp_v8 = romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0);
              temp_v10 = romwright_fabs_4(temp_v10 * temp_v31);
              temp_v64 = (unsigned int)!temp_v8;
              if (temp_v8) {
                temp_v64 = 0;
              }
              for (; temp_v26 = temp_v11, (int)temp_v10 >= 0x47800000; temp_v10 = temp_v10 - (float)temp_v30) {
              }
              for (; (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - (float)temp_v30) {
              }
              temp_v23 = VectorFloatToUnsigned(temp_v11,3);
              temp_v19 = VectorFloatToUnsigned(temp_v10,3);
              temp_v20 = temp_v23 & 0xff;
              temp_v24 = VectorFloatToUnsigned(temp_v26,3);
              temp_v18 = temp_v19 & 0xff;
              temp_v14 = (float)VectorUnsignedToFloat(temp_v23 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v21 = (float)VectorUnsignedToFloat(temp_v19 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v23 = temp_v24 & 0xff;
              temp_v28 = (float)VectorUnsignedToFloat(temp_v24 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v22 = (float)(&DAT_00536d18)[temp_v20 * 4] +
                       (temp_v11 - temp_v14) * (float)(&DAT_00536d20)[temp_v20 * 4];
              temp_v14 = (float)(&DAT_00536d14)[temp_v20 * 4] +
                       (temp_v11 - temp_v14) * (float)(&DAT_00536d1c)[temp_v20 * 4];
              temp_v11 = (float)(&DAT_00536d14)[temp_v18 * 4] +
                       (temp_v10 - temp_v21) * (float)(&DAT_00536d1c)[temp_v18 * 4];
              temp_v57 = (float)(&DAT_00536d18)[temp_v18 * 4] +
                         (temp_v10 - temp_v21) * (float)(&DAT_00536d20)[temp_v18 * 4];
              temp_v10 = (float)(&DAT_00536d14)[temp_v23 * 4] +
                       (temp_v26 - temp_v28) * (float)(&DAT_00536d1c)[temp_v23 * 4];
              temp_v26 = (float)(&DAT_00536d18)[temp_v23 * 4] +
                       (temp_v26 - temp_v28) * (float)(&DAT_00536d20)[temp_v23 * 4];
              if (temp_v64 != 0) {
                temp_v11 = -temp_v11;
              }
              temp_v47 = temp_v26 * temp_v57;
              temp_v55 = -temp_v11;
              temp_v51 = temp_v10 * temp_v57;
              temp_v56 = temp_v14 * temp_v57;
              temp_v57 = temp_v22 * temp_v57;
              temp_v48 = temp_v14 * temp_v26 * temp_v11 - temp_v22 * temp_v10;
              temp_v49 = temp_v14 * temp_v10 + temp_v22 * temp_v26 * temp_v11;
              temp_v53 = temp_v22 * temp_v10 * temp_v11 - temp_v14 * temp_v26;
              temp_v52 = temp_v22 * temp_v26 + temp_v14 * temp_v10 * temp_v11;
              temp_v50 = 0;
              temp_v54 = 0;
              temp_v58 = 0;
              temp_v60 = temp_v38;
              fStack_ac = temp_v39;
              fStack_a8 = temp_v40;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v38,&temp_v47,&temp_v60);
              temp_v60 = temp_v44;
              fStack_ac = temp_v45;
              fStack_a8 = temp_v46;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v47,&temp_v60);
              temp_v60 = temp_v41;
              fStack_ac = temp_v42;
              fStack_a8 = temp_v43;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v41,&temp_v47,&temp_v60);
              temp_v60 = temp_v35;
              fStack_ac = temp_v36;
              fStack_a8 = temp_v37;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v35,&temp_v47,&temp_v60);
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 4),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v38 = temp_v38 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 6),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v39 = temp_v39 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 8),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v40 = temp_v40 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 4),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v44 = temp_v44 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 6),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v45 = temp_v45 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 8),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v46 = temp_v46 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 4),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v41 = temp_v41 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 6),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v42 = temp_v42 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 8),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v43 = temp_v43 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 4),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v35 = temp_v35 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 6),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v36 = temp_v36 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 8),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v37 = temp_v37 + temp_v10;
              FUN_002c0dbc(pcVar5[2],(int)*(short *)(pcVar5 + 0x12),(int)pcVar5[3]);
              temp_v0 = pcVar5[2];
              puVar4 = &DAT_005f15fc + temp_v0;
              (&DAT_005f1804)[temp_v0] = (&DAT_005f1804)[temp_v0] + 1;
            }
          }
          else if (puVar4 == param_1) {
            temp_v9 = VectorSignedToFloat((int)*(short *)(pcVar5 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v17 = VectorSignedToFloat((int)*(short *)(pcVar5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v0 = pcVar5[1];
            temp_v12 = VectorSignedToFloat((int)*(short *)(pcVar5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v13 = VectorSignedToFloat((int)*(short *)(pcVar5 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3)
            ;
            temp_v4 = (int)DAT_00616ee0 * 0x1c;
            *(unsigned int *)(&DAT_006160e0 + temp_v4) = temp_v9;
            *(float *)(temp_v4 + 0x6160e4) = temp_v29;
            *(unsigned int *)(temp_v4 + 0x6160e8) = temp_v17;
            *(unsigned int *)(temp_v4 + 0x6160ec) = temp_v12;
            *(float *)(temp_v4 + 0x6160f0) = temp_v29;
            *(unsigned int *)(temp_v4 + 0x6160f4) = temp_v13;
            *(int *)(temp_v4 + 0x6160f8) = (int)temp_v0;
            puVar4 = (unsigned int *)((int)DAT_00616ee0 + 1);
            DAT_00616ee0 = puVar4;
          }
        }
        else if (puVar4 == param_1) {
          temp_v9 = VectorSignedToFloat((int)*(short *)(pcVar5 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v12 = VectorSignedToFloat((int)*(short *)(pcVar5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v17 = VectorSignedToFloat((int)*(short *)(pcVar5 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v13 = VectorSignedToFloat((int)*(short *)(pcVar5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v0 = pcVar5[1];
          temp_v4 = *temp_v67 * 0x1c;
          temp_v7 = *(unsigned short *)(pcVar5 + 0x12);
          *(unsigned int *)(&DAT_00613178 + temp_v4) = temp_v9;
          *(float *)(temp_v4 + 0x61317c) = temp_v29;
          *(float *)(temp_v4 + 0x613188) = temp_v29;
          *(unsigned int *)(temp_v4 + 0x61318c) = temp_v17;
          *(unsigned int *)(temp_v4 + 0x613180) = temp_v12;
          *(unsigned int *)(temp_v4 + 0x613184) = temp_v13;
          *(unsigned short *)(temp_v4 + 0x613190) = temp_v7;
          *(short *)(temp_v4 + 0x613192) = (short)temp_v0;
          puVar4 = (unsigned int *)(*temp_v67 + 1);
          *temp_v67 = (int)puVar4;
          if (((int)param_1 >= 100) &&
             (puVar4 = (unsigned int *)(int)*(short *)(pcVar5 + 0x12),
             puVar4 == (unsigned int *)0x4 || puVar4 == (unsigned int *)0x9)) {
            temp_v9 = VectorSignedToFloat((int)*(short *)(pcVar5 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v12 = VectorSignedToFloat((int)*(short *)(pcVar5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v0 = pcVar5[1];
            temp_v17 = VectorSignedToFloat((int)*(short *)(pcVar5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v13 = VectorSignedToFloat((int)*(short *)(pcVar5 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3)
            ;
            temp_v4 = (int)DAT_00616ee0 * 0x1c;
            *(unsigned int *)(&DAT_006160e0 + temp_v4) = temp_v9;
            *(float *)(temp_v4 + 0x6160e4) = temp_v29;
            *(unsigned int *)(temp_v4 + 0x6160e8) = temp_v12;
            *(unsigned int *)(temp_v4 + 0x6160ec) = temp_v17;
            *(float *)(temp_v4 + 0x6160f0) = temp_v29;
            *(unsigned int *)(temp_v4 + 0x6160f4) = temp_v13;
            *(int *)(temp_v4 + 0x6160f8) = (int)temp_v0;
            puVar4 = (unsigned int *)((int)DAT_00616ee0 + 1);
            DAT_00616ee0 = puVar4;
          }
        }
      }
      else if (puVar4 == param_1) {
        temp_v0 = pcVar5[1];
        temp_v12 = VectorSignedToFloat((int)*(short *)(pcVar5 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v13 = VectorSignedToFloat((int)*(short *)(pcVar5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = VectorSignedToFloat((int)*(short *)(pcVar5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v33 = VectorSignedToFloat((int)*(short *)(pcVar5 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v9 = FUN_003ae498((int)*(short *)(pcVar5 + 0x12));
        temp_v4 = (int)DAT_00613174 * 0x20;
        *(unsigned int *)(temp_v4 + 0x611874) = temp_v12;
        *(float *)(temp_v4 + 0x611878) = temp_v29;
        *(float *)(temp_v4 + 0x611884) = temp_v29;
        *(unsigned int *)(temp_v4 + 0x611888) = temp_v33;
        *(unsigned int *)(temp_v4 + 0x61187c) = temp_v13;
        *(unsigned int *)(temp_v4 + 0x611880) = temp_v17;
        *(unsigned int *)(temp_v4 + 0x61188c) = temp_v9;
        *(int *)(temp_v4 + 0x611890) = (int)temp_v0;
        puVar4 = (unsigned int *)((int)DAT_00613174 + 1);
        DAT_00613174 = puVar4;
      }
      temp_v6 = temp_v6 + 1;
      FUN_00398438();
    } while (temp_v6 < (int)puVar4);
  }
  temp_v6 = 0;
  FUN_003b998c();
  if (0 < (int)puVar4) {
    do {
      pcVar5 = (char *)FUN_003858d4(temp_v6);
      puVar4 = (unsigned int *)(int)*pcVar5;
      if (puVar4 == (unsigned int *)0xffffffff) break;
      if (pcVar5[2] != '\0') {
        if (pcVar5[2] != '\x02') {
          if ((puVar4 == param_1) && (puVar4 = (unsigned int *)(int)pcVar5[1], puVar4 == param_2)) {
            temp_v36 = (float)((unsigned long long)temp_v30 >> 0x20);
            temp_v44 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 10),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v41 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 10),
                                                   (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v43 = (float)VectorSignedToFloat(-(int)*(short *)(pcVar5 + 0xc),
                                                   (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v37 = (float)VectorSignedToFloat(-(int)*(short *)(pcVar5 + 0xc),
                                                   (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 0x10),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v23 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v29 <= temp_v10 * temp_v31) << 0x1d);
            temp_v64 = (unsigned int)!romwright_subpiece_4_1_0(temp_v23 >> 0x1d,0);
            temp_v11 = (float)temp_v30;
            for (temp_v10 = romwright_fabs_4(temp_v10 * temp_v31); temp_v26 = temp_v29, (int)temp_v10 >= 0x47800000;
                temp_v10 = temp_v10 - temp_v11) {
            }
            for (; temp_v28 = temp_v29, (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - temp_v11) {
            }
            for (; (int)temp_v28 >= 0x47800000; temp_v28 = temp_v28 - temp_v11) {
            }
            temp_v24 = VectorFloatToUnsigned(temp_v10,3);
            temp_v15 = VectorFloatToUnsigned(temp_v26,3);
            temp_v18 = temp_v24 & 0xff;
            temp_v16 = VectorFloatToUnsigned(temp_v28,3);
            temp_v20 = temp_v15 & 0xff;
            temp_v19 = temp_v16 & 0xff;
            temp_v22 = (float)VectorUnsignedToFloat(temp_v24 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
            temp_v21 = (float)VectorUnsignedToFloat(temp_v15 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
            temp_v14 = (float)VectorUnsignedToFloat(temp_v16 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
            temp_v25 = (float)(&DAT_00536d14)[temp_v18 * 4] +
                     (temp_v10 - temp_v22) * (float)(&DAT_00536d1c)[temp_v18 * 4];
            temp_v11 = (float)(&DAT_00536d14)[temp_v20 * 4] +
                     (temp_v26 - temp_v21) * (float)(&DAT_00536d1c)[temp_v20 * 4];
            temp_v22 = (float)(&DAT_00536d18)[temp_v18 * 4] +
                     (temp_v10 - temp_v22) * (float)(&DAT_00536d20)[temp_v18 * 4];
            temp_v10 = (float)(&DAT_00536d14)[temp_v19 * 4] +
                     (temp_v28 - temp_v14) * (float)(&DAT_00536d1c)[temp_v19 * 4];
            if (temp_v64 != 0) {
              temp_v25 = -temp_v25;
            }
            temp_v28 = (float)(&DAT_00536d18)[temp_v19 * 4] +
                     (temp_v28 - temp_v14) * (float)(&DAT_00536d20)[temp_v19 * 4];
            temp_v57 = (float)(&DAT_00536d18)[temp_v20 * 4] +
                       (temp_v26 - temp_v21) * (float)(&DAT_00536d20)[temp_v20 * 4];
            temp_v55 = -temp_v11;
            temp_v47 = temp_v28 * temp_v57;
            temp_v51 = temp_v10 * temp_v57;
            temp_v56 = temp_v25 * temp_v57;
            temp_v57 = temp_v22 * temp_v57;
            temp_v48 = temp_v25 * temp_v28 * temp_v11 - temp_v22 * temp_v10;
            temp_v49 = temp_v25 * temp_v10 + temp_v22 * temp_v28 * temp_v11;
            temp_v53 = temp_v22 * temp_v10 * temp_v11 - temp_v25 * temp_v28;
            temp_v52 = temp_v22 * temp_v28 + temp_v25 * temp_v10 * temp_v11;
            temp_v50 = 0;
            temp_v54 = 0;
            temp_v58 = 0;
            temp_v11 = temp_v29;
            temp_v35 = temp_v29;
            temp_v38 = temp_v29;
            temp_v39 = temp_v36;
            temp_v40 = temp_v29;
            temp_v42 = temp_v36;
            temp_v45 = temp_v36;
            temp_v46 = temp_v29;
            temp_v60 = temp_v29;
            fStack_ac = temp_v36;
            fStack_a8 = temp_v29;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v38,&temp_v47,&temp_v60);
            temp_v60 = temp_v44;
            fStack_ac = temp_v45;
            fStack_a8 = temp_v46;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v47,&temp_v60);
            temp_v60 = temp_v41;
            fStack_ac = temp_v42;
            fStack_a8 = temp_v43;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v41,&temp_v47,&temp_v60);
            temp_v60 = temp_v35;
            fStack_ac = temp_v36;
            fStack_a8 = temp_v37;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v35,&temp_v47,&temp_v60);
            temp_v65 = 0;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 0xe),
                                                (unsigned char)(temp_v23 >> 0x16) & 3);
            in_fpscr = (temp_v23 & 0xfffffff) | ((unsigned int)(temp_v11 <= temp_v10 * temp_v31) << 0x1d);
            for (temp_v10 = romwright_fabs_4(temp_v10 * temp_v31); temp_v26 = temp_v11, (int)temp_v10 >= 0x47800000;
                temp_v10 = temp_v10 - (float)temp_v30) {
            }
            for (; (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - (float)temp_v30) {
            }
            temp_v19 = VectorFloatToUnsigned(temp_v11,3);
            temp_v24 = VectorFloatToUnsigned(temp_v10,3);
            temp_v20 = temp_v19 & 0xff;
            temp_v15 = VectorFloatToUnsigned(temp_v26,3);
            temp_v23 = temp_v24 & 0xff;
            temp_v18 = temp_v15 & 0xff;
            temp_v14 = (float)VectorUnsignedToFloat(temp_v19 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v21 = (float)VectorUnsignedToFloat(temp_v24 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v28 = (float)VectorUnsignedToFloat(temp_v15 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v22 = (float)(&DAT_00536d18)[temp_v20 * 4] +
                     (temp_v11 - temp_v14) * (float)(&DAT_00536d20)[temp_v20 * 4];
            temp_v14 = (float)(&DAT_00536d14)[temp_v20 * 4] +
                     (temp_v11 - temp_v14) * (float)(&DAT_00536d1c)[temp_v20 * 4];
            temp_v11 = (float)(&DAT_00536d14)[temp_v23 * 4] +
                     (temp_v10 - temp_v21) * (float)(&DAT_00536d1c)[temp_v23 * 4];
            temp_v57 = (float)(&DAT_00536d18)[temp_v23 * 4] +
                       (temp_v10 - temp_v21) * (float)(&DAT_00536d20)[temp_v23 * 4];
            temp_v10 = (float)(&DAT_00536d14)[temp_v18 * 4] +
                     (temp_v26 - temp_v28) * (float)(&DAT_00536d1c)[temp_v18 * 4];
            temp_v26 = (float)(&DAT_00536d18)[temp_v18 * 4] +
                     (temp_v26 - temp_v28) * (float)(&DAT_00536d20)[temp_v18 * 4];
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              temp_v11 = -temp_v11;
            }
            temp_v47 = temp_v26 * temp_v57;
            temp_v55 = -temp_v11;
            temp_v51 = temp_v10 * temp_v57;
            temp_v56 = temp_v14 * temp_v57;
            temp_v57 = temp_v22 * temp_v57;
            temp_v48 = temp_v14 * temp_v26 * temp_v11 - temp_v22 * temp_v10;
            temp_v49 = temp_v14 * temp_v10 + temp_v22 * temp_v26 * temp_v11;
            temp_v53 = temp_v22 * temp_v10 * temp_v11 - temp_v14 * temp_v26;
            temp_v52 = temp_v22 * temp_v26 + temp_v14 * temp_v10 * temp_v11;
            temp_v50 = 0;
            temp_v54 = 0;
            temp_v58 = 0;
            temp_v60 = temp_v38;
            fStack_ac = temp_v39;
            fStack_a8 = temp_v40;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v38,&temp_v47,&temp_v60);
            temp_v60 = temp_v44;
            fStack_ac = temp_v45;
            fStack_a8 = temp_v46;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v47,&temp_v60);
            temp_v60 = temp_v41;
            fStack_ac = temp_v42;
            fStack_a8 = temp_v43;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v41,&temp_v47,&temp_v60);
            temp_v60 = temp_v35;
            fStack_ac = temp_v36;
            fStack_a8 = temp_v37;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v35,&temp_v47,&temp_v60);
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v38 = temp_v38 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v39 = temp_v39 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v40 = temp_v40 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v44 = temp_v44 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v45 = temp_v45 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v46 = temp_v46 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v41 = temp_v41 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v42 = temp_v42 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v43 = temp_v43 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v35 = temp_v35 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v36 = temp_v36 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar5 + 8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v37 = temp_v37 + temp_v10;
            puVar4 = (unsigned int *)(int)pcVar5[2];
            if (puVar4 != (unsigned int *)0x1) {
              if (puVar4 == (unsigned int *)0x3) {
                FUN_002c0dbc(10,(int)pcVar5[3],0);
                puVar4 = (unsigned int *)((int)DAT_005f182c + 1);
                DAT_005f182c = puVar4;
              }
            }
            else {
              FUN_002c0dbc(9,(int)pcVar5[3],0);
              puVar4 = (unsigned int *)((int)DAT_005f1828 + 1);
              DAT_005f1828 = puVar4;
            }
          }
        }
        else {
          temp_v8 = puVar4 == param_1;
          if (temp_v8) {
            puVar4 = (unsigned int *)(int)pcVar5[1];
          }
          if (temp_v8 && puVar4 == param_2) {
            temp_v4 = (int)*(short *)(pcVar5 + 0xe);
            VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v0 = pcVar5[3];
            VectorSignedToFloat((int)*(short *)(pcVar5 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(pcVar5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(pcVar5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(pcVar5 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
            puVar4 = (unsigned int *)0x1;
            FUN_002de124(puVar4,(int)temp_v0,temp_v4);
          }
        }
      }
      else {
        temp_v8 = puVar4 == param_1;
        if (temp_v8) {
          puVar4 = (unsigned int *)(int)pcVar5[1];
        }
        if (temp_v8 && puVar4 == param_2) {
          temp_v4 = (int)*(short *)(pcVar5 + 0xe);
          VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v0 = pcVar5[3];
          VectorSignedToFloat((int)*(short *)(pcVar5 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(pcVar5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(pcVar5 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(pcVar5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          puVar4 = (unsigned int *)0x0;
          FUN_002de124(puVar4,(int)temp_v0,temp_v4);
        }
      }
      temp_v6 = temp_v6 + 1;
      FUN_003b998c();
    } while (temp_v6 < (int)puVar4);
  }
  if (((*(char *)(temp_v2 + 0xe14) != '\0') &&
      ((unsigned int *)(int)*(char *)(temp_v2 + 0xe15) == param_1)) &&
     ((unsigned int *)(int)*(char *)(temp_v2 + 0xe16) == param_2)) {
    temp_v68 = 1;
    temp_v6 = 0;
    if ('\0' < *(char *)(temp_v2 + 0xe17)) {
      temp_v32 = CONCAT44((int)((unsigned long long)temp_v30 >> 0x20),temp_v31);
      temp_v34 = (unsigned long long)(unsigned int)temp_v31 << 0x20;
      temp_v30 = CONCAT44(temp_v29,(int)temp_v30);
      do {
        temp_v0 = *(char *)(temp_v2 + temp_v6 + 0x15f4);
        if (temp_v0 != '\x01') {
          if (temp_v0 == '\x03') {
            temp_v4 = temp_v2 + temp_v6 * 2;
            temp_v66 = temp_v4 + 0x1600;
            temp_v1 = *(short *)(temp_v4 + 0x1604);
            temp_v4 = (int)temp_v1;
            FUN_003a315c();
            if ((*(short *)(temp_v4 + 0x14) == 0) || (temp_v5 = FUN_0018719c(), temp_v5 != 0)) {
              temp_v31 = (float)((unsigned long long)temp_v34 >> 0x20);
              temp_v29 = (float)((unsigned long long)temp_v32 >> 0x20);
              if (*(short *)(temp_v4 + 0x16) != 0) {
                temp_v5 = FUN_0018719c();
                temp_v31 = (float)((unsigned long long)temp_v34 >> 0x20);
                temp_v29 = (float)((unsigned long long)temp_v32 >> 0x20);
                if (temp_v5 != 0) goto LAB_002120ec;
              }
              temp_v35 = (float)((unsigned long long)temp_v30 >> 0x20);
              temp_v44 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 8),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v41 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 8),
                                                     (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v43 = (float)VectorSignedToFloat(-(int)*(short *)(temp_v4 + 10),
                                                     (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v37 = (float)VectorSignedToFloat(-(int)*(short *)(temp_v4 + 10),
                                                     (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v10 = (float)VectorSignedToFloat((int)*(char *)(temp_v4 + 0xe),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v23 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v35 <= temp_v10 * temp_v31) << 0x1d);
              temp_v11 = (float)temp_v30;
              for (temp_v10 = romwright_fabs_4(temp_v10 * temp_v31); temp_v26 = temp_v35, (int)temp_v10 >= 0x47800000;
                  temp_v10 = temp_v10 - temp_v11) {
              }
              for (; temp_v28 = temp_v35, (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - temp_v11) {
              }
              for (; (int)temp_v28 >= 0x47800000; temp_v28 = temp_v28 - temp_v11) {
              }
              temp_v24 = VectorFloatToUnsigned(temp_v10,3);
              temp_v18 = VectorFloatToUnsigned(temp_v26,3);
              temp_v15 = VectorFloatToUnsigned(temp_v28,3);
              temp_v20 = temp_v18 & 0xff;
              temp_v22 = (float)VectorUnsignedToFloat(temp_v18 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
              temp_v18 = temp_v24 & 0xff;
              temp_v19 = temp_v15 & 0xff;
              temp_v21 = (float)VectorUnsignedToFloat(temp_v24 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
              temp_v25 = (float)VectorUnsignedToFloat(temp_v15 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
              temp_v11 = (float)(&DAT_00536d14)[temp_v20 * 4] +
                       (temp_v26 - temp_v22) * (float)(&DAT_00536d1c)[temp_v20 * 4];
              temp_v14 = (float)(&DAT_00536d14)[temp_v18 * 4] +
                       (temp_v10 - temp_v21) * (float)(&DAT_00536d1c)[temp_v18 * 4];
              temp_v21 = (float)(&DAT_00536d18)[temp_v18 * 4] +
                       (temp_v10 - temp_v21) * (float)(&DAT_00536d20)[temp_v18 * 4];
              temp_v27 = (float)(&DAT_00536d14)[temp_v19 * 4] +
                       (temp_v28 - temp_v25) * (float)(&DAT_00536d1c)[temp_v19 * 4];
              temp_v10 = (float)(&DAT_00536d18)[temp_v19 * 4] +
                       (temp_v28 - temp_v25) * (float)(&DAT_00536d20)[temp_v19 * 4];
              temp_v57 = (float)(&DAT_00536d18)[temp_v20 * 4] +
                         (temp_v26 - temp_v22) * (float)(&DAT_00536d20)[temp_v20 * 4];
              if (!romwright_subpiece_4_1_0(temp_v23 >> 0x1d,0)) {
                temp_v14 = -temp_v14;
              }
              temp_v47 = temp_v10 * temp_v57;
              temp_v51 = temp_v27 * temp_v57;
              temp_v56 = temp_v14 * temp_v57;
              temp_v57 = temp_v21 * temp_v57;
              temp_v55 = -temp_v11;
              temp_v48 = temp_v14 * temp_v10 * temp_v11 - temp_v21 * temp_v27;
              temp_v53 = temp_v21 * temp_v27 * temp_v11 - temp_v14 * temp_v10;
              temp_v49 = temp_v14 * temp_v27 + temp_v21 * temp_v10 * temp_v11;
              temp_v52 = temp_v21 * temp_v10 + temp_v14 * temp_v27 * temp_v11;
              temp_v50 = 0;
              temp_v54 = 0;
              temp_v58 = 0;
              temp_v36 = temp_v29;
              temp_v38 = temp_v35;
              temp_v39 = temp_v29;
              temp_v40 = temp_v35;
              temp_v42 = temp_v29;
              temp_v45 = temp_v29;
              temp_v46 = temp_v35;
              temp_v60 = temp_v35;
              fStack_ac = temp_v29;
              fStack_a8 = temp_v35;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v38,&temp_v47,&temp_v60);
              temp_v60 = temp_v44;
              fStack_ac = temp_v45;
              fStack_a8 = temp_v46;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v47,&temp_v60);
              temp_v60 = temp_v41;
              fStack_ac = temp_v42;
              fStack_a8 = temp_v43;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v41,&temp_v47,&temp_v60);
              temp_v60 = temp_v35;
              fStack_ac = temp_v36;
              fStack_a8 = temp_v37;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v35,&temp_v47,&temp_v60);
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 0xc),
                                                  (unsigned char)(temp_v23 >> 0x16) & 3);
              temp_v11 = (float)((unsigned long long)temp_v30 >> 0x20);
              in_fpscr = (temp_v23 & 0xfffffff) | ((unsigned int)(temp_v11 <= temp_v10 * temp_v31) << 0x1d);
              temp_v67 = (int *)(unsigned int)!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0);
              for (temp_v10 = romwright_fabs_4(temp_v10 * temp_v31); temp_v26 = temp_v11, (int)temp_v10 >= 0x47800000;
                  temp_v10 = temp_v10 - (float)temp_v30) {
              }
              for (; (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - (float)temp_v30) {
              }
              temp_v19 = VectorFloatToUnsigned(temp_v11,3);
              temp_v23 = VectorFloatToUnsigned(temp_v10,3);
              temp_v24 = VectorFloatToUnsigned(temp_v26,3);
              temp_v18 = temp_v23 & 0xff;
              temp_v22 = (float)VectorUnsignedToFloat(temp_v23 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v23 = temp_v19 & 0xff;
              temp_v20 = temp_v24 & 0xff;
              temp_v21 = (float)VectorUnsignedToFloat(temp_v19 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v25 = (float)VectorUnsignedToFloat(temp_v24 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v28 = (float)(&DAT_00536d14)[temp_v18 * 4] +
                       (temp_v10 - temp_v22) * (float)(&DAT_00536d1c)[temp_v18 * 4];
              temp_v14 = (float)(&DAT_00536d14)[temp_v23 * 4] +
                       (temp_v11 - temp_v21) * (float)(&DAT_00536d1c)[temp_v23 * 4];
              temp_v11 = (float)(&DAT_00536d18)[temp_v23 * 4] +
                       (temp_v11 - temp_v21) * (float)(&DAT_00536d20)[temp_v23 * 4];
              temp_v21 = (float)(&DAT_00536d14)[temp_v20 * 4] +
                       (temp_v26 - temp_v25) * (float)(&DAT_00536d1c)[temp_v20 * 4];
              temp_v57 = (float)(&DAT_00536d18)[temp_v18 * 4] +
                         (temp_v10 - temp_v22) * (float)(&DAT_00536d20)[temp_v18 * 4];
              temp_v10 = (float)(&DAT_00536d18)[temp_v20 * 4] +
                       (temp_v26 - temp_v25) * (float)(&DAT_00536d20)[temp_v20 * 4];
              if (temp_v67 != (int *)0x0) {
                temp_v28 = -temp_v28;
              }
              temp_v47 = temp_v10 * temp_v57;
              temp_v55 = -temp_v28;
              temp_v51 = temp_v21 * temp_v57;
              temp_v56 = temp_v14 * temp_v57;
              temp_v57 = temp_v11 * temp_v57;
              temp_v48 = temp_v14 * temp_v10 * temp_v28 - temp_v11 * temp_v21;
              temp_v53 = temp_v11 * temp_v21 * temp_v28 - temp_v14 * temp_v10;
              temp_v49 = temp_v14 * temp_v21 + temp_v11 * temp_v10 * temp_v28;
              temp_v52 = temp_v11 * temp_v10 + temp_v14 * temp_v21 * temp_v28;
              temp_v50 = 0;
              temp_v54 = 0;
              temp_v58 = 0;
              temp_v60 = temp_v38;
              fStack_ac = temp_v39;
              fStack_a8 = temp_v40;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v38,&temp_v47,&temp_v60);
              temp_v60 = temp_v44;
              fStack_ac = temp_v45;
              fStack_a8 = temp_v46;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v47,&temp_v60);
              temp_v60 = temp_v41;
              fStack_ac = temp_v42;
              fStack_a8 = temp_v43;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v41,&temp_v47,&temp_v60);
              temp_v60 = temp_v35;
              fStack_ac = temp_v36;
              fStack_a8 = temp_v37;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v35,&temp_v47,&temp_v60);
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 2),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v38 = temp_v38 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 4),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v39 = temp_v39 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 6),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v40 = temp_v40 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 2),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v44 = temp_v44 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 4),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v45 = temp_v45 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 6),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v46 = temp_v46 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 2),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v41 = temp_v41 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 4),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v42 = temp_v42 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 6),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v43 = temp_v43 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 2),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v35 = temp_v35 + temp_v10;
              temp_v32 = CONCAT44(temp_v29,temp_v36);
              temp_v29 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 4),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v34 = CONCAT44(temp_v31,temp_v29);
              temp_v36 = temp_v36 + temp_v29;
              temp_v29 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 6),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v37 = temp_v37 + temp_v29;
              FUN_002c0dbc(0xd,(int)temp_v1,(int)*(short *)(temp_v66 + 0x44));
              DAT_005f1838 = DAT_005f1838 + 1;
            }
          }
        }
        else {
          temp_v4 = temp_v2 + temp_v6 * 2;
          temp_v5 = (int)*(short *)(temp_v4 + 0x1604);
          FUN_003a3070();
          if (((*(short *)(temp_v5 + 0x14) == 0) || (temp_v3 = FUN_0018719c(), temp_v3 != 0)) &&
             ((*(short *)(temp_v5 + 0x16) == 0 || (temp_v3 = FUN_0018719c(), temp_v3 == 0)))) {
            temp_v10 = (float)((unsigned long long)temp_v30 >> 0x20);
            temp_v29 = (float)((unsigned long long)temp_v34 >> 0x20);
            temp_v36 = (float)((unsigned long long)temp_v32 >> 0x20);
            temp_v44 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 8),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v41 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 8),
                                                   (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v43 = (float)VectorSignedToFloat(-(int)*(short *)(temp_v5 + 10),
                                                   (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v37 = (float)VectorSignedToFloat(-(int)*(short *)(temp_v5 + 10),
                                                   (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v31 = (float)VectorSignedToFloat((int)*(char *)(temp_v5 + 0xe),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v23 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 <= temp_v31 * temp_v29) << 0x1d);
            temp_v11 = (float)temp_v30;
            for (temp_v31 = romwright_fabs_4(temp_v31 * temp_v29); temp_v26 = temp_v10, (int)temp_v31 >= 0x47800000;
                temp_v31 = temp_v31 - temp_v11) {
            }
            for (; temp_v28 = temp_v10, (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - temp_v11) {
            }
            for (; (int)temp_v28 >= 0x47800000; temp_v28 = temp_v28 - temp_v11) {
            }
            temp_v24 = VectorFloatToUnsigned(temp_v31,3);
            temp_v18 = VectorFloatToUnsigned(temp_v26,3);
            temp_v15 = VectorFloatToUnsigned(temp_v28,3);
            temp_v20 = temp_v18 & 0xff;
            temp_v22 = (float)VectorUnsignedToFloat(temp_v18 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
            temp_v18 = temp_v24 & 0xff;
            temp_v19 = temp_v15 & 0xff;
            temp_v21 = (float)VectorUnsignedToFloat(temp_v24 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
            temp_v25 = (float)VectorUnsignedToFloat(temp_v15 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
            temp_v11 = (float)(&DAT_00536d14)[temp_v20 * 4] +
                     (temp_v26 - temp_v22) * (float)(&DAT_00536d1c)[temp_v20 * 4];
            temp_v14 = (float)(&DAT_00536d14)[temp_v18 * 4] +
                     (temp_v31 - temp_v21) * (float)(&DAT_00536d1c)[temp_v18 * 4];
            temp_v31 = (float)(&DAT_00536d18)[temp_v18 * 4] +
                     (temp_v31 - temp_v21) * (float)(&DAT_00536d20)[temp_v18 * 4];
            temp_v21 = (float)(&DAT_00536d14)[temp_v19 * 4] +
                     (temp_v28 - temp_v25) * (float)(&DAT_00536d1c)[temp_v19 * 4];
            temp_v28 = (float)(&DAT_00536d18)[temp_v19 * 4] +
                     (temp_v28 - temp_v25) * (float)(&DAT_00536d20)[temp_v19 * 4];
            if (!romwright_subpiece_4_1_0(temp_v23 >> 0x1d,0)) {
              temp_v14 = -temp_v14;
            }
            temp_v57 = (float)(&DAT_00536d18)[temp_v20 * 4] +
                       (temp_v26 - temp_v22) * (float)(&DAT_00536d20)[temp_v20 * 4];
            temp_v55 = -temp_v11;
            temp_v47 = temp_v28 * temp_v57;
            temp_v51 = temp_v21 * temp_v57;
            temp_v56 = temp_v14 * temp_v57;
            temp_v57 = temp_v31 * temp_v57;
            temp_v48 = temp_v14 * temp_v28 * temp_v11 - temp_v31 * temp_v21;
            temp_v53 = temp_v31 * temp_v21 * temp_v11 - temp_v14 * temp_v28;
            temp_v49 = temp_v14 * temp_v21 + temp_v31 * temp_v28 * temp_v11;
            temp_v52 = temp_v31 * temp_v28 + temp_v14 * temp_v21 * temp_v11;
            temp_v50 = 0;
            temp_v54 = 0;
            temp_v58 = 0;
            temp_v35 = temp_v10;
            temp_v38 = temp_v10;
            temp_v39 = temp_v36;
            temp_v40 = temp_v10;
            temp_v42 = temp_v36;
            temp_v45 = temp_v36;
            temp_v46 = temp_v10;
            temp_v60 = temp_v10;
            fStack_ac = temp_v36;
            fStack_a8 = temp_v10;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v38,&temp_v47,&temp_v60);
            temp_v60 = temp_v44;
            fStack_ac = temp_v45;
            fStack_a8 = temp_v46;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v47,&temp_v60);
            temp_v60 = temp_v41;
            fStack_ac = temp_v42;
            fStack_a8 = temp_v43;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v41,&temp_v47,&temp_v60);
            temp_v60 = temp_v35;
            fStack_ac = temp_v36;
            fStack_a8 = temp_v37;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v35,&temp_v47,&temp_v60);
            temp_v67 = (int *)0x0;
            temp_v31 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 0xc),
                                                (unsigned char)(temp_v23 >> 0x16) & 3);
            in_fpscr = (temp_v23 & 0xfffffff) | ((unsigned int)(temp_v10 <= temp_v31 * temp_v29) << 0x1d);
            for (temp_v29 = romwright_fabs_4(temp_v31 * temp_v29); temp_v31 = temp_v10, (int)temp_v29 >= 0x47800000;
                temp_v29 = temp_v29 - (float)temp_v30) {
            }
            for (; (int)temp_v31 >= 0x47800000; temp_v31 = temp_v31 - (float)temp_v30) {
            }
            temp_v19 = VectorFloatToUnsigned(temp_v10,3);
            temp_v23 = VectorFloatToUnsigned(temp_v29,3);
            temp_v24 = VectorFloatToUnsigned(temp_v31,3);
            temp_v18 = temp_v23 & 0xff;
            temp_v28 = (float)VectorUnsignedToFloat(temp_v23 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v23 = temp_v19 & 0xff;
            temp_v20 = temp_v24 & 0xff;
            temp_v26 = (float)VectorUnsignedToFloat(temp_v19 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v14 = (float)VectorUnsignedToFloat(temp_v24 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v11 = (float)(&DAT_00536d14)[temp_v23 * 4] +
                     (temp_v10 - temp_v26) * (float)(&DAT_00536d1c)[temp_v23 * 4];
            temp_v26 = (float)(&DAT_00536d18)[temp_v23 * 4] +
                     (temp_v10 - temp_v26) * (float)(&DAT_00536d20)[temp_v23 * 4];
            temp_v21 = (float)(&DAT_00536d14)[temp_v20 * 4] +
                     (temp_v31 - temp_v14) * (float)(&DAT_00536d1c)[temp_v20 * 4];
            temp_v10 = (float)(&DAT_00536d14)[temp_v18 * 4] +
                     (temp_v29 - temp_v28) * (float)(&DAT_00536d1c)[temp_v18 * 4];
            temp_v57 = (float)(&DAT_00536d18)[temp_v18 * 4] +
                       (temp_v29 - temp_v28) * (float)(&DAT_00536d20)[temp_v18 * 4];
            temp_v29 = (float)(&DAT_00536d18)[temp_v20 * 4] +
                     (temp_v31 - temp_v14) * (float)(&DAT_00536d20)[temp_v20 * 4];
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              temp_v10 = -temp_v10;
            }
            temp_v47 = temp_v29 * temp_v57;
            temp_v55 = -temp_v10;
            temp_v51 = temp_v21 * temp_v57;
            temp_v56 = temp_v11 * temp_v57;
            temp_v57 = temp_v26 * temp_v57;
            temp_v48 = temp_v11 * temp_v29 * temp_v10 - temp_v26 * temp_v21;
            temp_v53 = temp_v26 * temp_v21 * temp_v10 - temp_v11 * temp_v29;
            temp_v49 = temp_v11 * temp_v21 + temp_v26 * temp_v29 * temp_v10;
            temp_v52 = temp_v26 * temp_v29 + temp_v11 * temp_v21 * temp_v10;
            temp_v50 = 0;
            temp_v54 = 0;
            temp_v58 = 0;
            temp_v60 = temp_v38;
            fStack_ac = temp_v39;
            fStack_a8 = temp_v40;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v38,&temp_v47,&temp_v60);
            temp_v60 = temp_v44;
            fStack_ac = temp_v45;
            fStack_a8 = temp_v46;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v47,&temp_v60);
            temp_v60 = temp_v41;
            fStack_ac = temp_v42;
            fStack_a8 = temp_v43;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v41,&temp_v47,&temp_v60);
            temp_v60 = temp_v35;
            fStack_ac = temp_v36;
            fStack_a8 = temp_v37;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v35,&temp_v47,&temp_v60);
            temp_v29 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 2),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v38 = temp_v38 + temp_v29;
            temp_v29 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v39 = temp_v39 + temp_v29;
            temp_v29 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v40 = temp_v40 + temp_v29;
            temp_v29 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 2),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v44 = temp_v44 + temp_v29;
            temp_v29 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v45 = temp_v45 + temp_v29;
            temp_v29 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v46 = temp_v46 + temp_v29;
            temp_v29 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 2),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v41 = temp_v41 + temp_v29;
            temp_v29 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v42 = temp_v42 + temp_v29;
            temp_v29 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v43 = temp_v43 + temp_v29;
            temp_v29 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 2),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v35 = temp_v35 + temp_v29;
            temp_v29 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v36 = temp_v36 + temp_v29;
            temp_v29 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v37 = temp_v37 + temp_v29;
            FUN_002c0dbc(0xb,(int)*(char *)(temp_v5 + 0xf),(int)*(short *)(temp_v4 + 0x1644));
            DAT_005f1830 = DAT_005f1830 + 1;
          }
        }
LAB_002120ec:
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < *(char *)(temp_v2 + 0xe17));
    }
  }
  else {
    temp_v68 = 0;
    *(unsigned char *)(temp_v2 + 0xe14) = 1;
    *(char *)(temp_v2 + 0xe15) = (char)(int)param_1;
    *(char *)(temp_v2 + 0xe16) = (char)(int)param_2;
    *(unsigned char *)(temp_v2 + 0xe17) = 0;
    *(unsigned int *)(temp_v2 + 0x15f4) = 0;
    *(unsigned int *)(temp_v2 + 0x15f8) = 0;
    *(unsigned int *)(temp_v2 + 0x15fc) = 0;
    *(unsigned int *)(temp_v2 + 0x1600) = 0;
    *(unsigned int *)(temp_v2 + 0x1604) = 0;
    *(unsigned int *)(temp_v2 + 0x1608) = 0;
    *(unsigned int *)(temp_v2 + 0x160c) = 0;
    *(unsigned int *)(temp_v2 + 0x1610) = 0;
    *(unsigned int *)(temp_v2 + 0x1614) = 0;
    *(unsigned int *)(temp_v2 + 0x1618) = 0;
    *(unsigned int *)(temp_v2 + 0x161c) = 0;
    *(unsigned int *)(temp_v2 + 0x1620) = 0;
    *(unsigned int *)(temp_v2 + 0x1624) = 0;
    *(unsigned int *)(temp_v2 + 0x1628) = 0;
    *(unsigned int *)(temp_v2 + 0x162c) = 0;
    *(unsigned int *)(temp_v2 + 0x1630) = 0;
    *(unsigned int *)(temp_v2 + 0x1634) = 0;
    *(unsigned int *)(temp_v2 + 0x1638) = 0;
    *(unsigned int *)(temp_v2 + 0x163c) = 0;
    *(unsigned int *)(temp_v2 + 0x1640) = 0;
    *(unsigned int *)(temp_v2 + 0x1644) = 0;
    *(unsigned int *)(temp_v2 + 0x1648) = 0;
    *(unsigned int *)(temp_v2 + 0x164c) = 0;
    *(unsigned int *)(temp_v2 + 0x1650) = 0;
    *(unsigned int *)(temp_v2 + 0x1654) = 0;
    *(unsigned int *)(temp_v2 + 0x1658) = 0;
    *(unsigned int *)(temp_v2 + 0x165c) = 0;
    pcVar5 = (char *)0x0;
    *(unsigned int *)(temp_v2 + 0x1660) = 0;
    temp_v6 = FUN_003c30ac();
    if (0 < temp_v6) {
      temp_v69 = temp_v2 + 0x15f4;
      do {
        pcVar6 = pcVar5;
        FUN_003a3070();
        if (((((unsigned int *)(int)*pcVar6 != (unsigned int *)0xffffffff) &&
             ((unsigned int *)(int)*pcVar6 == param_1)) &&
            (((unsigned int *)(int)pcVar6[1] == param_2 &&
             ((temp_v7 = 0, *(short *)(pcVar6 + 0x14) == 0 || (temp_v6 = FUN_0018719c(), temp_v6 != 0))
             )))) && ((*(short *)(pcVar6 + 0x16) == 0 || (temp_v6 = FUN_0018719c(), temp_v6 == 0)))) {
          if (*(short *)(pcVar6 + 0x18) != 0) {
            temp_v6 = FUN_0018719c();
            if (temp_v6 != 0) {
              temp_v6 = FUN_0014bef4(99);
              if (temp_v6 <= pcVar6[0x1b]) {
LAB_002104a8:
                if (*(char *)(temp_v2 + 0xe17) < '\x0f') {
                  temp_v36 = (float)((unsigned long long)temp_v30 >> 0x20);
                  temp_v44 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 8),
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v41 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 8),
                                                         (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v43 = (float)VectorSignedToFloat(-(int)*(short *)(pcVar6 + 10),
                                                         (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v37 = (float)VectorSignedToFloat(-(int)*(short *)(pcVar6 + 10),
                                                         (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v67 = (int *)0x0;
                  temp_v70 = 0;
                  temp_v10 = (float)VectorSignedToFloat((int)pcVar6[0xe],(unsigned char)(in_fpscr >> 0x16) & 3)
                  ;
                  temp_v23 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v29 <= temp_v10 * temp_v31) << 0x1d);
                  temp_v11 = (float)temp_v30;
                  for (temp_v10 = romwright_fabs_4(temp_v10 * temp_v31); temp_v26 = temp_v29, (int)temp_v10 >= 0x47800000;
                      temp_v10 = temp_v10 - temp_v11) {
                  }
                  for (; temp_v28 = temp_v29, (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - temp_v11) {
                  }
                  for (; (int)temp_v28 >= 0x47800000; temp_v28 = temp_v28 - temp_v11) {
                  }
                  temp_v18 = VectorFloatToUnsigned(temp_v10,3);
                  temp_v20 = VectorFloatToUnsigned(temp_v26,3);
                  temp_v24 = VectorFloatToUnsigned(temp_v28,3);
                  temp_v19 = temp_v24 & 0xff;
                  temp_v22 = (float)VectorUnsignedToFloat(temp_v18 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
                  temp_v25 = (float)VectorUnsignedToFloat(temp_v20 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
                  temp_v18 = temp_v18 & 0xff;
                  temp_v27 = (float)VectorUnsignedToFloat(temp_v24 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
                  temp_v20 = temp_v20 & 0xff;
                  temp_v21 = (float)(&DAT_00536d14)[temp_v18 * 4] +
                           (temp_v10 - temp_v22) * (float)(&DAT_00536d1c)[temp_v18 * 4];
                  temp_v11 = (float)(&DAT_00536d14)[temp_v20 * 4] +
                           (temp_v26 - temp_v25) * (float)(&DAT_00536d1c)[temp_v20 * 4];
                  temp_v14 = (float)(&DAT_00536d14)[temp_v19 * 4] +
                           (temp_v28 - temp_v27) * (float)(&DAT_00536d1c)[temp_v19 * 4];
                  temp_v22 = (float)(&DAT_00536d18)[temp_v18 * 4] +
                           (temp_v10 - temp_v22) * (float)(&DAT_00536d20)[temp_v18 * 4];
                  temp_v10 = (float)(&DAT_00536d18)[temp_v19 * 4] +
                           (temp_v28 - temp_v27) * (float)(&DAT_00536d20)[temp_v19 * 4];
                  if (!romwright_subpiece_4_1_0(temp_v23 >> 0x1d,0)) {
                    temp_v21 = -temp_v21;
                  }
                  temp_v57 = (float)(&DAT_00536d18)[temp_v20 * 4] +
                             (temp_v26 - temp_v25) * (float)(&DAT_00536d20)[temp_v20 * 4];
                  temp_v47 = temp_v10 * temp_v57;
                  temp_v51 = temp_v14 * temp_v57;
                  temp_v56 = temp_v21 * temp_v57;
                  temp_v57 = temp_v22 * temp_v57;
                  temp_v55 = -temp_v11;
                  temp_v48 = temp_v21 * temp_v10 * temp_v11 - temp_v22 * temp_v14;
                  temp_v53 = temp_v22 * temp_v14 * temp_v11 - temp_v21 * temp_v10;
                  temp_v49 = temp_v21 * temp_v14 + temp_v22 * temp_v10 * temp_v11;
                  temp_v52 = temp_v22 * temp_v10 + temp_v21 * temp_v14 * temp_v11;
                  temp_v50 = 0;
                  temp_v54 = 0;
                  temp_v58 = 0;
                  temp_v11 = temp_v29;
                  temp_v35 = temp_v29;
                  temp_v38 = temp_v29;
                  temp_v39 = temp_v36;
                  temp_v40 = temp_v29;
                  temp_v42 = temp_v36;
                  temp_v45 = temp_v36;
                  temp_v46 = temp_v29;
                  temp_v60 = temp_v29;
                  fStack_ac = temp_v36;
                  fStack_a8 = temp_v29;
                  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v38,&temp_v47,&temp_v60);
                  temp_v60 = temp_v44;
                  fStack_ac = temp_v45;
                  fStack_a8 = temp_v46;
                  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v47,&temp_v60);
                  temp_v60 = temp_v41;
                  fStack_ac = temp_v42;
                  fStack_a8 = temp_v43;
                  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v41,&temp_v47,&temp_v60);
                  temp_v60 = temp_v35;
                  fStack_ac = temp_v36;
                  fStack_a8 = temp_v37;
                  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v35,&temp_v47,&temp_v60);
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 0xc),
                                                      (unsigned char)(temp_v23 >> 0x16) & 3);
                  in_fpscr = (temp_v23 & 0xfffffff) | ((unsigned int)(temp_v11 <= temp_v10 * temp_v31) << 0x1d);
                  temp_v61 = (unsigned int)!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0);
                  temp_v70 = 0;
                  for (temp_v10 = romwright_fabs_4(temp_v10 * temp_v31); temp_v26 = temp_v11, (int)temp_v10 >= 0x47800000;
                      temp_v10 = temp_v10 - (float)temp_v30) {
                  }
                  for (; (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - (float)temp_v30) {
                  }
                  temp_v20 = VectorFloatToUnsigned(temp_v11,3);
                  temp_v23 = VectorFloatToUnsigned(temp_v10,3);
                  temp_v19 = VectorFloatToUnsigned(temp_v26,3);
                  temp_v18 = temp_v19 & 0xff;
                  temp_v25 = (float)VectorUnsignedToFloat
                                            (temp_v20 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v22 = (float)VectorUnsignedToFloat
                                            (temp_v23 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v20 = temp_v20 & 0xff;
                  temp_v27 = (float)VectorUnsignedToFloat
                                            (temp_v19 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v23 = temp_v23 & 0xff;
                  temp_v21 = (float)(&DAT_00536d14)[temp_v20 * 4] +
                           (temp_v11 - temp_v25) * (float)(&DAT_00536d1c)[temp_v20 * 4];
                  temp_v28 = (float)(&DAT_00536d14)[temp_v23 * 4] +
                           (temp_v10 - temp_v22) * (float)(&DAT_00536d1c)[temp_v23 * 4];
                  temp_v14 = (float)(&DAT_00536d14)[temp_v18 * 4] +
                           (temp_v26 - temp_v27) * (float)(&DAT_00536d1c)[temp_v18 * 4];
                  temp_v26 = (float)(&DAT_00536d18)[temp_v18 * 4] +
                           (temp_v26 - temp_v27) * (float)(&DAT_00536d20)[temp_v18 * 4];
                  temp_v11 = (float)(&DAT_00536d18)[temp_v20 * 4] +
                           (temp_v11 - temp_v25) * (float)(&DAT_00536d20)[temp_v20 * 4];
                  if (temp_v61 != 0) {
                    temp_v28 = -temp_v28;
                  }
                  temp_v57 = (float)(&DAT_00536d18)[temp_v23 * 4] +
                             (temp_v10 - temp_v22) * (float)(&DAT_00536d20)[temp_v23 * 4];
                  temp_v47 = temp_v26 * temp_v57;
                  temp_v51 = temp_v14 * temp_v57;
                  temp_v56 = temp_v21 * temp_v57;
                  temp_v57 = temp_v11 * temp_v57;
                  temp_v55 = -temp_v28;
                  temp_v48 = temp_v21 * temp_v26 * temp_v28 - temp_v11 * temp_v14;
                  temp_v49 = temp_v21 * temp_v14 + temp_v11 * temp_v26 * temp_v28;
                  temp_v53 = temp_v11 * temp_v14 * temp_v28 - temp_v21 * temp_v26;
                  temp_v52 = temp_v11 * temp_v26 + temp_v21 * temp_v14 * temp_v28;
                  temp_v50 = 0;
                  temp_v54 = 0;
                  temp_v58 = 0;
                  temp_v60 = temp_v38;
                  fStack_ac = temp_v39;
                  fStack_a8 = temp_v40;
                  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v38,&temp_v47,&temp_v60);
                  temp_v60 = temp_v44;
                  fStack_ac = temp_v45;
                  fStack_a8 = temp_v46;
                  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v47,&temp_v60);
                  temp_v60 = temp_v41;
                  fStack_ac = temp_v42;
                  fStack_a8 = temp_v43;
                  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v41,&temp_v47,&temp_v60);
                  temp_v60 = temp_v35;
                  fStack_ac = temp_v36;
                  fStack_a8 = temp_v37;
                  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v35,&temp_v47,&temp_v60);
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 2),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v38 = temp_v38 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 4),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v39 = temp_v39 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 6),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v40 = temp_v40 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 2),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v44 = temp_v44 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 4),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v45 = temp_v45 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 6),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v46 = temp_v46 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 2),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v41 = temp_v41 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 4),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v42 = temp_v42 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 6),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v43 = temp_v43 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 2),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v35 = temp_v35 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 4),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v36 = temp_v36 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 6),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v37 = temp_v37 + temp_v10;
                  FUN_002c0dbc(0xb,(int)pcVar6[0xf]);
                  DAT_005f1830 = DAT_005f1830 + 1;
                  *(unsigned char *)(*(char *)(temp_v2 + 0xe17) + temp_v69) = 1;
                  *(short *)(temp_v2 + *(char *)(temp_v2 + 0xe17) * 2 + 0x1604) = (short)(int)pcVar5;
                  *(unsigned short *)(temp_v2 + *(char *)(temp_v2 + 0xe17) * 2 + 0x1624) = temp_v7;
                  *(short *)(temp_v2 + *(char *)(temp_v2 + 0xe17) * 2 + 0x1644) = (short)(int)pcVar5 + 0x1000
                  ;
                  *(char *)(temp_v2 + 0xe17) = *(char *)(temp_v2 + 0xe17) + '\x01';
                }
              }
            }
            else {
              temp_v6 = FUN_0014bef4(99);
              if (temp_v6 <= pcVar6[0x1a]) {
                temp_v7 = *(unsigned short *)(pcVar6 + 0x18);
                goto LAB_002104a8;
              }
            }
          }
          else {
            temp_v6 = FUN_0014bef4(99);
            if (temp_v6 <= pcVar6[0x1b]) goto LAB_002104a8;
          }
        }
        pcVar5 = pcVar5 + 1;
        temp_v6 = FUN_003c30ac();
      } while ((int)pcVar5 < temp_v6);
    }
    pcVar5 = (char *)0x0;
    temp_v6 = FUN_003c311c();
    if (0 < temp_v6) {
      do {
        pcVar6 = pcVar5;
        FUN_003a315c();
        if ((((((unsigned int *)(int)*pcVar6 != (unsigned int *)0xffffffff) &&
              ((unsigned int *)(int)*pcVar6 == param_1)) && ((unsigned int *)(int)pcVar6[1] == param_2))
            && ((temp_v7 = 0, *(short *)(pcVar6 + 0x14) == 0 ||
                (temp_v6 = FUN_0018719c(), temp_v6 != 0)))) &&
           ((*(short *)(pcVar6 + 0x16) == 0 || (temp_v6 = FUN_0018719c(), temp_v6 == 0)))) {
          if (*(short *)(pcVar6 + 0x18) != 0) {
            temp_v6 = FUN_0018719c();
            if (temp_v6 != 0) {
              temp_v6 = FUN_0014bef4(99);
              if (temp_v6 <= pcVar6[0x1b]) {
LAB_00210c7c:
                if (*(char *)(temp_v2 + 0xe17) < '\x0f') {
                  temp_v36 = (float)((unsigned long long)temp_v30 >> 0x20);
                  temp_v44 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 8),
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v41 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 8),
                                                         (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v43 = (float)VectorSignedToFloat(-(int)*(short *)(pcVar6 + 10),
                                                         (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v37 = (float)VectorSignedToFloat(-(int)*(short *)(pcVar6 + 10),
                                                         (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v67 = (int *)0x0;
                  temp_v10 = (float)VectorSignedToFloat((int)pcVar6[0xe],(unsigned char)(in_fpscr >> 0x16) & 3)
                  ;
                  temp_v23 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v29 <= temp_v10 * temp_v31) << 0x1d);
                  temp_v11 = (float)temp_v30;
                  for (temp_v10 = romwright_fabs_4(temp_v10 * temp_v31); temp_v26 = temp_v29, (int)temp_v10 >= 0x47800000;
                      temp_v10 = temp_v10 - temp_v11) {
                  }
                  for (; temp_v28 = temp_v29, (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - temp_v11) {
                  }
                  for (; (int)temp_v28 >= 0x47800000; temp_v28 = temp_v28 - temp_v11) {
                  }
                  temp_v24 = VectorFloatToUnsigned(temp_v10,3);
                  temp_v18 = VectorFloatToUnsigned(temp_v26,3);
                  temp_v20 = VectorFloatToUnsigned(temp_v28,3);
                  temp_v19 = temp_v24 & 0xff;
                  temp_v22 = (float)VectorUnsignedToFloat(temp_v24 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
                  temp_v25 = (float)VectorUnsignedToFloat(temp_v18 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
                  temp_v18 = temp_v18 & 0xff;
                  temp_v27 = (float)VectorUnsignedToFloat(temp_v20 & 0xffff,(unsigned char)(temp_v23 >> 0x16) & 3);
                  temp_v20 = temp_v20 & 0xff;
                  temp_v21 = (float)(&DAT_00536d14)[temp_v19 * 4] +
                           (temp_v10 - temp_v22) * (float)(&DAT_00536d1c)[temp_v19 * 4];
                  temp_v11 = (float)(&DAT_00536d14)[temp_v18 * 4] +
                           (temp_v26 - temp_v25) * (float)(&DAT_00536d1c)[temp_v18 * 4];
                  temp_v14 = (float)(&DAT_00536d14)[temp_v20 * 4] +
                           (temp_v28 - temp_v27) * (float)(&DAT_00536d1c)[temp_v20 * 4];
                  temp_v22 = (float)(&DAT_00536d18)[temp_v19 * 4] +
                           (temp_v10 - temp_v22) * (float)(&DAT_00536d20)[temp_v19 * 4];
                  temp_v10 = (float)(&DAT_00536d18)[temp_v20 * 4] +
                           (temp_v28 - temp_v27) * (float)(&DAT_00536d20)[temp_v20 * 4];
                  temp_v57 = (float)(&DAT_00536d18)[temp_v18 * 4] +
                             (temp_v26 - temp_v25) * (float)(&DAT_00536d20)[temp_v18 * 4];
                  if (!romwright_subpiece_4_1_0(temp_v23 >> 0x1d,0)) {
                    temp_v21 = -temp_v21;
                  }
                  temp_v47 = temp_v10 * temp_v57;
                  temp_v56 = temp_v21 * temp_v57;
                  temp_v51 = temp_v14 * temp_v57;
                  temp_v57 = temp_v22 * temp_v57;
                  temp_v55 = -temp_v11;
                  temp_v48 = temp_v21 * temp_v10 * temp_v11 - temp_v22 * temp_v14;
                  temp_v53 = temp_v22 * temp_v14 * temp_v11 - temp_v21 * temp_v10;
                  temp_v49 = temp_v21 * temp_v14 + temp_v22 * temp_v10 * temp_v11;
                  temp_v52 = temp_v22 * temp_v10 + temp_v21 * temp_v14 * temp_v11;
                  temp_v50 = 0;
                  temp_v54 = 0;
                  temp_v58 = 0;
                  temp_v11 = temp_v29;
                  temp_v35 = temp_v29;
                  temp_v38 = temp_v29;
                  temp_v39 = temp_v36;
                  temp_v40 = temp_v29;
                  temp_v42 = temp_v36;
                  temp_v45 = temp_v36;
                  temp_v46 = temp_v29;
                  temp_v60 = temp_v29;
                  fStack_ac = temp_v36;
                  fStack_a8 = temp_v29;
                  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v38,&temp_v47,&temp_v60);
                  temp_v60 = temp_v44;
                  fStack_ac = temp_v45;
                  fStack_a8 = temp_v46;
                  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v47,&temp_v60);
                  temp_v60 = temp_v41;
                  fStack_ac = temp_v42;
                  fStack_a8 = temp_v43;
                  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v41,&temp_v47,&temp_v60);
                  temp_v60 = temp_v35;
                  fStack_ac = temp_v36;
                  fStack_a8 = temp_v37;
                  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v35,&temp_v47,&temp_v60);
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 0xc),
                                                      (unsigned char)(temp_v23 >> 0x16) & 3);
                  in_fpscr = (temp_v23 & 0xfffffff) | ((unsigned int)(temp_v11 <= temp_v10 * temp_v31) << 0x1d);
                  temp_v62 = (unsigned int)!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0);
                  for (temp_v10 = romwright_fabs_4(temp_v10 * temp_v31); temp_v26 = temp_v11, (int)temp_v10 >= 0x47800000;
                      temp_v10 = temp_v10 - (float)temp_v30) {
                  }
                  for (; (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - (float)temp_v30) {
                  }
                  temp_v19 = VectorFloatToUnsigned(temp_v11,3);
                  temp_v20 = VectorFloatToUnsigned(temp_v10,3);
                  temp_v23 = VectorFloatToUnsigned(temp_v26,3);
                  temp_v18 = temp_v19 & 0xff;
                  temp_v21 = (float)VectorUnsignedToFloat
                                            (temp_v19 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v22 = (float)VectorUnsignedToFloat
                                            (temp_v20 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v20 = temp_v20 & 0xff;
                  temp_v25 = (float)VectorUnsignedToFloat
                                            (temp_v23 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v23 = temp_v23 & 0xff;
                  temp_v28 = (float)(&DAT_00536d14)[temp_v18 * 4] +
                           (temp_v11 - temp_v21) * (float)(&DAT_00536d1c)[temp_v18 * 4];
                  temp_v55 = (float)(&DAT_00536d14)[temp_v20 * 4] +
                             (temp_v10 - temp_v22) * (float)(&DAT_00536d1c)[temp_v20 * 4];
                  temp_v14 = (float)(&DAT_00536d14)[temp_v23 * 4] +
                           (temp_v26 - temp_v25) * (float)(&DAT_00536d1c)[temp_v23 * 4];
                  temp_v11 = (float)(&DAT_00536d18)[temp_v18 * 4] +
                           (temp_v11 - temp_v21) * (float)(&DAT_00536d20)[temp_v18 * 4];
                  temp_v26 = (float)(&DAT_00536d18)[temp_v23 * 4] +
                           (temp_v26 - temp_v25) * (float)(&DAT_00536d20)[temp_v23 * 4];
                  if (temp_v62 != 0) {
                    temp_v55 = -temp_v55;
                  }
                  temp_v57 = (float)(&DAT_00536d18)[temp_v20 * 4] +
                             (temp_v10 - temp_v22) * (float)(&DAT_00536d20)[temp_v20 * 4];
                  temp_v47 = temp_v26 * temp_v57;
                  temp_v51 = temp_v14 * temp_v57;
                  temp_v56 = temp_v28 * temp_v57;
                  temp_v57 = temp_v11 * temp_v57;
                  temp_v48 = temp_v28 * temp_v26 * temp_v55 - temp_v11 * temp_v14;
                  temp_v53 = temp_v11 * temp_v14 * temp_v55 - temp_v28 * temp_v26;
                  temp_v49 = temp_v28 * temp_v14 + temp_v11 * temp_v26 * temp_v55;
                  temp_v52 = temp_v11 * temp_v26 + temp_v28 * temp_v14 * temp_v55;
                  temp_v55 = -temp_v55;
                  temp_v50 = 0;
                  temp_v54 = 0;
                  temp_v58 = 0;
                  temp_v60 = temp_v38;
                  fStack_ac = temp_v39;
                  fStack_a8 = temp_v40;
                  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v38,&temp_v47,&temp_v60);
                  temp_v60 = temp_v44;
                  fStack_ac = temp_v45;
                  fStack_a8 = temp_v46;
                  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v47,&temp_v60);
                  temp_v60 = temp_v41;
                  fStack_ac = temp_v42;
                  fStack_a8 = temp_v43;
                  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v41,&temp_v47,&temp_v60);
                  temp_v60 = temp_v35;
                  fStack_ac = temp_v36;
                  fStack_a8 = temp_v37;
                  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v35,&temp_v47,&temp_v60);
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 2),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v38 = temp_v38 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 4),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v39 = temp_v39 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 6),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v40 = temp_v40 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 2),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v44 = temp_v44 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 4),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v45 = temp_v45 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 6),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v46 = temp_v46 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 2),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v41 = temp_v41 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 4),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v42 = temp_v42 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 6),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v43 = temp_v43 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 2),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v35 = temp_v35 + temp_v10;
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 4),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v36 = temp_v36 + temp_v10;
                  temp_v59 = (int)(short)((short)(int)pcVar5 + 0x1200);
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 6),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v37 = temp_v37 + temp_v10;
                  FUN_002c0dbc(0xd);
                  DAT_005f1838 = DAT_005f1838 + 1;
                  *(unsigned char *)((int)*(char *)(temp_v2 + 0xe17) + temp_v2 + 0x15f4) = 3;
                  *(short *)(temp_v2 + *(char *)(temp_v2 + 0xe17) * 2 + 0x1604) = (short)(int)pcVar5;
                  *(unsigned short *)(temp_v2 + *(char *)(temp_v2 + 0xe17) * 2 + 0x1624) = temp_v7;
                  *(short *)(temp_v2 + *(char *)(temp_v2 + 0xe17) * 2 + 0x1644) = (short)temp_v59;
                  *(char *)(temp_v2 + 0xe17) = *(char *)(temp_v2 + 0xe17) + '\x01';
                }
              }
            }
            else {
              temp_v6 = FUN_0014bef4(99);
              if (temp_v6 <= pcVar6[0x1a]) {
                temp_v7 = *(unsigned short *)(pcVar6 + 0x18);
                goto LAB_00210c7c;
              }
            }
          }
          else {
            temp_v6 = FUN_0014bef4(99);
            if (temp_v6 <= pcVar6[0x1b]) goto LAB_00210c7c;
          }
        }
        pcVar5 = pcVar5 + 1;
        temp_v6 = FUN_003c311c();
      } while ((int)pcVar5 < temp_v6);
    }
  }
  FUN_00311880(param_1,param_2,temp_v68);
  return;
}

} /* extern "C" */
