/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00184efc` (_code @ 0x184efc, 0x934 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167618(...);
int efctSetSpeed(void);
int FUN_0016c4b8(...);
int quadSetOrderedVectors(...);
int FUN_001879d0(...);
int camSetMatrixA(...);
int FUN_0019ac70(unsigned char [92], unsigned int);
int FUN_0019b770(...);
int FUN_0019f678(...);
int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int FUN_002f5020(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_4: 26 slot(s), 104 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp170; /* 0x170: local_170 */
    unsigned int sp180; /* 0x180: local_180 */
    unsigned int sp190; /* 0x190: local_190 */
    unsigned int sp198; /* 0x198: local_198 */
    unsigned int sp19C; /* 0x19c: local_19c */
    unsigned int sp1A0; /* 0x1a0: local_1a0 */
} param_4_stack;

extern unsigned char LAB_00192824; /* 0x192824 */
extern int g_renderCtx; /* 0x59dbb4 */
extern unsigned int DAT_00630724; /* 0x630724 */
extern unsigned int DAT_00630728; /* 0x630728 */
extern unsigned int DAT_0063072c; /* 0x63072c */
extern unsigned int DAT_00630730; /* 0x630730 */
extern unsigned int DAT_00630734; /* 0x630734 */
extern unsigned int DAT_00630744; /* 0x630744 */
extern unsigned int DAT_00630754; /* 0x630754 */
extern unsigned char DAT_00630764; /* 0x630764 */
extern float DAT_0063077c; /* 0x63077c */
extern unsigned char g_asdSoundOptions; /* 0x6308f8 */
extern signed char DAT_0063098a; /* 0x63098a */
extern signed char DAT_0063098b; /* 0x63098b */
extern unsigned int DAT_0063098c; /* 0x63098c */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00167618. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: quadSetOrderedVectors. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: camSetMatrixA. */
/* Supplied declaration required: FUN_0019ac70. */
/* Supplied declaration required: FUN_0019b770. */
/* Supplied declaration required: FUN_0019f678. */
/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: FUN_001b63b0. */
/* Supplied declaration required: FUN_002f5020. */


int FUN_00184efc(unsigned int param_1,int param_2,unsigned int *param_3,int param_4)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  float temp_v12;
  int temp_v13;
  int *piVar15;
  int temp_v14;
  unsigned char temp_v15;
  unsigned int in_fpscr;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  int temp_v20;
  unsigned int uStack_194;
  int temp_v21;
  unsigned int uStack_18c;
  unsigned int uStack_188;
  unsigned int uStack_184;
  float temp_v22 [5];
  unsigned char *puStack_16c;
  unsigned int uStack_168;
  unsigned int uStack_164;
  unsigned int temp_v23;
  unsigned int uStack_15c;
  unsigned int uStack_158;
  unsigned int uStack_154;
  unsigned int temp_v24;
  unsigned int uStack_14c;
  unsigned int uStack_148;
  unsigned int uStack_144;
  float temp_v25 [19];
  unsigned int uStack_f4;
  int temp_v26;
  unsigned char *temp_v27;
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  unsigned int temp_v28;
  float temp_v29;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  float fStack_c4;
  int temp_v30;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  float fStack_b4;
  int temp_v31;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  float fStack_a4;
  float temp_v32;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  float fStack_94;
  unsigned char temp_v33 [92];
  unsigned int temp_v34;
  int iStack_30;
  unsigned int *puStack_2c;
  int temp_v35;
  
  temp_v4 = 0;
  temp_v3 = 0;
  temp_v5 = 0;
  temp_v13 = *(int *)(param_2 + 0xc);
  temp_v34 = param_1;
  iStack_30 = param_2;
  puStack_2c = param_3;
  temp_v35 = param_4;
  temp_v17 = DAT_0063077c;
  FUN_002f5020(temp_v25,&LAB_00192824,0x10,4);
  FUN_002f5020(temp_v22,&LAB_00192824,0x10,4);
  temp_v27 = &g_asdSoundOptions;
  temp_v25[0x10] = 0.0f;
  if (DAT_0063098a != '\0') {
    temp_v6 = param_3[3] + (unsigned int)*(unsigned char *)(param_2 + 0x10);
    if ((int)temp_v6 >= 0x100) {
      temp_v6 = 0xff;
    }
    param_3[3] = temp_v6;
  }
  temp_v9 = g_renderCtx;
  temp_v8 = 0;
  do {
    temp_v25[temp_v8 * 4] = 1.0f;
    temp_v25[temp_v8 * 4 + 1] = 1.0f;
    temp_v25[temp_v8 * 4 + 2] = 1.0f;
    temp_v25[temp_v8 * 4 + 3] = temp_v17;
    temp_v11 = (float)(&DAT_00630730)[temp_v8 * 4];
    temp_v16 = (float)(&DAT_00630728)[temp_v8 * 4];
    temp_v18 = (float)(&DAT_0063072c)[temp_v8 * 4];
    temp_v7 = temp_v8 + 1;
    temp_v22[temp_v8 * 4] = (float)(&DAT_00630724)[temp_v8 * 4];
    temp_v22[temp_v8 * 4 + 1] = temp_v16;
    temp_v22[temp_v8 * 4 + 2] = temp_v18;
    temp_v22[temp_v8 * 4 + 3] = temp_v11;
    temp_v8 = temp_v7;
  } while (temp_v7 < 4);
  temp_v28 = (unsigned int)DAT_00630764;
  if (temp_v13 != 0) {
    temp_v0 = *(unsigned short *)(temp_v13 + 0xc);
    temp_v11 = 0.0f;
    if (((((temp_v0 & 2) != 0) && ((*param_3 & 8) == 0)) ||
        ((temp_v16 = temp_v17, (temp_v0 & 4) != 0 && ((*param_3 & 4) == 0)))) &&
       (temp_v18 = *(float *)(temp_v13 + 8), temp_v16 = temp_v18, temp_v17 != 1.0f)) {
      temp_v6 = in_fpscr & 0xfffffff;
      if (temp_v17 != 0.0f) {
        temp_v16 = temp_v18 * temp_v17;
        in_fpscr = temp_v6 | ((unsigned int)(temp_v16 == 0.0f) << 0x1e);
        if ((romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) &&
           (in_fpscr = temp_v6 | ((unsigned int)(temp_v18 == 0.0f) << 0x1e), !romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0))) {
          temp_v16 = 0.003921569f;
        }
        goto LAB_00185068;
      }
      in_fpscr = temp_v6 | ((unsigned int)(temp_v18 == 0.0f) << 0x1e);
      if (romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) goto LAB_00185068;
    }
    else {
LAB_00185068:
      if (DAT_0063098b != '\0') {
        temp_v8 = *(int *)((int)&DAT_0063098c + (temp_v0 >> 4 & 0xfc));
        piVar15 = (int *)(g_renderCtx + 0x12b8);
        temp_v7 = *piVar15;
        temp_v14 = piVar15[temp_v7 + 2];
        *piVar15 = temp_v7 + 1;
        piVar15[temp_v7 + 3] = temp_v8;
        if (*(char *)(temp_v9 + 0x12d0) != '\0' || temp_v14 != temp_v8) {
          (**(romwright_code **)(temp_v9 + 0x12d4))();
          *(unsigned char *)(temp_v9 + 0x12d0) = 0;
        }
        temp_v5 = 1;
      }
      temp_v9 = g_renderCtx;
      if (((*(unsigned short *)(temp_v13 + 0xc) & 4) != 0) && (temp_v8 = 0, (*param_3 & 4) == 0)) {
        do {
          if (temp_v8 == 2) {
            temp_v7 = 3;
          }
          else {
            temp_v7 = temp_v8;
            if (temp_v8 == 3) {
              temp_v7 = 2;
            }
          }
          temp_v7 = temp_v13 + temp_v7 * 0x10;
          temp_v17 = *(float *)(temp_v7 + 0x10);
          temp_v18 = *(float *)(temp_v7 + 0x14);
          temp_v19 = *(float *)(temp_v7 + 0x18);
          if (temp_v22[temp_v8 * 4] != 1.0f) {
            temp_v17 = temp_v17 * temp_v22[temp_v8 * 4];
          }
          temp_v12 = *(float *)(temp_v7 + 0x1c);
          if (temp_v22[temp_v8 * 4 + 1] != 1.0f) {
            temp_v18 = temp_v18 * temp_v22[temp_v8 * 4 + 1];
          }
          if (temp_v22[temp_v8 * 4 + 2] != 1.0f) {
            temp_v19 = temp_v19 * temp_v22[temp_v8 * 4 + 2];
          }
          temp_v7 = temp_v8 + 1;
          temp_v25[temp_v8 * 4 + 1] = temp_v18;
          temp_v25[temp_v8 * 4 + 2] = temp_v19;
          temp_v25[temp_v8 * 4 + 3] = temp_v12;
          temp_v25[temp_v8 * 4] = temp_v17;
          temp_v8 = temp_v7;
        } while (temp_v7 < 4);
      }
      if (*(short *)(temp_v13 + 4) == 0) {
        if (((*(unsigned short *)(temp_v13 + 0xc) & 2) != 0) && ((*param_3 & 8) == 0)) {
          temp_v3 = 1;
          efctSetSpeed();
        }
        if (((*(unsigned short *)(temp_v13 + 0xc) & 4) != 0) && ((*param_3 & 4) == 0)) {
          temp_v25[3] = temp_v25[3] * temp_v16;
          temp_v4 = 1;
          temp_v3 = 1;
          temp_v25[7] = temp_v25[7] * temp_v16;
          temp_v25[0xb] = temp_v25[0xb] * temp_v16;
          temp_v25[0xf] = temp_v25[0xf] * temp_v16;
          temp_v29 = temp_v25[0xc];
          uStack_cc = temp_v25[0xd];
          uStack_c8 = temp_v25[0xe];
          temp_v30 = temp_v25[8];
          uStack_bc = temp_v25[9];
          uStack_b8 = temp_v25[10];
          temp_v31 = temp_v25[4];
          uStack_ac = temp_v25[5];
          uStack_a8 = temp_v25[6];
          temp_v32 = temp_v25[0];
          uStack_9c = temp_v25[1];
          uStack_98 = temp_v25[2];
          fStack_c4 = temp_v25[0xf];
          fStack_b4 = temp_v25[0xb];
          fStack_a4 = temp_v25[7];
          fStack_94 = temp_v25[3];
          quadSetOrderedVectors(&temp_v32,&temp_v31,&temp_v30,&temp_v29,temp_v25[0x10],1);
        }
        goto LAB_001852bc;
      }
      if (*(short *)(temp_v13 + 4) == 1) {
        if ((*param_3 & 2) != 0) {
          param_3[1] = param_3[1] + (int)*(short *)(param_2 + 8);
          param_3[2] = param_3[2] + (int)*(short *)(param_2 + 10);
        }
        if (((*(unsigned short *)(temp_v13 + 0xc) & 2) != 0) && ((*param_3 & 8) == 0)) {
          temp_v3 = 1;
          efctSetSpeed();
        }
        if (((*(unsigned short *)(temp_v13 + 0xc) & 4) != 0) && ((*param_3 & 4) == 0)) {
          temp_v25[3] = temp_v25[3] * temp_v16;
          temp_v4 = 1;
          temp_v3 = 1;
          temp_v25[7] = temp_v25[7] * temp_v16;
          temp_v25[0xb] = temp_v25[0xb] * temp_v16;
          temp_v25[0xf] = temp_v25[0xf] * temp_v16;
          temp_v29 = temp_v25[0xc];
          uStack_cc = temp_v25[0xd];
          uStack_c8 = temp_v25[0xe];
          temp_v30 = temp_v25[8];
          uStack_bc = temp_v25[9];
          uStack_b8 = temp_v25[10];
          temp_v31 = temp_v25[4];
          uStack_ac = temp_v25[5];
          uStack_a8 = temp_v25[6];
          temp_v32 = temp_v25[0];
          uStack_9c = temp_v25[1];
          uStack_98 = temp_v25[2];
          fStack_c4 = temp_v25[0xf];
          fStack_b4 = temp_v25[0xb];
          fStack_a4 = temp_v25[7];
          fStack_94 = temp_v25[3];
          quadSetOrderedVectors(&temp_v32,&temp_v31,&temp_v30,&temp_v29,temp_v25[0x10],1);
        }
        temp_v16 = 0.00390625f;
        temp_v15 = (*param_3 & 0x10) == 0;
        temp_v2 = 0;
        temp_v17 = (float)VectorSignedToFloat(0x100 - param_3[3],(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = temp_v17 * 0.00390625f;
        if (!temp_v15) {
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)param_3[0xc] == temp_v11) << 0x1e);
          temp_v15 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
        }
        temp_v18 = temp_v11;
        if (!temp_v15) {
          temp_v1 = (short)param_3[0xd];
          temp_v6 = param_3[1];
          temp_v10 = param_3[2];
          if (temp_v1 == 1) {
            temp_v6 = temp_v6 + (param_3[5] >> 1);
          }
          else if (temp_v1 == 2) {
            temp_v6 = temp_v6 + param_3[5];
          }
          else if (temp_v1 == 3) {
            temp_v6 = (unsigned int)(short)param_3[0xe];
          }
          temp_v1 = *(short *)((int)param_3 + 0x36);
          if (temp_v1 == 1) {
            temp_v10 = temp_v10 + (param_3[6] >> 1);
          }
          else if (temp_v1 == 2) {
            temp_v10 = temp_v10 + param_3[6];
          }
          else if (temp_v1 == 3) {
            temp_v10 = (unsigned int)*(short *)((int)param_3 + 0x3a);
          }
          VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_0019ac70(temp_v33,temp_v10);
          temp_v18 = (float)param_3[0xc];
          temp_v2 = 1;
        }
        if (temp_v27[0x90] != '\0') {
          temp_v6 = *param_3 & 0x400000;
          if ((*param_3 & 0x800000) != 0) {
            temp_v10 = param_3[4];
            if (temp_v6 != 0) {
              temp_v10 = temp_v10 + *(unsigned char *)(param_2 + 0x11);
            }
            if ((int)temp_v10 >= 0x101) {
              temp_v10 = 0x100;
            }
          }
          else {
            temp_v10 = param_3[3];
            if (temp_v6 != 0) {
              temp_v10 = (unsigned int)*(unsigned char *)(param_2 + 0x11);
            }
          }
          if (param_3[3] != temp_v10) {
            temp_v17 = (float)VectorSignedToFloat(0x100 - temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v17 = temp_v17 * temp_v16;
          }
          FUN_001879d0(g_renderCtx);
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 == temp_v11) << 0x1e);
          if (temp_v27[0x91] != '\0') {
            temp_v17 = (float)VectorSignedToFloat((int)temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
            temp_v16 = temp_v18 * 2.0f * -3.1415927f * temp_v16 * 40.743664f;
            temp_v11 = temp_v16;
            FUN_001a1ee0();
            temp_v18 = (float)VectorSignedToFloat(param_3[2],(unsigned char)(in_fpscr >> 0x16) & 3);
            param_3[2] = (int)(temp_v18 - temp_v16 * temp_v17);
            FUN_001b63b0();
            temp_v17 = temp_v11 * temp_v17;
          }
          temp_v11 = (float)VectorSignedToFloat(param_3[1],(unsigned char)(in_fpscr >> 0x16) & 3);
          param_3[1] = (int)(temp_v11 + temp_v17);
        }
        if (temp_v35 != 0) {
          VectorUnsignedToFloat(param_3[6],(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat(param_3[5],(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(param_3[2],(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(param_3[1],(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_0019f678(temp_v35,0,&DAT_00630724,&DAT_00630734,&DAT_00630744,&DAT_00630754);
        }
        else {
          FUN_0016c4b8(g_renderCtx,0);
          VectorSignedToFloat(param_3[2],(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(param_3[1],(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat(param_3[5],(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat(param_3[6],(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00167618(&DAT_00630724,&DAT_00630734,&DAT_00630744,&DAT_00630754);
        }
        if (temp_v2) {
          camSetMatrixA(g_renderCtx,temp_v33);
        }
        if (temp_v3) {
          efctSetSpeed();
        }
        if (temp_v4) {
          temp_v20 = temp_v24;
          uStack_194 = uStack_14c;
          temp_v21 = uStack_148;
          uStack_18c = uStack_144;
          temp_v25[0x10] = (float)temp_v23;
          temp_v25[0x11] = (float)uStack_15c;
          temp_v25[0x12] = (float)uStack_158;
          uStack_f4 = uStack_154;
          temp_v26 = temp_v22[4];
          temp_v27 = puStack_16c;
          uStack_e0 = uStack_168;
          uStack_dc = uStack_164;
          temp_v29 = temp_v22[0];
          uStack_cc = temp_v22[1];
          uStack_c8 = temp_v22[2];
          fStack_c4 = temp_v22[3];
          quadSetOrderedVectors(&temp_v29,&temp_v26,temp_v25 + 0x10,&temp_v20,temp_v28,0);
        }
        temp_v13 = g_renderCtx;
        if (temp_v5) {
          piVar15 = (int *)(g_renderCtx + 0x12b8);
          temp_v9 = *piVar15;
          temp_v8 = piVar15[temp_v9 + 2];
          *piVar15 = temp_v9 - 1;
          if (*(char *)(temp_v13 + 0x12d0) != '\0' || temp_v8 != piVar15[temp_v9 + 1]) {
            (**(romwright_code **)(temp_v13 + 0x12d4))();
            *(unsigned char *)(temp_v13 + 0x12d0) = 0;
          }
        }
        return 1;
      }
      if (temp_v5) {
        piVar15 = (int *)(g_renderCtx + 0x12b8);
        temp_v13 = *piVar15;
        temp_v8 = piVar15[temp_v13 + 2];
        *piVar15 = temp_v13 - 1;
        if (*(char *)(temp_v9 + 0x12d0) != '\0' || temp_v8 != piVar15[temp_v13 + 1]) {
          (**(romwright_code **)(temp_v9 + 0x12d4))();
          *(unsigned char *)(temp_v9 + 0x12d0) = 0;
        }
      }
    }
    param_2 = 0;
  }
  else {
LAB_001852bc:
    FUN_0019b770(param_2,param_3,temp_v34,temp_v35);
    if (temp_v3) {
      efctSetSpeed();
    }
    if (temp_v4) {
      temp_v21 = temp_v24;
      uStack_18c = uStack_14c;
      uStack_188 = uStack_148;
      uStack_184 = uStack_144;
      temp_v25[0x10] = (float)temp_v23;
      temp_v25[0x11] = (float)uStack_15c;
      temp_v25[0x12] = (float)uStack_158;
      uStack_f4 = uStack_154;
      temp_v26 = temp_v22[4];
      temp_v27 = puStack_16c;
      uStack_e0 = uStack_168;
      uStack_dc = uStack_164;
      temp_v29 = temp_v22[0];
      uStack_cc = temp_v22[1];
      uStack_c8 = temp_v22[2];
      fStack_c4 = temp_v22[3];
      quadSetOrderedVectors(&temp_v29,&temp_v26,temp_v25 + 0x10,&temp_v21,temp_v28,0);
    }
    temp_v13 = g_renderCtx;
    if (temp_v5) {
      piVar15 = (int *)(g_renderCtx + 0x12b8);
      temp_v9 = *piVar15;
      temp_v8 = piVar15[temp_v9 + 2];
      *piVar15 = temp_v9 - 1;
      if (*(char *)(temp_v13 + 0x12d0) != '\0' || temp_v8 != piVar15[temp_v9 + 1]) {
        (**(romwright_code **)(temp_v13 + 0x12d4))(piVar15[temp_v9 + 1]);
        *(unsigned char *)(temp_v13 + 0x12d0) = 0;
      }
    }
  }
  return param_2;
}

} /* extern "C" */
