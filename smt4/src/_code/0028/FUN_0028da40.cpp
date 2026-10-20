/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028da40` (_code @ 0x28da40, 0x164 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002a8740(int);
extern int FUN_002a8764(void);
extern int FUN_002b63ac(void);
extern int gameGetOptions(void);


void FUN_0028da40(int param_1,int param_2,int param_3)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  
  temp_v0 = param_1 + param_2 * 2;
  *(unsigned short *)(temp_v0 + 0x38e0) = 0xffff;
  *(unsigned short *)(temp_v0 + 0x38ea) = 0xffff;
  *(unsigned short *)(temp_v0 + 0x38d6) = 0xffff;
  if (param_3 != 0) {
    *(unsigned short *)(temp_v0 + 0x38f4) = 0xffff;
  }
  if (param_2 == 0) {
    temp_v0 = FUN_002b63ac();
    *(unsigned short *)(param_1 + 0x38d6) = *(unsigned short *)(temp_v0 + 0x2a);
    *(unsigned short *)(param_1 + 0x38e0) = *(unsigned short *)(temp_v0 + 0x2c);
    *(unsigned short *)(param_1 + 0x38ea) = (unsigned short)*(unsigned char *)(temp_v0 + 0x76);
    *(unsigned short *)(param_1 + 0x38f4) = 0xffff;
    if ((*(unsigned short *)(temp_v0 + 0x72) & 2) != 0) {
      *(unsigned char *)(param_1 + 0x38d1) = 1;
    }
    else {
      *(unsigned char *)(param_1 + 0x38d1) = 0;
    }
    return;
  }
  if (param_2 == 4) {
    temp_v0 = gameGetOptions();
    *(unsigned short *)(param_1 + 0x38de) = *(unsigned short *)(temp_v0 + 0x2a);
    *(unsigned short *)(param_1 + 0x38fc) = 0xffff;
    return;
  }
  temp_v1 = FUN_002a8764();
  if (0 < *(int *)(param_1 + param_2 * 4 + 0x340c)) {
    if (param_3 != 0) {
      *(short *)(temp_v0 + 0x38f4) = (short)*(char *)(temp_v1 + param_2 + 0x9107);
    }
    param_1 = param_1 + param_2;
    puVar4 = (unsigned char *)(param_1 + 0x38d1);
    if (*(short *)(temp_v0 + 0x38f4) >= 0) {
      temp_v2 = FUN_002a8740((int)*(short *)(temp_v0 + 0x38f4));
      if ((*(unsigned short *)(temp_v2 + 0x44) & 0x400) == 0) {
        *(unsigned short *)(temp_v0 + 0x38d6) = *(unsigned short *)(temp_v2 + 0x2a);
        *(unsigned short *)(temp_v0 + 0x38e0) = *(unsigned short *)(temp_v2 + 0x2c);
        *(unsigned short *)(temp_v0 + 0x38ea) = (unsigned short)*(unsigned char *)(temp_v2 + 0x48);
        *puVar4 = 0;
        return;
      }
      *(unsigned char *)(temp_v1 + param_2 + 0x9107) = 0xff;
      *puVar4 = 1;
    }
    else if (*(char *)(param_1 + 0x37bc) == '\0') {
      if (*(char *)(param_1 + 0x38cc) == '\0') {
        *puVar4 = 1;
      }
      return;
    }
  }
  return;
}

} /* extern "C" */
