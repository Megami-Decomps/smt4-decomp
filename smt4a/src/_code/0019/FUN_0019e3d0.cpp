/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019e3d0` (_code @ 0x19e3d0, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184c50(unsigned int);
int FUN_00186948(int);
int FUN_001b4120(int *, int);

/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp64; /* 0x64: local_64 */
} param_4_stack;

/* Supplied declaration required: FUN_00184c50. */
/* Supplied declaration required: FUN_00186948. */
/* Supplied declaration required: FUN_001b4120. */


void FUN_0019e3d0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_1c;
  
  temp_v0 = param_3;
  uStack_1c = param_4;
  FUN_00186948(1);
  FUN_00184c50(param_1);
  FUN_00184c50(param_2);
  FUN_00184c50(param_3);
  FUN_00184c50(param_4);
  temp_v0 = 1;
  uStack_1c = 0x10245;
  FUN_001b4120(&temp_v0,0x18);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
