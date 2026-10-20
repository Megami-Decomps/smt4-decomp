/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00164034` (_code @ 0x164034, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00186244(int, int, int, int);
int FUN_0019ea00(void);
int FUN_001b4120(unsigned long long *, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int DAT_005b3ce8; /* 0x5b3ce8 */

/* Supplied declaration required: FUN_00186244. */
/* Supplied declaration required: FUN_0019ea00. */
/* Supplied declaration required: FUN_001b4120. */


void FUN_00164034(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned long long uStack_20;
  
  if (param_1 == 0) {
    param_1 = DAT_005b3ce8;
  }
  if (param_2 == 0) {
    param_2 = DAT_005b3ce8;
  }
  if (param_3 == 0) {
    param_3 = DAT_005b3ce8;
  }
  if (param_4 == 0) {
    param_4 = DAT_005b3ce8;
  }
  FUN_0019ea00();
  FUN_00186244(param_1,param_2,param_3,param_4);
  uStack_20 = 0x1024500000001;
  FUN_001b4120(&uStack_20,0x18);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
