/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fb5c4` (_code @ 0x1fb5c4, 0xae4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int mapTableStepWave(void);
int FUN_002aa18c(unsigned int);
int FUN_002c0944(...);
int renderCtxSelectTexture(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 32 slot(s), 128 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE8; /* 0xe8: local_e8 */
} void_stack;

extern int DAT_00448c5c; /* 0x448c5c */
extern int DAT_00448c60; /* 0x448c60 */
extern int DAT_00448c6c; /* 0x448c6c */
extern int DAT_00448c70; /* 0x448c70 */
extern int DAT_00448c74; /* 0x448c74 */
extern float DAT_00448c78; /* 0x448c78 */
extern float DAT_00448c7c; /* 0x448c7c */
extern int DAT_00448c80; /* 0x448c80 */
extern int DAT_00448c88; /* 0x448c88 */
extern int DAT_00448c94; /* 0x448c94 */
extern int g_titleScene; /* 0x44ea00 */
extern int DAT_0049fcb0; /* 0x49fcb0 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: mapTableStepWave. */
/* Supplied declaration required: FUN_002aa18c. */
/* Supplied declaration required: FUN_002c0944. */
/* Supplied declaration required: renderCtxSelectTexture. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_001fb5c4(void)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar11;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned int in_fpscr;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  unsigned long long temp_v28;
  float temp_v29;
  unsigned int temp_v30;
  int temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38;
  unsigned int temp_v39;
  unsigned int temp_v40;
  unsigned int temp_v41;
  unsigned int temp_v42;
  int temp_v43;
  
  temp_v0 = DAT_00448c70;
  if (DAT_00448c70 == 0) {
    return;
  }
  mapTableStepWave();
  temp_v3 = g_titleScene;
  if (((int)DAT_00448c78 < 0x3f800000) &&
     (DAT_00448c78 = 1.0f / DAT_00448c7c + DAT_00448c78, (int)DAT_00448c78 >= 0x3f800001)) {
    DAT_00448c78 = 1.0f;
    DAT_00448c74 = temp_v0;
  }
  temp_v7 = DAT_00448c74;
  temp_v28 = CONCAT44(1.0f - DAT_00448c78,DAT_00448c78);
  temp_v1 = FUN_002c5d80(1,0);
  piVar11 = (int *)(temp_v3 + 0x124c);
  temp_v4 = *piVar11;
  temp_v5 = piVar11[temp_v4 + 2];
  *piVar11 = temp_v4 + 1;
  piVar11[temp_v4 + 3] = temp_v1;
  if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v5 != temp_v1) {
    (**(romwright_code **)(temp_v3 + 0x1268))();
    *(unsigned char *)(temp_v3 + 0x1264) = 0;
  }
  temp_v3 = g_titleScene;
  if (DAT_00448c94 != 0) {
    if (DAT_00448c94 != 1) {
      if (DAT_00448c94 == 2) {
        temp_v1 = packNibblesAndByte(6,1,2);
        piVar11 = (int *)(temp_v3 + 0x12ac);
        temp_v4 = piVar11[*piVar11 + 2];
        piVar11[*piVar11 + 2] = temp_v1;
        if (!(*(char *)(temp_v3 + 0x12c4) == '\0' && temp_v4 == temp_v1)) {
          (**(romwright_code **)(temp_v3 + 0x12c8))();
          *(unsigned char *)(temp_v3 + 0x12c4) = 0;
        }
      }
    }
    else {
      temp_v1 = packNibblesAndByte(6,1,0);
      piVar11 = (int *)(temp_v3 + 0x12ac);
      temp_v4 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v1;
      if (!(*(char *)(temp_v3 + 0x12c4) == '\0' && temp_v4 == temp_v1)) {
        (**(romwright_code **)(temp_v3 + 0x12c8))();
        *(unsigned char *)(temp_v3 + 0x12c4) = 0;
      }
    }
  }
  else {
    temp_v1 = packNibblesAndByte(6,7,0);
    piVar11 = (int *)(temp_v3 + 0x12ac);
    temp_v4 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v1;
    if (!(*(char *)(temp_v3 + 0x12c4) == '\0' && temp_v4 == temp_v1)) {
      (**(romwright_code **)(temp_v3 + 0x12c8))();
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
  }
  if (DAT_0049fcb0 != 0) {
    if (DAT_00448c88 != 0) {
      temp_v2 = DAT_00448c6c + 0xff + DAT_00448c80;
      if ((int)temp_v2 < 0) {
        temp_v2 = 0;
      }
      else if ((int)temp_v2 >= 0x100) {
        temp_v2 = 0xff;
      }
      renderCtxSelectTexture(g_titleScene);
      FUN_002aa18c(temp_v2 | 0xffffff00);
    }
  }
  else {
    renderCtxSelectTexture(g_titleScene,0);
    temp_v43 = 0;
    temp_v3 = 2;
    while( 1 ) {
      temp_v1 = 0;
      do {
        temp_v4 = temp_v1 + 2;
        if (temp_v4 >= 9) {
          temp_v4 = 8;
        }
        temp_v5 = DAT_00448c5c + temp_v0 * 0x124;
        temp_v6 = temp_v5 + temp_v43 * 0x24;
        temp_v10 = *(unsigned int *)(temp_v6 + temp_v1 * 4 + 4);
        temp_v5 = temp_v5 + temp_v3 * 0x24;
        temp_v12 = *(unsigned int *)(temp_v6 + temp_v4 * 4 + 4);
        temp_v13 = *(unsigned int *)(temp_v5 + temp_v1 * 4 + 4);
        temp_v2 = *(unsigned int *)(temp_v5 + temp_v4 * 4 + 4);
        temp_v34 = temp_v10 & 0xff;
        temp_v37 = temp_v12 & 0xff;
        temp_v38 = temp_v2 & 0xff;
        temp_v39 = temp_v13 & 0xff;
        temp_v32 = (temp_v12 & 0xffff) >> 8;
        temp_v35 = (temp_v10 & 0xffff) >> 8;
        temp_v36 = (temp_v10 & 0xffffff) >> 0x10;
        temp_v5 = DAT_00448c6c + (temp_v10 >> 0x18) + DAT_00448c80;
        temp_v30 = (temp_v12 & 0xffffff) >> 0x10;
        temp_v33 = (temp_v2 & 0xffff) >> 8;
        temp_v40 = (temp_v2 & 0xffffff) >> 0x10;
        temp_v41 = (temp_v13 & 0xffff) >> 8;
        temp_v42 = (temp_v13 & 0xffffff) >> 0x10;
        temp_v6 = (temp_v12 >> 0x18) + DAT_00448c6c + DAT_00448c80;
        temp_v8 = (temp_v2 >> 0x18) + DAT_00448c6c + DAT_00448c80;
        temp_v9 = DAT_00448c80 + DAT_00448c6c + (temp_v13 >> 0x18);
        if (temp_v5 < 0) {
          temp_v5 = 0;
        }
        else if (temp_v5 >= 0x100) {
          temp_v5 = 0xff;
        }
        if (temp_v6 < 0) {
          temp_v6 = 0;
        }
        else if (temp_v6 >= 0x100) {
          temp_v6 = 0xff;
        }
        if (temp_v8 < 0) {
          temp_v8 = 0;
        }
        else if (temp_v8 >= 0x100) {
          temp_v8 = 0xff;
        }
        if ((int)DAT_00448c78 < 0x3f800000) {
          temp_v14 = DAT_00448c5c + temp_v7 * 0x124;
          temp_v11 = temp_v14 + temp_v43 * 0x24;
          temp_v12 = *(unsigned int *)(temp_v11 + temp_v1 * 4 + 4);
          temp_v14 = temp_v14 + temp_v3 * 0x24;
          temp_v10 = *(unsigned int *)(temp_v14 + temp_v4 * 4 + 4);
          temp_v13 = *(unsigned int *)(temp_v14 + temp_v1 * 4 + 4);
          temp_v2 = *(unsigned int *)(temp_v11 + temp_v4 * 4 + 4);
          temp_v31 = DAT_00448c80 + DAT_00448c6c + (temp_v12 >> 0x18);
          temp_v4 = (temp_v10 >> 0x18) + DAT_00448c6c + DAT_00448c80;
          temp_v11 = (temp_v2 >> 0x18) + DAT_00448c6c + DAT_00448c80;
          if (temp_v31 < 0) {
            temp_v31 = 0;
          }
          else if (temp_v31 >= 0x100) {
            temp_v31 = 0xff;
          }
          if (temp_v11 < 0) {
            temp_v11 = 0;
          }
          else if (temp_v11 >= 0x100) {
            temp_v11 = 0xff;
          }
          if (temp_v4 < 0) {
            temp_v4 = 0;
          }
          else if (temp_v4 >= 0x100) {
            temp_v4 = 0xff;
          }
          temp_v20 = (float)VectorSignedToFloat(temp_v37,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v21 = (float)VectorSignedToFloat(temp_v34,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v23 = (float)VectorSignedToFloat(temp_v35,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v15 = (float)VectorSignedToFloat(temp_v2 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v22 = (float)VectorSignedToFloat(temp_v32,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v27 = (float)temp_v28;
          temp_v26 = (float)VectorSignedToFloat(temp_v12 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v18 = (float)VectorSignedToFloat(temp_v36,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v24 = (float)VectorSignedToFloat((temp_v12 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v29 = (float)((unsigned long long)temp_v28 >> 0x20);
          temp_v19 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorSignedToFloat((temp_v2 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v17 = (float)VectorSignedToFloat((temp_v12 & 0xffffff) >> 0x10,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v25 = (float)VectorSignedToFloat(temp_v31,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v34 = (unsigned int)(temp_v21 * temp_v27 + temp_v26 * temp_v29);
          temp_v35 = (unsigned int)(temp_v23 * temp_v27 + temp_v24 * temp_v29);
          temp_v21 = (float)VectorSignedToFloat(temp_v30,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v32 = (unsigned int)(temp_v22 * temp_v27 + temp_v16 * temp_v29);
          temp_v16 = (float)VectorSignedToFloat(((int)temp_v2 >> 0x10) & 0xff,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v5 = (int)(temp_v19 * temp_v27 + temp_v25 * temp_v29);
          temp_v36 = (unsigned int)(temp_v18 * temp_v27 + temp_v17 * temp_v29);
          temp_v18 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v17 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v37 = (unsigned int)(temp_v20 * temp_v27 + temp_v15 * temp_v29);
          temp_v19 = (float)VectorSignedToFloat(temp_v38,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v15 = (float)VectorSignedToFloat(temp_v10 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v30 = (unsigned int)(temp_v21 * temp_v27 + temp_v16 * temp_v29);
          temp_v6 = (int)(temp_v17 * temp_v27 + temp_v18 * temp_v29);
          temp_v16 = (float)VectorSignedToFloat(temp_v33,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v21 = (float)VectorSignedToFloat(((int)temp_v10 >> 8) & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3
                                             );
          temp_v38 = (unsigned int)(temp_v19 * temp_v27 + temp_v15 * temp_v29);
          temp_v33 = (unsigned int)(temp_v16 * temp_v27 + temp_v21 * temp_v29);
          temp_v16 = (float)VectorSignedToFloat(temp_v40,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v15 = (float)VectorSignedToFloat(((int)temp_v10 >> 0x10) & 0xff,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v40 = (unsigned int)(temp_v16 * temp_v27 + temp_v15 * temp_v29);
          temp_v15 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = (int)(temp_v15 * temp_v27 + temp_v16 * temp_v29);
          temp_v15 = (float)VectorSignedToFloat(temp_v39,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorSignedToFloat(temp_v13 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v39 = (unsigned int)(temp_v15 * temp_v27 + temp_v16 * temp_v29);
          temp_v15 = (float)VectorSignedToFloat(temp_v41,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorSignedToFloat(((int)temp_v13 >> 8) & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3
                                             );
          temp_v41 = (unsigned int)(temp_v15 * temp_v27 + temp_v16 * temp_v29);
          temp_v15 = (float)VectorSignedToFloat(temp_v42,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorSignedToFloat(((int)temp_v13 >> 0x10) & 0xff,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v42 = (unsigned int)(temp_v15 * temp_v27 + temp_v16 * temp_v29);
          temp_v15 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorSignedToFloat(DAT_00448c80 + (temp_v13 >> 0x18) + DAT_00448c6c,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v9 = (int)(temp_v15 * temp_v27 + temp_v16 * temp_v29);
        }
        if (DAT_00448c60 != 0x80) {
          temp_v34 = (int)(temp_v34 * DAT_00448c60 +
                          ((unsigned int)((int)(temp_v34 * DAT_00448c60) >> 0x1f) >> 0x19)) >> 7;
          temp_v35 = (int)(temp_v35 * DAT_00448c60 +
                          ((unsigned int)((int)(temp_v35 * DAT_00448c60) >> 0x1f) >> 0x19)) >> 7;
          temp_v36 = (int)(temp_v36 * DAT_00448c60 +
                          ((unsigned int)((int)(temp_v36 * DAT_00448c60) >> 0x1f) >> 0x19)) >> 7;
          temp_v5 = (int)(temp_v5 * DAT_00448c60 + ((unsigned int)(temp_v5 * DAT_00448c60 >> 0x1f) >> 0x19)) >> 7;
          temp_v37 = (int)(temp_v37 * DAT_00448c60 +
                          ((unsigned int)((int)(temp_v37 * DAT_00448c60) >> 0x1f) >> 0x19)) >> 7;
          temp_v32 = (int)(temp_v32 * DAT_00448c60 +
                          ((unsigned int)((int)(temp_v32 * DAT_00448c60) >> 0x1f) >> 0x19)) >> 7;
          temp_v30 = (int)(temp_v30 * DAT_00448c60 +
                          ((unsigned int)((int)(temp_v30 * DAT_00448c60) >> 0x1f) >> 0x19)) >> 7;
          temp_v6 = (int)(temp_v6 * DAT_00448c60 + ((unsigned int)(temp_v6 * DAT_00448c60 >> 0x1f) >> 0x19)) >> 7;
          temp_v38 = (int)(temp_v38 * DAT_00448c60 +
                          ((unsigned int)((int)(temp_v38 * DAT_00448c60) >> 0x1f) >> 0x19)) >> 7;
          temp_v33 = (int)(temp_v33 * DAT_00448c60 +
                          ((unsigned int)((int)(temp_v33 * DAT_00448c60) >> 0x1f) >> 0x19)) >> 7;
          temp_v40 = (int)(temp_v40 * DAT_00448c60 +
                          ((unsigned int)((int)(temp_v40 * DAT_00448c60) >> 0x1f) >> 0x19)) >> 7;
          temp_v8 = (int)(temp_v8 * DAT_00448c60 + ((unsigned int)(temp_v8 * DAT_00448c60 >> 0x1f) >> 0x19)) >> 7;
          temp_v39 = (int)(temp_v39 * DAT_00448c60 +
                          ((unsigned int)((int)(temp_v39 * DAT_00448c60) >> 0x1f) >> 0x19)) >> 7;
          temp_v41 = (int)(temp_v41 * DAT_00448c60 +
                          ((unsigned int)((int)(temp_v41 * DAT_00448c60) >> 0x1f) >> 0x19)) >> 7;
          temp_v9 = (int)(temp_v9 * DAT_00448c60 + ((unsigned int)(temp_v9 * DAT_00448c60 >> 0x1f) >> 0x19)) >>
                   7;
          temp_v42 = (int)(temp_v42 * DAT_00448c60 +
                          ((unsigned int)((int)(temp_v42 * DAT_00448c60) >> 0x1f) >> 0x19)) >> 7;
        }
        if (temp_v5 < 1) {
          temp_v2 = 0;
        }
        else {
          temp_v2 = temp_v5 * 2;
          if ((int)temp_v2 >= 0x100) {
            temp_v2 = 0xff;
          }
        }
        if (temp_v6 < 1) {
          temp_v10 = 0;
        }
        else {
          temp_v10 = temp_v6 * 2;
          if ((int)temp_v10 >= 0x100) {
            temp_v10 = 0xff;
          }
        }
        if (temp_v8 < 1) {
          temp_v12 = 0;
        }
        else {
          temp_v12 = temp_v8 * 2;
          if ((int)temp_v12 >= 0x100) {
            temp_v12 = 0xff;
          }
        }
        if (temp_v9 < 1) {
          temp_v13 = 0;
        }
        else {
          temp_v13 = temp_v9 * 2;
          if ((int)temp_v13 >= 0x100) {
            temp_v13 = 0xff;
          }
        }
        VectorSignedToFloat(temp_v43 * 0x23,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v1 * 0x32,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002c0944(temp_v2 | (temp_v34 << 0x18) | (temp_v35 << 0x10) | (temp_v36 << 8),
                     (temp_v39 << 0x18) | (temp_v41 << 0x10) | (temp_v42 << 8) | temp_v13,
                     (temp_v37 << 0x18) | (temp_v32 << 0x10) | (temp_v30 << 8) | temp_v10,
                     (temp_v38 << 0x18) | (temp_v33 << 0x10) | (temp_v40 << 8) | temp_v12);
        temp_v1 = temp_v1 + 2;
      } while (temp_v1 < 8);
      temp_v1 = temp_v43 + 2;
      if (temp_v1 >= 7) break;
      temp_v3 = temp_v43 + 4;
      temp_v43 = temp_v1;
      if (temp_v3 >= 8) {
        temp_v3 = 7;
      }
    }
  }
  temp_v0 = g_titleScene;
  temp_v3 = packNibblesAndByte(6,7,0);
  piVar11 = (int *)(temp_v0 + 0x12ac);
  temp_v7 = piVar11[*piVar11 + 2];
  piVar11[*piVar11 + 2] = temp_v3;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v7 != temp_v3) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  temp_v0 = g_titleScene;
  piVar11 = (int *)(g_titleScene + 0x124c);
  temp_v3 = *piVar11;
  temp_v7 = piVar11[temp_v3 + 2];
  *piVar11 = temp_v3 - 1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v7 != piVar11[temp_v3 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  return;
}

} /* extern "C" */
