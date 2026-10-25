/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034291c` (_code @ 0x34291c, 0x540 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int FUN_002b64b8(void);
int FUN_002b659c(int, int, int, int);
int renderCtxCalculateStereoParallax(unsigned int);
int FUN_002bc0e0(void);
int FUN_002bdf94(...);
int textDrawString(...);
int efctSetSpeed(void);
int FUN_0032b4f8(int, int, int);
int FUN_00342e5c(int, float *, float *, unsigned int, int);
int VectorSignedToFloat(...);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char LAB_00342c50; /* 0x342c50 */
extern unsigned int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_002b64b8. */
/* Supplied declaration required: FUN_002b659c. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
/* Supplied declaration required: FUN_002bc0e0. */
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: textDrawString. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_0032b4f8. */
/* Supplied declaration required: FUN_00342e5c. */


void FUN_0034291c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  int temp_v4;
  int temp_v5;
  float temp_v6;
  float temp_v7;
  int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned int uStack_3c;
  float temp_v12;
  float temp_v13;
  
  temp_v11 = *(float *)(param_1 + 0x68);
  uStack_3c = *(unsigned int *)(param_1 + 0x6c);
  temp_v10 = *(float *)(param_1 + 0xf0);
  if (*(char *)(param_1 + 0xe4) != '\0') {
    temp_v6 = *(float *)(param_1 + 0x74);
    temp_v9 = *(float *)(param_1 + 0x70);
    temp_v12 = temp_v9;
  }
  else {
    temp_v9 = *(float *)(param_1 + 0x78);
    temp_v6 = *(float *)(param_1 + 0x7c);
    temp_v12 = *(float *)(param_1 + 0xd8) + temp_v9;
    temp_v10 = -*(float *)(param_1 + 0xf0);
  }
  temp_v13 = temp_v6 + 10.0f;
  temp_v7 = 0.7f;
  temp_v3 = temp_v7;
  renderCtxCalculateStereoParallax(g_titleScene);
  temp_v5 = (int)temp_v7;
  temp_v0 = renderCtxCalculateStereoParallax(g_titleScene);
  temp_v8 = (int)temp_v3;
  temp_v3 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v11 = temp_v11 + temp_v3;
  temp_v12 = temp_v12 + temp_v7;
  temp_v1 = (int)*(char *)(param_1 + 0x56);
  if (temp_v1 == 0) {
    temp_v0 = (unsigned int)*(unsigned char *)(param_1 + 0x57);
  }
  if (temp_v1 != 0 || temp_v0 != 0) {
    VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_0032b4f8(0x41,temp_v1,(int)*(char *)(param_1 + 0x57));
  }
  if (*(char *)(param_1 + 0xe5) != '\0') {
    temp_v7 = *(float *)(param_1 + 0xe8);
    temp_v3 = *(float *)(param_1 + 0xec) * 0.5f;
    in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v3 <= temp_v7) << 0x1d);
    if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
      temp_v3 = (temp_v7 * 3.0f) / temp_v3;
    }
    else {
      temp_v3 = 3.0f - ((temp_v7 - temp_v3) * 3.0f) / temp_v3;
    }
    temp_v6 = temp_v3 + temp_v6 + 0.5f;
  }
  FUN_002bc0e0();
  temp_v1 = (int)temp_v10;
  temp_v10 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = (int)(*(float *)(param_1 + 0x68) + temp_v10);
  if (temp_v1 < 0) {
    temp_v4 = temp_v4 + temp_v1;
    temp_v1 = -temp_v1;
  }
  if (temp_v4 < 0) {
    temp_v1 = temp_v1 + temp_v4;
    temp_v4 = 0;
  }
  if (temp_v4 + temp_v1 >= 401) {
    temp_v1 = 400 - temp_v4;
  }
  FUN_002b659c(temp_v4,0,temp_v1,0xf0);
  FUN_00342e5c(param_1,&temp_v11,&temp_v12,
               *(unsigned int *)(param_1 + (unsigned int)(*(char *)(param_1 + 0x55) != '\0') * 4 + 0xdc),0x41)
  ;
  temp_v10 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002bf288(2,0x14,0x36,(int)(temp_v9 + temp_v10),(int)temp_v6,0x41);
  efctSetSpeed();
  temp_v10 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002bdf94(0,(int)(*(float *)(param_1 + 0x80) + temp_v9 + temp_v10),
               (int)(*(float *)(param_1 + 0x84) + temp_v6),1,2,0x42,&LAB_00342c50,
               *(unsigned int *)(param_1 + 0x28));
  temp_v10 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)(*(float *)(param_1 + 0x8c) + temp_v6),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)(*(float *)(param_1 + 0x88) + temp_v9 + temp_v10),
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  textDrawString(1,0xff,param_1 + 0x2c);
  temp_v10 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)(*(float *)(param_1 + 0x94) + temp_v6),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)(*(float *)(param_1 + 0x90) + temp_v9 + temp_v10),
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  textDrawString(1,0xffffffff,param_1 + 4);
  FUN_002b64b8();
  if (*(char *)(param_1 + 0x24) == '\0') {
    temp_v1 = 3;
  }
  else {
    switch(*(unsigned char *)(param_1 + 0x54)) {
    case 0:
    case 5:
      if (*(char *)(param_1 + 0x55) != '\0') {
        temp_v1 = 1;
        break;
      }
    default:
      temp_v1 = 0;
      break;
    case 1:
      if (*(char *)(param_1 + 0x59) == '\0') {
        temp_v1 = 4;
      }
      else {
        temp_v1 = 8;
      }
      break;
    case 2:
      if (*(char *)(param_1 + 0x58) == '\0') {
        temp_v1 = 2;
      }
      else {
        temp_v1 = 7;
      }
      break;
    case 3:
      temp_v1 = 5;
      break;
    case 4:
      if (*(char *)(param_1 + 0x59) == '\0') {
        temp_v1 = 6;
      }
      else {
        temp_v1 = 9;
      }
    }
  }
  temp_v2 = 0x33;
                    /* WARNING: Switch table taken from the stored dispatch table */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(temp_v1) {
  case 1:
    temp_v2 = 0x34;
    break;
  case 2:
    temp_v2 = 0x71;
    if (0 < *(int *)(param_1 + 0x120)) {
      temp_v2 = 0x72;
    }
    break;
  case 3:
    temp_v2 = 0x73;
    if (0 < *(int *)(param_1 + 0x120)) {
      temp_v2 = 0x74;
    }
    break;
  case 4:
  case 5:
  case 6:
    temp_v2 = 0x75;
    if (0 < *(int *)(param_1 + 0x120)) {
      temp_v2 = 0x76;
    }
    break;
  case 7:
    temp_v2 = 0x7a;
    if (0 < *(int *)(param_1 + 0x120)) {
      temp_v2 = 0x7b;
    }
    break;
  case 8:
    temp_v2 = 0x7c;
    if (0 < *(int *)(param_1 + 0x120)) {
      temp_v2 = 0x7d;
    }
  }
  temp_v10 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002bf288(2,0x14,temp_v2,(int)(*(float *)(param_1 + 0x68) + temp_v10),
               (int)*(float *)(param_1 + 0x6c),0x42);
  if (temp_v1 == 4 || temp_v1 == 8) {
    temp_v10 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002bf288(2,0x14,0x77,(int)(*(float *)(param_1 + 0x68) + temp_v10),
                 (int)*(float *)(param_1 + 0x6c),0x43);
  }
  if (temp_v1 == 5) {
    temp_v10 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002bf288(2,0x14,0x78,(int)(*(float *)(param_1 + 0x68) + temp_v10),
                 (int)*(float *)(param_1 + 0x6c),0x43);
    return;
  }
  if (temp_v1 == 6 || temp_v1 == 9) {
    temp_v10 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002bf288(2,0x14,0x79,(int)(*(float *)(param_1 + 0x68) + temp_v10),
                 (int)*(float *)(param_1 + 0x6c),0x43);
  }
  return;
}

} /* extern "C" */
