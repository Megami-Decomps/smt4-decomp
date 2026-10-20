/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a8750` (_code @ 0x4a8750, 0x774 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00180008(...);
int FUN_00184310(void);
int FUN_00187180(...);
int FUN_00192798(void);
int FUN_001a9698(void);
int FUN_0032ff20(...);
int FUN_0035ad50(unsigned int, unsigned char [104]);
int FUN_003c3f1c(void);
int FUN_004bcd90(unsigned char [104]);
int FUN_004bd294(...);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int rt_memcpy_w(unsigned char [104], int, int);

/* stack frame of param_5: 27 slot(s), 98 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp25C; /* 0x25c: local_25c */
    unsigned int sp260; /* 0x260: local_260 */
    unsigned int sp264; /* 0x264: local_264 */
    unsigned int sp268; /* 0x268: local_268 */
    unsigned int sp26C; /* 0x26c: local_26c */
    unsigned int sp270; /* 0x270: local_270 */
    unsigned int sp274; /* 0x274: local_274 */
    unsigned int sp278; /* 0x278: local_278 */
    unsigned int sp27C; /* 0x27c: local_27c */
    unsigned int sp280; /* 0x280: local_280 */
    unsigned int sp284; /* 0x284: local_284 */
    unsigned int sp288; /* 0x288: local_288 */
    unsigned int sp28C; /* 0x28c: local_28c */
    unsigned int sp290; /* 0x290: local_290 */
    unsigned int sp294; /* 0x294: local_294 */
    unsigned int sp298; /* 0x298: local_298 */
    unsigned short sp302; /* 0x302: local_302 */
    unsigned short sp306; /* 0x306: local_306 */
    unsigned short sp30A; /* 0x30a: local_30a */
    unsigned short sp30E; /* 0x30e: local_30e */
    unsigned short sp312; /* 0x312: local_312 */
    unsigned int sp318; /* 0x318: local_318 */
} param_5_stack;

extern signed char DAT_0057f0ac; /* 0x57f0ac */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00180008. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00187180. */
/* Supplied declaration required: FUN_00192798. */
/* Supplied declaration required: FUN_001a9698. */
extern int FUN_001ab888(void);
extern int FUN_00213b5c(void);
/* Supplied declaration required: FUN_0032ff20. */
/* Supplied declaration required: FUN_0035ad50. */
/* Supplied declaration required: FUN_003c3f1c. */
extern int FUN_003e46f4(unsigned int);
/* Supplied declaration required: FUN_004bcd90. */
/* Supplied declaration required: FUN_004bd294. */
/* Supplied declaration required: rt_memcpy_w. */


/* WARNING: Removing unreachable block (ram,0x004a8ce8) */

unsigned int FUN_004a8750(unsigned int param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 15 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  unsigned char *puVar3;
  int *piVar4;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned char *puVar12;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  int temp_v13;
  unsigned short uStack_314;
  short temp_v14;
  unsigned short uStack_310;
  short temp_v15;
  unsigned short uStack_30c;
  short temp_v16;
  unsigned short uStack_308;
  short temp_v17;
  unsigned short uStack_304;
  short temp_v18;
  unsigned char temp_v19 [104];
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned char temp_v36 [52];
  unsigned short temp_v37 [126];
  char acStack_a4 [28];
  int temp_v38;
  unsigned char temp_v39 [12];
  unsigned int temp_v40;
  unsigned int temp_v41;
  unsigned int temp_v42;
  int iStack_30;
  int iStack_2c;
  unsigned int uStack_28;
  
  DAT_0057f0ac = (char)param_5;
  temp_v42 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  FUN_00184310();
  temp_v40 = param_1;
  if (param_3 != 0) {
    if (param_2 != 0) {
      temp_v6 = 2;
    }
    else {
      temp_v6 = 1;
    }
  }
  else {
    temp_v6 = 0;
    if (param_2 != 0) {
      temp_v6 = 1;
    }
  }
  if (param_5 != 0) {
    FUN_00180008(0);
  }
  temp_v7 = temp_v42;
  puVar12 = temp_v19;
  if (temp_v6 != 0) {
    if (temp_v6 != 1) {
      puVar12 = (unsigned char *)0x0;
      if (temp_v6 == 2) {
        temp_v6 = FUN_001ab888();
        temp_v2 = 0;
        if (temp_v2 < *(unsigned char *)(temp_v6 + 0x1ca3)) {
          do {
            temp_v3 = (int)*(char *)(temp_v6 + temp_v2 + 0x1c88);
            if ((-1 < temp_v3) &&
               (temp_v3 = temp_v6 + temp_v3 * 300, temp_v4 = temp_v3 + 0x68,
               *(unsigned short *)(temp_v3 + 0xca) == temp_v7)) goto LAB_004a8864;
            temp_v2 = (temp_v2 + 1) & 0xffff;
          } while (temp_v2 < *(unsigned char *)(temp_v6 + 0x1ca3));
        }
        temp_v4 = 0;
LAB_004a8864:
        rt_memcpy_w(temp_v19,temp_v4,300);
        temp_v20 = 0;
        temp_v21 = 0;
        temp_v22 = 0;
        temp_v23 = 0;
        temp_v24 = 0;
        temp_v25 = 0;
        temp_v26 = 0;
        temp_v27 = 0;
        temp_v28 = 0;
        temp_v29 = 0;
        temp_v30 = 0;
        temp_v31 = 0;
        temp_v32 = 0;
        temp_v33 = 0;
        temp_v34 = 0;
        temp_v35 = 0;
        FUN_004bcd90(temp_v19);
        puVar12 = temp_v19;
      }
    }
    else {
      FUN_0035ad50(temp_v42,temp_v19);
    }
  }
  else {
    FUN_0032ff20(temp_v42,temp_v19);
  }
  temp_v11 = (float)VectorSignedToFloat((int)*(short *)(puVar12 + 0x10),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(puVar12 + 0xe),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v12 = (float)VectorSignedToFloat((int)*(short *)(puVar12 + 0x12) +
                                      (int)*(short *)(puVar12 + 0x14) +
                                      (int)*(short *)(puVar12 + 0x16) +
                                      (int)*(short *)(puVar12 + 0x18) +
                                      (int)*(short *)(puVar12 + 0x1a),(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00187180(0x22,0);
  puVar2 = (unsigned int *)FUN_00192798();
  temp_v8 = (float)VectorSignedToFloat(*puVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(puVar2[1],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (float)VectorSignedToFloat(puVar2[2],(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(puVar2[3],(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(puVar2[4],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = temp_v8 * 0.01f;
  temp_v9 = temp_v9 * 0.01f;
  if (DAT_0057f0ac != '\0') {
    FUN_00180008(0);
    FUN_00180008(0);
    FUN_00180008(0);
    FUN_00180008(0);
    FUN_00180008(0);
    FUN_00180008(0);
    FUN_00180008(0);
    FUN_00180008(0);
    FUN_00180008(0);
  }
  temp_v10 = temp_v10 / temp_v8;
  temp_v11 = temp_v11 / temp_v9;
  FUN_001a9698();
  FUN_001a9698();
  temp_v10 = temp_v10 + temp_v11;
  FUN_001a9698();
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v38 = (int)(temp_v10 + temp_v12);
  temp_v41 = (unsigned int)*(unsigned short *)(puVar12 + 100);
  do {
    puVar3 = puVar12;
    FUN_004bd294(puVar12,temp_v7 & 0xff);
    acStack_a4[temp_v7] = (char)(int)puVar3;
    temp_v7 = temp_v7 + 1;
  } while ((int)temp_v7 < 8);
  FUN_00187180(0x22,1);
  piVar4 = (int *)FUN_00192798();
  temp_v39[0] = '\0';
  temp_v39[1] = '\x01';
  temp_v39[2] = '\x02';
  temp_v39[3] = '\x03';
  temp_v39[4] = '\x04';
  temp_v39[5] = '\x05';
  temp_v39[6] = '\x06';
  temp_v39[7] = '\a';
  temp_v3 = piVar4[1];
  temp_v13 = (unsigned int)(unsigned short)(((short)(temp_v3 / 100) + (short)(temp_v3 >> 0x1f)) -
                            (short)((long long)temp_v3 * 0x51eb851f >> 0x3f)) << 0x10;
  temp_v3 = piVar4[3];
  (*(unsigned int *)&uStack_314) = romwright_piece_2_2(((short)(temp_v3 / 100) + (short)(temp_v3 >> 0x1f)) -
                         (short)((long long)temp_v3 * 0x51eb851f >> 0x3f),1);
  temp_v3 = *piVar4;
  (*(unsigned int *)&uStack_310) = romwright_piece_2_2(((short)(temp_v3 / 100) + (short)(temp_v3 >> 0x1f)) -
                         (short)((long long)temp_v3 * 0x51eb851f >> 0x3f),2);
  temp_v3 = piVar4[4];
  (*(unsigned int *)&uStack_30c) = romwright_piece_2_2(((short)(temp_v3 / 100) + (short)(temp_v3 >> 0x1f)) -
                         (short)((long long)temp_v3 * 0x51eb851f >> 0x3f),3);
  temp_v3 = piVar4[5];
  (*(unsigned int *)&uStack_308) = romwright_piece_2_2(((short)(temp_v3 / 100) + (short)(temp_v3 >> 0x1f)) -
                         (short)((long long)temp_v3 * 0x51eb851f >> 0x3f),4);
  temp_v3 = piVar4[2];
  (*(unsigned int *)&uStack_304) = romwright_piece_2_2(((short)(temp_v3 / 100) + (short)(temp_v3 >> 0x1f)) -
                         (short)((long long)temp_v3 * 0x51eb851f >> 0x3f),5);
  if (DAT_0057f0ac != '\0') {
    FUN_00180008(0);
  }
  temp_v3 = 0;
  do {
    temp_v5 = 0;
    temp_v4 = 0;
    do {
      if (*(char *)(&temp_v13 + temp_v4) == acStack_a4[temp_v39[temp_v3]]) {
        temp_v5 = (int)(char)*(unsigned short *)((int)&temp_v13 + temp_v4 * 4 + 2);
        break;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 6);
    temp_v6 = temp_v6 + temp_v5;
    if (DAT_0057f0ac != '\0') {
      FUN_00180008(0);
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 8);
  if (temp_v6 < 0) {
    temp_v6 = 0;
  }
  VectorSignedToFloat(piVar4[6],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001a9698();
  temp_v10 = (float)VectorSignedToFloat(temp_v41,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0032ff20(temp_v42,temp_v36);
  temp_v6 = 0;
  if (DAT_0057f0ac != '\0') {
    FUN_00180008(0);
  }
  temp_v3 = 0;
  do {
    temp_v7 = (unsigned int)temp_v37[temp_v3];
    if ((temp_v7 != 0) && (FUN_003c3f1c(), temp_v7 != 0)) {
      temp_v7 = *(unsigned char *)(temp_v7 + 3) & 0x1f;
      if (temp_v7 >= 0x20) {
        temp_v7 = 0x1f;
      }
      FUN_00187180(0x22,2);
      temp_v4 = FUN_00192798();
      temp_v6 = temp_v6 + *(int *)(temp_v4 + temp_v7 * 4);
      if (DAT_0057f0ac != '\0') {
        FUN_00180008(0);
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 8);
  temp_v7 = (unsigned int)*(unsigned short *)(puVar12 + 0x62);
  FUN_00184310();
  temp_v2 = 0;
  temp_v3 = 0;
  do {
    temp_v1 = (unsigned int)*(unsigned short *)(puVar12 + temp_v3 * 2 + 0x34);
    if (((temp_v1 != 0) && (FUN_003c3f1c(), temp_v1 != 0)) && (temp_v2 < (*(unsigned char *)(temp_v1 + 3) & 0x1f))) {
      temp_v4 = 0;
      do {
        temp_v5 = temp_v7 + temp_v4 * 2;
        temp_v0 = *(short *)(temp_v5 + 0x40);
        if ((temp_v0 != 0) && (*(short *)(puVar12 + temp_v3 * 2 + 0x34) == temp_v0)) break;
        temp_v0 = *(short *)(temp_v5 + 0x42);
        if ((temp_v0 != 0) && (*(short *)(puVar12 + temp_v3 * 2 + 0x34) == temp_v0)) {
          temp_v4 = temp_v4 + 1;
          break;
        }
        temp_v4 = temp_v4 + 2;
      } while (temp_v4 < 8);
      if (temp_v4 == 8) {
        temp_v2 = *(unsigned char *)(temp_v1 + 3) & 0x1f;
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 8) {
      if (temp_v2 >= 0x20) {
        temp_v2 = 0x1f;
      }
      FUN_00187180(0x22,2);
      temp_v3 = FUN_00192798();
      temp_v3 = *(int *)(temp_v3 + temp_v2 * 4);
      if (DAT_0057f0ac != '\0') {
        FUN_00180008(0);
        FUN_00180008(0);
      }
      FUN_00187180(0x22,3);
      piVar4 = (int *)FUN_00192798();
      temp_v7 = (temp_v3 * piVar4[3] + temp_v6 * piVar4[2] +
               (int)(temp_v8 * temp_v10) * piVar4[1] + temp_v38 * *piVar4) *
               (*(unsigned short *)(temp_v40 + 0x9a) / 10);
      temp_v6 = FUN_00213b5c();
      if (temp_v6 == 2) {
        temp_v7 = temp_v7 * 3;
      }
      if (param_5 != 0) {
        FUN_00180008(0);
        FUN_00180008(0);
        FUN_00180008(0);
        FUN_00180008(0);
        FUN_00180008(0);
        FUN_00180008(0);
      }
      temp_v6 = FUN_003e46f4(0x2d);
      if (temp_v6 != 0) {
        temp_v8 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v7 = VectorFloatToUnsigned(temp_v8 * 0.5f,3);
      }
      else {
        temp_v6 = FUN_003e46f4(0x2c);
        if (temp_v6 != 0) {
          temp_v8 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v7 = VectorFloatToUnsigned(temp_v8 * 0.8f,3);
        }
        else {
          temp_v6 = FUN_003e46f4(0x2b);
          if (temp_v6 != 0) {
            temp_v8 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v7 = VectorFloatToUnsigned(temp_v8 * 0.9f,3);
          }
          else {
            temp_v6 = FUN_003e46f4(0x2a);
            if (temp_v6 != 0) {
              temp_v8 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v7 = VectorFloatToUnsigned(temp_v8 * 0.95f,3);
            }
          }
        }
      }
      if (temp_v7 >= 100000000) {
        temp_v7 = 99999999;
      }
      return temp_v7;
    }
  } while( 1 );
}

} /* extern "C" */
