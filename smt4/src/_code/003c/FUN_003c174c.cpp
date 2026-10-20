/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c174c` (_code @ 0x3c174c, 0x20c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023fb84(...);
int FUN_0027da30(...);
int aocHandleButtons(...);
int FUN_00338318(...);
int FUN_00339210(...);
int FUN_003af1dc(...);
int FUN_003c0ae0(...);
int FUN_003db0c0(...);
int FUN_003db5e8(...);

typedef struct fn_003c174c_arg1 fn_003c174c_arg1;
struct fn_003c174c_arg1 {
    unsigned char pad_0x0[0x48];
    undefined4 field_0x48; /* +0x48 */
    unsigned char pad_0x4c[0x8];
    uint field_0x54; /* +0x54 */
    unsigned char pad_0x58[0xa];
    short field_0x62; /* +0x62 */
};

extern unsigned int DAT_00435d18; /* 0x435d18 */
extern unsigned int g_btlUiBlock; /* 0x439ca8 */

/* Supplied declaration required: FUN_0023fb84. */
extern unsigned int FUN_0027d9e8(int, unsigned int);
/* Supplied declaration required: FUN_0027da30. */
extern int FUN_0027dab0(int, fn_003c174c_arg1 *);
/* Supplied declaration required: aocHandleButtons. */
extern unsigned int FUN_00294090(unsigned int, unsigned int);
extern int FUN_00294fe0(unsigned int);
extern int FUN_0029505c(unsigned int);
/* Supplied declaration required: FUN_00338318. */
extern int FUN_003391d0(int, unsigned int);
/* Supplied declaration required: FUN_00339210. */
/* Supplied declaration required: FUN_003af1dc. */
/* Supplied declaration required: FUN_003c0ae0. */
/* Supplied declaration required: FUN_003db0c0. */
/* Supplied declaration required: FUN_003db5e8. */


void FUN_003c174c(int param_1,fn_003c174c_arg1 *param_2)

{
/* irregular: 2 goto(s); 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = param_2->field_0x54;
  if ((temp_v4 & 1) != 0) {
    temp_v0 = 0;
    do {
      temp_v3 = *(int *)(param_1 + 0x1e98) + temp_v0 * 0x114;
      if (((*(unsigned int *)(temp_v3 + 0x50) & 1) != 0) && ((*(unsigned int *)(temp_v3 + 0x54) & 2) != 0)) {
        return;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x6d);
    temp_v4 = (temp_v4 & 0xfffffffe) | 0x12;
    param_2->field_0x54 = temp_v4;
  }
  if ((temp_v4 & 2) != 0) {
    if ((temp_v4 & 0x10) != 0) {
      temp_v0 = FUN_0027dab0(param_1,param_2);
      if (temp_v0 < 0) {
        temp_v0 = 0;
      }
      temp_v3 = param_1;
      FUN_0027da30(param_1,(int)param_2->field_0x62);
      temp_v3 = temp_v3 + temp_v0 * 4;
      temp_v0 = FUN_003391d0(param_1,*(unsigned int *)(temp_v3 + 0xc));
      if (temp_v0 != 0) {
        param_2->field_0x54 = param_2->field_0x54 | 0x300;
      }
      else {
        param_2->field_0x54 = param_2->field_0x54 & 0xfffffcff;
        temp_v1 = FUN_00294090(*(unsigned int *)(temp_v3 + 0xc),1);
        FUN_00339210(param_1,temp_v1);
        FUN_00338318(param_1,(int)(short)*(unsigned int *)(temp_v3 + 0xc));
      }
      param_2->field_0x54 = param_2->field_0x54 & 0xffffffef;
    }
    temp_v0 = FUN_0027dab0(param_1,param_2);
    if (temp_v0 < 0) {
      temp_v0 = 0;
    }
    temp_v3 = param_1;
    FUN_0027da30(param_1,(int)param_2->field_0x62);
    temp_v0 = temp_v3 + temp_v0 * 4;
    temp_v1 = FUN_0027d9e8(param_1,*(unsigned int *)(temp_v0 + 0xc));
    if ((param_2->field_0x54 & 0x100) == 0) {
      temp_v2 = FUN_0029505c(temp_v1);
      if (temp_v2 == 0) goto LAB_003c1934;
      param_2->field_0x54 = param_2->field_0x54 | 0x100;
      aocHandleButtons(temp_v1,7);
    }
    if ((param_2->field_0x54 & 0x200) == 0) {
      temp_v2 = FUN_00294fe0(temp_v1);
      if (temp_v2 == 0) goto LAB_003c1934;
      FUN_0023fb84(temp_v1);
      param_2->field_0x54 = param_2->field_0x54 | 0x200;
    }
    FUN_003af1dc(g_btlUiBlock,*(unsigned short *)(temp_v3 + 2));
    FUN_003db5e8(DAT_00435d18,param_2,*(unsigned int *)(temp_v0 + 0xc));
    FUN_003db0c0(DAT_00435d18,param_2);
    FUN_003c0ae0(param_1,param_2);
  }
LAB_003c1934:
  temp_v4 = param_2->field_0x54;
  if (((temp_v4 & 4) != 0) && ((temp_v4 & 8) == 0)) {
    param_2->field_0x48 = 0;
    param_2->field_0x54 = temp_v4 & 0xfffffffb;
  }
  return;
}

} /* extern "C" */
