/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047ce24` (_code @ 0x47ce24, 0x7a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167618(...);
int efctSetSpeed(void);
int FUN_0016c4b8(...);
int FUN_0018291c(...);
int FUN_001879d0(...);
int FUN_0019ac70(int *, unsigned int);
int FUN_0019b770(...);
int jobGetScalarValue(void);
int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int renderCtxCallB(void);
int FUN_002f5020(...);
int renderStatePop(void);
int FUN_0032cef8(unsigned int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

/* stack frame of param_3: 29 slot(s), 116 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp170; /* 0x170: local_170 */
    unsigned int sp178; /* 0x178: local_178 */
    unsigned int sp17C; /* 0x17c: local_17c */
    unsigned int sp180; /* 0x180: local_180 */
} param_3_stack;

extern unsigned char LAB_00192824; /* 0x192824 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */
extern unsigned int DAT_00630724; /* 0x630724 */
extern unsigned int DAT_00630728; /* 0x630728 */
extern unsigned int DAT_0063072c; /* 0x63072c */
extern unsigned int DAT_00630730; /* 0x630730 */
extern unsigned int DAT_00630734; /* 0x630734 */
extern unsigned int DAT_00630744; /* 0x630744 */
extern unsigned int DAT_00630754; /* 0x630754 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00167618. */
/* Supplied declaration required: efctSetSpeed. */
extern float packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0018291c. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_0019ac70. */
/* Supplied declaration required: FUN_0019b770. */
/* Supplied declaration required: jobGetScalarValue. */
/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: FUN_001b63b0. */
/* Supplied declaration required: renderCtxCallB. */
extern int asdSoundGetOption2(void);
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: renderStatePop. */
extern unsigned int flagsAt6CGet(void);
extern int asdSoundGetOption0(void);
/* Supplied declaration required: FUN_0032cef8. */
extern int asdSoundGetOption3(void);
extern int asdSoundGetOption1(void);


int FUN_0047ce24(unsigned int param_1,int param_2,unsigned int *param_3)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr, in_s0; 16 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  int temp_v17;
  unsigned int uStack_174;
  int temp_v18;
  unsigned int uStack_16c;
  unsigned int uStack_168;
  unsigned int uStack_164;
  float temp_v19 [36];
  unsigned int temp_v20;
  unsigned int temp_v21;
  int temp_v22;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  float fStack_ac;
  float temp_v23;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  float fStack_9c;
  int temp_v24;
  unsigned int uStack_94;
  unsigned int uStack_90;
  float fStack_8c;
  int temp_v25;
  unsigned int uStack_74;
  unsigned int uStack_70;
  float fStack_6c;
  float temp_v26;
  unsigned int uStack_64;
  unsigned int uStack_60;
  float fStack_5c;
  int temp_v27;
  unsigned int uStack_54;
  unsigned int uStack_50;
  float fStack_4c;
  unsigned int temp_v28;
  int iStack_2c;
  unsigned int *puStack_28;
  
  temp_v3 = 0;
  temp_v2 = 0;
  temp_v9 = 0;
  temp_v8 = *(int *)(param_2 + 0xc);
  temp_v28 = param_1;
  iStack_2c = param_2;
  puStack_28 = param_3;
  jobGetScalarValue();
  FUN_002f5020(temp_v19 + 0x10,&LAB_00192824,0x10,4);
  FUN_002f5020(temp_v19,&LAB_00192824,0x10,4);
  temp_v18 = 0;
  temp_v4 = asdSoundGetOption2();
  if (temp_v4 != 0) {
    temp_v5 = param_3[3] + (unsigned int)*(unsigned char *)(param_2 + 0x10);
    if ((int)temp_v5 >= 0x100) {
      temp_v5 = 0xff;
    }
    param_3[3] = temp_v5;
  }
  temp_v4 = 0;
  do {
    temp_v19[temp_v4 * 4 + 0x10] = 1.0f;
    temp_v19[temp_v4 * 4 + 0x11] = 1.0f;
    temp_v19[temp_v4 * 4 + 0x12] = 1.0f;
    temp_v19[temp_v4 * 4 + 0x13] = in_s0;
    temp_v11 = (float)(&DAT_00630728)[temp_v4 * 4];
    temp_v12 = (float)(&DAT_0063072c)[temp_v4 * 4];
    temp_v13 = (float)(&DAT_00630730)[temp_v4 * 4];
    temp_v6 = temp_v4 + 1;
    temp_v19[temp_v4 * 4] = (float)(&DAT_00630724)[temp_v4 * 4];
    temp_v19[temp_v4 * 4 + 1] = temp_v11;
    temp_v19[temp_v4 * 4 + 2] = temp_v12;
    temp_v19[temp_v4 * 4 + 3] = temp_v13;
    temp_v4 = temp_v6;
  } while (temp_v6 < 4);
  temp_v21 = flagsAt6CGet();
  if (temp_v8 != 0) {
    temp_v11 = 0.0f;
    if (((((*(unsigned short *)(temp_v8 + 0xc) & 2) != 0) && ((*param_3 & 8) == 0)) ||
        ((temp_v12 = in_s0, (*(unsigned short *)(temp_v8 + 0xc) & 4) != 0 && ((*param_3 & 4) == 0)))) &&
       (temp_v13 = *(float *)(temp_v8 + 8), temp_v12 = temp_v13, in_s0 != 1.0f)) {
      temp_v5 = in_fpscr & 0xfffffff;
      if (in_s0 != 0.0f) {
        temp_v12 = temp_v13 * in_s0;
        in_fpscr = temp_v5 | ((unsigned int)(temp_v12 == 0.0f) << 0x1e);
        if ((romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) &&
           (in_fpscr = temp_v5 | ((unsigned int)(temp_v13 == 0.0f) << 0x1e), !romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0))) {
          temp_v12 = 0.003921569f;
        }
        goto LAB_0047cf80;
      }
      in_fpscr = temp_v5 | ((unsigned int)(temp_v13 == 0.0f) << 0x1e);
      if (romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) goto LAB_0047cf80;
    }
    else {
LAB_0047cf80:
      temp_v4 = asdSoundGetOption3();
      temp_v9 = temp_v4 != 0;
      if (temp_v9) {
        temp_v20 = 0;
        temp_v19[0x20] = (float)packNibblesAndByte(6,7,0);
        temp_v19[0x21] = (float)packNibblesAndByte(6,1,0);
        temp_v19[0x22] = (float)packNibblesAndByte(6,1,2);
        temp_v19[0x23] = (float)packNibblesAndByte(5,0,1);
        FUN_0032cef8(*(unsigned int *)((int)temp_v19 + (*(unsigned short *)(temp_v8 + 0xc) >> 4 & 0xfc) + 0x80)
                    );
      }
      if (((*(unsigned short *)(temp_v8 + 0xc) & 4) != 0) && (temp_v4 = 0, (*param_3 & 4) == 0)) {
        do {
          if (temp_v4 == 2) {
            temp_v6 = 3;
          }
          else {
            temp_v6 = temp_v4;
            if (temp_v4 == 3) {
              temp_v6 = 2;
            }
          }
          temp_v6 = temp_v8 + temp_v6 * 0x10;
          temp_v13 = *(float *)(temp_v6 + 0x10);
          temp_v14 = *(float *)(temp_v6 + 0x14);
          temp_v15 = *(float *)(temp_v6 + 0x18);
          temp_v16 = *(float *)(temp_v6 + 0x1c);
          if (temp_v19[temp_v4 * 4] != 1.0f) {
            temp_v13 = temp_v13 * temp_v19[temp_v4 * 4];
          }
          if (temp_v19[temp_v4 * 4 + 1] != 1.0f) {
            temp_v14 = temp_v14 * temp_v19[temp_v4 * 4 + 1];
          }
          if (temp_v19[temp_v4 * 4 + 2] != 1.0f) {
            temp_v15 = temp_v15 * temp_v19[temp_v4 * 4 + 2];
          }
          temp_v6 = temp_v4 + 1;
          temp_v19[temp_v4 * 4 + 0x10] = temp_v13;
          temp_v19[temp_v4 * 4 + 0x11] = temp_v14;
          temp_v19[temp_v4 * 4 + 0x12] = temp_v15;
          temp_v19[temp_v4 * 4 + 0x13] = temp_v16;
          temp_v4 = temp_v6;
        } while (temp_v6 < 4);
      }
      if (*(short *)(temp_v8 + 4) == 0) {
        if (((*(unsigned short *)(temp_v8 + 0xc) & 2) != 0) && ((*param_3 & 8) == 0)) {
          temp_v2 = 1;
          efctSetSpeed();
        }
        if (((*(unsigned short *)(temp_v8 + 0xc) & 4) != 0) && ((*param_3 & 4) == 0)) {
          temp_v19[0x13] = temp_v19[0x13] * temp_v12;
          temp_v3 = 1;
          temp_v2 = 1;
          temp_v19[0x17] = temp_v19[0x17] * temp_v12;
          temp_v19[0x1b] = temp_v19[0x1b] * temp_v12;
          temp_v19[0x1f] = temp_v19[0x1f] * temp_v12;
          temp_v19[0x20] = temp_v19[0x1c];
          temp_v19[0x21] = temp_v19[0x1d];
          temp_v19[0x22] = temp_v19[0x1e];
          temp_v22 = temp_v19[0x18];
          uStack_b4 = temp_v19[0x19];
          uStack_b0 = temp_v19[0x1a];
          temp_v23 = temp_v19[0x14];
          uStack_a4 = temp_v19[0x15];
          uStack_a0 = temp_v19[0x16];
          temp_v24 = temp_v19[0x10];
          uStack_94 = temp_v19[0x11];
          uStack_90 = temp_v19[0x12];
          temp_v19[0x23] = temp_v19[0x1f];
          fStack_ac = temp_v19[0x1b];
          fStack_9c = temp_v19[0x17];
          fStack_8c = temp_v19[0x13];
          FUN_0018291c(&temp_v24,&temp_v23,&temp_v22,temp_v19 + 0x20,temp_v18,1);
        }
        goto LAB_0047d190;
      }
      if (*(short *)(temp_v8 + 4) == 1) {
        if ((*param_3 & 2) != 0) {
          param_3[1] = param_3[1] + (int)*(short *)(param_2 + 8);
          param_3[2] = (int)*(short *)(param_2 + 10) + param_3[2];
        }
        if (((*(unsigned short *)(temp_v8 + 0xc) & 2) != 0) && ((*param_3 & 8) == 0)) {
          temp_v2 = 1;
          efctSetSpeed();
        }
        if (((*(unsigned short *)(temp_v8 + 0xc) & 4) != 0) && ((*param_3 & 4) == 0)) {
          temp_v19[0x13] = temp_v19[0x13] * temp_v12;
          temp_v3 = 1;
          temp_v2 = 1;
          temp_v19[0x17] = temp_v19[0x17] * temp_v12;
          temp_v19[0x1b] = temp_v19[0x1b] * temp_v12;
          temp_v19[0x1f] = temp_v19[0x1f] * temp_v12;
          temp_v19[0x20] = temp_v19[0x1c];
          temp_v19[0x21] = temp_v19[0x1d];
          temp_v19[0x22] = temp_v19[0x1e];
          temp_v25 = temp_v19[0x18];
          uStack_74 = temp_v19[0x19];
          uStack_70 = temp_v19[0x1a];
          temp_v26 = temp_v19[0x14];
          uStack_64 = temp_v19[0x15];
          uStack_60 = temp_v19[0x16];
          temp_v27 = temp_v19[0x10];
          uStack_54 = temp_v19[0x11];
          uStack_50 = temp_v19[0x12];
          temp_v19[0x23] = temp_v19[0x1f];
          fStack_6c = temp_v19[0x1b];
          fStack_5c = temp_v19[0x17];
          fStack_4c = temp_v19[0x13];
          FUN_0018291c(&temp_v27,&temp_v26,&temp_v25,temp_v19 + 0x20,temp_v18,1);
        }
        temp_v13 = 0.00390625f;
        temp_v10 = (*param_3 & 0x10) == 0;
        temp_v1 = 0;
        temp_v12 = (float)VectorSignedToFloat(0x100 - param_3[3],(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v12 = temp_v12 * 0.00390625f;
        if (!temp_v10) {
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)param_3[0xc] == temp_v11) << 0x1e);
          temp_v10 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
        }
        temp_v14 = temp_v11;
        if (!temp_v10) {
          temp_v0 = (short)param_3[0xd];
          temp_v5 = param_3[1];
          temp_v7 = param_3[2];
          if (temp_v0 == 1) {
            temp_v5 = temp_v5 + (param_3[5] >> 1);
          }
          else if (temp_v0 == 2) {
            temp_v5 = temp_v5 + param_3[5];
          }
          else if (temp_v0 == 3) {
            temp_v5 = (unsigned int)(short)param_3[0xe];
          }
          temp_v0 = *(short *)((int)param_3 + 0x36);
          if (temp_v0 == 1) {
            temp_v7 = temp_v7 + (param_3[6] >> 1);
          }
          else if (temp_v0 == 2) {
            temp_v7 = temp_v7 + param_3[6];
          }
          else if (temp_v0 == 3) {
            temp_v7 = (unsigned int)*(short *)((int)param_3 + 0x3a);
          }
          VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_0019ac70(&temp_v22,temp_v7);
          temp_v14 = (float)param_3[0xc];
          temp_v1 = 1;
        }
        temp_v4 = asdSoundGetOption0();
        if (temp_v4 != 0) {
          temp_v5 = *param_3 & 0x400000;
          if ((*param_3 & 0x800000) != 0) {
            temp_v7 = param_3[4];
            if (temp_v5 != 0) {
              temp_v7 = temp_v7 + *(unsigned char *)(param_2 + 0x11);
            }
            if ((int)temp_v7 >= 0x101) {
              temp_v7 = 0x100;
            }
          }
          else {
            temp_v7 = param_3[3];
            if (temp_v5 != 0) {
              temp_v7 = (unsigned int)*(unsigned char *)(param_2 + 0x11);
            }
          }
          if (param_3[3] != temp_v7) {
            temp_v12 = (float)VectorSignedToFloat(0x100 - temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v12 = temp_v12 * temp_v13;
          }
          FUN_001879d0(g_renderCtx);
          temp_v15 = temp_v12;
          temp_v4 = asdSoundGetOption1();
          if (temp_v4 != 0) {
            temp_v12 = (float)(int)temp_v15;
          }
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v14 == temp_v11) << 0x1e);
          if (temp_v4 != 0) {
            temp_v15 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
            temp_v12 = temp_v14 * 2.0f * -3.1415927f * temp_v13 * 40.743664f;
            temp_v11 = temp_v12;
            FUN_001a1ee0();
            temp_v13 = (float)VectorSignedToFloat(param_3[2],(unsigned char)(in_fpscr >> 0x16) & 3);
            param_3[2] = (int)(temp_v13 - temp_v12 * temp_v15);
            FUN_001b63b0();
            temp_v15 = temp_v11 * temp_v15;
          }
          temp_v11 = (float)VectorSignedToFloat(param_3[1],(unsigned char)(in_fpscr >> 0x16) & 3);
          param_3[1] = (int)(temp_v11 + temp_v15);
        }
        FUN_0016c4b8(g_renderCtx,0);
        VectorUnsignedToFloat(param_3[6],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorUnsignedToFloat(param_3[5],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(param_3[2],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(param_3[1],(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00167618(&DAT_00630724,&DAT_00630734,&DAT_00630744,&DAT_00630754);
        if (temp_v1) {
          renderCtxCallB();
        }
        if (temp_v2) {
          efctSetSpeed();
        }
        if (temp_v3) {
          temp_v17 = temp_v19[0xc];
          uStack_174 = temp_v19[0xd];
          temp_v18 = temp_v19[0xe];
          uStack_16c = temp_v19[0xf];
          temp_v19[0x20] = temp_v19[8];
          temp_v19[0x21] = temp_v19[9];
          temp_v19[0x22] = temp_v19[10];
          temp_v19[0x23] = temp_v19[0xb];
          temp_v25 = temp_v19[4];
          uStack_74 = temp_v19[5];
          uStack_70 = temp_v19[6];
          fStack_6c = temp_v19[7];
          temp_v26 = temp_v19[0];
          uStack_64 = temp_v19[1];
          uStack_60 = temp_v19[2];
          fStack_5c = temp_v19[3];
          FUN_0018291c(&temp_v26,&temp_v25,temp_v19 + 0x20,&temp_v17,temp_v21,0);
        }
        if (temp_v9) {
          renderStatePop();
        }
        return 1;
      }
      if (temp_v9) {
        renderStatePop();
      }
    }
    param_2 = 0;
  }
  else {
LAB_0047d190:
    FUN_0019b770(param_2,param_3,temp_v28,0);
    if (temp_v2) {
      efctSetSpeed();
    }
    if (temp_v3) {
      temp_v18 = temp_v19[0xc];
      uStack_16c = temp_v19[0xd];
      uStack_168 = temp_v19[0xe];
      uStack_164 = temp_v19[0xf];
      temp_v19[0x20] = temp_v19[8];
      temp_v19[0x21] = temp_v19[9];
      temp_v19[0x22] = temp_v19[10];
      temp_v19[0x23] = temp_v19[0xb];
      temp_v22 = temp_v19[4];
      uStack_b4 = temp_v19[5];
      uStack_b0 = temp_v19[6];
      fStack_ac = temp_v19[7];
      temp_v23 = temp_v19[0];
      uStack_a4 = temp_v19[1];
      uStack_a0 = temp_v19[2];
      fStack_9c = temp_v19[3];
      FUN_0018291c(&temp_v23,&temp_v22,temp_v19 + 0x20,&temp_v18,temp_v21,0);
    }
    if (temp_v9) {
      renderStatePop();
    }
  }
  return param_2;
}

} /* extern "C" */
