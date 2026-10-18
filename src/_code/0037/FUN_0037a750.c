/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a750` (_code @ 0x37a750, 0x17c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_7_stack;

extern unsigned char DAT_00421774; /* 0x421774 */

extern int FUN_00130244(unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00235eec. */
/* Supplied declaration required: FUN_002bb88c. */
/* Supplied declaration required: FUN_002bbd10. */


unsigned int *
FUN_0037a750(unsigned int *param_1,unsigned int param_2,unsigned int param_3,int param_4,
            unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 3 native warning(s); review required */
  char *pcVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  romwright_code *pcVar5;
  char *pcVar6;
  int temp_v3;
  unsigned int uStack_1c;
  
  *(unsigned char *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *param_1 = (unsigned int)&DAT_00421774;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  pcVar6 = (char *)(param_1 + 5);
  pcVar1 = (char *)(param_1 + 5);
  pcVar1[0] = -0x50;
  pcVar1[1] = '\b';
  pcVar1[2] = 'B';
  pcVar1[3] = '\0';
  pcVar6[0] = -0x50;
  pcVar6[1] = '\b';
  pcVar6[2] = 'B';
  pcVar6[3] = '\0';
  param_1[0xb] = 0xe7e3ffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_3;
  param_1[0x11] = param_4;
  param_1[0x12] = param_6;
  param_1[0x13] = param_7;
  *(unsigned char *)(param_1 + 0x14) = 0;
  *(unsigned char *)((int)param_1 + 0x51) = 1;
  temp_v0 = FUN_00130244(param_1 + 5,param_2,param_5);
  if (temp_v0 == 0) {
    pcVar5 = (romwright_code *)param_1[0x12];
    temp_v2 = param_1[0xb];
    if (pcVar5 != (romwright_code *)0x0) {
      (*pcVar5)(temp_v2,param_1[0x13]);
    }
    return param_1;
  }
  param_1[0xd] = (unsigned int)(param_1 + 5);
  if (*(char *)(param_1 + 0xc) != '\0') {
    temp_v3 = 0;
    uStack_1c = 0;
    temp_v1 = FUN_002bb88c(param_1 + 6,&temp_v3);
    param_1[0xb] = temp_v1;
    temp_v2 = 0;
    if ((temp_v1 & 0x80000000) == 0) {
      temp_v2 = temp_v3;
    }
    if ((int)temp_v1 < 0) {
      pcVar5 = (romwright_code *)param_1[0x12];
      temp_v2 = *(unsigned int *)(param_1[0xd] + 0x18);
      if (pcVar5 != (romwright_code *)0x0) {
        (*pcVar5)(temp_v2,param_1[0x13]);
      }
      return param_1;
    }
  }
  else {
    temp_v0 = FUN_002bb88c(param_1 + 6,&temp_v3);
    temp_v2 = temp_v3;
    if (temp_v0 < 0) {
      FUN_002bbd10(temp_v0,0x37a874);
      temp_v2 = temp_v3;
    }
  }
  if (param_4 == 0) {
    param_1[0x11] = temp_v2;
  }
  param_1[0xe] = temp_v2;
  FUN_00235eec(param_1 + 0xe,0);
  *(unsigned char *)((int)param_1 + 0x52) = 1;
  *(unsigned char *)(param_1 + 0x14) = 1;
  return param_1;
}
