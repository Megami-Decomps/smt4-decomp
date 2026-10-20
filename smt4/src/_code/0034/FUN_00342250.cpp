/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00342250` (_code @ 0x342250, 0x404 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023d078(int, int);
int FUN_0023d158(int, unsigned int);
int FUN_0023d20c(unsigned char [48], unsigned char [48], float *);
int FUN_0023d274(int, int);
int asdModelAdvanceCommandCursor(unsigned int);
int FUN_002bc7f4(int, int *);
int FUN_00349d88(int, int, int, unsigned char [48]);
int FUN_0034dbb4(void);
int FUN_0034dc10(void);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_MTX34MultAsm(unsigned char [48], unsigned char [48], float *);
int nn_math_ARMv6_MTX34MultTranslateAsm(unsigned char [48], int, unsigned int);
int nw_gfx_RenderContext_ResetState_364D68(...);

typedef int romwright_code(...);
/* stack frame of param_2: 21 slot(s), 84 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
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
/* Supplied declaration required: asdModelAdvanceCommandCursor. */
/* Supplied declaration required: FUN_002bc7f4. */
/* Supplied declaration required: FUN_00349d88. */
/* Supplied declaration required: FUN_0034dbb4. */
/* Supplied declaration required: FUN_0034dc10. */
extern int FUN_00356e90(int);
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultTranslateAsm. */
/* Supplied declaration required: nw_gfx_RenderContext_ResetState_364D68. */


/* WARNING: Removing unreachable block (ram,0x003424d0) */
/* WARNING: Removing unreachable block (ram,0x003424e0) */

void FUN_00342250(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 16 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int in_fpscr;
  float in_s0;
  unsigned int temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  unsigned int temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned long long temp_v21;
  int temp_v22;
  int temp_v23;
  int temp_v24;
  int temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  unsigned int temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  unsigned int temp_v33;
  float temp_v34;
  float temp_v35;
  float fStack_98;
  unsigned int temp_v36;
  unsigned char temp_v37 [48];
  unsigned int temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  unsigned int temp_v42;
  int iStack_2c;
  unsigned int temp_v43;
  
  temp_v22 = 0;
  temp_v25 = *(int *)(param_1 + 4) + 0x8c;
  iStack_2c = param_1;
  temp_v43 = param_2;
  FUN_002bc7f4(0x208,&temp_v22);
  temp_v0 = temp_v22;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v7 = 0;
  FUN_0034dc10();
  FUN_0034dbb4();
  temp_v6 = 0;
  temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 8) + 8))();
  if (0 < temp_v1) {
    temp_v21 = 0x4222f983;
    temp_v19 = 0.0f;
    temp_v20 = 65536.0f;
    do {
      temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),temp_v6);
      if (temp_v1 != 0) {
        (**(romwright_code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),temp_v6);
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 == temp_v19) << 0x1e);
        if ((!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) &&
           (temp_v18 = in_s0,
           temp_v2 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x20))(*(int **)(param_1 + 8),temp_v6),
           (~temp_v2 & 0xff) == 0)) {
          temp_v23 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),temp_v6);
          temp_v24 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),temp_v6);
          temp_v38 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),temp_v6);
          (**(romwright_code **)(**(int **)(param_1 + 8) + 0x1c))(*(int **)(param_1 + 8),temp_v6);
          temp_v39 = temp_v18;
          temp_v40 = temp_v18;
          temp_v41 = temp_v18;
          temp_v3 = (**(romwright_code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),temp_v6);
          temp_v1 = temp_v3;
          FUN_0023d274(temp_v3,temp_v24);
          in_s0 = in_s0 * (float)temp_v21;
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v19 <= in_s0) << 0x1d);
          temp_v42 = 0;
          for (in_s0 = romwright_fabs_4(in_s0); temp_v18 = temp_v19, (int)in_s0 >= 0x47800000; in_s0 = in_s0 - temp_v20)
          {
          }
          for (; (int)temp_v18 >= 0x47800000; temp_v18 = temp_v18 - temp_v20) {
          }
          temp_v10 = VectorFloatToUnsigned(temp_v19,3);
          temp_v12 = VectorFloatToUnsigned(in_s0,3);
          temp_v14 = VectorFloatToUnsigned(temp_v18,3);
          temp_v5 = temp_v14;
          temp_v15 = (float)VectorUnsignedToFloat(temp_v10 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorUnsignedToFloat(temp_v12 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v10 = temp_v10 & 0xff;
          temp_v17 = (float)VectorUnsignedToFloat(temp_v14 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v12 = temp_v12 & 0xff;
          temp_v13 = (float)(&DAT_00407ed0)[temp_v10 * 4] +
                   (temp_v19 - temp_v15) * (float)(&DAT_00407ed8)[temp_v10 * 4];
          temp_v11 = (float)(&DAT_00407ed0)[temp_v12 * 4] +
                   (in_s0 - temp_v16) * (float)(&DAT_00407ed8)[temp_v12 * 4];
          temp_v15 = (float)(&DAT_00407ed4)[temp_v10 * 4] +
                   (temp_v19 - temp_v15) * (float)(&DAT_00407edc)[temp_v10 * 4];
          fStack_98 = (float)(&DAT_00407ed4)[temp_v12 * 4] +
                      (in_s0 - temp_v16) * (float)(&DAT_00407edc)[temp_v12 * 4];
          temp_v16 = (float)(&DAT_00407ed0)[temp_v5 * 4] +
                   (temp_v18 - temp_v17) * (float)(&DAT_00407ed8)[temp_v5 * 4];
          temp_v18 = (float)(&DAT_00407ed4)[temp_v5 * 4] +
                   (temp_v18 - temp_v17) * (float)(&DAT_00407edc)[temp_v5 * 4];
          if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
            temp_v11 = -temp_v11;
          }
          temp_v26 = temp_v18 * fStack_98;
          temp_v34 = -temp_v11;
          in_s0 = temp_v15 * temp_v16;
          temp_v30 = temp_v16 * fStack_98;
          temp_v35 = temp_v13 * fStack_98;
          fStack_98 = temp_v15 * fStack_98;
          temp_v27 = temp_v13 * temp_v18 * temp_v11 - in_s0;
          temp_v32 = in_s0 * temp_v11 - temp_v13 * temp_v18;
          temp_v28 = temp_v13 * temp_v16 + temp_v15 * temp_v18 * temp_v11;
          temp_v31 = temp_v15 * temp_v18 + temp_v13 * temp_v16 * temp_v11;
          temp_v29 = 0;
          temp_v33 = 0;
          temp_v36 = 0;
          temp_v24 = temp_v1;
          nn_math_ARMv6_MTX34MultTranslateAsm(temp_v37,temp_v25,temp_v38);
          FUN_0023d20c(temp_v37,temp_v37,&temp_v39);
          nn_math_ARMv6_MTX34MultAsm(temp_v37,temp_v37,&temp_v26);
          if (temp_v8 != temp_v3) {
            temp_v4 = FUN_0023d1ec(temp_v3,0);
            FUN_0023d158(temp_v22,temp_v4);
            temp_v8 = temp_v3;
          }
          if (temp_v9 != temp_v2) {
            temp_v22 = FUN_0023d0d4(temp_v22,temp_v2);
            temp_v9 = temp_v2;
          }
          if (temp_v7 != temp_v23) {
            FUN_0023d078(temp_v22,temp_v23);
            temp_v7 = temp_v23;
          }
          temp_v1 = *(int *)(temp_v3 + 0x44);
          FUN_00349d88(temp_v1,temp_v22,temp_v24,temp_v37);
          temp_v22 = temp_v1;
        }
      }
      temp_v6 = temp_v6 + 1;
      temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 8) + 8))();
    } while (temp_v6 < temp_v1);
  }
  temp_v22 = FUN_00356e90(temp_v22);
  asdModelAdvanceCommandCursor((temp_v22 - temp_v0) & 0xfffffffc);
  nw_gfx_RenderContext_ResetState_364D68(temp_v43,0x44,0);
  return;
}

} /* extern "C" */
