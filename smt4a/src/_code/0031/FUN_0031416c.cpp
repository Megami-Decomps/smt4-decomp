/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031416c` (_code @ 0x31416c, 0x4c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016b034(unsigned int, int);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_00235bfc(int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern unsigned char LAB_00314518; /* 0x314518 */
extern unsigned char LAB_00314534; /* 0x314534 */
extern unsigned char LAB_00314544; /* 0x314544 */
extern int g_handleRegistry; /* 0x56fcc0 */
extern float DAT_00610a74; /* 0x610a74 */
extern float DAT_00610a78; /* 0x610a78 */
extern float DAT_00610a7c; /* 0x610a7c */
extern float DAT_00610a84; /* 0x610a84 */
extern float DAT_00610a88; /* 0x610a88 */
extern float DAT_00610a8c; /* 0x610a8c */
extern float DAT_00610a94; /* 0x610a94 */
extern float DAT_00610a98; /* 0x610a98 */
extern float DAT_00610a9c; /* 0x610a9c */
extern float DAT_00610aa4; /* 0x610aa4 */
extern float DAT_00610aa8; /* 0x610aa8 */
extern float DAT_00610aac; /* 0x610aac */
extern float DAT_00610ab4; /* 0x610ab4 */
extern float DAT_00610ab8; /* 0x610ab8 */
extern float DAT_00610abc; /* 0x610abc */
extern float DAT_00610ac4; /* 0x610ac4 */
extern float DAT_00610ac8; /* 0x610ac8 */
extern float DAT_00610acc; /* 0x610acc */
extern float DAT_00610ad4; /* 0x610ad4 */
extern float DAT_00610ad8; /* 0x610ad8 */
extern float DAT_00610adc; /* 0x610adc */
extern float DAT_00610ae4; /* 0x610ae4 */
extern float DAT_00610ae8; /* 0x610ae8 */
extern float DAT_00610aec; /* 0x610aec */
extern float DAT_00610af4; /* 0x610af4 */
extern float DAT_00610af8; /* 0x610af8 */
extern float DAT_00610afc; /* 0x610afc */

/* Supplied declaration required: FUN_0016b034. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_00235bfc. */
extern int sceneFindRecordByName(unsigned int, int, unsigned char *);
extern short resourceNameGroupFindIndex(unsigned int, unsigned char *);


void FUN_0031416c(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_s0, in_s1; 5 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  float in_s0;
  int temp_v4;
  unsigned int in_s1;
  int temp_v5;
  float temp_v6;
  float temp_v7;
  
  temp_v6 = in_s0 * 0.017453292f;
  temp_v2 = *(unsigned int *)(g_handleRegistry + 4);
  temp_v7 = temp_v6;
  FUN_001bc124();
  FUN_001bbf0c();
  temp_v0 = resourceNameGroupFindIndex(temp_v2,&LAB_00314518);
  temp_v3 = (int)temp_v0;
  temp_v1 = sceneFindRecordByName(temp_v2,temp_v3,&LAB_00314518);
  if (!((param_1 == 0 && param_2 == 0) && param_3 == 0)) {
    *(unsigned char *)(temp_v1 + 0x3c) = 0xff;
    *(unsigned char *)(temp_v1 + 0x3d) = 0xed;
    *(unsigned char *)(temp_v1 + 0x3e) = 0xe0;
    *(unsigned char *)(temp_v1 + 0x3f) = 0xff;
    *(unsigned char *)(temp_v1 + 0x40) = 0xff;
    *(unsigned char *)(temp_v1 + 0x41) = 0xed;
    *(unsigned char *)(temp_v1 + 0x42) = 0xe2;
    *(unsigned char *)(temp_v1 + 0x43) = 0xff;
    *(unsigned char *)(temp_v1 + 0x44) = 0xff;
    *(unsigned char *)(temp_v1 + 0x45) = 0xdd;
    temp_v6 = 0.08f;
    *(unsigned char *)(temp_v1 + 0x46) = 0xba;
    in_s1 = 0xbcf5c28f;
    *(unsigned char *)(temp_v1 + 0x47) = 0xff;
    temp_v7 = -0.04f;
    *(unsigned int *)(temp_v1 + 0x48) = 0x3da3d70a;
    *(unsigned int *)(temp_v1 + 0x4c) = 0xbcf5c28f;
    *(unsigned int *)(temp_v1 + 0x50) = 0xbd23d70a;
    FUN_0016b034(temp_v2,temp_v3);
  }
  else {
    temp_v5 = (int)DAT_00610a78;
    temp_v4 = (int)DAT_00610a7c;
    *(char *)(temp_v1 + 0x3c) = (char)(int)DAT_00610a74;
    *(char *)(temp_v1 + 0x3d) = (char)temp_v5;
    *(char *)(temp_v1 + 0x3e) = (char)temp_v4;
    *(unsigned char *)(temp_v1 + 0x3f) = 0xff;
    temp_v5 = (int)DAT_00610a88;
    temp_v4 = (int)DAT_00610a8c;
    *(char *)(temp_v1 + 0x40) = (char)(int)DAT_00610a84;
    *(char *)(temp_v1 + 0x41) = (char)temp_v5;
    *(char *)(temp_v1 + 0x42) = (char)temp_v4;
    *(unsigned char *)(temp_v1 + 0x43) = 0xff;
    temp_v5 = (int)DAT_00610a98;
    temp_v4 = (int)DAT_00610a9c;
    *(char *)(temp_v1 + 0x44) = (char)(int)DAT_00610a94;
    *(char *)(temp_v1 + 0x45) = (char)temp_v5;
    *(char *)(temp_v1 + 0x46) = (char)temp_v4;
    *(unsigned char *)(temp_v1 + 0x47) = 0xff;
    *(float *)(temp_v1 + 0x48) = temp_v6;
    *(unsigned int *)(temp_v1 + 0x4c) = in_s1;
    *(float *)(temp_v1 + 0x50) = temp_v7;
    FUN_0016b034(temp_v2,temp_v3);
  }
  temp_v0 = resourceNameGroupFindIndex(temp_v2,&LAB_00314534);
  temp_v3 = (int)temp_v0;
  temp_v1 = sceneFindRecordByName(temp_v2,temp_v3,&LAB_00314534);
  if (!((param_1 == 0 && param_2 == 0) && param_3 == 0)) {
    *(unsigned char *)(temp_v1 + 0x3c) = 0x2d;
    *(unsigned char *)(temp_v1 + 0x3d) = 0x23;
    *(unsigned char *)(temp_v1 + 0x3e) = 0x23;
    *(unsigned char *)(temp_v1 + 0x3f) = 0xff;
    *(unsigned char *)(temp_v1 + 0x40) = 0xff;
    *(unsigned char *)(temp_v1 + 0x41) = 0xce;
    *(unsigned char *)(temp_v1 + 0x42) = 0xaa;
    *(unsigned char *)(temp_v1 + 0x43) = 0xff;
    *(unsigned char *)(temp_v1 + 0x44) = 0xff;
    *(unsigned char *)(temp_v1 + 0x45) = 0xce;
    *(unsigned char *)(temp_v1 + 0x46) = 0x9e;
    *(unsigned char *)(temp_v1 + 0x47) = 0xff;
    FUN_0016b034(temp_v2,temp_v3);
  }
  else {
    temp_v5 = (int)DAT_00610aa8;
    temp_v4 = (int)DAT_00610aac;
    *(char *)(temp_v1 + 0x3c) = (char)(int)DAT_00610aa4;
    *(char *)(temp_v1 + 0x3d) = (char)temp_v5;
    *(char *)(temp_v1 + 0x3e) = (char)temp_v4;
    *(unsigned char *)(temp_v1 + 0x3f) = 0xff;
    temp_v5 = (int)DAT_00610ab8;
    temp_v4 = (int)DAT_00610abc;
    *(char *)(temp_v1 + 0x40) = (char)(int)DAT_00610ab4;
    *(char *)(temp_v1 + 0x41) = (char)temp_v5;
    *(char *)(temp_v1 + 0x42) = (char)temp_v4;
    *(unsigned char *)(temp_v1 + 0x43) = 0xff;
    temp_v4 = (int)DAT_00610ac8;
    temp_v5 = (int)DAT_00610acc;
    *(char *)(temp_v1 + 0x44) = (char)(int)DAT_00610ac4;
    *(char *)(temp_v1 + 0x45) = (char)temp_v4;
    *(char *)(temp_v1 + 0x46) = (char)temp_v5;
    *(unsigned char *)(temp_v1 + 0x47) = 0xff;
    FUN_0016b034(temp_v2,temp_v3);
  }
  temp_v0 = resourceNameGroupFindIndex(temp_v2,&LAB_00314544);
  temp_v1 = (int)temp_v0;
  if (-1 < temp_v1) {
    temp_v3 = sceneFindRecordByName(temp_v2,temp_v1,&LAB_00314544);
    if (!((param_1 == 0 && param_2 == 0) && param_3 == 0)) {
      *(unsigned char *)(temp_v3 + 0x3c) = 0x60;
      *(unsigned char *)(temp_v3 + 0x3d) = 0x42;
      *(unsigned char *)(temp_v3 + 0x3e) = 0x47;
      *(unsigned char *)(temp_v3 + 0x3f) = 0xff;
      *(unsigned char *)(temp_v3 + 0x40) = 0x82;
      *(unsigned char *)(temp_v3 + 0x41) = 0x68;
      *(unsigned char *)(temp_v3 + 0x42) = 0x7a;
      *(unsigned char *)(temp_v3 + 0x43) = 0xff;
      *(unsigned char *)(temp_v3 + 0x44) = 0xff;
      *(unsigned char *)(temp_v3 + 0x45) = 0xff;
      *(unsigned char *)(temp_v3 + 0x46) = 0xff;
      *(unsigned char *)(temp_v3 + 0x47) = 0xff;
      *(float *)(temp_v3 + 0x48) = temp_v6;
      *(unsigned int *)(temp_v3 + 0x4c) = in_s1;
      *(float *)(temp_v3 + 0x50) = temp_v7;
      FUN_0016b034(temp_v2,temp_v1);
    }
    else {
      temp_v5 = (int)DAT_00610ad8;
      temp_v4 = (int)DAT_00610adc;
      *(char *)(temp_v3 + 0x3c) = (char)(int)DAT_00610ad4;
      *(char *)(temp_v3 + 0x3d) = (char)temp_v5;
      *(char *)(temp_v3 + 0x3e) = (char)temp_v4;
      *(unsigned char *)(temp_v3 + 0x3f) = 0xff;
      temp_v4 = (int)DAT_00610ae8;
      temp_v5 = (int)DAT_00610aec;
      *(char *)(temp_v3 + 0x40) = (char)(int)DAT_00610ae4;
      *(char *)(temp_v3 + 0x41) = (char)temp_v4;
      *(char *)(temp_v3 + 0x42) = (char)temp_v5;
      *(unsigned char *)(temp_v3 + 0x43) = 0xff;
      temp_v5 = (int)DAT_00610af8;
      temp_v4 = (int)DAT_00610afc;
      *(char *)(temp_v3 + 0x44) = (char)(int)DAT_00610af4;
      *(char *)(temp_v3 + 0x45) = (char)temp_v5;
      *(char *)(temp_v3 + 0x46) = (char)temp_v4;
      *(unsigned char *)(temp_v3 + 0x47) = 0xff;
      *(float *)(temp_v3 + 0x48) = temp_v6;
      *(unsigned int *)(temp_v3 + 0x4c) = in_s1;
      *(float *)(temp_v3 + 0x50) = temp_v7;
      FUN_0016b034(temp_v2,temp_v1);
    }
  }
  FUN_00235bfc(0);
  return;
}

} /* extern "C" */
