/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c9b64` (_code @ 0x4c9b64, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004c9b64_arg1 fn_004c9b64_arg1;
struct fn_004c9b64_arg1 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x24];
    undefined1 field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x13];
    uint field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x4];
    uint field_0x58; /* +0x58 */
    unsigned char pad_0x5c[0x6];
    undefined2 field_0x62; /* +0x62 */
    unsigned char pad_0x64[0x6];
    short field_0x6a; /* +0x6a */
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
    undefined4 field_0x74; /* +0x74 */
    unsigned char pad_0x78[0x10];
    undefined4 field_0x88; /* +0x88 */
    unsigned char pad_0x8c[0x8];
    undefined4 field_0x94; /* +0x94 */
    undefined4 field_0x98; /* +0x98 */
};

extern int DAT_0057aa0c; /* 0x57aa0c */
extern unsigned int DAT_0057aa1c; /* 0x57aa1c */

extern unsigned short FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_001568f8. */
/* Supplied declaration required: FUN_0019cac4. */
extern unsigned int FUN_003ec620(int, unsigned int);
/* Supplied declaration required: FUN_003eebf4. */
extern int FUN_003ef9e0(int, fn_004c9b64_arg1 *);
/* Supplied declaration required: FUN_004cb9d0. */
/* Supplied declaration required: FUN_004ff364. */


void FUN_004c9b64(int param_1,fn_004c9b64_arg1 *param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_s0; 5 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  float in_s0;
  
  temp_v2 = param_2->field_0x50;
  param_2->field_0x50 = temp_v2 | 2;
  if ((temp_v2 & 0x10) == 0) {
    if ((temp_v2 & 0x8000) == 0) {
      if (DAT_0057aa0c < 0) {
        temp_v0 = *(char *)(param_1 + 0x113);
        if (temp_v0 >= '\0') {
          if (temp_v0 != '\0') {
            if (temp_v0 != '\x01') {
              if (temp_v0 == '\x02') {
                param_2->field_0x3c = 2;
              }
            }
            else {
              param_2->field_0x3c = 0;
            }
          }
          else {
LAB_004c9c20:
            param_2->field_0x3c = 1;
          }
        }
        else {
          temp_v3 = param_1;
          FUN_003eebf4(param_1,1);
          if (-1 < temp_v3) {
            temp_v3 = param_1;
            FUN_003eebf4(param_1,1);
            temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x1ffc) + temp_v3 * 0x408 + 0x166);
            FUN_0019cac4();
            if (*(char *)(temp_v2 + 0xa2) == '\x01' || *(char *)(temp_v2 + 0xa2) == '\x03')
            goto LAB_004c9c20;
          }
          param_2->field_0x3c = 0;
        }
      }
      else if (DAT_0057aa0c == 0) {
        param_2->field_0x3c = 0;
      }
      else if (DAT_0057aa0c == 1) {
        param_2->field_0x3c = 1;
      }
      else if (DAT_0057aa0c == 2) {
        param_2->field_0x3c = 2;
      }
      in_s0 = 0.0f;
      param_2->field_0xc = 0;
      param_2->field_0x10 = 0;
      param_2->field_0x14 = 0;
      FUN_004cb9d0(param_2);
    }
    temp_v5 = DAT_0057aa1c;
    param_2->field_0x6c = DAT_0057aa1c;
    param_2->field_0x70 = temp_v5;
    temp_v3 = FUN_003ef9e0(param_1,param_2);
    if (temp_v3 < 0) {
      temp_v3 = 0;
    }
    temp_v4 = param_1;
    FUN_001568f8(param_1,(int)param_2->field_0x6a);
    temp_v5 = FUN_003ec620(param_1,*(unsigned int *)(temp_v4 + temp_v3 * 4 + 0xc));
    FUN_004ff364(temp_v5,0);
    temp_v1 = FUN_0014bef4(((int)in_s0 - 1U) & 0xffff);
    param_2->field_0x62 = temp_v1;
  }
  param_2->field_0x88 = 0xff;
  temp_v5 = DAT_0057aa1c;
  param_2->field_0x74 = DAT_0057aa1c;
  param_2->field_0x94 = temp_v5;
  param_2->field_0x98 = temp_v5;
  param_2->field_0x58 = (param_2->field_0x58 & 0xfffffffd) | 4;
  return;
}
