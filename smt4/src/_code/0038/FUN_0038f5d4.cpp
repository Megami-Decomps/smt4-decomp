/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038f5d4` (_code @ 0x38f5d4, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00233818(unsigned int *);
int FUN_00233854(unsigned int *);
int FUN_00233d78(unsigned int *);
int FUN_0027eb30(unsigned int *);
int FUN_002a7218(void);
int FUN_002a780c(unsigned int);
int FUN_002ae7e8(int);
int FUN_002ae898(int, int);
int FUN_002b8cc8(void);
int FUN_002c415c(void);
int FUN_002c43b4(unsigned int, int);

typedef int romwright_code(...);
extern int DAT_00432fc8; /* 0x432fc8 */
extern int DAT_00433130; /* 0x433130 */

/* Supplied declaration required: FUN_00233818. */
/* Supplied declaration required: FUN_00233854. */
/* Supplied declaration required: FUN_00233d78. */
/* Supplied declaration required: FUN_0027eb30. */
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002a780c. */
/* Supplied declaration required: FUN_002ae7e8. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002b8cc8. */
extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_0038f5d4(unsigned int *param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00432fc8;
  *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xfffffeff;
  *(unsigned char *)(temp_v0 + 0xd50) = 1;
  *(unsigned char *)(temp_v0 + 0xb81) = 1;
  *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xffffff8f;
  *(unsigned char *)(DAT_00433130 + 0x450c) = 0;
  FUN_00233854(param_1 + 0xba);
  FUN_00233818(param_1 + 0xad);
  FUN_0027eb30(param_1 + 0x46c);
  FUN_00233d78(param_1);
  temp_v0 = FUN_002bf244(param_1[0x5e8]);
  if (temp_v0 != 0) {
    if (param_1[0x5eb] != 0xffffffff) {
      param_1[0x5eb] = 0xffffffff;
      FUN_002b8cc8();
    }
    *param_1 = *param_1 & 0xffffcfff;
    FUN_002c43b4(param_1[0x5e8],0);
  }
  FUN_002a780c(param_1[0x70c]);
  param_1[0x70c] = 0;
  if (param_1[0xd6] != 0) {
    FUN_002a7218();
    param_1[0xd6] = 0;
  }
  if (param_1[0xd4] != 0) {
    FUN_002c415c();
    param_1[0xd4] = 0;
  }
  temp_v0 = 0;
  do {
    FUN_002ae898(0x3a,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  FUN_002ae7e8(0x3a);
  *param_1 = *param_1 | 1;
  param_1[1] = 0x14;
  param_1[2] = 0;
  if ((int *)param_1[0x82] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
    param_1[0x82] = 0;
  }
  return;
}

} /* extern "C" */
