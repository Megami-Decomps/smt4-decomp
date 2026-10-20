/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c0ae0` (_code @ 0x3c0ae0, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027da30(int, int);
int FUN_0027e6f4(int, int);
int FUN_002881bc(void);
int FUN_00293a04(unsigned int, int);
int FUN_002b06c4(void);

typedef struct fn_003c0ae0_arg1 fn_003c0ae0_arg1;
struct fn_003c0ae0_arg1 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x24];
    char field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x3];
    float field_0x40; /* +0x40 */
    unsigned char pad_0x44[0xc];
    uint field_0x50; /* +0x50 */
    uint field_0x54; /* +0x54 */
    ushort field_0x58; /* +0x58 */
    undefined2 field_0x5a; /* +0x5a */
    unsigned char pad_0x5c[0x6];
    short field_0x62; /* +0x62 */
    undefined4 field_0x64; /* +0x64 */
    uint field_0x68; /* +0x68 */
    uint field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0x10];
    undefined4 field_0x80; /* +0x80 */
    uint field_0x84; /* +0x84 */
    unsigned char field_0x88; /* +0x88 */
    unsigned char pad_0x89[0x3];
    uint field_0x8c; /* +0x8c */
    uint field_0x90; /* +0x90 */
};

extern int g_btlMain; /* 0x4342c8 */
extern int DAT_00439ce8; /* 0x439ce8 */
extern unsigned int DAT_00439cf8; /* 0x439cf8 */

extern unsigned int FUN_0027d9e8(int, unsigned int);
/* Supplied declaration required: FUN_0027da30. */
extern int FUN_0027dab0(int, fn_003c0ae0_arg1 *);
/* Supplied declaration required: FUN_0027e6f4. */
/* Supplied declaration required: FUN_002881bc. */
/* Supplied declaration required: FUN_00293a04. */
/* Supplied declaration required: FUN_002b06c4. */
extern unsigned short randNextInRange(unsigned int);


void FUN_003c0ae0(int param_1,fn_003c0ae0_arg1 *param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_s0; 5 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  float in_s0;
  float temp_v6;
  float temp_v7;
  
  temp_v2 = param_2->field_0x50;
  param_2->field_0x50 = temp_v2 | 2;
  if ((temp_v2 & 0x10) == 0) {
    if ((temp_v2 & 0x8000) == 0) {
      if (DAT_00439ce8 < 0) {
        temp_v0 = *(char *)(param_1 + 0xe6);
        if (temp_v0 >= '\0') {
          if (temp_v0 != '\0') {
            if (temp_v0 != '\x01') {
              if (temp_v0 == '\x02') {
                param_2->field_0x3c = '\x02';
              }
            }
            else {
              param_2->field_0x3c = '\0';
            }
          }
          else {
LAB_003c0ba0:
            param_2->field_0x3c = '\x01';
          }
        }
        else {
          temp_v3 = param_1;
          FUN_0027e6f4(param_1,1);
          if (-1 < temp_v3) {
            temp_v3 = param_1;
            FUN_0027e6f4(param_1,1);
            temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x1fc0) + temp_v3 * 0x288 + 0xce);
            FUN_002b06c4();
            if (*(char *)(temp_v2 + 0x9e) == '\x01' || *(char *)(temp_v2 + 0x9e) == '\x03')
            goto LAB_003c0ba0;
          }
          param_2->field_0x3c = '\0';
        }
      }
      else if (DAT_00439ce8 == 0) {
        param_2->field_0x3c = '\0';
      }
      else if (DAT_00439ce8 == 1) {
        param_2->field_0x3c = '\x01';
      }
      else if (DAT_00439ce8 == 2) {
        param_2->field_0x3c = '\x02';
      }
      param_2->field_0xc = 0;
      param_2->field_0x10 = 0;
      param_2->field_0x14 = 0;
      temp_v3 = g_btlMain;
      in_s0 = *(float *)(g_btlMain + 0x570);
      temp_v0 = param_2->field_0x3c;
      temp_v7 = 0.1f;
      temp_v6 = *(float *)(g_btlMain + 0x5a8) * 0.5f * 0.0055555557f * 3.1415927f;
      FUN_002881bc();
      in_s0 = in_s0 / (120.0f / temp_v6);
      temp_v6 = in_s0;
      if (temp_v0 != '\0') {
        if (temp_v0 != '\x01') {
          temp_v6 = temp_v7;
          if (temp_v0 == '\x02') {
            temp_v6 = *(float *)(temp_v3 + 0x598);
            temp_v7 = in_s0 / temp_v6;
            in_s0 = temp_v6 - -20.0f;
            temp_v6 = temp_v7 * in_s0;
          }
        }
        else {
          temp_v6 = *(float *)(temp_v3 + 0x598);
          temp_v7 = in_s0 / temp_v6;
          in_s0 = temp_v6 - 15.0f;
          temp_v6 = temp_v7 * in_s0;
        }
      }
      param_2->field_0x40 = temp_v6;
    }
    temp_v2 = DAT_00439cf8;
    param_2->field_0x64 = DAT_00439cf8;
    param_2->field_0x68 = temp_v2;
    temp_v3 = FUN_0027dab0(param_1,param_2);
    if (temp_v3 < 0) {
      temp_v3 = 0;
    }
    temp_v4 = param_1;
    FUN_0027da30(param_1,(int)param_2->field_0x62);
    temp_v5 = FUN_0027d9e8(param_1,*(unsigned int *)(temp_v4 + temp_v3 * 4 + 0xc));
    FUN_00293a04(temp_v5,0);
    temp_v1 = randNextInRange(((int)in_s0 - 1U) & 0xffff);
    param_2->field_0x5a = temp_v1;
  }
  temp_v2 = DAT_00439cf8;
  if ((param_2->field_0x50 & 0x8000) != 0) {
    temp_v3 = (DAT_00439cf8 & 0xff000000) + (DAT_00439cf8 & 0xff0000) + (DAT_00439cf8 & 0xff00);
    param_2->field_0x64 = temp_v3;
    param_2->field_0x84 = temp_v2;
    *(int *)&param_2->field_0x88 = temp_v3;
    param_2->field_0x58 = param_2->field_0x58 | 0x800;
  }
  param_2->field_0x80 = 0xff;
  temp_v2 = DAT_00439cf8;
  param_2->field_0x6c = DAT_00439cf8;
  param_2->field_0x8c = temp_v2;
  param_2->field_0x90 = temp_v2;
  param_2->field_0x54 = (param_2->field_0x54 & 0xfffffffd) | 4;
  return;
}

} /* extern "C" */
