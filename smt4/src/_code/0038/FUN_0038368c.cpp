/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038368c` (_code @ 0x38368c, 0x8e4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00235368(...);
int effectSpawnDefaultArguments(...);
int FUN_002ae038(...);
int FUN_002ae9ec(...);
int libc_strcat(...);
int FUN_002b75ec(...);
int FUN_002ba12c(unsigned int);
int FUN_002bcf4c(void);
int FUN_002be5a4(...);
int FUN_002bed3c(void);
int vec2GetXInt(...);
int FUN_002bf380(...);
int efctSetSpeed(void);
int dataTable26GroupGetRecordS2(unsigned int *, int, int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

/* stack frame of param_1: 9 slot(s), 33 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned char spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
} param_1_stack;

extern unsigned char LAB_00383ef4; /* 0x383ef4 */
extern char s_______ABCD__0044db58[12]; /* 0x44db58 */
extern unsigned int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00235368. */
extern int dataTable26GroupGetRecord(unsigned int *, unsigned char, unsigned int);
/* Supplied declaration required: effectSpawnDefaultArguments. */
extern int FUN_00287704(unsigned char);
/* Supplied declaration required: FUN_002ae038. */
/* Supplied declaration required: FUN_002ae9ec. */
/* Supplied declaration required: libc_strcat. */
/* Supplied declaration required: FUN_002b75ec. */
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002bcf4c. */
extern unsigned int FUN_002bd1fc(void);
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002bed3c. */
extern unsigned int vec2GetYInt(unsigned int *);
/* Supplied declaration required: vec2GetXInt. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: dataTable26GroupGetRecordS2. */


void FUN_0038368c(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 17 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  unsigned long long temp_v18;
  int temp_v19;
  float temp_v20;
  unsigned char temp_v21 [48];
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  int temp_v26;
  float temp_v27;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  if ((*param_1 & 0x10) != 0) {
    temp_v0 = FUN_00287704((char)param_1[6]);
    dataTable26GroupGetRecordS2(param_1 + 8,(char)param_1[6],0);
    temp_v26 = dataTable26GroupGetRecord(param_1 + 8,(char)param_1[6],0);
    temp_v6 = param_1[0x167] + 1;
    temp_v0 = temp_v0 + (unsigned int)*(unsigned char *)(temp_v0 + 10) * 0x50;
    temp_v1 = (int)(((long long)(int)temp_v6 * -0x77777777 + ((unsigned long long)temp_v6 << 0x20)) >> 0x20);
    param_1[0x167] = temp_v6 + ((temp_v1 >> 4) - (temp_v1 >> 0x1f)) * -0x1e;
    temp_v9 = (float)param_1[0x82];
    efctSetSpeed();
    temp_v10 = VectorFloatToUnsigned(temp_v9 * 255.0f,3);
    temp_v11 = 0.3f;
    temp_v10 = temp_v10 & 0xff;
    FUN_002ba12c(g_titleScene);
    temp_v12 = 0.31f;
    FUN_002ba12c(g_titleScene);
    temp_v19 = (int)temp_v12;
    temp_v12 = 0.32f;
    FUN_002ba12c(g_titleScene);
    temp_v17 = (int)temp_v12;
    temp_v12 = 0.33f;
    FUN_002ba12c(g_titleScene);
    temp_v16 = (int)temp_v12;
    temp_v12 = 0.34f;
    FUN_002ba12c(g_titleScene);
    temp_v1 = (int)temp_v12;
    temp_v12 = 0.35f;
    FUN_002ba12c(g_titleScene);
    temp_v15 = (int)temp_v12;
    temp_v2 = vec2GetXInt(param_1 + 0x11);
    temp_v3 = vec2GetYInt(param_1 + 0x11);
    FUN_002bf380(2,0x31,0,temp_v2 + (int)temp_v11,temp_v3,0x1f);
    effectSpawnDefaultArguments(param_1[0xa3]);
    temp_v22 = temp_v10 | 0x5d2a0000;
    temp_v23 = temp_v22;
    temp_v24 = temp_v22;
    temp_v25 = temp_v22;
    FUN_00235368(&temp_v22);
    temp_v20 = 0.5f;
    temp_v13 = (float)VectorSignedToFloat((int)temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v14 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b75ec(param_1[0xa3],
                 (int)((float)param_1[0x127] + temp_v14 +
                      temp_v13 + ((float)param_1[0xe7] - temp_v12) * 0.5f),
                 (int)((float)param_1[0x128] + temp_v11),0x20,0x80,0);
    temp_v3 = vec2GetXInt(param_1 + 0x34);
    temp_v4 = vec2GetYInt(param_1 + 0x34);
    temp_v12 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    param_1[0x9d] = param_1[0x9f];
    param_1[0x9e] = param_1[0xa0];
    temp_v11 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    param_1[0x9f] = param_1[0xa1];
    param_1[0xa0] = param_1[0xa2];
    param_1[0xa1] = (unsigned int)temp_v11;
    param_1[0xa2] = (unsigned int)temp_v12;
    temp_v13 = (float)VectorSignedToFloat(temp_v16,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002bf380(2,0x31,3,(int)(temp_v11 + temp_v13),(int)temp_v12,0x15);
    temp_v11 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002bf380(2,0x31,2,(int)((float)param_1[0x9f] + temp_v11),(int)(float)param_1[0xa0],0x1a);
    temp_v11 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = (float)(int)((float)param_1[0x9d] + temp_v11);
    FUN_002bf380(2,0x31,1,temp_v11,(int)(float)param_1[0x9e],0x1f);
    temp_v6 = 0xc87800ff;
    if ((*(int *)(temp_v0 + 0x10) == -1) && ((int)param_1[0x167] < 0xf)) {
      temp_v6 = 0x7a4c00ff;
    }
    effectSpawnDefaultArguments(param_1[0xa4]);
    temp_v22 = temp_v6;
    temp_v23 = temp_v6;
    temp_v24 = temp_v6;
    temp_v25 = temp_v6;
    FUN_00235368(&temp_v22);
    temp_v13 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v12 = temp_v9;
    FUN_002b75ec(param_1[0xa4],
                 (int)((float)param_1[0x9d] + (float)param_1[0x129] +
                      temp_v13 + ((float)param_1[0xe9] - temp_v11) * temp_v20),
                 (int)((float)param_1[0x9e] + (float)param_1[0x12a]),0x20,0x80,0);
    temp_v6 = 0x53679cff;
    if ((*(int *)(temp_v0 + 0x14) == -1) && ((int)param_1[0x167] < 0xf)) {
      temp_v6 = 0x192d86ff;
    }
    effectSpawnDefaultArguments(param_1[0xa5]);
    temp_v22 = temp_v6;
    temp_v23 = temp_v6;
    temp_v24 = temp_v6;
    temp_v25 = temp_v6;
    FUN_00235368(&temp_v22);
    temp_v11 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b75ec(param_1[0xa5],
                 (int)((float)param_1[0x9f] + (float)param_1[299] +
                      temp_v11 + ((float)param_1[0xeb] - temp_v9) * temp_v20),
                 (int)((float)param_1[0xa0] + (float)param_1[300]),0x20,0x80,0);
    temp_v6 = 0xf08c4aff;
    if ((*(int *)(temp_v0 + 0x18) == -1) && ((int)param_1[0x167] < 0xf)) {
      temp_v6 = 0xf8b651ff;
    }
    effectSpawnDefaultArguments(param_1[0xa6]);
    temp_v22 = temp_v6;
    temp_v23 = temp_v6;
    temp_v24 = temp_v6;
    temp_v25 = temp_v6;
    FUN_00235368(&temp_v22);
    temp_v11 = (float)VectorSignedToFloat(temp_v16,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b75ec(param_1[0xa6],
                 (int)((float)param_1[0xa1] + (float)param_1[0x12d] +
                      temp_v11 + ((float)param_1[0xed] - temp_v12) * temp_v20),
                 (int)((float)param_1[0xa2] + (float)param_1[0x12e]),0x20,0x80,0);
    temp_v2 = vec2GetXInt(param_1 + 0x57);
    temp_v3 = vec2GetYInt(param_1 + 0x57);
    temp_v16 = 4;
    do {
      temp_v11 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v12 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002bf380(2,0x31,4,(int)((float)param_1[temp_v16 * 2 + 0xa7] + temp_v9 + temp_v12),
                   (int)((float)param_1[temp_v16 * 2 + 0xa8] + temp_v11),0x1f);
      temp_v16 = temp_v16 + 1;
    } while (temp_v16 < 0xb);
    temp_v18 = 0x3b808081;
    fStack_64 = (float)VectorUnsignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v27 = (float)VectorUnsignedToFloat(0x4b,(unsigned char)(in_fpscr >> 0x16) & 3);
    fStack_6c = (float)VectorUnsignedToFloat(0x4b,(unsigned char)(in_fpscr >> 0x16) & 3);
    fStack_68 = (float)VectorUnsignedToFloat(0x4b,(unsigned char)(in_fpscr >> 0x16) & 3);
    fStack_64 = fStack_64 * 0.003921569f;
    temp_v27 = temp_v27 * 0.003921569f;
    fStack_6c = fStack_6c * 0.003921569f;
    fStack_68 = fStack_68 * 0.003921569f;
    FUN_002ae038(&temp_v27);
    temp_v6 = 0;
    do {
      temp_v11 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v12 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002ae9ec(2,0x31,*(unsigned char *)(temp_v6 + 0x44dad8),
                   (int)((float)param_1[temp_v6 * 2 + 0xaf] + temp_v9 + temp_v12),
                   (int)((float)param_1[temp_v6 * 2 + 0xb0] + temp_v11),0x20);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 7);
    FUN_002bed3c();
    temp_v16 = temp_v15;
    FUN_002bf380(2,0x31,5,temp_v2 + temp_v15,temp_v3,0x1f);
    temp_v17 = 0xb;
    do {
      temp_v11 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v12 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002ae9ec(2,0x31,0x3a,(int)((float)param_1[temp_v17 * 2 + 0xa7] + temp_v12 + temp_v9),
                   (int)((float)param_1[temp_v17 * 2 + 0xa8] + temp_v11),0x20);
      temp_v17 = temp_v17 + 1;
    } while (temp_v17 < 0x15);
    fStack_64 = (float)VectorUnsignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v27 = (float)VectorUnsignedToFloat(0xe6,(unsigned char)(in_fpscr >> 0x16) & 3);
    fStack_6c = (float)VectorUnsignedToFloat(0xe6,(unsigned char)(in_fpscr >> 0x16) & 3);
    fStack_68 = (float)VectorUnsignedToFloat(0xe6,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = (float)temp_v18;
    fStack_64 = fStack_64 * temp_v11;
    temp_v27 = temp_v27 * temp_v11;
    fStack_6c = fStack_6c * temp_v11;
    fStack_68 = fStack_68 * temp_v11;
    FUN_002ae038(&temp_v27);
    temp_v6 = 0;
    do {
      temp_v11 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v12 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002ae9ec(2,0x31,s_______ABCD__0044db58[temp_v6],
                   (int)((float)param_1[temp_v6 * 2 + 0xbd] + temp_v12 + temp_v9),
                   (int)((float)param_1[temp_v6 * 2 + 0xbe] + temp_v11),0x20);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 10);
    FUN_002bed3c();
    temp_v7 = 0x4b4b4bff;
    temp_v4 = 0x8400ff;
    temp_v15 = 3;
    while( 1 ) {
      temp_v21[0] = 0;
      temp_v17 = ((int *)(temp_v0 + 0x10))[temp_v15];
      temp_v8 = temp_v7;
      if (temp_v17 != -2) {
        if (temp_v17 != -1) {
          temp_v6 = (unsigned int)*(unsigned short *)(temp_v26 + temp_v17 * 0x20 + 0x16);
          if (temp_v6 != 0) {
            FUN_002bcf4c();
            libc_strcat(temp_v21,temp_v6);
          }
          else {
            libc_strcat(temp_v21);
          }
        }
        else {
          temp_v5 = FUN_002bd1fc();
          libc_strcat(temp_v21,temp_v5);
          if ((int)param_1[0x167] < 0xf) {
            temp_v8 = temp_v4;
          }
        }
      }
      else {
        libc_strcat(temp_v21,&LAB_00383ef4);
      }
      if (temp_v15 == 10) {
        temp_v1 = temp_v16;
      }
      VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(2,temp_v8,temp_v21);
      temp_v15 = temp_v15 + 1;
      if (temp_v15 >= 0x14) break;
      if (temp_v15 == 3) {
        temp_v7 = 0x4b4b4bff;
        temp_v4 = 0x8400ff;
      }
      else if (temp_v15 == 10) {
        temp_v7 = 0xe6e6e6ff;
        temp_v4 = 0x72e027ff;
      }
    }
  }
  return;
}

} /* extern "C" */
