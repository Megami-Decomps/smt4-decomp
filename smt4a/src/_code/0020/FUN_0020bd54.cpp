/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020bd54` (_code @ 0x20bd54, 0xd8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int fadeObjectResetIfActive(...);

int FUN_00164b5c(...);
int FUN_0018291c(...);
int FUN_001835b4(...);
int FUN_002f5020(float [24], unsigned char *, int, int);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 26 slot(s), 104 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
} void_stack;

extern unsigned char LAB_00192824; /* 0x192824 */
extern unsigned char g_buttonHelp; /* 0x57f0c4 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetXInt(int);
extern int vec2GetYInt(int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018291c. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: fadeObjectResetIfActive. */
/* Supplied declaration required: FUN_002f5020. */
extern unsigned int dataTable0eSub1GetId(unsigned short);


void FUN_0020bd54(void)

{
/* irregular: 9 goto(s); irregular input(s): in_fpscr; 7 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int *piVar9;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  float temp_v23 [24];
  int aiStack_d0 [6];
  int aiStack_b8 [6];
  char acStack_a0 [8];
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  char acStack_60 [8];
  char acStack_58 [8];
  unsigned char temp_v38 [8];
  float temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float temp_v43;
  float temp_v44;
  
  temp_v5 = (*(int *)((unsigned char *)&g_buttonHelp + 0x4));
  temp_v21 = 0;
  temp_v22 = 0;
  FUN_002f5020(temp_v23,&LAB_00192824,0x10,6);
  temp_v10 = 0;
  temp_v17 = 255.0f;
  temp_v18 = 0.003921569f;
  temp_v7 = 0;
  do {
    temp_v9 = temp_v5 + temp_v7 * 4;
    if ((*(char *)(temp_v9 + 0x5ac) != '\0') &&
       (temp_v8 = temp_v5 + temp_v7 * 0x8c, *(char *)(temp_v8 + 0xb9) != '\0')) {
      acStack_a0[temp_v7] = '\x01';
      temp_v2 = vec2GetXInt(temp_v8 + 0x34);
      aiStack_d0[temp_v7] = temp_v2 + *(short *)(temp_v8 + 0x4c);
      temp_v2 = vec2GetYInt(temp_v8 + 0x34);
      aiStack_b8[temp_v7] = temp_v2 + *(short *)(temp_v8 + 0x4e);
      temp_v12 = VectorFloatToUnsigned(*(float *)(temp_v8 + 0x54) * temp_v17,3);
      temp_v6 = (temp_v12 & 0xff) - 0x100;
      temp_v38[temp_v7] = (unsigned char)temp_v12;
      temp_v13 = (float)VectorUnsignedToFloat(temp_v6 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = (float)VectorUnsignedToFloat((temp_v6 & 0xff0000) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      temp_v14 = (float)VectorUnsignedToFloat(temp_v6 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v16 = (float)VectorUnsignedToFloat((temp_v6 & 0xff00) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v23[temp_v7 * 4] = temp_v13 * temp_v18;
      temp_v23[temp_v7 * 4 + 1] = temp_v15 * temp_v18;
      temp_v23[temp_v7 * 4 + 2] = temp_v16 * temp_v18;
      temp_v23[temp_v7 * 4 + 3] = temp_v14 * temp_v18;
      acStack_60[temp_v7] = '\x01';
      acStack_58[temp_v7] = '\x01';
      temp_v0 = *(char *)(temp_v9 + 0x5ac);
      if (temp_v0 == '\x12' || temp_v0 == '\x11') {
        acStack_60[temp_v7] = '\0';
        acStack_58[temp_v7] = '\0';
      }
      else if ((((temp_v0 == '\a' || temp_v0 == '\n') || (temp_v0 == '\v' || temp_v0 == '\f')) ||
               (temp_v0 == '\r' || temp_v0 == '\x0e')) ||
              ((temp_v0 == '\x0f' || temp_v0 == '\x10') || temp_v0 == '\x13')) {
        acStack_60[temp_v7] = '\0';
      }
      temp_v10 = temp_v10 + 1;
    }
    else {
      acStack_a0[temp_v7] = '\0';
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 6);
  if (temp_v10 != 0) {
    temp_v7 = 0;
    do {
      if (acStack_a0[temp_v7] != '\0') {
        temp_v9 = aiStack_d0[temp_v7];
        temp_v10 = aiStack_b8[temp_v7];
        temp_v26 = temp_v23[temp_v7 * 4];
        temp_v27 = temp_v23[temp_v7 * 4 + 1];
        temp_v28 = temp_v23[temp_v7 * 4 + 2];
        temp_v29 = temp_v23[temp_v7 * 4 + 3];
        temp_v30 = temp_v26;
        temp_v31 = temp_v27;
        temp_v32 = temp_v28;
        temp_v33 = temp_v29;
        temp_v34 = temp_v26;
        temp_v35 = temp_v27;
        temp_v36 = temp_v28;
        temp_v37 = temp_v29;
        temp_v39 = temp_v26;
        temp_v40 = temp_v27;
        temp_v41 = temp_v28;
        temp_v42 = temp_v29;
        FUN_0018291c(&temp_v39,&temp_v30,&temp_v34,&temp_v26,0,1);
        temp_v0 = *(char *)(temp_v5 + temp_v7 * 4 + 0x5ac);
        if (((!(temp_v0 == '\a' || temp_v0 == '\n')) && (!(temp_v0 == '\v' || temp_v0 == '\f'))) &&
           ((!(temp_v0 == '\r' || temp_v0 == '\x0e') &&
            (!((temp_v0 == '\x0f' || temp_v0 == '\x10') || temp_v0 == '\x13'))))) {
          if (temp_v0 != '\x11') {
            if (temp_v0 != '\b') {
              if (temp_v0 != '\t') {
                temp_v6 = temp_v5 + temp_v7;
                if (!(temp_v0 == '\x15' || temp_v0 == '\x14')) {
                  if (*(char *)(temp_v6 + 0x5d4) != '\0') {
                    FUN_001835b4(2,10,4,temp_v9,temp_v10,0xb);
                  }
                  else {
                    FUN_001835b4(2,10,2,temp_v9,temp_v10,0xb);
                  }
                }
                else {
                  temp_v11 = *(char *)(temp_v6 + 0x5d4) == '\0';
                  if (temp_v11) {
                    temp_v6 = (unsigned int)*(unsigned char *)(temp_v6 + 0x5d5);
                  }
                  if (!(temp_v11 && temp_v6 == 0)) {
                    FUN_00164b5c(2,10,2,temp_v9,temp_v10,0xb);
                  }
                  else {
                    FUN_00164b5c(2,10,0,temp_v9,temp_v10,0xb);
                  }
                }
              }
              else if (*(char *)(temp_v5 + temp_v7 + 0x5d4) != '\0') {
                FUN_00164b5c(2,10,2,temp_v9,temp_v10,0xb);
              }
              else {
                FUN_00164b5c(2,10,6,temp_v9,temp_v10,0xb);
              }
            }
            else if (*(char *)(temp_v5 + temp_v7 + 0x5d4) != '\0') {
              FUN_00164b5c(2,10,5,temp_v9,temp_v10,0xb);
            }
            else {
              FUN_00164b5c(2,10,3,temp_v9,temp_v10,0xb);
            }
          }
          else {
            FUN_00164b5c(2,10,0,temp_v9,temp_v10,0xb);
          }
        }
        else if (*(char *)(temp_v5 + temp_v7 + 0x5d4) != '\0') {
          FUN_00164b5c(2,10,2,temp_v9,temp_v10,0xb);
        }
        else {
          FUN_00164b5c(2,10,0,temp_v9,temp_v10,0xb);
        }
      }
      temp_v10 = g_renderCtx;
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 6);
    temp_v7 = packNibblesAndByte(6,7,0);
    piVar9 = (int *)(temp_v10 + 0x12b8);
    temp_v9 = piVar9[*piVar9 + 2];
    piVar9[*piVar9 + 2] = temp_v7;
    if (*(char *)(temp_v10 + 0x12d0) != '\0' || temp_v9 != temp_v7) {
      (**(romwright_code **)(temp_v10 + 0x12d4))();
      *(unsigned char *)(temp_v10 + 0x12d0) = 0;
    }
    temp_v7 = 0;
    temp_v17 = temp_v23[0];
    do {
      if (acStack_a0[temp_v7] != '\0') {
        temp_v13 = temp_v23[temp_v7 * 4];
        temp_v10 = aiStack_d0[temp_v7];
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v17 == temp_v13) << 0x1e);
        temp_v9 = aiStack_b8[temp_v7];
        temp_v6 = (unsigned int)temp_v38[temp_v7];
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
          temp_v27 = temp_v23[temp_v7 * 4 + 1];
          temp_v28 = temp_v23[temp_v7 * 4 + 2];
          temp_v29 = temp_v23[temp_v7 * 4 + 3];
          temp_v17 = temp_v13;
          temp_v26 = temp_v13;
          temp_v30 = temp_v13;
          temp_v31 = temp_v27;
          temp_v32 = temp_v28;
          temp_v33 = temp_v29;
          temp_v34 = temp_v13;
          temp_v35 = temp_v27;
          temp_v36 = temp_v28;
          temp_v37 = temp_v29;
          temp_v39 = temp_v13;
          temp_v40 = temp_v27;
          temp_v41 = temp_v28;
          temp_v42 = temp_v29;
          FUN_0018291c(&temp_v26,&temp_v30,&temp_v34,&temp_v39,0,1);
        }
        temp_v0 = acStack_58[temp_v7];
        if (acStack_60[temp_v7] != '\0') {
          temp_v8 = temp_v5 + temp_v7 * 4;
          temp_v1 = *(char *)(temp_v8 + 0x5ac);
          temp_v20 = temp_v10;
          if (temp_v1 != '\x05') {
            if (temp_v1 == '\x06') {
              if (*(char *)(temp_v5 + temp_v7 + 0x5d4) == '\0') {
                temp_v21 = 7;
              }
              else {
                temp_v21 = 8;
              }
              temp_v22 = 0x10;
              goto LAB_0020c3d4;
            }
            if (temp_v1 == '\x01') {
              if (*(char *)(temp_v5 + temp_v7 + 0x5d4) == '\0') {
                temp_v21 = 5;
              }
              else {
                temp_v21 = 6;
              }
              temp_v22 = 0xb;
              goto LAB_0020c3d4;
            }
            if (temp_v1 == '\x02') {
              if (*(char *)(temp_v5 + temp_v7 + 0x5d4) == '\0') {
                temp_v21 = 5;
              }
              else {
                temp_v21 = 6;
              }
              temp_v22 = 0xc;
              goto LAB_0020c3d4;
            }
            if (temp_v1 == '\x03') {
              if (*(char *)(temp_v5 + temp_v7 + 0x5d4) == '\0') {
                temp_v21 = 5;
              }
              else {
                temp_v21 = 6;
              }
LAB_0020c35c:
              temp_v22 = 0xd;
              goto LAB_0020c3d4;
            }
            if (temp_v1 == '\x04') {
              if (*(char *)(temp_v5 + temp_v7 + 0x5d4) == '\0') {
                temp_v21 = 5;
              }
              else {
                temp_v21 = 6;
              }
              temp_v22 = 0xe;
              goto LAB_0020c3d4;
            }
            if (temp_v1 != '\b') {
              if (temp_v1 == '\t') {
                if (*(char *)(temp_v5 + temp_v7 + 0x5d4) == '\0') {
                  temp_v21 = 5;
                }
                else {
                  temp_v21 = 0xfe;
                }
                goto LAB_0020c35c;
              }
            }
            else {
              if (*(char *)(temp_v5 + temp_v7 + 0x5d4) == '\0') {
                temp_v21 = 5;
              }
              else {
                temp_v21 = 0xfe;
              }
              temp_v22 = 0xe;
              temp_v2 = FUN_001834a4(10,0x57);
              temp_v20 = (int)*(short *)(temp_v2 + 8);
            }
            if (*(char *)(temp_v8 + 0x5ac) != '\x14') {
              if (*(char *)(temp_v8 + 0x5ac) != '\x15') goto LAB_0020c3d4;
              temp_v12 = temp_v5 + temp_v7;
              temp_v11 = *(char *)(temp_v12 + 0x5d4) == '\0';
              if (temp_v11) {
                temp_v12 = (unsigned int)*(unsigned char *)(temp_v12 + 0x5d5);
              }
              if (!(temp_v11 && temp_v12 == 0)) {
                FUN_001835b4(2,10,0x109,temp_v20,temp_v9,0xc);
                FUN_001835b4(2,10,0x10a,temp_v20,temp_v9,0xc);
              }
              else {
                FUN_001835b4(2,10,0x105,temp_v20,temp_v9,0xc);
                FUN_001835b4(2,10,0x107,temp_v20,temp_v9,0xc);
              }
              FUN_001835b4(2,10,0x106,temp_v20,temp_v9,0x10);
              FUN_001835b4(2,10,0x108,temp_v20,temp_v9,0x10);
            }
            else {
              temp_v12 = temp_v5 + temp_v7;
              temp_v11 = *(char *)(temp_v12 + 0x5d4) == '\0';
              if (temp_v11) {
                temp_v12 = (unsigned int)*(unsigned char *)(temp_v12 + 0x5d5);
              }
              if (!(temp_v11 && temp_v12 == 0)) {
                FUN_001835b4(2,10,0x103,temp_v20,temp_v9,0xc);
                FUN_001835b4(2,10,0x104,temp_v20,temp_v9,0xc);
              }
              else {
                FUN_001835b4(2,10,0xff,temp_v20,temp_v9,0xc);
                FUN_001835b4(2,10,0x101,temp_v20,temp_v9,0xc);
              }
              FUN_001835b4(2,10,0x100,temp_v20,temp_v9,0x10);
              FUN_001835b4(2,10,0x102,temp_v20,temp_v9,0x10);
            }
          }
          else {
            if (*(char *)(temp_v5 + temp_v7 + 0x5d4) == '\0') {
              temp_v21 = 9;
            }
            else {
              temp_v21 = 10;
            }
            temp_v22 = 0xf;
LAB_0020c3d4:
            FUN_001835b4(2,10,temp_v21,temp_v20,temp_v9,0xc);
            if (*(char *)(temp_v5 + temp_v7 + 0x5d4) != '\0') {
              temp_v26 = (float)VectorUnsignedToFloat(0,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v27 = (float)VectorUnsignedToFloat(0,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v28 = (float)VectorUnsignedToFloat(0,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v29 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v26 = temp_v26 * temp_v18;
              temp_v27 = temp_v27 * temp_v18;
              temp_v28 = temp_v28 * temp_v18;
              temp_v29 = temp_v29 * temp_v18;
              temp_v30 = temp_v26;
              temp_v31 = temp_v27;
              temp_v32 = temp_v28;
              temp_v33 = temp_v29;
              temp_v34 = temp_v26;
              temp_v35 = temp_v27;
              temp_v36 = temp_v28;
              temp_v37 = temp_v29;
              temp_v41 = temp_v26;
              temp_v42 = temp_v27;
              temp_v43 = temp_v28;
              temp_v44 = temp_v29;
              FUN_0018291c(&temp_v41,&temp_v26,&temp_v30,&temp_v34,0,1);
              FUN_001835b4(2,10,temp_v22,temp_v20,temp_v9,0x10);
              temp_v12 = temp_v6 - 0x100;
              temp_v17 = (float)VectorUnsignedToFloat(temp_v12 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v17 = temp_v17 * temp_v18;
              temp_v27 = (float)VectorUnsignedToFloat
                                          ((temp_v12 & 0xff0000) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3)
              ;
              temp_v29 = (float)VectorUnsignedToFloat(temp_v12 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v28 = (float)VectorUnsignedToFloat
                                          ((temp_v12 & 0xff00) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v27 = temp_v27 * temp_v18;
              temp_v29 = temp_v29 * temp_v18;
              temp_v28 = temp_v28 * temp_v18;
              temp_v26 = temp_v17;
              temp_v30 = temp_v17;
              temp_v31 = temp_v27;
              temp_v32 = temp_v28;
              temp_v33 = temp_v29;
              temp_v34 = temp_v17;
              temp_v35 = temp_v27;
              temp_v36 = temp_v28;
              temp_v37 = temp_v29;
              temp_v41 = temp_v17;
              temp_v42 = temp_v27;
              temp_v43 = temp_v28;
              temp_v44 = temp_v29;
              FUN_0018291c(&temp_v34,&temp_v30,&temp_v26,&temp_v41,0,1);
            }
            else {
              FUN_001835b4(2,10,temp_v22,temp_v20,temp_v9,0x10);
            }
          }
        }
        if (temp_v0 != '\0') {
          temp_v8 = temp_v5 + temp_v7 * 4;
          temp_v3 = dataTable0eSub1GetId(*(unsigned short *)(temp_v8 + 0x5ae) & 0xff);
          temp_v2 = temp_v5 + temp_v7;
          temp_v12 = (unsigned int)(*(char *)(temp_v2 + 0x5d4) != '\0');
          if (!(*(char *)(temp_v8 + 0x5ac) == '\x15' || *(char *)(temp_v8 + 0x5ac) == '\x14')) {
LAB_0020c7bc:
            if (temp_v12 == 0) {
              FUN_001835b4(2,10,temp_v3,temp_v10,temp_v9,0xd);
              goto LAB_0020c98c;
            }
          }
          else {
            temp_v8 = FUN_001834a4(10,0x10b);
            temp_v4 = (unsigned int)*(short *)(temp_v8 + 8);
            temp_v10 = temp_v10 + temp_v4;
            temp_v11 = *(char *)(temp_v2 + 0x5d4) == '\0';
            if (temp_v11) {
              temp_v4 = (unsigned int)*(unsigned char *)(temp_v2 + 0x5d5);
            }
            if (temp_v11 && temp_v4 == 0) goto LAB_0020c7bc;
          }
          temp_v26 = (float)VectorUnsignedToFloat(0,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v28 = (float)VectorUnsignedToFloat(0,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v27 = (float)VectorUnsignedToFloat(0,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v26 = temp_v26 * temp_v18;
          temp_v29 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v28 = temp_v28 * temp_v18;
          temp_v27 = temp_v27 * temp_v18;
          temp_v29 = temp_v29 * temp_v18;
          temp_v30 = temp_v26;
          temp_v31 = temp_v27;
          temp_v32 = temp_v28;
          temp_v33 = temp_v29;
          temp_v34 = temp_v26;
          temp_v35 = temp_v27;
          temp_v36 = temp_v28;
          temp_v37 = temp_v29;
          temp_v39 = temp_v26;
          temp_v40 = temp_v27;
          temp_v41 = temp_v28;
          temp_v42 = temp_v29;
          FUN_0018291c(&temp_v26,&temp_v30,&temp_v34,&temp_v39,0,1);
          FUN_001835b4(2,10,temp_v3,temp_v10,temp_v9,0xd);
          temp_v6 = temp_v6 - 0x100;
          temp_v17 = (float)VectorUnsignedToFloat(temp_v6 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v17 = temp_v17 * temp_v18;
          temp_v27 = (float)VectorUnsignedToFloat
                                      ((temp_v6 & 0xff0000) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v27 = temp_v27 * temp_v18;
          temp_v28 = (float)VectorUnsignedToFloat
                                      ((temp_v6 & 0xff00) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v28 = temp_v28 * temp_v18;
          temp_v29 = (float)VectorUnsignedToFloat(temp_v6 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v29 = temp_v29 * temp_v18;
          temp_v26 = temp_v17;
          temp_v30 = temp_v17;
          temp_v31 = temp_v27;
          temp_v32 = temp_v28;
          temp_v33 = temp_v29;
          temp_v34 = temp_v17;
          temp_v35 = temp_v27;
          temp_v36 = temp_v28;
          temp_v37 = temp_v29;
          temp_v39 = temp_v17;
          temp_v40 = temp_v27;
          temp_v41 = temp_v28;
          temp_v42 = temp_v29;
          FUN_0018291c(&temp_v39,&temp_v34,&temp_v30,&temp_v26,0,1);
        }
      }
LAB_0020c98c:
      temp_v10 = g_renderCtx;
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 6);
    temp_v7 = packNibblesAndByte(6,1,0);
    piVar9 = (int *)(temp_v10 + 0x12b8);
    temp_v9 = piVar9[*piVar9 + 2];
    piVar9[*piVar9 + 2] = temp_v7;
    if (*(char *)(temp_v10 + 0x12d0) != '\0' || temp_v9 != temp_v7) {
      (**(romwright_code **)(temp_v10 + 0x12d4))();
      *(unsigned char *)(temp_v10 + 0x12d0) = 0;
    }
    temp_v19 = (unsigned long long)(unsigned int)temp_v23[0];
    temp_v7 = 0;
    do {
      if (acStack_a0[temp_v7] != '\0') {
        temp_v17 = temp_v23[temp_v7 * 4];
        if ((float)temp_v19 != temp_v17) {
          temp_v19 = (unsigned long long)(unsigned int)temp_v17;
          temp_v25 = temp_v23[temp_v7 * 4 + 1];
          temp_v26 = temp_v23[temp_v7 * 4 + 2];
          temp_v27 = temp_v23[temp_v7 * 4 + 3];
          temp_v24 = temp_v17;
          temp_v28 = temp_v17;
          temp_v29 = temp_v25;
          temp_v30 = temp_v26;
          temp_v31 = temp_v27;
          temp_v32 = temp_v17;
          temp_v33 = temp_v25;
          temp_v34 = temp_v26;
          temp_v35 = temp_v27;
          temp_v39 = temp_v17;
          temp_v40 = temp_v25;
          temp_v41 = temp_v26;
          temp_v42 = temp_v27;
          FUN_0018291c(&temp_v24,&temp_v28,&temp_v32,&temp_v39,0,1);
        }
        fadeObjectResetIfActive(temp_v5 + temp_v7 * 0x8c + 0x34);
      }
      temp_v10 = g_renderCtx;
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 6);
    temp_v5 = packNibblesAndByte(6,7,0);
    piVar9 = (int *)(temp_v10 + 0x12b8);
    temp_v7 = piVar9[*piVar9 + 2];
    piVar9[*piVar9 + 2] = temp_v5;
    if (*(char *)(temp_v10 + 0x12d0) != '\0' || temp_v7 != temp_v5) {
      (**(romwright_code **)(temp_v10 + 0x12d4))();
      *(unsigned char *)(temp_v10 + 0x12d0) = 0;
    }
  }
  return;
}

} /* extern "C" */
