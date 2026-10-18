/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010bb78` (_code @ 0x10bb78, 0x10a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 4 slot(s), 9 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp28; /* 0x28: local_28 */
    unsigned short sp34; /* 0x34: local_34 */
    unsigned short sp38; /* 0x38: local_38 */
} param_4_stack;

/* Supplied declaration required: FUN_002ed280. */
/* Supplied declaration required: FUN_002eea8a. */
extern int FUN_002ef9e0(unsigned char *, unsigned short);
extern int FUN_002f12f4(int, int);


unsigned int FUN_0010bb78(unsigned int param_1,int param_2,int param_3,int *param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned short temp_v2 [2];
  unsigned short temp_v3 [2];
  unsigned char temp_v4 [8];
  unsigned char temp_v5;
  unsigned int uStack_24;
  int iStack_20;
  int iStack_1c;
  int *temp_v6;
  
  temp_v1 = *(int *)(param_2 + 0xc);
  if (temp_v1 < *(int *)(*(int *)(param_2 + 8) + 0x10)) {
    uStack_24 = param_1;
    iStack_20 = param_2;
    iStack_1c = param_3;
    temp_v6 = param_4;
    temp_v0 = FUN_002f12f4(param_2,param_3 + 0x25);
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v0 = FUN_002f12f4(param_2,param_3 + 0x26);
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v0 = FUN_002eea8a(param_2,param_3 + 0x3c);
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v0 = FUN_002ed280(param_2,1);
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v0 = FUN_002ed280(param_2,4);
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v3[0] = 0;
    temp_v0 = FUN_002eea8a(param_2,temp_v3);
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v0 = FUN_002ef9e0(temp_v4,temp_v3[0]);
    *(unsigned short *)(param_3 + 0x44) = *(unsigned short *)(temp_v0 + 4);
    if ((((*(unsigned short *)(param_3 + 0x3c) & 0xf) == 0) || ((*(unsigned short *)(param_3 + 0x3c) & 0xf) == 1))
       && (temp_v0 = FUN_002ed280(param_2,4), temp_v0 == 0)) {
      return 0;
    }
    if (((*(unsigned short *)(param_3 + 0x3c) & 0xf) == 2) && (temp_v0 = FUN_002ed280(param_2,1), temp_v0 == 0))
    {
      return 0;
    }
    temp_v2[0] = 0;
    if ((int)((unsigned int)*(unsigned short *)(param_3 + 0x3c) << 0x18) < 0) {
      temp_v0 = FUN_002eea8a(param_2,temp_v2);
      if (temp_v0 == 0) {
        return 0;
      }
      temp_v1 = ((*(int *)(param_2 + 0xc) + (unsigned int)temp_v2[0]) - temp_v1) + 1;
    }
    else {
      temp_v1 = *(int *)(*(int *)(param_2 + 8) + 0x10);
      temp_v2[0] = ((short)temp_v1 - (short)*(unsigned int *)(param_2 + 0xc)) - 1;
    }
    temp_v5 = *(unsigned char *)(param_3 + 0x25);
    if (temp_v5 >> 4 < 0xc) {
      temp_v0 = FUN_002ed280(param_2,temp_v2[0] + 1);
      if (temp_v0 == 0) {
        return 0;
      }
      if (temp_v6 != (int *)0x0) {
        *temp_v6 = temp_v1;
      }
      return 1;
    }
  }
  return 0;
}
