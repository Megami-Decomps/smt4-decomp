/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0bb8` (_code @ 0x3e0bb8, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013cab8(int, int, int);
int FUN_003e0f94(...);
int FUN_003e16cc(unsigned int *, unsigned int);
int FUN_003e1a30(unsigned int *, unsigned int);
int FUN_003e1b80(unsigned int *, unsigned int);
int FUN_003e2504(unsigned int *, unsigned int);
int FUN_003e26f0(unsigned int *, unsigned int);
int FUN_003e2a88(unsigned int *, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0013cab8. */
extern int FUN_0013def0(unsigned int);
extern int FUN_002e07f4(void);
/* Supplied declaration required: FUN_003e0f94. */
/* Supplied declaration required: FUN_003e16cc. */
/* Supplied declaration required: FUN_003e1a30. */
/* Supplied declaration required: FUN_003e1b80. */
/* Supplied declaration required: FUN_003e2504. */
/* Supplied declaration required: FUN_003e26f0. */
/* Supplied declaration required: FUN_003e2a88. */


void FUN_003e0bb8(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_003e0f94();
  if (temp_v0 != 2 && temp_v0 != 5) {
    temp_v0 = FUN_0013def0(0);
    if (temp_v0 == 3) {
      FUN_0013cab8(0,10,0xff);
    }
    temp_v0 = FUN_0013def0(1);
    if (temp_v0 == 3) {
      FUN_0013cab8(1,10,0xff);
    }
    temp_v0 = FUN_002e07f4();
    if (temp_v0 == 0) {
      return;
    }
  }
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = 0x18;
  temp_v1 = FUN_003e0f94(param_1,param_2);
  switch(temp_v1) {
  default:
    FUN_003e16cc(param_1,param_2);
    return;
  case 1:
    FUN_003e26f0(param_1,param_2);
    return;
  case 2:
    FUN_003e1b80(param_1,param_2);
    return;
  case 3:
    FUN_003e1a30(param_1,param_2);
    return;
  case 4:
    FUN_003e2a88(param_1,param_2);
    return;
  case 5:
    FUN_003e2504(param_1,param_2);
    return;
  }
}

} /* extern "C" */
