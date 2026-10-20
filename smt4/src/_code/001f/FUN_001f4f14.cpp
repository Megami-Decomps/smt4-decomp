/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4f14` (_code @ 0x1f4f14, 0x180 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028cb40(int, unsigned short [4], short [2]);

/* stack frame of param_3: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned short sp20; /* 0x20: local_20 */
} param_3_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Supplied declaration required: FUN_0028cb40. */
extern unsigned int gameGetSlotTable(int);


unsigned int FUN_001f4f14(int param_1,unsigned int *param_2,int *param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  short temp_v5 [2];
  unsigned short temp_v6 [4];
  
  temp_v0 = *(int *)(param_1 + 0x3064);
  if (temp_v0 < 0) {
    return 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  temp_v1 = gameGetSlotTable(temp_v0);
  temp_v0 = *(int *)(param_1 + 0x3064);
  if (temp_v0 == 9999) {
    if (*(char *)(param_1 + 0x345c) != '\0') {
      param_2[1] = param_2[1] + (unsigned int)(0xfffffffe < *param_2);
      *param_2 = *param_2 + 1;
    }
    if (*(char *)(param_1 + 0x345d) != '\0') {
      temp_v3 = *param_2;
      temp_v2 = 1 << ((*(unsigned char *)(temp_v1 + 0x9108) + 1) & 0xff);
      *param_2 = temp_v2 + temp_v3;
      param_2[1] = param_2[1] + ((int)temp_v2 >> 0x1f) + (unsigned int)romwright_carry_4(temp_v2,temp_v3);
    }
    if (*(char *)(param_1 + 0x345e) != '\0') {
      temp_v3 = *param_2;
      temp_v2 = 1 << ((*(unsigned char *)(temp_v1 + 0x9109) + 1) & 0xff);
      *param_2 = temp_v2 + temp_v3;
      param_2[1] = param_2[1] + ((int)temp_v2 >> 0x1f) + (unsigned int)romwright_carry_4(temp_v2,temp_v3);
    }
    if (*(char *)(param_1 + 0x345f) != '\0') {
      temp_v2 = 1 << ((*(unsigned char *)(temp_v1 + 0x910a) + 1) & 0xff);
      temp_v1 = temp_v2 + *param_2;
      temp_v2 = ((int)temp_v2 >> 0x1f) + param_2[1] + (unsigned int)romwright_carry_4(temp_v2,*param_2);
      *param_2 = temp_v1;
      param_2[1] = temp_v2;
    }
  }
  else {
    temp_v4 = temp_v0 == 0;
    if (temp_v4) {
      temp_v1 = 1;
    }
    temp_v2 = (unsigned int)!temp_v4;
    if (temp_v0 >= 0) {
      if (!temp_v4) {
        temp_v1 = 1 << ((*(unsigned char *)(temp_v0 + temp_v1 + 0x9107) + 1) & 0xff);
        *param_2 = temp_v1;
        param_2[1] = (int)temp_v1 >> 0x1f;
        temp_v6[0] = 0;
        temp_v5[0] = 0;
        FUN_0028cb40(param_1,temp_v6,temp_v5);
        *param_3 = (int)temp_v5[0];
        param_3[1] = (int)temp_v5[0] >> 0x1f;
        return 1;
      }
      *param_2 = temp_v1;
      param_2[1] = temp_v2;
    }
  }
  temp_v6[0] = 0;
  temp_v5[0] = 0;
  FUN_0028cb40(param_1,temp_v6,temp_v5);
  *param_3 = (int)temp_v5[0];
  param_3[1] = (int)temp_v5[0] >> 0x1f;
  return 1;
}

} /* extern "C" */
