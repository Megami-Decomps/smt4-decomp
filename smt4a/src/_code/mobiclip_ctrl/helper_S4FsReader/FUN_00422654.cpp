/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00422654` (_code @ 0x422654, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001469a8(...);
int FUN_0019a5a0(unsigned int);
int FUN_001a0d08(unsigned int *);
int FUN_002e3140(void);
int FUN_002e3328(int);
int software_interrupt(int);

typedef int romwright_code(...);
extern unsigned int DAT_005880f8; /* 0x5880f8 */
extern int DAT_005880fc; /* 0x5880fc */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001469a8. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_00422654(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  if (param_1[0xe] != 0) {
    software_interrupt(0x18);
    if ((int)param_1[0x14] < 0) {
      FUN_002e3140();
    }
    software_interrupt(0x24);
    if ((int)param_1[0xc] < 0) {
      FUN_002e3140();
    }
    *(unsigned char *)(param_1 + 0xd) = 1;
    FUN_001a0d08(param_1 + 0xc);
    if (param_1[0xc] != 0) {
      software_interrupt(0x23);
      param_1[0xc] = 0;
    }
    FUN_001469a8(DAT_005880fc);
    temp_v0 = DAT_005880fc;
    if (DAT_005880fc != 0) {
      FUN_001469a8();
      FUN_002e3328(temp_v0);
    }
    DAT_005880fc = 0;
    FUN_0019a5a0(DAT_005880f8);
    DAT_005880f8 = 0;
    param_1[0x12] = 0xffffffff;
    if (param_1[0x13] != 0) {
      software_interrupt(0x23);
      param_1[0x13] = 0;
    }
    if (param_1[0x14] != 0) {
      software_interrupt(0x23);
      param_1[0x14] = 0;
    }
    if (param_1[8] != 0) {
      (**(romwright_code **)(*(int *)param_1[0xf] + 4))();
      param_1[8] = 0;
    }
    if (param_1[9] != 0) {
      (**(romwright_code **)(*(int *)param_1[0xf] + 4))();
      param_1[9] = 0;
    }
    param_1[10] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}

} /* extern "C" */
