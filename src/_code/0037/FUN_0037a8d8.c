/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a8d8` (_code @ 0x37a8d8, 0x184 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_6_stack;

extern unsigned char DAT_00421774; /* 0x421774 */

/* Supplied declaration required: FUN_00235eec. */
/* Supplied declaration required: FUN_002bb88c. */
/* Supplied declaration required: FUN_002bbd10. */


/* WARNING: Removing unreachable block (ram,0x0037a974) */
/* WARNING: Removing unreachable block (ram,0x0037a970) */
/* WARNING: Removing unreachable block (ram,0x0037a97c) */
/* WARNING: Removing unreachable block (ram,0x0037a98c) */
/* WARNING: Removing unreachable block (ram,0x0037a998) */

unsigned int *
FUN_0037a8d8(unsigned int *param_1,unsigned int param_2,unsigned int param_3,int param_4,
            unsigned int param_5,unsigned int param_6)

{
/* irregular: 8 native warning(s); review required */
  char *pcVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  romwright_code *pcVar4;
  char *pcVar5;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
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
  pcVar5 = (char *)(param_1 + 5);
  pcVar1 = (char *)(param_1 + 5);
  pcVar1[0] = -0x50;
  pcVar1[1] = '\b';
  pcVar1[2] = 'B';
  pcVar1[3] = '\0';
  pcVar5[0] = -0x50;
  pcVar5[1] = '\b';
  pcVar5[2] = 'B';
  pcVar5[3] = '\0';
  param_1[0xb] = 0xe7e3ffff;
  param_1[0xd] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_3;
  param_1[0x11] = param_4;
  param_1[0x12] = param_5;
  param_1[0x13] = param_6;
  *(unsigned char *)(param_1 + 0x14) = 0;
  *(unsigned char *)((int)param_1 + 0x51) = 0;
  temp_v3 = param_1[0xd];
  if (*(char *)(temp_v3 + 0x1c) != '\0') {
    temp_v4 = 0;
    uStack_1c = 0;
    temp_v0 = FUN_002bb88c(temp_v3 + 4,&temp_v4);
    temp_v1 = temp_v0 & 0x80000000;
    *(unsigned int *)(temp_v3 + 0x18) = temp_v0;
    temp_v2 = 0;
    if (temp_v1 == 0) {
      temp_v2 = temp_v4;
    }
    if ((int)temp_v0 < 0) {
      pcVar4 = (romwright_code *)param_1[0x12];
      if (pcVar4 != (romwright_code *)0x0) {
        temp_v1 = param_1[0x13];
      }
      if (pcVar4 != (romwright_code *)0x0) {
        (*pcVar4)(*(unsigned int *)(param_1[0xd] + 0x18),temp_v1);
      }
      return param_1;
    }
  }
  else {
    temp_v3 = FUN_002bb88c(temp_v3 + 4,&temp_v4);
    temp_v2 = temp_v4;
    if (temp_v3 < 0) {
      FUN_002bbd10(temp_v3,0x37a9fc);
      temp_v2 = temp_v4;
    }
  }
  if (param_4 == 0) {
    param_1[0x11] = temp_v2;
  }
  param_1[0xe] = temp_v2;
  FUN_00235eec(param_1 + 0xe,0);
  *(unsigned char *)((int)param_1 + 0x52) = 0;
  *(unsigned char *)(param_1 + 0x14) = 1;
  return param_1;
}
