/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001028f4` (_code @ 0x1028f4, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e31ea(int *);
int FUN_002e3216(int *);

typedef int romwright_code(...);
/* stack frame of param_3: 4 slot(s), 14 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned short sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: FUN_002e31ea. */
/* Supplied declaration required: FUN_002e3216. */
extern int FUN_002e3cb8(unsigned short *, unsigned char, unsigned int *);


void FUN_001028f4(int *param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned short temp_v5 [4];
  int *piStack_20;
  int iStack_1c;
  int temp_v6;
  
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  piStack_20 = param_1;
  iStack_1c = param_2;
  temp_v6 = param_3;
  for (temp_v1 = 0;
      ((-1 < *param_1 << 0x1a || (temp_v2 < param_1[7])) &&
      ((temp_v1 < temp_v6 || (*(char *)(param_2 + temp_v1) != '\0')))); temp_v1 = temp_v1 + 1) {
    temp_v0 = FUN_002e3cb8(temp_v5,*(unsigned char *)(param_2 + temp_v1),(unsigned int *)&temp_v3);
    if (temp_v0 == 1) {
      temp_v2 = temp_v2 + 1;
    }
  }
  param_1[6] = param_1[6] - temp_v2;
  FUN_002e31ea(param_1);
  temp_v3 = 0;
  temp_v4 = 0;
  for (temp_v2 = 0; temp_v2 < temp_v1; temp_v2 = temp_v2 + 1) {
    temp_v0 = FUN_002e3cb8(temp_v5,*(unsigned char *)(param_2 + temp_v2),(unsigned int *)&temp_v3);
    if (temp_v0 == 1) {
      (*(romwright_code *)param_1[1])(temp_v5[0],param_1[2]);
      param_1[8] = param_1[8] + 1;
    }
  }
  FUN_002e3216(param_1);
  return;
}

} /* extern "C" */
