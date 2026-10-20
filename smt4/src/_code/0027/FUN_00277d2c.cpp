/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00277d2c` (_code @ 0x277d2c, 0x2f9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021dbc0(...);

int CONCAT44(...);
int FUN_0020e738(...);
int FUN_00291ba4(void);
int FUN_00291c20(...);
int FUN_00291e28(void);
int FUN_0030f654(void);
int FUN_0031d51c(void);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(...);

/* stack frame of param_2: 33 slot(s), 132 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int spC0; /* 0xc0: local_c0 */
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

extern unsigned int DAT_00407ed0; /* 0x407ed0 */
extern unsigned int DAT_00407ed4; /* 0x407ed4 */
extern unsigned int DAT_00407ed8; /* 0x407ed8 */
extern unsigned int DAT_00407edc; /* 0x407edc */
extern unsigned int g_gameState; /* 0x49f91c */
extern unsigned int DAT_0049faf0; /* 0x49faf0 */
extern unsigned int DAT_0049faf4; /* 0x49faf4 */
extern unsigned int DAT_0049faf8; /* 0x49faf8 */
extern unsigned int DAT_0049fafc; /* 0x49fafc */
extern unsigned int DAT_0049fb00; /* 0x49fb00 */
extern unsigned int DAT_0049fb04; /* 0x49fb04 */
extern unsigned int DAT_0049fb08; /* 0x49fb08 */
extern unsigned int DAT_0049fb0c; /* 0x49fb0c */
extern unsigned int DAT_0049fb10; /* 0x49fb10 */
extern unsigned int *DAT_0049fb14; /* 0x49fb14 */
extern unsigned int *DAT_0049fb18; /* 0x49fb18 */
extern int DAT_0049fb1c; /* 0x49fb1c */
extern unsigned int DAT_0049fb20; /* 0x49fb20 */
extern int DAT_0049fb24; /* 0x49fb24 */
extern unsigned int DAT_0049fb28; /* 0x49fb28 */
extern unsigned int DAT_0049fb2c; /* 0x49fb2c */
extern unsigned char DAT_004be698; /* 0x4be698 */
extern unsigned int *DAT_004bf898; /* 0x4bf898 */
extern unsigned char DAT_004bf89c; /* 0x4bf89c */
extern unsigned int DAT_004c149c; /* 0x4c149c */
extern unsigned int DAT_004c2420; /* 0x4c2420 */
extern unsigned char DAT_004c2424; /* 0x4c2424 */
extern unsigned int *DAT_004c3224; /* 0x4c3224 */

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
/* Supplied declaration required: FUN_0020e738. */
/* Supplied declaration required: FUN_0021dbc0. */
/* Supplied declaration required: FUN_00291ba4. */
/* Supplied declaration required: FUN_00291c20. */
/* Supplied declaration required: FUN_00291e28. */
extern int FUN_002c09d0(void);
extern int FUN_002c09f4(unsigned int);
extern int FUN_002c2950(void);
extern unsigned int *FUN_002d2a00(int);
extern char *FUN_002d4f64(int);
extern char *FUN_002fb42c(int);
/* Supplied declaration required: FUN_0030f654. */
extern unsigned int FUN_00316e44(int);
/* Supplied declaration required: FUN_0031d51c. */
extern int FUN_00323500(void);
extern int FUN_00323570(void);
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x0027947c) */
/* WARNING: Removing unreachable block (ram,0x0027a7e8) */
/* WARNING: Removing unreachable block (ram,0x00278914) */
/* WARNING: Removing unreachable block (ram,0x0027a7e0) */
/* WARNING: Removing unreachable block (ram,0x0027946c) */
/* WARNING: Removing unreachable block (ram,0x00279a20) */
/* WARNING: Removing unreachable block (ram,0x00279254) */
/* WARNING: Removing unreachable block (ram,0x0027aa14) */
/* WARNING: Removing unreachable block (ram,0x0027a348) */
/* WARNING: Removing unreachable block (ram,0x00278928) */
/* WARNING: Removing unreachable block (ram,0x00278228) */
/* WARNING: Removing unreachable block (ram,0x0027a338) */
/* WARNING: Removing unreachable block (ram,0x0027aa00) */
/* WARNING: Removing unreachable block (ram,0x00279248) */
/* WARNING: Removing unreachable block (ram,0x00279a14) */
/* WARNING: Removing unreachable block (ram,0x00279c30) */
/* WARNING: Removing unreachable block (ram,0x00278230) */
/* WARNING: Removing unreachable block (ram,0x00278b44) */
/* WARNING: Removing unreachable block (ram,0x00279c44) */
/* WARNING: Removing unreachable block (ram,0x00278b54) */
/* WARNING: Removing unreachable block (ram,0x00278468) */
/* WARNING: Removing unreachable block (ram,0x0027a128) */
/* WARNING: Removing unreachable block (ram,0x00278478) */
/* WARNING: Removing unreachable block (ram,0x0027a130) */

void FUN_00277d2c(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 4 goto(s); irregular input(s): in_fpscr; 36 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  char *pcVar4;
  int temp_v2;
  char *pcVar6;
  int temp_v3;
  int temp_v4;
  unsigned short temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  unsigned int temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  unsigned long long temp_v29;
  float temp_v30;
  unsigned int temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  unsigned int temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  unsigned int temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  unsigned int temp_v43;
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
  float fStack_bc;
  float fStack_b8;
  unsigned int temp_v57;
  unsigned int temp_v58;
  unsigned int temp_v59;
  unsigned int temp_v60;
  int *temp_v61;
  int temp_v62;
  int temp_v63;
  int temp_v64;
  
  temp_v1 = FUN_002c2950();
  DAT_004bf898 = (unsigned int *)0x0;
  temp_v61 = (int *)&DAT_004c149c;
  DAT_004c149c = 0;
  DAT_004c2420 = 0;
  puVar3 = (unsigned int *)&DAT_004c2424;
  temp_v4 = 0;
  DAT_004c3224 = (unsigned int *)0x0;
  DAT_0049faf0 = 0;
  DAT_0049faf4 = 0;
  DAT_0049faf8 = 0;
  DAT_0049fafc = 0;
  DAT_0049fb00 = 0;
  DAT_0049fb04 = 0;
  DAT_0049fb08 = 0;
  DAT_0049fb0c = 0;
  DAT_0049fb10 = 0;
  DAT_0049fb14 = (unsigned int *)0x0;
  DAT_0049fb18 = (unsigned int *)0x0;
  DAT_0049fb1c = 0;
  DAT_0049fb20 = 0;
  DAT_0049fb24 = 0;
  DAT_0049fb28 = 0;
  DAT_0049fb2c = 0;
  FUN_00291e28();
  temp_v30 = 0.7111111f;
  temp_v28 = 0.0f;
  temp_v29 = 0x40a0000047800000;
  if (0 < (int)puVar3) {
    do {
      pcVar4 = (char *)FUN_002d4f64(temp_v4);
      puVar3 = (unsigned int *)(int)*pcVar4;
      if (puVar3 == (unsigned int *)0xffffffff) break;
      temp_v0 = pcVar4[2];
      if (temp_v0 != '\x06') {
        if (temp_v0 != '\a') {
          if (((int)param_1 < 100) || (temp_v0 != '\x01')) {
            temp_v6 = puVar3 == param_1;
            if (temp_v6) {
              puVar3 = (unsigned int *)(int)pcVar4[1];
            }
            if ((temp_v6 && puVar3 == param_2) &&
               ((temp_v0 != '\x02' ||
                (puVar3 = (unsigned int *)FUN_002d2a00((int)pcVar4[3]), puVar3 == (unsigned int *)0x0)))
               ) {
              temp_v45 = (float)((unsigned long long)temp_v29 >> 0x20);
              temp_v53 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 10),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v50 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 10),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v52 = (float)VectorSignedToFloat(-(int)*(short *)(pcVar4 + 0xc),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v46 = (float)VectorSignedToFloat(-(int)*(short *)(pcVar4 + 0xc),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 0x10),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v21 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v28 <= temp_v10 * temp_v30) << 0x1d);
              temp_v57 = (unsigned int)!romwright_subpiece_4_1_0(temp_v21 >> 0x1d,0);
              temp_v58 = 0;
              temp_v59 = 0;
              temp_v8 = (float)temp_v29;
              for (temp_v10 = romwright_fabs_4(temp_v10 * temp_v30); temp_v26 = temp_v28, (int)temp_v10 >= 0x47800000;
                  temp_v10 = temp_v10 - temp_v8) {
              }
              for (; temp_v25 = temp_v28, (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - temp_v8) {
              }
              for (; (int)temp_v25 >= 0x47800000; temp_v25 = temp_v25 - temp_v8) {
              }
              temp_v16 = VectorFloatToUnsigned(temp_v10,3);
              temp_v17 = VectorFloatToUnsigned(temp_v26,3);
              temp_v18 = VectorFloatToUnsigned(temp_v25,3);
              temp_v24 = (float)VectorUnsignedToFloat(temp_v16 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
              temp_v23 = (float)VectorUnsignedToFloat(temp_v17 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
              temp_v19 = (float)VectorUnsignedToFloat(temp_v18 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
              temp_v16 = temp_v16 & 0xff;
              temp_v18 = temp_v18 & 0xff;
              temp_v17 = temp_v17 & 0xff;
              temp_v20 = (float)(&DAT_00407ed0)[temp_v16 * 4] +
                       (temp_v10 - temp_v24) * (float)(&DAT_00407ed8)[temp_v16 * 4];
              temp_v8 = (float)(&DAT_00407ed0)[temp_v17 * 4] +
                       (temp_v26 - temp_v23) * (float)(&DAT_00407ed8)[temp_v17 * 4];
              temp_v12 = (float)(&DAT_00407ed0)[temp_v18 * 4] +
                       (temp_v25 - temp_v19) * (float)(&DAT_00407ed8)[temp_v18 * 4];
              if (temp_v57 != 0) {
                temp_v20 = -temp_v20;
              }
              temp_v24 = (float)(&DAT_00407ed4)[temp_v16 * 4] +
                       (temp_v10 - temp_v24) * (float)(&DAT_00407edc)[temp_v16 * 4];
              temp_v10 = (float)(&DAT_00407ed4)[temp_v18 * 4] +
                       (temp_v25 - temp_v19) * (float)(&DAT_00407edc)[temp_v18 * 4];
              temp_v40 = -temp_v8;
              temp_v42 = (float)(&DAT_00407ed4)[temp_v17 * 4] +
                         (temp_v26 - temp_v23) * (float)(&DAT_00407edc)[temp_v17 * 4];
              temp_v32 = temp_v10 * temp_v42;
              temp_v36 = temp_v12 * temp_v42;
              temp_v41 = temp_v20 * temp_v42;
              temp_v42 = temp_v24 * temp_v42;
              temp_v34 = temp_v20 * temp_v12 + temp_v24 * temp_v10 * temp_v8;
              temp_v33 = temp_v20 * temp_v10 * temp_v8 - temp_v24 * temp_v12;
              temp_v38 = temp_v24 * temp_v12 * temp_v8 - temp_v20 * temp_v10;
              temp_v37 = temp_v24 * temp_v10 + temp_v20 * temp_v12 * temp_v8;
              temp_v35 = 0;
              temp_v39 = 0;
              temp_v43 = 0;
              temp_v8 = temp_v28;
              temp_v44 = temp_v28;
              temp_v47 = temp_v28;
              temp_v48 = temp_v45;
              temp_v49 = temp_v28;
              temp_v51 = temp_v45;
              temp_v54 = temp_v45;
              temp_v55 = temp_v28;
              temp_v56 = temp_v28;
              fStack_bc = temp_v45;
              fStack_b8 = temp_v28;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v47,&temp_v32,&temp_v56);
              temp_v56 = temp_v53;
              fStack_bc = temp_v54;
              fStack_b8 = temp_v55;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v53,&temp_v32,&temp_v56);
              temp_v56 = temp_v50;
              fStack_bc = temp_v51;
              fStack_b8 = temp_v52;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v50,&temp_v32,&temp_v56);
              temp_v56 = temp_v44;
              fStack_bc = temp_v45;
              fStack_b8 = temp_v46;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v32,&temp_v56);
              temp_v57 = 0;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 0xe),
                                                  (unsigned char)(temp_v21 >> 0x16) & 3);
              in_fpscr = (temp_v21 & 0xfffffff) | ((unsigned int)(temp_v8 <= temp_v10 * temp_v30) << 0x1d);
              temp_v6 = romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0);
              temp_v10 = romwright_fabs_4(temp_v10 * temp_v30);
              temp_v58 = (unsigned int)!temp_v6;
              if (temp_v6) {
                temp_v58 = 0;
              }
              temp_v59 = 0;
              for (; temp_v26 = temp_v8, (int)temp_v10 >= 0x47800000; temp_v10 = temp_v10 - (float)temp_v29) {
              }
              for (; (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - (float)temp_v29) {
              }
              temp_v21 = VectorFloatToUnsigned(temp_v8,3);
              temp_v17 = VectorFloatToUnsigned(temp_v10,3);
              temp_v18 = temp_v21 & 0xff;
              temp_v22 = VectorFloatToUnsigned(temp_v26,3);
              temp_v16 = temp_v17 & 0xff;
              temp_v25 = (float)VectorUnsignedToFloat(temp_v21 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v19 = (float)VectorUnsignedToFloat(temp_v17 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v21 = temp_v22 & 0xff;
              temp_v12 = (float)VectorUnsignedToFloat(temp_v22 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v20 = (float)(&DAT_00407ed0)[temp_v18 * 4] +
                       (temp_v8 - temp_v25) * (float)(&DAT_00407ed8)[temp_v18 * 4];
              temp_v25 = (float)(&DAT_00407ed4)[temp_v18 * 4] +
                       (temp_v8 - temp_v25) * (float)(&DAT_00407edc)[temp_v18 * 4];
              temp_v8 = (float)(&DAT_00407ed0)[temp_v16 * 4] +
                       (temp_v10 - temp_v19) * (float)(&DAT_00407ed8)[temp_v16 * 4];
              temp_v42 = (float)(&DAT_00407ed4)[temp_v16 * 4] +
                         (temp_v10 - temp_v19) * (float)(&DAT_00407edc)[temp_v16 * 4];
              temp_v10 = (float)(&DAT_00407ed0)[temp_v21 * 4] +
                       (temp_v26 - temp_v12) * (float)(&DAT_00407ed8)[temp_v21 * 4];
              temp_v26 = (float)(&DAT_00407ed4)[temp_v21 * 4] +
                       (temp_v26 - temp_v12) * (float)(&DAT_00407edc)[temp_v21 * 4];
              if (temp_v58 != 0) {
                temp_v8 = -temp_v8;
              }
              temp_v32 = temp_v26 * temp_v42;
              temp_v40 = -temp_v8;
              temp_v36 = temp_v10 * temp_v42;
              temp_v41 = temp_v20 * temp_v42;
              temp_v42 = temp_v25 * temp_v42;
              temp_v33 = temp_v20 * temp_v26 * temp_v8 - temp_v25 * temp_v10;
              temp_v34 = temp_v20 * temp_v10 + temp_v25 * temp_v26 * temp_v8;
              temp_v38 = temp_v25 * temp_v10 * temp_v8 - temp_v20 * temp_v26;
              temp_v37 = temp_v25 * temp_v26 + temp_v20 * temp_v10 * temp_v8;
              temp_v35 = 0;
              temp_v39 = 0;
              temp_v43 = 0;
              temp_v56 = temp_v47;
              fStack_bc = temp_v48;
              fStack_b8 = temp_v49;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v47,&temp_v32,&temp_v56);
              temp_v56 = temp_v53;
              fStack_bc = temp_v54;
              fStack_b8 = temp_v55;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v53,&temp_v32,&temp_v56);
              temp_v56 = temp_v50;
              fStack_bc = temp_v51;
              fStack_b8 = temp_v52;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v50,&temp_v32,&temp_v56);
              temp_v56 = temp_v44;
              fStack_bc = temp_v45;
              fStack_b8 = temp_v46;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v32,&temp_v56);
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 4),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v47 = temp_v47 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 6),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v48 = temp_v48 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 8),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v49 = temp_v49 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 4),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v53 = temp_v53 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 6),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v54 = temp_v54 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 8),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v55 = temp_v55 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 4),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v50 = temp_v50 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 6),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v51 = temp_v51 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 8),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v52 = temp_v52 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 4),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v44 = temp_v44 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 6),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v45 = temp_v45 + temp_v10;
              temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 8),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v46 = temp_v46 + temp_v10;
              FUN_00291c20(pcVar4[2],(int)*(short *)(pcVar4 + 0x12),(int)pcVar4[3]);
              temp_v0 = pcVar4[2];
              puVar3 = &g_gameState + temp_v0;
              (&DAT_0049faf0)[temp_v0] = (&DAT_0049faf0)[temp_v0] + 1;
            }
          }
          else if (puVar3 == param_1) {
            temp_v7 = VectorSignedToFloat((int)*(short *)(pcVar4 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v15 = VectorSignedToFloat((int)*(short *)(pcVar4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v0 = pcVar4[1];
            temp_v9 = VectorSignedToFloat((int)*(short *)(pcVar4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v11 = VectorSignedToFloat((int)*(short *)(pcVar4 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3)
            ;
            temp_v2 = (int)DAT_004c3224 * 0x1c;
            *(unsigned int *)(&DAT_004c2424 + temp_v2) = temp_v7;
            *(float *)(temp_v2 + 0x4c2428) = temp_v28;
            *(unsigned int *)(temp_v2 + 0x4c242c) = temp_v15;
            *(unsigned int *)(temp_v2 + 0x4c2430) = temp_v9;
            *(float *)(temp_v2 + 0x4c2434) = temp_v28;
            *(unsigned int *)(temp_v2 + 0x4c2438) = temp_v11;
            *(int *)(temp_v2 + 0x4c243c) = (int)temp_v0;
            puVar3 = (unsigned int *)((int)DAT_004c3224 + 1);
            DAT_004c3224 = puVar3;
          }
        }
        else if (puVar3 == param_1) {
          temp_v7 = VectorSignedToFloat((int)*(short *)(pcVar4 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v9 = VectorSignedToFloat((int)*(short *)(pcVar4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v15 = VectorSignedToFloat((int)*(short *)(pcVar4 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v11 = VectorSignedToFloat((int)*(short *)(pcVar4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v0 = pcVar4[1];
          temp_v2 = *temp_v61 * 0x1c;
          temp_v5 = *(unsigned short *)(pcVar4 + 0x12);
          *(unsigned int *)(&DAT_004bf89c + temp_v2) = temp_v7;
          *(float *)(temp_v2 + 0x4bf8a0) = temp_v28;
          *(float *)(temp_v2 + 0x4bf8ac) = temp_v28;
          *(unsigned int *)(temp_v2 + 0x4bf8b0) = temp_v15;
          *(unsigned int *)(temp_v2 + 0x4bf8a4) = temp_v9;
          *(unsigned int *)(temp_v2 + 0x4bf8a8) = temp_v11;
          *(unsigned short *)(temp_v2 + 0x4bf8b4) = temp_v5;
          *(short *)(temp_v2 + 0x4bf8b6) = (short)temp_v0;
          puVar3 = (unsigned int *)(*temp_v61 + 1);
          *temp_v61 = (int)puVar3;
          if (((int)param_1 >= 100) &&
             (puVar3 = (unsigned int *)(int)*(short *)(pcVar4 + 0x12),
             puVar3 == (unsigned int *)0x4 || puVar3 == (unsigned int *)0x9)) {
            temp_v7 = VectorSignedToFloat((int)*(short *)(pcVar4 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v15 = VectorSignedToFloat((int)*(short *)(pcVar4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v0 = pcVar4[1];
            temp_v9 = VectorSignedToFloat((int)*(short *)(pcVar4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v11 = VectorSignedToFloat((int)*(short *)(pcVar4 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3)
            ;
            temp_v2 = (int)DAT_004c3224 * 0x1c;
            *(unsigned int *)(&DAT_004c2424 + temp_v2) = temp_v7;
            *(float *)(temp_v2 + 0x4c2428) = temp_v28;
            *(unsigned int *)(temp_v2 + 0x4c242c) = temp_v15;
            *(unsigned int *)(temp_v2 + 0x4c2430) = temp_v9;
            *(float *)(temp_v2 + 0x4c2434) = temp_v28;
            *(unsigned int *)(temp_v2 + 0x4c2438) = temp_v11;
            *(int *)(temp_v2 + 0x4c243c) = (int)temp_v0;
            puVar3 = (unsigned int *)((int)DAT_004c3224 + 1);
            DAT_004c3224 = puVar3;
          }
        }
      }
      else if (puVar3 == param_1) {
        temp_v0 = pcVar4[1];
        temp_v9 = VectorSignedToFloat((int)*(short *)(pcVar4 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v11 = VectorSignedToFloat((int)*(short *)(pcVar4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v15 = VectorSignedToFloat((int)*(short *)(pcVar4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v31 = VectorSignedToFloat((int)*(short *)(pcVar4 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v7 = FUN_00316e44((int)*(short *)(pcVar4 + 0x12));
        temp_v2 = (int)DAT_004bf898 * 0x20;
        *(unsigned int *)(&DAT_004be698 + temp_v2) = temp_v9;
        *(float *)(temp_v2 + 0x4be69c) = temp_v28;
        *(float *)(temp_v2 + 0x4be6a8) = temp_v28;
        *(unsigned int *)(temp_v2 + 0x4be6ac) = temp_v31;
        *(unsigned int *)(temp_v2 + 0x4be6a0) = temp_v11;
        *(unsigned int *)(temp_v2 + 0x4be6a4) = temp_v15;
        *(unsigned int *)(temp_v2 + 0x4be6b0) = temp_v7;
        *(int *)(temp_v2 + 0x4be6b4) = (int)temp_v0;
        puVar3 = (unsigned int *)((int)DAT_004bf898 + 1);
        DAT_004bf898 = puVar3;
      }
      temp_v4 = temp_v4 + 1;
      FUN_00291e28();
    } while (temp_v4 < (int)puVar3);
  }
  temp_v4 = 0;
  FUN_0031d51c();
  if (0 < (int)puVar3) {
    do {
      pcVar4 = (char *)FUN_002fb42c(temp_v4);
      puVar3 = (unsigned int *)(int)*pcVar4;
      if (puVar3 == (unsigned int *)0xffffffff) break;
      if (pcVar4[2] != '\0') {
        if (pcVar4[2] != '\x02') {
          if ((puVar3 == param_1) && (puVar3 = (unsigned int *)(int)pcVar4[1], puVar3 == param_2)) {
            temp_v45 = (float)((unsigned long long)temp_v29 >> 0x20);
            temp_v53 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 10),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v50 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 10),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v52 = (float)VectorSignedToFloat(-(int)*(short *)(pcVar4 + 0xc),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v46 = (float)VectorSignedToFloat(-(int)*(short *)(pcVar4 + 0xc),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 0x10),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v21 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v28 <= temp_v10 * temp_v30) << 0x1d);
            temp_v58 = (unsigned int)!romwright_subpiece_4_1_0(temp_v21 >> 0x1d,0);
            temp_v8 = (float)temp_v29;
            for (temp_v10 = romwright_fabs_4(temp_v10 * temp_v30); temp_v26 = temp_v28, (int)temp_v10 >= 0x47800000;
                temp_v10 = temp_v10 - temp_v8) {
            }
            for (; temp_v25 = temp_v28, (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - temp_v8) {
            }
            for (; (int)temp_v25 >= 0x47800000; temp_v25 = temp_v25 - temp_v8) {
            }
            temp_v22 = VectorFloatToUnsigned(temp_v10,3);
            temp_v13 = VectorFloatToUnsigned(temp_v26,3);
            temp_v16 = temp_v22 & 0xff;
            temp_v14 = VectorFloatToUnsigned(temp_v25,3);
            temp_v18 = temp_v13 & 0xff;
            temp_v17 = temp_v14 & 0xff;
            temp_v23 = (float)VectorUnsignedToFloat(temp_v22 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
            temp_v19 = (float)VectorUnsignedToFloat(temp_v13 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
            temp_v12 = (float)VectorUnsignedToFloat(temp_v14 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
            temp_v20 = (float)(&DAT_00407ed0)[temp_v16 * 4] +
                     (temp_v10 - temp_v23) * (float)(&DAT_00407ed8)[temp_v16 * 4];
            temp_v8 = (float)(&DAT_00407ed0)[temp_v18 * 4] +
                     (temp_v26 - temp_v19) * (float)(&DAT_00407ed8)[temp_v18 * 4];
            if (temp_v58 != 0) {
              temp_v20 = -temp_v20;
            }
            temp_v24 = (float)(&DAT_00407ed0)[temp_v17 * 4] +
                     (temp_v25 - temp_v12) * (float)(&DAT_00407ed8)[temp_v17 * 4];
            temp_v23 = (float)(&DAT_00407ed4)[temp_v16 * 4] +
                     (temp_v10 - temp_v23) * (float)(&DAT_00407edc)[temp_v16 * 4];
            temp_v10 = (float)(&DAT_00407ed4)[temp_v17 * 4] +
                     (temp_v25 - temp_v12) * (float)(&DAT_00407edc)[temp_v17 * 4];
            temp_v42 = (float)(&DAT_00407ed4)[temp_v18 * 4] +
                       (temp_v26 - temp_v19) * (float)(&DAT_00407edc)[temp_v18 * 4];
            temp_v40 = -temp_v8;
            temp_v32 = temp_v10 * temp_v42;
            temp_v36 = temp_v24 * temp_v42;
            temp_v41 = temp_v20 * temp_v42;
            temp_v42 = temp_v23 * temp_v42;
            temp_v33 = temp_v20 * temp_v10 * temp_v8 - temp_v23 * temp_v24;
            temp_v34 = temp_v20 * temp_v24 + temp_v23 * temp_v10 * temp_v8;
            temp_v38 = temp_v23 * temp_v24 * temp_v8 - temp_v20 * temp_v10;
            temp_v37 = temp_v23 * temp_v10 + temp_v20 * temp_v24 * temp_v8;
            temp_v35 = 0;
            temp_v39 = 0;
            temp_v43 = 0;
            temp_v8 = temp_v28;
            temp_v44 = temp_v28;
            temp_v47 = temp_v28;
            temp_v48 = temp_v45;
            temp_v49 = temp_v28;
            temp_v51 = temp_v45;
            temp_v54 = temp_v45;
            temp_v55 = temp_v28;
            temp_v56 = temp_v28;
            fStack_bc = temp_v45;
            fStack_b8 = temp_v28;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v47,&temp_v32,&temp_v56);
            temp_v56 = temp_v53;
            fStack_bc = temp_v54;
            fStack_b8 = temp_v55;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v53,&temp_v32,&temp_v56);
            temp_v56 = temp_v50;
            fStack_bc = temp_v51;
            fStack_b8 = temp_v52;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v50,&temp_v32,&temp_v56);
            temp_v56 = temp_v44;
            fStack_bc = temp_v45;
            fStack_b8 = temp_v46;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v32,&temp_v56);
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 0xe),
                                                (unsigned char)(temp_v21 >> 0x16) & 3);
            in_fpscr = (temp_v21 & 0xfffffff) | ((unsigned int)(temp_v8 <= temp_v10 * temp_v30) << 0x1d);
            temp_v59 = (unsigned int)!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0);
            for (temp_v10 = romwright_fabs_4(temp_v10 * temp_v30); temp_v26 = temp_v8, (int)temp_v10 >= 0x47800000;
                temp_v10 = temp_v10 - (float)temp_v29) {
            }
            for (; (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - (float)temp_v29) {
            }
            temp_v17 = VectorFloatToUnsigned(temp_v8,3);
            temp_v22 = VectorFloatToUnsigned(temp_v10,3);
            temp_v18 = temp_v17 & 0xff;
            temp_v13 = VectorFloatToUnsigned(temp_v26,3);
            temp_v21 = temp_v22 & 0xff;
            temp_v16 = temp_v13 & 0xff;
            temp_v12 = (float)VectorUnsignedToFloat(temp_v17 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v19 = (float)VectorUnsignedToFloat(temp_v22 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v25 = (float)VectorUnsignedToFloat(temp_v13 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v20 = (float)(&DAT_00407ed4)[temp_v18 * 4] +
                     (temp_v8 - temp_v12) * (float)(&DAT_00407edc)[temp_v18 * 4];
            temp_v12 = (float)(&DAT_00407ed0)[temp_v18 * 4] +
                     (temp_v8 - temp_v12) * (float)(&DAT_00407ed8)[temp_v18 * 4];
            temp_v8 = (float)(&DAT_00407ed0)[temp_v21 * 4] +
                     (temp_v10 - temp_v19) * (float)(&DAT_00407ed8)[temp_v21 * 4];
            temp_v42 = (float)(&DAT_00407ed4)[temp_v21 * 4] +
                       (temp_v10 - temp_v19) * (float)(&DAT_00407edc)[temp_v21 * 4];
            temp_v10 = (float)(&DAT_00407ed0)[temp_v16 * 4] +
                     (temp_v26 - temp_v25) * (float)(&DAT_00407ed8)[temp_v16 * 4];
            temp_v26 = (float)(&DAT_00407ed4)[temp_v16 * 4] +
                     (temp_v26 - temp_v25) * (float)(&DAT_00407edc)[temp_v16 * 4];
            if (temp_v59 != 0) {
              temp_v8 = -temp_v8;
            }
            temp_v32 = temp_v26 * temp_v42;
            temp_v40 = -temp_v8;
            temp_v36 = temp_v10 * temp_v42;
            temp_v41 = temp_v12 * temp_v42;
            temp_v42 = temp_v20 * temp_v42;
            temp_v33 = temp_v12 * temp_v26 * temp_v8 - temp_v20 * temp_v10;
            temp_v34 = temp_v12 * temp_v10 + temp_v20 * temp_v26 * temp_v8;
            temp_v38 = temp_v20 * temp_v10 * temp_v8 - temp_v12 * temp_v26;
            temp_v37 = temp_v20 * temp_v26 + temp_v12 * temp_v10 * temp_v8;
            temp_v35 = 0;
            temp_v39 = 0;
            temp_v43 = 0;
            temp_v56 = temp_v47;
            fStack_bc = temp_v48;
            fStack_b8 = temp_v49;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v47,&temp_v32,&temp_v56);
            temp_v56 = temp_v53;
            fStack_bc = temp_v54;
            fStack_b8 = temp_v55;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v53,&temp_v32,&temp_v56);
            temp_v56 = temp_v50;
            fStack_bc = temp_v51;
            fStack_b8 = temp_v52;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v50,&temp_v32,&temp_v56);
            temp_v56 = temp_v44;
            fStack_bc = temp_v45;
            fStack_b8 = temp_v46;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v32,&temp_v56);
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v47 = temp_v47 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v48 = temp_v48 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v49 = temp_v49 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v53 = temp_v53 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v54 = temp_v54 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v55 = temp_v55 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v50 = temp_v50 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v51 = temp_v51 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v52 = temp_v52 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v44 = temp_v44 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v45 = temp_v45 + temp_v10;
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v46 = temp_v46 + temp_v10;
            puVar3 = (unsigned int *)(int)pcVar4[2];
            if (puVar3 != (unsigned int *)0x1) {
              if (puVar3 == (unsigned int *)0x3) {
                FUN_00291c20(10,(int)pcVar4[3],0);
                puVar3 = (unsigned int *)((int)DAT_0049fb18 + 1);
                DAT_0049fb18 = puVar3;
              }
            }
            else {
              FUN_00291c20(9,(int)pcVar4[3],0);
              puVar3 = (unsigned int *)((int)DAT_0049fb14 + 1);
              DAT_0049fb14 = puVar3;
            }
          }
        }
        else {
          temp_v6 = puVar3 == param_1;
          if (temp_v6) {
            puVar3 = (unsigned int *)(int)pcVar4[1];
          }
          if (temp_v6 && puVar3 == param_2) {
            temp_v2 = (int)*(short *)(pcVar4 + 0xe);
            VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v0 = pcVar4[3];
            VectorSignedToFloat((int)*(short *)(pcVar4 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(pcVar4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(pcVar4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(pcVar4 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
            puVar3 = (unsigned int *)0x1;
            FUN_0020e738(puVar3,(int)temp_v0,temp_v2);
          }
        }
      }
      else {
        temp_v6 = puVar3 == param_1;
        if (temp_v6) {
          puVar3 = (unsigned int *)(int)pcVar4[1];
        }
        if (temp_v6 && puVar3 == param_2) {
          temp_v2 = (int)*(short *)(pcVar4 + 0xe);
          VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v0 = pcVar4[3];
          VectorSignedToFloat((int)*(short *)(pcVar4 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(pcVar4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(pcVar4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(pcVar4 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          puVar3 = (unsigned int *)0x0;
          FUN_0020e738(puVar3,(int)temp_v0,temp_v2);
        }
      }
      temp_v4 = temp_v4 + 1;
      FUN_0031d51c();
    } while (temp_v4 < (int)puVar3);
  }
  if (((*(char *)(temp_v1 + 0xde0) != '\0') &&
      ((unsigned int *)(int)*(char *)(temp_v1 + 0xde1) == param_1)) &&
     ((unsigned int *)(int)*(char *)(temp_v1 + 0xde2) == param_2)) {
    temp_v61 = (int *)0x1;
    temp_v4 = 0;
    if ('\0' < *(char *)(temp_v1 + 0xde3)) {
      temp_v10 = (float)((unsigned long long)temp_v29 >> 0x20);
      temp_v29 = CONCAT44(temp_v28,(int)temp_v29);
      do {
        temp_v2 = temp_v1 + temp_v4;
        if (*(char *)(temp_v2 + 0xde4) != '\x01') {
          if (*(char *)(temp_v2 + 0xde4) == '\x03') {
            temp_v0 = *(char *)(temp_v2 + 0xdec);
            temp_v2 = (int)temp_v0;
            FUN_00291ba4();
            if (((*(short *)(temp_v2 + 0x10) == 0) || (temp_v3 = FUN_002c09d0(), temp_v3 != 0)) &&
               ((*(short *)(temp_v2 + 0x12) == 0 || (temp_v3 = FUN_002c09d0(), temp_v3 == 0)))) {
              temp_v8 = (float)((unsigned long long)temp_v29 >> 0x20);
              temp_v53 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 8),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v50 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 8),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v52 = (float)VectorSignedToFloat(-(int)*(short *)(temp_v2 + 10),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v46 = (float)VectorSignedToFloat(-(int)*(short *)(temp_v2 + 10),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v28 = (float)VectorSignedToFloat((int)*(char *)(temp_v2 + 0xe),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v21 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 <= temp_v28 * temp_v30) << 0x1d);
              temp_v26 = (float)temp_v29;
              for (temp_v28 = romwright_fabs_4(temp_v28 * temp_v30); temp_v25 = temp_v8, (int)temp_v28 >= 0x47800000;
                  temp_v28 = temp_v28 - temp_v26) {
              }
              for (; temp_v12 = temp_v8, (int)temp_v25 >= 0x47800000; temp_v25 = temp_v25 - temp_v26) {
              }
              for (; (int)temp_v12 >= 0x47800000; temp_v12 = temp_v12 - temp_v26) {
              }
              temp_v22 = VectorFloatToUnsigned(temp_v28,3);
              temp_v16 = VectorFloatToUnsigned(temp_v25,3);
              temp_v13 = VectorFloatToUnsigned(temp_v12,3);
              temp_v18 = temp_v16 & 0xff;
              temp_v23 = (float)VectorUnsignedToFloat(temp_v16 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
              temp_v16 = temp_v22 & 0xff;
              temp_v17 = temp_v13 & 0xff;
              temp_v20 = (float)VectorUnsignedToFloat(temp_v22 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
              temp_v24 = (float)VectorUnsignedToFloat(temp_v13 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
              temp_v26 = (float)(&DAT_00407ed0)[temp_v18 * 4] +
                       (temp_v25 - temp_v23) * (float)(&DAT_00407ed8)[temp_v18 * 4];
              temp_v19 = (float)(&DAT_00407ed0)[temp_v16 * 4] +
                       (temp_v28 - temp_v20) * (float)(&DAT_00407ed8)[temp_v16 * 4];
              temp_v20 = (float)(&DAT_00407ed4)[temp_v16 * 4] +
                       (temp_v28 - temp_v20) * (float)(&DAT_00407edc)[temp_v16 * 4];
              temp_v27 = (float)(&DAT_00407ed0)[temp_v17 * 4] +
                       (temp_v12 - temp_v24) * (float)(&DAT_00407ed8)[temp_v17 * 4];
              temp_v28 = (float)(&DAT_00407ed4)[temp_v17 * 4] +
                       (temp_v12 - temp_v24) * (float)(&DAT_00407edc)[temp_v17 * 4];
              temp_v42 = (float)(&DAT_00407ed4)[temp_v18 * 4] +
                         (temp_v25 - temp_v23) * (float)(&DAT_00407edc)[temp_v18 * 4];
              if (!romwright_subpiece_4_1_0(temp_v21 >> 0x1d,0)) {
                temp_v19 = -temp_v19;
              }
              temp_v32 = temp_v28 * temp_v42;
              temp_v36 = temp_v27 * temp_v42;
              temp_v41 = temp_v19 * temp_v42;
              temp_v42 = temp_v20 * temp_v42;
              temp_v40 = -temp_v26;
              temp_v33 = temp_v19 * temp_v28 * temp_v26 - temp_v20 * temp_v27;
              temp_v38 = temp_v20 * temp_v27 * temp_v26 - temp_v19 * temp_v28;
              temp_v34 = temp_v19 * temp_v27 + temp_v20 * temp_v28 * temp_v26;
              temp_v37 = temp_v20 * temp_v28 + temp_v19 * temp_v27 * temp_v26;
              temp_v35 = 0;
              temp_v39 = 0;
              temp_v43 = 0;
              temp_v44 = temp_v8;
              temp_v45 = temp_v10;
              temp_v47 = temp_v8;
              temp_v48 = temp_v10;
              temp_v49 = temp_v8;
              temp_v51 = temp_v10;
              temp_v54 = temp_v10;
              temp_v55 = temp_v8;
              temp_v56 = temp_v8;
              fStack_bc = temp_v10;
              fStack_b8 = temp_v8;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v47,&temp_v32,&temp_v56);
              temp_v56 = temp_v53;
              fStack_bc = temp_v54;
              fStack_b8 = temp_v55;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v53,&temp_v32,&temp_v56);
              temp_v56 = temp_v50;
              fStack_bc = temp_v51;
              fStack_b8 = temp_v52;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v50,&temp_v32,&temp_v56);
              temp_v56 = temp_v44;
              fStack_bc = temp_v45;
              fStack_b8 = temp_v46;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v32,&temp_v56);
              temp_v60 = 0;
              temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 0xc),
                                                  (unsigned char)(temp_v21 >> 0x16) & 3);
              in_fpscr = (temp_v21 & 0xfffffff) | ((unsigned int)(temp_v8 <= temp_v28 * temp_v30) << 0x1d);
              for (temp_v28 = romwright_fabs_4(temp_v28 * temp_v30); temp_v26 = temp_v8, (int)temp_v28 >= 0x47800000;
                  temp_v28 = temp_v28 - (float)temp_v29) {
              }
              for (; (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - (float)temp_v29) {
              }
              temp_v18 = VectorFloatToUnsigned(temp_v8,3);
              temp_v21 = VectorFloatToUnsigned(temp_v28,3);
              temp_v17 = VectorFloatToUnsigned(temp_v26,3);
              temp_v16 = temp_v21 & 0xff;
              temp_v19 = (float)VectorUnsignedToFloat(temp_v21 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v21 = temp_v18 & 0xff;
              temp_v12 = (float)VectorUnsignedToFloat(temp_v18 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v18 = temp_v17 & 0xff;
              temp_v20 = (float)VectorUnsignedToFloat(temp_v17 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v25 = (float)(&DAT_00407ed0)[temp_v21 * 4] +
                       (temp_v8 - temp_v12) * (float)(&DAT_00407ed8)[temp_v21 * 4];
              temp_v12 = (float)(&DAT_00407ed4)[temp_v21 * 4] +
                       (temp_v8 - temp_v12) * (float)(&DAT_00407edc)[temp_v21 * 4];
              temp_v8 = (float)(&DAT_00407ed0)[temp_v16 * 4] +
                       (temp_v28 - temp_v19) * (float)(&DAT_00407ed8)[temp_v16 * 4];
              temp_v42 = (float)(&DAT_00407ed4)[temp_v16 * 4] +
                         (temp_v28 - temp_v19) * (float)(&DAT_00407edc)[temp_v16 * 4];
              temp_v19 = (float)(&DAT_00407ed0)[temp_v18 * 4] +
                       (temp_v26 - temp_v20) * (float)(&DAT_00407ed8)[temp_v18 * 4];
              temp_v28 = (float)(&DAT_00407ed4)[temp_v18 * 4] +
                       (temp_v26 - temp_v20) * (float)(&DAT_00407edc)[temp_v18 * 4];
              if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                temp_v8 = -temp_v8;
              }
              temp_v32 = temp_v28 * temp_v42;
              temp_v40 = -temp_v8;
              temp_v36 = temp_v19 * temp_v42;
              temp_v41 = temp_v25 * temp_v42;
              temp_v42 = temp_v12 * temp_v42;
              temp_v33 = temp_v25 * temp_v28 * temp_v8 - temp_v12 * temp_v19;
              temp_v38 = temp_v12 * temp_v19 * temp_v8 - temp_v25 * temp_v28;
              temp_v34 = temp_v25 * temp_v19 + temp_v12 * temp_v28 * temp_v8;
              temp_v37 = temp_v12 * temp_v28 + temp_v25 * temp_v19 * temp_v8;
              temp_v35 = 0;
              temp_v39 = 0;
              temp_v43 = 0;
              temp_v56 = temp_v47;
              fStack_bc = temp_v48;
              fStack_b8 = temp_v49;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v47,&temp_v32,&temp_v56);
              temp_v56 = temp_v53;
              fStack_bc = temp_v54;
              fStack_b8 = temp_v55;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v53,&temp_v32,&temp_v56);
              temp_v56 = temp_v50;
              fStack_bc = temp_v51;
              fStack_b8 = temp_v52;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v50,&temp_v32,&temp_v56);
              temp_v56 = temp_v44;
              fStack_bc = temp_v45;
              fStack_b8 = temp_v46;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v32,&temp_v56);
              temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 2),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v47 = temp_v47 + temp_v28;
              temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 4),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v48 = temp_v48 + temp_v28;
              temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 6),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v49 = temp_v49 + temp_v28;
              temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 2),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v53 = temp_v53 + temp_v28;
              temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 4),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v54 = temp_v54 + temp_v28;
              temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 6),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v55 = temp_v55 + temp_v28;
              temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 2),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v50 = temp_v50 + temp_v28;
              temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 4),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v51 = temp_v51 + temp_v28;
              temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 6),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v52 = temp_v52 + temp_v28;
              temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 2),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v44 = temp_v44 + temp_v28;
              temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 4),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v45 = temp_v45 + temp_v28;
              temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 6),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v46 = temp_v46 + temp_v28;
              FUN_00291c20(0xd,(int)(short)temp_v0,(int)*(short *)(temp_v1 + temp_v4 * 2 + 0xe04));
              DAT_0049fb24 = DAT_0049fb24 + 1;
            }
          }
        }
        else {
          temp_v2 = (int)*(char *)(temp_v2 + 0xdec);
          FUN_0030f654();
          if (((*(short *)(temp_v2 + 0x10) == 0) || (temp_v3 = FUN_002c09d0(), temp_v3 != 0)) &&
             ((*(short *)(temp_v2 + 0x12) == 0 || (temp_v3 = FUN_002c09d0(), temp_v3 == 0)))) {
            temp_v8 = (float)((unsigned long long)temp_v29 >> 0x20);
            temp_v53 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 8),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v50 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 8),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v52 = (float)VectorSignedToFloat(-(int)*(short *)(temp_v2 + 10),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v46 = (float)VectorSignedToFloat(-(int)*(short *)(temp_v2 + 10),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v28 = (float)VectorSignedToFloat((int)*(char *)(temp_v2 + 0xe),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v21 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 <= temp_v28 * temp_v30) << 0x1d);
            temp_v26 = (float)temp_v29;
            for (temp_v28 = romwright_fabs_4(temp_v28 * temp_v30); temp_v25 = temp_v8, (int)temp_v28 >= 0x47800000;
                temp_v28 = temp_v28 - temp_v26) {
            }
            for (; temp_v12 = temp_v8, (int)temp_v25 >= 0x47800000; temp_v25 = temp_v25 - temp_v26) {
            }
            for (; (int)temp_v12 >= 0x47800000; temp_v12 = temp_v12 - temp_v26) {
            }
            temp_v22 = VectorFloatToUnsigned(temp_v28,3);
            temp_v16 = VectorFloatToUnsigned(temp_v25,3);
            temp_v13 = VectorFloatToUnsigned(temp_v12,3);
            temp_v18 = temp_v16 & 0xff;
            temp_v23 = (float)VectorUnsignedToFloat(temp_v16 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
            temp_v16 = temp_v22 & 0xff;
            temp_v17 = temp_v13 & 0xff;
            temp_v20 = (float)VectorUnsignedToFloat(temp_v22 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
            temp_v24 = (float)VectorUnsignedToFloat(temp_v13 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
            temp_v26 = (float)(&DAT_00407ed0)[temp_v18 * 4] +
                     (temp_v25 - temp_v23) * (float)(&DAT_00407ed8)[temp_v18 * 4];
            temp_v19 = (float)(&DAT_00407ed0)[temp_v16 * 4] +
                     (temp_v28 - temp_v20) * (float)(&DAT_00407ed8)[temp_v16 * 4];
            temp_v28 = (float)(&DAT_00407ed4)[temp_v16 * 4] +
                     (temp_v28 - temp_v20) * (float)(&DAT_00407edc)[temp_v16 * 4];
            temp_v20 = (float)(&DAT_00407ed0)[temp_v17 * 4] +
                     (temp_v12 - temp_v24) * (float)(&DAT_00407ed8)[temp_v17 * 4];
            temp_v12 = (float)(&DAT_00407ed4)[temp_v17 * 4] +
                     (temp_v12 - temp_v24) * (float)(&DAT_00407edc)[temp_v17 * 4];
            temp_v42 = (float)(&DAT_00407ed4)[temp_v18 * 4] +
                       (temp_v25 - temp_v23) * (float)(&DAT_00407edc)[temp_v18 * 4];
            if (!romwright_subpiece_4_1_0(temp_v21 >> 0x1d,0)) {
              temp_v19 = -temp_v19;
            }
            temp_v32 = temp_v12 * temp_v42;
            temp_v36 = temp_v20 * temp_v42;
            temp_v41 = temp_v19 * temp_v42;
            temp_v42 = temp_v28 * temp_v42;
            temp_v40 = -temp_v26;
            temp_v33 = temp_v19 * temp_v12 * temp_v26 - temp_v28 * temp_v20;
            temp_v38 = temp_v28 * temp_v20 * temp_v26 - temp_v19 * temp_v12;
            temp_v34 = temp_v19 * temp_v20 + temp_v28 * temp_v12 * temp_v26;
            temp_v37 = temp_v28 * temp_v12 + temp_v19 * temp_v20 * temp_v26;
            temp_v35 = 0;
            temp_v39 = 0;
            temp_v43 = 0;
            temp_v28 = temp_v30;
            temp_v44 = temp_v8;
            temp_v45 = temp_v10;
            temp_v47 = temp_v8;
            temp_v48 = temp_v10;
            temp_v49 = temp_v8;
            temp_v51 = temp_v10;
            temp_v54 = temp_v10;
            temp_v55 = temp_v8;
            temp_v56 = temp_v8;
            fStack_bc = temp_v10;
            fStack_b8 = temp_v8;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v47,&temp_v32,&temp_v56);
            temp_v56 = temp_v53;
            fStack_bc = temp_v54;
            fStack_b8 = temp_v55;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v53,&temp_v32,&temp_v56);
            temp_v56 = temp_v50;
            fStack_bc = temp_v51;
            fStack_b8 = temp_v52;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v50,&temp_v32,&temp_v56);
            temp_v56 = temp_v44;
            fStack_bc = temp_v45;
            fStack_b8 = temp_v46;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v32,&temp_v56);
            temp_v26 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 0xc),
                                                (unsigned char)(temp_v21 >> 0x16) & 3);
            in_fpscr = (temp_v21 & 0xfffffff) | ((unsigned int)(temp_v8 <= temp_v26 * temp_v28) << 0x1d);
            for (temp_v28 = romwright_fabs_4(temp_v26 * temp_v28); temp_v26 = temp_v8, (int)temp_v28 >= 0x47800000;
                temp_v28 = temp_v28 - (float)temp_v29) {
            }
            for (; (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - (float)temp_v29) {
            }
            temp_v18 = VectorFloatToUnsigned(temp_v8,3);
            temp_v21 = VectorFloatToUnsigned(temp_v28,3);
            temp_v17 = VectorFloatToUnsigned(temp_v26,3);
            temp_v16 = temp_v21 & 0xff;
            temp_v19 = (float)VectorUnsignedToFloat(temp_v21 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v21 = temp_v18 & 0xff;
            temp_v12 = (float)VectorUnsignedToFloat(temp_v18 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v18 = temp_v17 & 0xff;
            temp_v20 = (float)VectorUnsignedToFloat(temp_v17 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v25 = (float)(&DAT_00407ed0)[temp_v21 * 4] +
                     (temp_v8 - temp_v12) * (float)(&DAT_00407ed8)[temp_v21 * 4];
            temp_v12 = (float)(&DAT_00407ed4)[temp_v21 * 4] +
                     (temp_v8 - temp_v12) * (float)(&DAT_00407edc)[temp_v21 * 4];
            temp_v8 = (float)(&DAT_00407ed0)[temp_v16 * 4] +
                     (temp_v28 - temp_v19) * (float)(&DAT_00407ed8)[temp_v16 * 4];
            temp_v42 = (float)(&DAT_00407ed4)[temp_v16 * 4] +
                       (temp_v28 - temp_v19) * (float)(&DAT_00407edc)[temp_v16 * 4];
            temp_v19 = (float)(&DAT_00407ed0)[temp_v18 * 4] +
                     (temp_v26 - temp_v20) * (float)(&DAT_00407ed8)[temp_v18 * 4];
            temp_v28 = (float)(&DAT_00407ed4)[temp_v18 * 4] +
                     (temp_v26 - temp_v20) * (float)(&DAT_00407edc)[temp_v18 * 4];
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              temp_v8 = -temp_v8;
            }
            temp_v40 = -temp_v8;
            temp_v32 = temp_v28 * temp_v42;
            temp_v36 = temp_v19 * temp_v42;
            temp_v41 = temp_v25 * temp_v42;
            temp_v42 = temp_v12 * temp_v42;
            temp_v34 = temp_v25 * temp_v19 + temp_v12 * temp_v28 * temp_v8;
            temp_v37 = temp_v12 * temp_v28 + temp_v25 * temp_v19 * temp_v8;
            temp_v33 = temp_v25 * temp_v28 * temp_v8 - temp_v12 * temp_v19;
            temp_v38 = temp_v12 * temp_v19 * temp_v8 - temp_v25 * temp_v28;
            temp_v35 = 0;
            temp_v39 = 0;
            temp_v43 = 0;
            temp_v56 = temp_v47;
            fStack_bc = temp_v48;
            fStack_b8 = temp_v49;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v47,&temp_v32,&temp_v56);
            temp_v56 = temp_v53;
            fStack_bc = temp_v54;
            fStack_b8 = temp_v55;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v53,&temp_v32,&temp_v56);
            temp_v56 = temp_v50;
            fStack_bc = temp_v51;
            fStack_b8 = temp_v52;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v50,&temp_v32,&temp_v56);
            temp_v56 = temp_v44;
            fStack_bc = temp_v45;
            fStack_b8 = temp_v46;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v32,&temp_v56);
            temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 2),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v47 = temp_v47 + temp_v28;
            temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v48 = temp_v48 + temp_v28;
            temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v49 = temp_v49 + temp_v28;
            temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 2),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v53 = temp_v53 + temp_v28;
            temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v54 = temp_v54 + temp_v28;
            temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v55 = temp_v55 + temp_v28;
            temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 2),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v50 = temp_v50 + temp_v28;
            temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v51 = temp_v51 + temp_v28;
            temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v52 = temp_v52 + temp_v28;
            temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 2),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v44 = temp_v44 + temp_v28;
            temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v45 = temp_v45 + temp_v28;
            temp_v28 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 6),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v46 = temp_v46 + temp_v28;
            FUN_00291c20(0xb,(int)*(char *)(temp_v2 + 0xf),(int)*(short *)(temp_v1 + temp_v4 * 2 + 0xe04))
            ;
            DAT_0049fb1c = DAT_0049fb1c + 1;
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < *(char *)(temp_v1 + 0xde3));
    }
  }
  else {
    temp_v61 = (int *)0x0;
    *(unsigned char *)(temp_v1 + 0xde0) = 1;
    *(char *)(temp_v1 + 0xde1) = (char)(int)param_1;
    *(char *)(temp_v1 + 0xde2) = (char)(int)param_2;
    *(unsigned char *)(temp_v1 + 0xde3) = 0;
    *(unsigned int *)(temp_v1 + 0xde4) = 0;
    *(unsigned int *)(temp_v1 + 0xde8) = 0;
    *(unsigned int *)(temp_v1 + 0xdec) = 0;
    *(unsigned int *)(temp_v1 + 0xdf0) = 0;
    *(unsigned int *)(temp_v1 + 0xdf4) = 0;
    *(unsigned int *)(temp_v1 + 0xdf8) = 0;
    *(unsigned int *)(temp_v1 + 0xdfc) = 0;
    *(unsigned int *)(temp_v1 + 0xe00) = 0;
    *(unsigned int *)(temp_v1 + 0xe04) = 0;
    *(unsigned int *)(temp_v1 + 0xe08) = 0;
    *(unsigned int *)(temp_v1 + 0xe0c) = 0;
    pcVar4 = (char *)0x0;
    *(unsigned int *)(temp_v1 + 0xe10) = 0;
    temp_v4 = FUN_00323500();
    if (0 < temp_v4) {
      temp_v62 = temp_v1 + 0xde4;
      temp_v63 = temp_v1 + 0xdec;
      do {
        pcVar6 = pcVar4;
        FUN_0030f654();
        if (((((unsigned int *)(int)*pcVar6 != (unsigned int *)0xffffffff) &&
             ((unsigned int *)(int)*pcVar6 == param_1)) &&
            (((unsigned int *)(int)pcVar6[1] == param_2 &&
             ((temp_v5 = 0, *(short *)(pcVar6 + 0x10) == 0 || (temp_v4 = FUN_002c09d0(), temp_v4 != 0)))))
            ) && ((*(short *)(pcVar6 + 0x12) == 0 || (temp_v4 = FUN_002c09d0(), temp_v4 == 0)))) {
          if (*(short *)(pcVar6 + 0x14) != 0) {
            temp_v4 = FUN_002c09d0();
            if (temp_v4 != 0) {
              temp_v4 = FUN_002c09f4(99);
              if (temp_v4 <= pcVar6[0x17]) {
LAB_0027907c:
                temp_v45 = (float)((unsigned long long)temp_v29 >> 0x20);
                temp_v53 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 8),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v50 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 8),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v52 = (float)VectorSignedToFloat(-(int)*(short *)(pcVar6 + 10),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v46 = (float)VectorSignedToFloat(-(int)*(short *)(pcVar6 + 10),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v60 = 0;
                temp_v64 = 0;
                temp_v10 = (float)VectorSignedToFloat((int)pcVar6[0xe],(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v21 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v28 <= temp_v10 * temp_v30) << 0x1d);
                temp_v8 = (float)temp_v29;
                for (temp_v10 = romwright_fabs_4(temp_v10 * temp_v30); temp_v26 = temp_v28, (int)temp_v10 >= 0x47800000;
                    temp_v10 = temp_v10 - temp_v8) {
                }
                for (; temp_v25 = temp_v28, (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - temp_v8) {
                }
                for (; (int)temp_v25 >= 0x47800000; temp_v25 = temp_v25 - temp_v8) {
                }
                temp_v16 = VectorFloatToUnsigned(temp_v10,3);
                temp_v18 = VectorFloatToUnsigned(temp_v26,3);
                temp_v22 = VectorFloatToUnsigned(temp_v25,3);
                temp_v17 = temp_v22 & 0xff;
                temp_v20 = (float)VectorUnsignedToFloat(temp_v16 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
                temp_v23 = (float)VectorUnsignedToFloat(temp_v18 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
                temp_v16 = temp_v16 & 0xff;
                temp_v24 = (float)VectorUnsignedToFloat(temp_v22 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
                temp_v18 = temp_v18 & 0xff;
                temp_v19 = (float)(&DAT_00407ed0)[temp_v16 * 4] +
                         (temp_v10 - temp_v20) * (float)(&DAT_00407ed8)[temp_v16 * 4];
                temp_v8 = (float)(&DAT_00407ed0)[temp_v18 * 4] +
                         (temp_v26 - temp_v23) * (float)(&DAT_00407ed8)[temp_v18 * 4];
                temp_v12 = (float)(&DAT_00407ed0)[temp_v17 * 4] +
                         (temp_v25 - temp_v24) * (float)(&DAT_00407ed8)[temp_v17 * 4];
                temp_v20 = (float)(&DAT_00407ed4)[temp_v16 * 4] +
                         (temp_v10 - temp_v20) * (float)(&DAT_00407edc)[temp_v16 * 4];
                temp_v10 = (float)(&DAT_00407ed4)[temp_v17 * 4] +
                         (temp_v25 - temp_v24) * (float)(&DAT_00407edc)[temp_v17 * 4];
                if (!romwright_subpiece_4_1_0(temp_v21 >> 0x1d,0)) {
                  temp_v19 = -temp_v19;
                }
                temp_v42 = (float)(&DAT_00407ed4)[temp_v18 * 4] +
                           (temp_v26 - temp_v23) * (float)(&DAT_00407edc)[temp_v18 * 4];
                temp_v36 = temp_v12 * temp_v42;
                temp_v32 = temp_v10 * temp_v42;
                temp_v41 = temp_v19 * temp_v42;
                temp_v42 = temp_v20 * temp_v42;
                temp_v40 = -temp_v8;
                temp_v33 = temp_v19 * temp_v10 * temp_v8 - temp_v20 * temp_v12;
                temp_v34 = temp_v19 * temp_v12 + temp_v20 * temp_v10 * temp_v8;
                temp_v38 = temp_v20 * temp_v12 * temp_v8 - temp_v19 * temp_v10;
                temp_v37 = temp_v20 * temp_v10 + temp_v19 * temp_v12 * temp_v8;
                temp_v35 = 0;
                temp_v39 = 0;
                temp_v43 = 0;
                temp_v8 = temp_v28;
                temp_v44 = temp_v28;
                temp_v47 = temp_v28;
                temp_v48 = temp_v45;
                temp_v49 = temp_v28;
                temp_v51 = temp_v45;
                temp_v54 = temp_v45;
                temp_v55 = temp_v28;
                temp_v56 = temp_v28;
                fStack_bc = temp_v45;
                fStack_b8 = temp_v28;
                nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v47,&temp_v32,&temp_v56);
                temp_v56 = temp_v53;
                fStack_bc = temp_v54;
                fStack_b8 = temp_v55;
                nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v53,&temp_v32,&temp_v56);
                temp_v56 = temp_v50;
                fStack_bc = temp_v51;
                fStack_b8 = temp_v52;
                nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v50,&temp_v32,&temp_v56);
                temp_v56 = temp_v44;
                fStack_bc = temp_v45;
                fStack_b8 = temp_v46;
                nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v32,&temp_v56);
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 0xc),
                                                    (unsigned char)(temp_v21 >> 0x16) & 3);
                in_fpscr = (temp_v21 & 0xfffffff) | ((unsigned int)(temp_v8 <= temp_v10 * temp_v30) << 0x1d);
                temp_v57 = (unsigned int)!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0);
                for (temp_v10 = romwright_fabs_4(temp_v10 * temp_v30); temp_v26 = temp_v8, (int)temp_v10 >= 0x47800000;
                    temp_v10 = temp_v10 - (float)temp_v29) {
                }
                for (; (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - (float)temp_v29) {
                }
                temp_v16 = VectorFloatToUnsigned(temp_v8,3);
                temp_v21 = VectorFloatToUnsigned(temp_v10,3);
                temp_v17 = VectorFloatToUnsigned(temp_v26,3);
                temp_v18 = temp_v16 & 0xff;
                temp_v20 = (float)VectorUnsignedToFloat(temp_v16 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v16 = temp_v17 & 0xff;
                temp_v23 = (float)VectorUnsignedToFloat(temp_v21 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v24 = (float)VectorUnsignedToFloat(temp_v17 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v21 = temp_v21 & 0xff;
                temp_v19 = (float)(&DAT_00407ed0)[temp_v18 * 4] +
                         (temp_v8 - temp_v20) * (float)(&DAT_00407ed8)[temp_v18 * 4];
                temp_v25 = (float)(&DAT_00407ed0)[temp_v21 * 4] +
                         (temp_v10 - temp_v23) * (float)(&DAT_00407ed8)[temp_v21 * 4];
                temp_v12 = (float)(&DAT_00407ed0)[temp_v16 * 4] +
                         (temp_v26 - temp_v24) * (float)(&DAT_00407ed8)[temp_v16 * 4];
                temp_v20 = (float)(&DAT_00407ed4)[temp_v18 * 4] +
                         (temp_v8 - temp_v20) * (float)(&DAT_00407edc)[temp_v18 * 4];
                temp_v8 = (float)(&DAT_00407ed4)[temp_v16 * 4] +
                         (temp_v26 - temp_v24) * (float)(&DAT_00407edc)[temp_v16 * 4];
                if (temp_v57 != 0) {
                  temp_v25 = -temp_v25;
                }
                temp_v42 = (float)(&DAT_00407ed4)[temp_v21 * 4] +
                           (temp_v10 - temp_v23) * (float)(&DAT_00407edc)[temp_v21 * 4];
                temp_v32 = temp_v8 * temp_v42;
                temp_v36 = temp_v12 * temp_v42;
                temp_v41 = temp_v19 * temp_v42;
                temp_v42 = temp_v20 * temp_v42;
                temp_v40 = -temp_v25;
                temp_v33 = temp_v19 * temp_v8 * temp_v25 - temp_v20 * temp_v12;
                temp_v34 = temp_v19 * temp_v12 + temp_v20 * temp_v8 * temp_v25;
                temp_v38 = temp_v20 * temp_v12 * temp_v25 - temp_v19 * temp_v8;
                temp_v37 = temp_v20 * temp_v8 + temp_v19 * temp_v12 * temp_v25;
                temp_v35 = 0;
                temp_v39 = 0;
                temp_v43 = 0;
                temp_v56 = temp_v47;
                fStack_bc = temp_v48;
                fStack_b8 = temp_v49;
                nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v47,&temp_v32,&temp_v56);
                temp_v56 = temp_v53;
                fStack_bc = temp_v54;
                fStack_b8 = temp_v55;
                nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v53,&temp_v32,&temp_v56);
                temp_v56 = temp_v50;
                fStack_bc = temp_v51;
                fStack_b8 = temp_v52;
                nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v50,&temp_v32,&temp_v56);
                temp_v56 = temp_v44;
                fStack_bc = temp_v45;
                fStack_b8 = temp_v46;
                nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v32,&temp_v56);
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 2),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v47 = temp_v47 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 4),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v48 = temp_v48 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 6),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v49 = temp_v49 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 2),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v53 = temp_v53 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 4),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v54 = temp_v54 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 6),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v55 = temp_v55 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 2),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v50 = temp_v50 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 4),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v51 = temp_v51 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 6),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v52 = temp_v52 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 2),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v44 = temp_v44 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 4),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v45 = temp_v45 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 6),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v46 = temp_v46 + temp_v10;
                FUN_00291c20(0xb,(int)pcVar6[0xf]);
                DAT_0049fb1c = DAT_0049fb1c + 1;
                *(unsigned char *)(*(char *)(temp_v1 + 0xde3) + temp_v62) = 1;
                *(char *)(*(char *)(temp_v1 + 0xde3) + temp_v63) = (char)(int)pcVar4;
                *(unsigned short *)(temp_v1 + *(char *)(temp_v1 + 0xde3) * 2 + 0xdf4) = temp_v5;
                *(short *)(temp_v1 + *(char *)(temp_v1 + 0xde3) * 2 + 0xe04) = (short)(int)pcVar4 + 0x1000;
                *(char *)(temp_v1 + 0xde3) = *(char *)(temp_v1 + 0xde3) + '\x01';
              }
            }
            else {
              temp_v4 = FUN_002c09f4(99);
              if (temp_v4 <= pcVar6[0x16]) {
                temp_v5 = *(unsigned short *)(pcVar6 + 0x14);
                goto LAB_0027907c;
              }
            }
          }
          else {
            temp_v4 = FUN_002c09f4(99);
            if (temp_v4 <= pcVar6[0x17]) goto LAB_0027907c;
          }
        }
        pcVar4 = pcVar4 + 1;
        temp_v4 = FUN_00323500();
      } while ((int)pcVar4 < temp_v4);
    }
    pcVar4 = (char *)0x0;
    temp_v4 = FUN_00323570();
    if (0 < temp_v4) {
      temp_v64 = temp_v1 + 0xdec;
      do {
        pcVar6 = pcVar4;
        FUN_00291ba4();
        if ((((((unsigned int *)(int)*pcVar6 != (unsigned int *)0xffffffff) &&
              ((unsigned int *)(int)*pcVar6 == param_1)) && ((unsigned int *)(int)pcVar6[1] == param_2))
            && ((temp_v5 = 0, *(short *)(pcVar6 + 0x10) == 0 || (temp_v4 = FUN_002c09d0(), temp_v4 != 0)))
            ) && ((*(short *)(pcVar6 + 0x12) == 0 || (temp_v4 = FUN_002c09d0(), temp_v4 == 0)))) {
          if (*(short *)(pcVar6 + 0x14) != 0) {
            temp_v4 = FUN_002c09d0();
            if (temp_v4 != 0) {
              temp_v4 = FUN_002c09f4(99);
              if (temp_v4 <= pcVar6[0x17]) {
LAB_00279850:
                temp_v45 = (float)((unsigned long long)temp_v29 >> 0x20);
                temp_v53 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 8),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v50 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 8),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v52 = (float)VectorSignedToFloat(-(int)*(short *)(pcVar6 + 10),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v46 = (float)VectorSignedToFloat(-(int)*(short *)(pcVar6 + 10),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v60 = 0;
                temp_v10 = (float)VectorSignedToFloat((int)pcVar6[0xe],(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v21 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v28 <= temp_v10 * temp_v30) << 0x1d);
                temp_v8 = (float)temp_v29;
                for (temp_v10 = romwright_fabs_4(temp_v10 * temp_v30); temp_v26 = temp_v28, (int)temp_v10 >= 0x47800000;
                    temp_v10 = temp_v10 - temp_v8) {
                }
                for (; temp_v25 = temp_v28, (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - temp_v8) {
                }
                for (; (int)temp_v25 >= 0x47800000; temp_v25 = temp_v25 - temp_v8) {
                }
                temp_v22 = VectorFloatToUnsigned(temp_v10,3);
                temp_v17 = VectorFloatToUnsigned(temp_v25,3);
                temp_v18 = VectorFloatToUnsigned(temp_v26,3);
                temp_v16 = temp_v22 & 0xff;
                temp_v8 = (float)VectorUnsignedToFloat(temp_v22 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
                temp_v23 = (float)VectorUnsignedToFloat(temp_v18 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
                temp_v18 = temp_v18 & 0xff;
                temp_v20 = (float)VectorUnsignedToFloat(temp_v17 & 0xffff,(unsigned char)(temp_v21 >> 0x16) & 3);
                temp_v17 = temp_v17 & 0xff;
                temp_v12 = (float)(&DAT_00407ed0)[temp_v16 * 4] +
                         (temp_v10 - temp_v8) * (float)(&DAT_00407ed8)[temp_v16 * 4];
                temp_v19 = (float)(&DAT_00407ed4)[temp_v16 * 4] +
                         (temp_v10 - temp_v8) * (float)(&DAT_00407edc)[temp_v16 * 4];
                temp_v10 = (float)(&DAT_00407ed0)[temp_v18 * 4] +
                         (temp_v26 - temp_v23) * (float)(&DAT_00407ed8)[temp_v18 * 4];
                temp_v36 = (float)(&DAT_00407ed4)[temp_v18 * 4] +
                            (temp_v26 - temp_v23) * (float)(&DAT_00407edc)[temp_v18 * 4];
                temp_v8 = (float)(&DAT_00407ed0)[temp_v17 * 4] +
                         (temp_v25 - temp_v20) * (float)(&DAT_00407ed8)[temp_v17 * 4];
                temp_v26 = (float)(&DAT_00407ed4)[temp_v17 * 4] +
                         (temp_v25 - temp_v20) * (float)(&DAT_00407edc)[temp_v17 * 4];
                if (!romwright_subpiece_4_1_0(temp_v21 >> 0x1d,0)) {
                  temp_v12 = -temp_v12;
                }
                temp_v42 = temp_v19 * temp_v36;
                temp_v32 = temp_v26 * temp_v36;
                temp_v41 = temp_v12 * temp_v36;
                temp_v36 = temp_v8 * temp_v36;
                temp_v40 = -temp_v10;
                temp_v33 = temp_v12 * temp_v26 * temp_v10 - temp_v19 * temp_v8;
                temp_v38 = temp_v19 * temp_v8 * temp_v10 - temp_v12 * temp_v26;
                temp_v34 = temp_v12 * temp_v8 + temp_v19 * temp_v26 * temp_v10;
                temp_v37 = temp_v19 * temp_v26 + temp_v12 * temp_v8 * temp_v10;
                temp_v35 = 0;
                temp_v39 = 0;
                temp_v43 = 0;
                temp_v8 = temp_v28;
                temp_v44 = temp_v28;
                temp_v47 = temp_v28;
                temp_v48 = temp_v45;
                temp_v49 = temp_v28;
                temp_v51 = temp_v45;
                temp_v54 = temp_v45;
                temp_v55 = temp_v28;
                temp_v56 = temp_v28;
                fStack_bc = temp_v45;
                fStack_b8 = temp_v28;
                nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v47,&temp_v32,&temp_v56);
                temp_v56 = temp_v53;
                fStack_bc = temp_v54;
                fStack_b8 = temp_v55;
                nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v53,&temp_v32,&temp_v56);
                temp_v56 = temp_v50;
                fStack_bc = temp_v51;
                fStack_b8 = temp_v52;
                nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v50,&temp_v32,&temp_v56);
                temp_v56 = temp_v44;
                fStack_bc = temp_v45;
                fStack_b8 = temp_v46;
                nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v32,&temp_v56);
                temp_v62 = 0;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 0xc),
                                                    (unsigned char)(temp_v21 >> 0x16) & 3);
                in_fpscr = (temp_v21 & 0xfffffff) | ((unsigned int)(temp_v8 <= temp_v10 * temp_v30) << 0x1d);
                for (temp_v10 = romwright_fabs_4(temp_v10 * temp_v30); temp_v26 = temp_v8, (int)temp_v10 >= 0x47800000;
                    temp_v10 = temp_v10 - (float)temp_v29) {
                }
                for (; (int)temp_v26 >= 0x47800000; temp_v26 = temp_v26 - (float)temp_v29) {
                }
                temp_v21 = VectorFloatToUnsigned(temp_v8,3);
                temp_v18 = VectorFloatToUnsigned(temp_v10,3);
                temp_v17 = VectorFloatToUnsigned(temp_v26,3);
                temp_v16 = temp_v21 & 0xff;
                temp_v20 = (float)VectorUnsignedToFloat(temp_v21 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v23 = (float)VectorUnsignedToFloat(temp_v18 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v21 = temp_v17 & 0xff;
                temp_v24 = (float)VectorUnsignedToFloat(temp_v17 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v18 = temp_v18 & 0xff;
                temp_v19 = (float)(&DAT_00407ed0)[temp_v16 * 4] +
                         (temp_v8 - temp_v20) * (float)(&DAT_00407ed8)[temp_v16 * 4];
                temp_v25 = (float)(&DAT_00407ed0)[temp_v18 * 4] +
                         (temp_v10 - temp_v23) * (float)(&DAT_00407ed8)[temp_v18 * 4];
                temp_v12 = (float)(&DAT_00407ed0)[temp_v21 * 4] +
                         (temp_v26 - temp_v24) * (float)(&DAT_00407ed8)[temp_v21 * 4];
                temp_v8 = (float)(&DAT_00407ed4)[temp_v16 * 4] +
                         (temp_v8 - temp_v20) * (float)(&DAT_00407edc)[temp_v16 * 4];
                temp_v32 = (float)(&DAT_00407ed4)[temp_v18 * 4] +
                            (temp_v10 - temp_v23) * (float)(&DAT_00407edc)[temp_v18 * 4];
                if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                  temp_v25 = -temp_v25;
                }
                temp_v10 = (float)(&DAT_00407ed4)[temp_v21 * 4] +
                         (temp_v26 - temp_v24) * (float)(&DAT_00407edc)[temp_v21 * 4];
                temp_v41 = temp_v19 * temp_v32;
                temp_v42 = temp_v8 * temp_v32;
                temp_v36 = temp_v12 * temp_v32;
                temp_v32 = temp_v10 * temp_v32;
                temp_v40 = -temp_v25;
                temp_v33 = temp_v19 * temp_v10 * temp_v25 - temp_v8 * temp_v12;
                temp_v38 = temp_v8 * temp_v12 * temp_v25 - temp_v19 * temp_v10;
                temp_v34 = temp_v19 * temp_v12 + temp_v8 * temp_v10 * temp_v25;
                temp_v37 = temp_v8 * temp_v10 + temp_v19 * temp_v12 * temp_v25;
                temp_v35 = 0;
                temp_v39 = 0;
                temp_v43 = 0;
                temp_v56 = temp_v47;
                fStack_bc = temp_v48;
                fStack_b8 = temp_v49;
                nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v47,&temp_v32,&temp_v56);
                temp_v56 = temp_v53;
                fStack_bc = temp_v54;
                fStack_b8 = temp_v55;
                nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v53,&temp_v32,&temp_v56);
                temp_v56 = temp_v50;
                fStack_bc = temp_v51;
                fStack_b8 = temp_v52;
                nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v50,&temp_v32,&temp_v56);
                temp_v56 = temp_v44;
                fStack_bc = temp_v45;
                fStack_b8 = temp_v46;
                nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v44,&temp_v32,&temp_v56);
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 2),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v47 = temp_v47 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 4),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v48 = temp_v48 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 6),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v49 = temp_v49 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 2),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v53 = temp_v53 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 4),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v54 = temp_v54 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 6),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v55 = temp_v55 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 2),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v50 = temp_v50 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 4),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v51 = temp_v51 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 6),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v52 = temp_v52 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 2),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v44 = temp_v44 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 4),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v45 = temp_v45 + temp_v10;
                temp_v10 = (float)VectorSignedToFloat((int)*(short *)(pcVar6 + 6),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v46 = temp_v46 + temp_v10;
                FUN_00291c20(0xd,(int)(short)(int)pcVar4);
                DAT_0049fb24 = DAT_0049fb24 + 1;
                *(unsigned char *)((int)*(char *)(temp_v1 + 0xde3) + temp_v1 + 0xde4) = 3;
                *(char *)(*(char *)(temp_v1 + 0xde3) + temp_v64) = (char)(int)pcVar4;
                *(unsigned short *)(temp_v1 + *(char *)(temp_v1 + 0xde3) * 2 + 0xdf4) = temp_v5;
                *(short *)(temp_v1 + *(char *)(temp_v1 + 0xde3) * 2 + 0xe04) = (short)(int)pcVar4 + 0x1200;
                *(char *)(temp_v1 + 0xde3) = *(char *)(temp_v1 + 0xde3) + '\x01';
              }
            }
            else {
              temp_v4 = FUN_002c09f4(99);
              if (temp_v4 <= pcVar6[0x16]) {
                temp_v5 = *(unsigned short *)(pcVar6 + 0x14);
                goto LAB_00279850;
              }
            }
          }
          else {
            temp_v4 = FUN_002c09f4(99);
            if (temp_v4 <= pcVar6[0x17]) goto LAB_00279850;
          }
        }
        pcVar4 = pcVar4 + 1;
        temp_v4 = FUN_00323570();
      } while ((int)pcVar4 < temp_v4);
    }
  }
  FUN_0021dbc0(param_1,param_2,temp_v61);
  return;
}

} /* extern "C" */
