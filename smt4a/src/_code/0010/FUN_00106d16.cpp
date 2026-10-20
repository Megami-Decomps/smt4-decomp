/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106d16` (_code @ 0x106d16, 0x9a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001170c8(unsigned char *, unsigned char [24], unsigned int, unsigned int [2], int *);
int FUN_002e7232(int);
int FUN_002eac60(int *, unsigned int);
int FUN_002eac8e(int *, unsigned int);
int FUN_002ee524(...);
int FUN_002ee54c(unsigned char [24]);

typedef int romwright_code(...);
/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

/* Supplied declaration required: FUN_001170c8. */
/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002eac60. */
/* Supplied declaration required: FUN_002eac8e. */
/* Supplied declaration required: FUN_002ee524. */
/* Supplied declaration required: FUN_002ee54c. */


unsigned int FUN_00106d16(int param_1,int param_2,unsigned int param_3,int *param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned char temp_v1 [24];
  unsigned char temp_v2 [24];
  int temp_v3;
  unsigned int temp_v4 [2];
  
  if (param_2 != 0) {
    FUN_002ee524(temp_v1);
    FUN_002ee524(temp_v2,param_3);
    temp_v4[0] = 0;
    temp_v3 = 0;
    puVar1 = temp_v1;
    FUN_001170c8(puVar1,temp_v2,*(unsigned int *)(param_1 + 0x18),temp_v4,&temp_v3);
    if (puVar1 != (unsigned char *)0x0) {
      temp_v0 = (**(romwright_code **)(*param_4 + 0x30))(param_4);
      if ((temp_v0 == 0) && (temp_v0 = (**(romwright_code **)(*param_4 + 0x60))(param_4), temp_v0 == 0)) {
        FUN_002eac8e(param_4,*(unsigned int *)(temp_v3 + 0x2c));
        FUN_002eac60(param_4,temp_v4[0]);
        (**(romwright_code **)(*param_4 + 0x8c))(param_4,temp_v3 + 0x34);
      }
      FUN_002e7232(temp_v3);
      FUN_002ee54c(temp_v2);
      FUN_002ee54c(temp_v1);
      return 1;
    }
    FUN_002ee54c(temp_v2);
    FUN_002ee54c(temp_v1);
  }
  return 0;
}

} /* extern "C" */
