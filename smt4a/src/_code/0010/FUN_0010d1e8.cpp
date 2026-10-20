/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d1e8` (_code @ 0x10d1e8, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00106074(void);
int FUN_002e6f1c(unsigned char [96], unsigned int);
int FUN_002e7232(void);
int FUN_002ea00c(...);
int FUN_002ea9dc(unsigned int *);
int FUN_002eca44(unsigned char [96]);
int FUN_002ecf40(void);
int FUN_002f4364(void);
int FUN_002f7290(unsigned int *, unsigned char [96]);

typedef int romwright_code(...);
extern unsigned char DAT_005590bc; /* 0x5590bc */

/* Supplied declaration required: FUN_00106074. */
/* Supplied declaration required: FUN_002e6f1c. */
/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002ea00c. */
/* Supplied declaration required: FUN_002ea9dc. */
/* Supplied declaration required: FUN_002eca44. */
/* Supplied declaration required: FUN_002ecf40. */
/* Supplied declaration required: FUN_002f4364. */
/* Supplied declaration required: FUN_002f7290. */


void FUN_0010d1e8(unsigned int *param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [96];
  
  *param_1 = (unsigned int)&DAT_005590bc;
  if (param_1[0x1e] != 0) {
    FUN_002eca44(temp_v1);
    FUN_002f7290(param_1,temp_v1);
    FUN_002e6f1c(temp_v1,0xffffffff);
    FUN_002ea00c(temp_v1);
  }
  if (param_1[0x27] != 0) {
    FUN_002e7232();
  }
  if (param_1[0x25] != 0) {
    FUN_002e7232();
  }
  if (param_1[0x26] != 0) {
    FUN_002e7232();
    param_1[0x26] = 0;
  }
  if ((int *)param_1[0x21] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x21] + 4))();
  }
  param_1[0x21] = 0;
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x22] + 4))();
  }
  param_1[0x22] = 0;
  param_1[0x1c] = 0;
  if ((int *)param_1[0x29] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x29] + 4))();
    param_1[0x29] = 0;
  }
  if ((int *)param_1[0x2a] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x2a] + 4))();
    param_1[0x2a] = 0;
  }
  FUN_00106074();
  FUN_002f4364();
  FUN_002ecf40();
  param_1 = param_1 + 0x2c;
  FUN_002ea9dc(param_1);
  temp_v0 = FUN_002ea00c(param_1 + -0x28);
  *(unsigned char *)(temp_v0 - 4) = 0;
  return;
}

} /* extern "C" */
