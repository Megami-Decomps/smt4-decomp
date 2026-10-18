/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00462a18` (_code @ 0x462a18, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
} param_1_stack;

extern unsigned char LAB_00462da8; /* 0x462da8 */

/* Supplied declaration required: FUN_00190fc8. */
/* Supplied declaration required: FUN_001cbd00. */
/* Supplied declaration required: FUN_0045f9fc. */
/* Supplied declaration required: FUN_0045fab0. */
/* Supplied declaration required: FUN_0045fb28. */
/* Supplied declaration required: FUN_00460a7c. */
/* Supplied declaration required: FUN_00466478. */
/* Supplied declaration required: FUN_00466780. */
extern int FUN_005081b8(unsigned char *, unsigned char *, unsigned int);
extern int FUN_00508c34(unsigned char *, int, unsigned int);
extern unsigned int ll_sdiv(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: nw_snd_internal_CurveAdshr_SetHold. */


unsigned int FUN_00462a18(int param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned char temp_v0;
  long long temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [4];
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9 [16];
  
  temp_v0 = *(unsigned char *)(param_1 + 0x5e);
  FUN_00460a7c(temp_v9,*(unsigned int *)(param_1 + 0x68),(int)*(char *)(param_1 + 0x5f));
  temp_v2 = FUN_005081b8(temp_v9,temp_v5,0);
  if (temp_v2 == 0) {
    return 0;
  }
  temp_v4 = 0;
  if (*(char *)(param_1 + 0x70) == '\0') {
    temp_v4 = *(unsigned int *)(param_1 + 0x74);
  }
  else if (*(char *)(param_1 + 0x70) == '\x01') {
    temp_v1 = (long long)*(int *)(param_1 + 0x74) * (long long)temp_v7;
    temp_v4 = ll_sdiv((int)temp_v1,(int)((unsigned long long)temp_v1 >> 0x20),1000,0);
  }
  if (temp_v4 <= temp_v8) {
    temp_v2 = temp_v6;
    if (temp_v6 >= 3) {
      temp_v2 = 2;
    }
    FUN_00466478(temp_v2,temp_v0 + 0x40,&LAB_00462da8,param_1);
    if (temp_v2 != 0) {
      FUN_00190fc8(temp_v9,*(unsigned int *)(param_1 + 100));
      temp_v3 = FUN_00508c34(temp_v9,param_1 + 0x88,*(unsigned int *)(param_1 + 0x6c));
      if (temp_v3 == 0) {
        return 0;
      }
      FUN_0045fb28(temp_v2 + 0x98,*(unsigned char *)(param_1 + 0x8c));
      nw_snd_internal_CurveAdshr_SetHold(temp_v2 + 0x98,*(unsigned char *)(param_1 + 0x8f));
      FUN_0045fab0(temp_v2 + 0x98,*(unsigned char *)(param_1 + 0x8d));
      *(unsigned char *)(temp_v2 + 0xb0) = *(unsigned char *)(param_1 + 0x8e);
      FUN_0045f9fc(temp_v2 + 0x98,*(unsigned char *)(param_1 + 0x90));
      *(unsigned char *)(temp_v2 + 0x13c) = *(unsigned char *)(param_1 + 0x5d);
      FUN_001cbd00(*(unsigned int *)(temp_v2 + 0x1a8),(int)*(char *)(param_1 + 0x2e));
      FUN_00466780(temp_v2,temp_v5,0xffffffff,temp_v4);
      *(int *)(param_1 + 0x9c) = temp_v2;
      *(unsigned char *)(param_1 + 0x5c) = 1;
      return 1;
    }
  }
  return 0;
}
