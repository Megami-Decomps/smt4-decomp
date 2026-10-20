/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b132c` (_code @ 0x2b132c, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ccde8(int, unsigned short [4], short [2]);

/* stack frame of param_3: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned short sp20; /* 0x20: local_20 */
} param_3_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
extern unsigned int FUN_001ab888(void);
/* Supplied declaration required: FUN_002ccde8. */


unsigned int FUN_002b132c(int param_1,unsigned int *param_2,int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  short temp_v5 [2];
  unsigned short temp_v6 [4];
  
  if (*(int *)(param_1 + 0x3898) < 0) {
    return 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  temp_v0 = FUN_001ab888();
  temp_v2 = *(int *)(param_1 + 0x3898);
  if (temp_v2 == 9999) {
    if (*(char *)(param_1 + 0x3c84) != '\0') {
      param_2[1] = param_2[1] + (unsigned int)(0xfffffffe < *param_2);
      *param_2 = *param_2 + 1;
    }
    if (*(char *)(param_1 + 0x3c85) != '\0') {
      temp_v3 = *param_2;
      temp_v1 = 1 << ((*(unsigned char *)(temp_v0 + 0x1ca0) + 1) & 0xff);
      *param_2 = temp_v1 + temp_v3;
      param_2[1] = param_2[1] + ((int)temp_v1 >> 0x1f) + (unsigned int)romwright_carry_4(temp_v1,temp_v3);
    }
    if (*(char *)(param_1 + 0x3c86) != '\0') {
      temp_v3 = *param_2;
      temp_v1 = 1 << ((*(unsigned char *)(temp_v0 + 0x1ca1) + 1) & 0xff);
      *param_2 = temp_v1 + temp_v3;
      param_2[1] = param_2[1] + ((int)temp_v1 >> 0x1f) + (unsigned int)romwright_carry_4(temp_v1,temp_v3);
    }
    if (*(char *)(param_1 + 0x3c87) != '\0') {
      temp_v1 = 1 << ((*(unsigned char *)(temp_v0 + 0x1ca2) + 1) & 0xff);
      temp_v0 = temp_v1 + *param_2;
      temp_v1 = ((int)temp_v1 >> 0x1f) + param_2[1] + (unsigned int)romwright_carry_4(temp_v1,*param_2);
      *param_2 = temp_v0;
      param_2[1] = temp_v1;
    }
  }
  else {
    temp_v4 = temp_v2 == 0;
    if (temp_v4) {
      temp_v0 = 1;
    }
    temp_v1 = (unsigned int)!temp_v4;
    if (temp_v2 >= 0) {
      if (!temp_v4) {
        temp_v0 = 1 << ((*(unsigned char *)(temp_v2 + temp_v0 + 0x1c9f) + 1) & 0xff);
        *param_2 = temp_v0;
        param_2[1] = (int)temp_v0 >> 0x1f;
        temp_v6[0] = 0;
        temp_v5[0] = 0;
        FUN_002ccde8(param_1,temp_v6,temp_v5);
        *param_3 = (int)temp_v5[0];
        param_3[1] = (int)temp_v5[0] >> 0x1f;
        return 1;
      }
      *param_2 = temp_v0;
      param_2[1] = temp_v1;
    }
  }
  temp_v6[0] = 0;
  temp_v5[0] = 0;
  FUN_002ccde8(param_1,temp_v6,temp_v5);
  *param_3 = (int)temp_v5[0];
  param_3[1] = (int)temp_v5[0] >> 0x1f;
  return 1;
}

} /* extern "C" */
