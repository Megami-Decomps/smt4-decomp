/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034a28c` (_code @ 0x34a28c, 0xb00 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002af39c(...);
int FUN_00349e34(...);
int nw_gfx_RenderContext_ResetState_364D68(...);

int FUN_0023d078(...);
int FUN_0023d158(...);
int FUN_0023d20c(...);
int FUN_0023d274(...);
int FUN_002bc7f4(int, int [3]);
int FUN_00349cdc(int, int, int, unsigned char [52]);
int FUN_00349d88(...);
int FUN_0034db58(void);
int FUN_0034dbb4(void);
int FUN_0034dc10(void);
int FUN_0034dcec(void);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(...);
int nn_math_ARMv6_MTX34MultAsm(...);
int nn_math_ARMv6_MTX34MultTranslateAsm(...);

typedef int romwright_code(...);
/* stack frame of param_2: 28 slot(s), 112 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp138; /* 0x138: local_138 */
} param_2_stack;

extern unsigned int DAT_00407ed0; /* 0x407ed0 */
extern unsigned int DAT_00407ed4; /* 0x407ed4 */
extern unsigned int DAT_00407ed8; /* 0x407ed8 */
extern unsigned int DAT_00407edc; /* 0x407edc */

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
/* Supplied declaration required: FUN_0023d078. */
extern int FUN_0023d0d4(int, unsigned int);
/* Supplied declaration required: FUN_0023d158. */
extern unsigned int FUN_0023d1ec(int, unsigned int);
/* Supplied declaration required: FUN_0023d20c. */
/* Supplied declaration required: FUN_0023d274. */
/* Supplied declaration required: FUN_002af39c. */
/* Supplied declaration required: FUN_002bc7f4. */
/* Supplied declaration required: FUN_00349cdc. */
/* Supplied declaration required: FUN_00349d88. */
/* Supplied declaration required: FUN_00349e34. */
/* Supplied declaration required: FUN_0034db58. */
/* Supplied declaration required: FUN_0034dbb4. */
/* Supplied declaration required: FUN_0034dc10. */
/* Supplied declaration required: FUN_0034dcec. */
extern int FUN_00356e90(int);
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultTranslateAsm. */
/* Supplied declaration required: nw_gfx_RenderContext_ResetState_364D68. */


/* WARNING: Removing unreachable block (ram,0x0034a878) */
/* WARNING: Removing unreachable block (ram,0x0034a500) */
/* WARNING: Removing unreachable block (ram,0x0034ac00) */
/* WARNING: Removing unreachable block (ram,0x0034a88c) */
/* WARNING: Removing unreachable block (ram,0x0034a514) */
/* WARNING: Removing unreachable block (ram,0x0034ac18) */

void FUN_0034a28c(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 24 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  float *pfVar4;
  int temp_v3;
  float *pfVar6;
  float *pfVar7;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int *unaff_r10;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  int temp_v23 [3];
  int temp_v24;
  int temp_v25;
  int temp_v26;
  int temp_v27;
  int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  unsigned int temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  unsigned int temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  unsigned int temp_v42;
  unsigned char temp_v43 [52];
  int temp_v44;
  int temp_v45;
  float temp_v46;
  float temp_v47;
  float temp_v48;
  float temp_v49;
  unsigned int temp_v50;
  int iStack_2c;
  unsigned int temp_v51;
  
  temp_v23[0] = 0;
  temp_v44 = *(int *)(param_1 + 4) + 0x8c;
  iStack_2c = param_1;
  temp_v51 = param_2;
  FUN_002bc7f4(0x208,temp_v23);
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v45 = temp_v23[0];
  FUN_0034dc10();
  FUN_0034db58();
  temp_v4 = 0;
  temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 8) + 8))();
  if (0 < temp_v0) {
    unaff_r10 = &DAT_00407ed0;
  }
  temp_v21 = 40.743664f;
  temp_v20 = 0.0f;
  temp_v22 = 0x47800000;
  if (0 < temp_v0) {
    do {
      temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),temp_v4);
      if (temp_v0 != 0) {
        (**(romwright_code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),temp_v4);
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 == temp_v20) << 0x1e);
        if ((!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) &&
           (temp_v8 = in_s0,
           temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x20))(*(int **)(param_1 + 8),temp_v4),
           (temp_v1 & 0xff) != 0)) {
          temp_v2 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),temp_v4);
          temp_v29 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),temp_v4);
          (**(romwright_code **)(**(int **)(param_1 + 8) + 0x1c))(*(int **)(param_1 + 8),temp_v4);
          temp_v46 = temp_v8;
          temp_v47 = temp_v8;
          temp_v48 = temp_v8;
          temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),temp_v4);
          temp_v27 = temp_v0;
          FUN_0023d274(temp_v0,temp_v2);
          temp_v49 = 0.0f;
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v20 <= in_s0 * temp_v21) << 0x1d);
          for (temp_v8 = romwright_fabs_4(in_s0 * temp_v21); temp_v15 = temp_v20, (int)temp_v8 >= 0x47800000;
              temp_v8 = temp_v8 - (float)temp_v22) {
          }
          for (; (int)temp_v15 >= 0x47800000; temp_v15 = temp_v15 - (float)temp_v22) {
          }
          temp_v9 = VectorFloatToUnsigned(temp_v20,3);
          temp_v11 = VectorFloatToUnsigned(temp_v8,3);
          temp_v12 = VectorFloatToUnsigned(temp_v15,3);
          temp_v17 = (float)VectorUnsignedToFloat(temp_v9 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorUnsignedToFloat(temp_v11 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
          pfVar7 = (float *)(unaff_r10 + (temp_v9 & 0xff) * 4);
          temp_v18 = (float)VectorUnsignedToFloat(temp_v12 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
          pfVar6 = (float *)(unaff_r10 + (temp_v11 & 0xff) * 4);
          pfVar4 = (float *)(unaff_r10 + (temp_v12 & 0xff) * 4);
          temp_v14 = *pfVar7 + (temp_v20 - temp_v17) * pfVar7[2];
          temp_v13 = pfVar7[1] + (temp_v20 - temp_v17) * pfVar7[3];
          temp_v17 = *pfVar6 + (temp_v8 - temp_v16) * pfVar6[2];
          temp_v41 = pfVar6[1] + (temp_v8 - temp_v16) * pfVar6[3];
          temp_v16 = *pfVar4 + (temp_v15 - temp_v18) * pfVar4[2];
          temp_v8 = pfVar4[1] + (temp_v15 - temp_v18) * pfVar4[3];
          if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
            temp_v17 = -temp_v17;
          }
          temp_v31 = temp_v8 * temp_v41;
          temp_v35 = temp_v16 * temp_v41;
          temp_v40 = temp_v14 * temp_v41;
          temp_v41 = temp_v13 * temp_v41;
          temp_v39 = -temp_v17;
          temp_v32 = temp_v14 * temp_v8 * temp_v17 - temp_v13 * temp_v16;
          in_s0 = temp_v13 * temp_v16 * temp_v17 - temp_v14 * temp_v8;
          temp_v33 = temp_v14 * temp_v16 + temp_v13 * temp_v8 * temp_v17;
          temp_v36 = temp_v13 * temp_v8 + temp_v14 * temp_v16 * temp_v17;
          temp_v34 = 0;
          temp_v38 = 0;
          temp_v42 = 0;
          temp_v24 = temp_v0;
          temp_v37 = in_s0;
          nn_math_ARMv6_MTX34MultTranslateAsm(temp_v43,temp_v44,temp_v29);
          FUN_0023d20c(temp_v43,temp_v43,&temp_v46);
          nn_math_ARMv6_MTX34MultAsm(temp_v43,temp_v43,&temp_v31);
          if (temp_v5 != temp_v27) {
            temp_v2 = FUN_0023d1ec(temp_v27,0);
            FUN_0023d158(temp_v23[0],temp_v2);
            temp_v5 = temp_v27;
          }
          if (temp_v6 != temp_v1) {
            temp_v23[0] = FUN_0023d0d4(temp_v23[0],temp_v1);
            temp_v6 = temp_v1;
          }
          temp_v0 = *(int *)(temp_v27 + 0x44);
          FUN_00349cdc(temp_v0,temp_v23[0],temp_v24,temp_v43);
          temp_v23[0] = temp_v0;
        }
      }
      temp_v4 = temp_v4 + 1;
      temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 8) + 8))();
    } while (temp_v4 < temp_v0);
  }
  FUN_0034dbb4();
  temp_v4 = 0;
  temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 8) + 8))();
  if (0 < temp_v0) {
    do {
      temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),temp_v4);
      if (temp_v0 != 0) {
        (**(romwright_code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),temp_v4);
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 == temp_v20) << 0x1e);
        if ((!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) &&
           (temp_v8 = in_s0,
           temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x20))(*(int **)(param_1 + 8),temp_v4),
           (temp_v1 & 0xff) != 0 && (temp_v1 & 0xff) != 0xff)) {
          temp_v28 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),temp_v4);
          temp_v2 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),temp_v4);
          temp_v29 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),temp_v4);
          (**(romwright_code **)(**(int **)(param_1 + 8) + 0x1c))(*(int **)(param_1 + 8),temp_v4);
          temp_v47 = temp_v8;
          temp_v48 = temp_v8;
          temp_v49 = temp_v8;
          temp_v3 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),temp_v4);
          temp_v0 = temp_v3;
          FUN_0023d274(temp_v3,temp_v2);
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v20 <= in_s0 * temp_v21) << 0x1d);
          temp_v30 = (unsigned int)!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0);
          for (temp_v8 = romwright_fabs_4(in_s0 * temp_v21); temp_v15 = temp_v20, (int)temp_v8 >= 0x47800000;
              temp_v8 = temp_v8 - (float)temp_v22) {
          }
          for (; (int)temp_v15 >= 0x47800000; temp_v15 = temp_v15 - (float)temp_v22) {
          }
          temp_v10 = VectorFloatToUnsigned(temp_v20,3);
          temp_v12 = VectorFloatToUnsigned(temp_v8,3);
          temp_v9 = VectorFloatToUnsigned(temp_v15,3);
          temp_v11 = temp_v10 & 0xff;
          temp_v16 = (float)VectorUnsignedToFloat(temp_v10 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v18 = (float)VectorUnsignedToFloat(temp_v12 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v12 = temp_v12 & 0xff;
          temp_v19 = (float)VectorUnsignedToFloat(temp_v9 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v9 = temp_v9 & 0xff;
          temp_v13 = (float)(&DAT_00407ed0)[temp_v11 * 4] +
                   (temp_v20 - temp_v16) * (float)(&DAT_00407ed8)[temp_v11 * 4];
          temp_v17 = (float)(&DAT_00407ed0)[temp_v12 * 4] +
                   (temp_v8 - temp_v18) * (float)(&DAT_00407ed8)[temp_v12 * 4];
          temp_v14 = (float)(&DAT_00407ed0)[temp_v9 * 4] +
                   (temp_v15 - temp_v19) * (float)(&DAT_00407ed8)[temp_v9 * 4];
          temp_v15 = (float)(&DAT_00407ed4)[temp_v9 * 4] +
                   (temp_v15 - temp_v19) * (float)(&DAT_00407edc)[temp_v9 * 4];
          temp_v41 = (float)(&DAT_00407ed4)[temp_v12 * 4] +
                     (temp_v8 - temp_v18) * (float)(&DAT_00407edc)[temp_v12 * 4];
          temp_v8 = (float)(&DAT_00407ed4)[temp_v11 * 4] +
                   (temp_v20 - temp_v16) * (float)(&DAT_00407edc)[temp_v11 * 4];
          if (temp_v30 != 0) {
            temp_v17 = -temp_v17;
          }
          temp_v31 = temp_v15 * temp_v41;
          temp_v35 = temp_v14 * temp_v41;
          temp_v40 = temp_v13 * temp_v41;
          temp_v41 = temp_v8 * temp_v41;
          temp_v39 = -temp_v17;
          temp_v33 = temp_v13 * temp_v14 + temp_v8 * temp_v15 * temp_v17;
          temp_v32 = temp_v13 * temp_v15 * temp_v17 - temp_v8 * temp_v14;
          in_s0 = temp_v8 * temp_v14 * temp_v17 - temp_v13 * temp_v15;
          temp_v36 = temp_v8 * temp_v15 + temp_v13 * temp_v14 * temp_v17;
          temp_v38 = 0;
          temp_v34 = 0;
          temp_v42 = 0;
          temp_v25 = temp_v0;
          temp_v37 = in_s0;
          nn_math_ARMv6_MTX34MultTranslateAsm(temp_v43,temp_v44,temp_v29);
          FUN_0023d20c(temp_v43,temp_v43,&temp_v47);
          nn_math_ARMv6_MTX34MultAsm(temp_v43,temp_v43,&temp_v31);
          if (temp_v5 != temp_v3) {
            temp_v2 = FUN_0023d1ec(temp_v3,0);
            FUN_0023d158(temp_v23[0],temp_v2);
            temp_v5 = temp_v3;
          }
          if (temp_v6 != temp_v1) {
            temp_v23[0] = FUN_0023d0d4(temp_v23[0],temp_v1);
            temp_v6 = temp_v1;
          }
          if (temp_v7 != temp_v28) {
            FUN_0023d078(temp_v23[0],temp_v28);
            temp_v7 = temp_v28;
          }
          temp_v0 = *(int *)(temp_v3 + 0x44);
          FUN_00349d88(temp_v0,temp_v23[0],temp_v25,temp_v43);
          temp_v23[0] = temp_v0;
        }
      }
      temp_v4 = temp_v4 + 1;
      temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 8) + 8))();
    } while (temp_v4 < temp_v0);
  }
  FUN_0034dcec();
  temp_v4 = 0;
  temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 8) + 8))();
  if (0 < temp_v0) {
    do {
      temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),temp_v4);
      if (temp_v0 != 0) {
        (**(romwright_code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),temp_v4);
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 == temp_v20) << 0x1e);
        if ((!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) &&
           (temp_v8 = in_s0,
           temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x20))(*(int **)(param_1 + 8),temp_v4),
           (temp_v1 & 0xff) != 0)) {
          temp_v24 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),temp_v4);
          temp_v2 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),temp_v4);
          temp_v30 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),temp_v4);
          (**(romwright_code **)(**(int **)(param_1 + 8) + 0x1c))(*(int **)(param_1 + 8),temp_v4);
          temp_v47 = temp_v8;
          temp_v48 = temp_v8;
          temp_v49 = temp_v8;
          temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),temp_v4);
          temp_v25 = temp_v0;
          FUN_0023d274(temp_v0,temp_v2);
          temp_v50 = 0;
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v20 <= in_s0 * temp_v21) << 0x1d);
          for (temp_v8 = romwright_fabs_4(in_s0 * temp_v21); temp_v15 = temp_v20, (int)temp_v8 >= 0x47800000;
              temp_v8 = temp_v8 - (float)temp_v22) {
          }
          for (; (int)temp_v15 >= 0x47800000; temp_v15 = temp_v15 - (float)temp_v22) {
          }
          temp_v9 = VectorFloatToUnsigned(temp_v20,3);
          temp_v12 = VectorFloatToUnsigned(temp_v8,3);
          temp_v10 = VectorFloatToUnsigned(temp_v15,3);
          temp_v11 = temp_v9 & 0xff;
          temp_v13 = (float)VectorUnsignedToFloat(temp_v9 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v9 = temp_v12 & 0xff;
          temp_v16 = (float)VectorUnsignedToFloat(temp_v12 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v12 = temp_v10 & 0xff;
          temp_v18 = (float)VectorUnsignedToFloat(temp_v10 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v14 = (float)(&DAT_00407ed0)[temp_v11 * 4] +
                   (temp_v20 - temp_v13) * (float)(&DAT_00407ed8)[temp_v11 * 4];
          temp_v17 = (float)(&DAT_00407ed0)[temp_v9 * 4] +
                   (temp_v8 - temp_v16) * (float)(&DAT_00407ed8)[temp_v9 * 4];
          temp_v13 = (float)(&DAT_00407ed4)[temp_v11 * 4] +
                   (temp_v20 - temp_v13) * (float)(&DAT_00407edc)[temp_v11 * 4];
          temp_v41 = (float)(&DAT_00407ed4)[temp_v9 * 4] +
                     (temp_v8 - temp_v16) * (float)(&DAT_00407edc)[temp_v9 * 4];
          temp_v16 = (float)(&DAT_00407ed0)[temp_v12 * 4] +
                   (temp_v15 - temp_v18) * (float)(&DAT_00407ed8)[temp_v12 * 4];
          temp_v8 = (float)(&DAT_00407ed4)[temp_v12 * 4] +
                   (temp_v15 - temp_v18) * (float)(&DAT_00407edc)[temp_v12 * 4];
          if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
            temp_v17 = -temp_v17;
          }
          temp_v31 = temp_v8 * temp_v41;
          temp_v35 = temp_v16 * temp_v41;
          temp_v40 = temp_v14 * temp_v41;
          temp_v41 = temp_v13 * temp_v41;
          temp_v39 = -temp_v17;
          temp_v32 = temp_v14 * temp_v8 * temp_v17 - temp_v13 * temp_v16;
          in_s0 = temp_v13 * temp_v16 * temp_v17 - temp_v14 * temp_v8;
          temp_v33 = temp_v14 * temp_v16 + temp_v13 * temp_v8 * temp_v17;
          temp_v36 = temp_v13 * temp_v8 + temp_v14 * temp_v16 * temp_v17;
          temp_v34 = 0;
          temp_v38 = 0;
          temp_v42 = 0;
          temp_v26 = temp_v0;
          temp_v37 = in_s0;
          nn_math_ARMv6_MTX34MultTranslateAsm(temp_v43,temp_v44,temp_v30);
          FUN_0023d20c(temp_v43,temp_v43,&temp_v47);
          nn_math_ARMv6_MTX34MultAsm(temp_v43,temp_v43,&temp_v31);
          if (temp_v5 != temp_v25) {
            temp_v2 = FUN_0023d1ec(temp_v25,0);
            FUN_0023d158(temp_v23[0],temp_v2);
            temp_v5 = temp_v25;
          }
          if (temp_v6 != temp_v1) {
            temp_v23[0] = FUN_0023d0d4(temp_v23[0],temp_v1);
            temp_v6 = temp_v1;
          }
          if (temp_v7 != temp_v24) {
            FUN_0023d078(temp_v23[0],temp_v24);
            temp_v7 = temp_v24;
          }
          temp_v0 = *(int *)(temp_v25 + 0x44);
          FUN_00349e34(temp_v0,temp_v23[0],temp_v26,temp_v43);
          temp_v23[0] = temp_v0;
        }
      }
      temp_v4 = temp_v4 + 1;
      temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 8) + 8))();
    } while (temp_v4 < temp_v0);
  }
  temp_v23[0] = FUN_00356e90(temp_v23[0]);
  FUN_002af39c((temp_v23[0] - temp_v45) & 0xfffffffc);
  nw_gfx_RenderContext_ResetState_364D68(temp_v51,0x44,0);
  return;
}

} /* extern "C" */
