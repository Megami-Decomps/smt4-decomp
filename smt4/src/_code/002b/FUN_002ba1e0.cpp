/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba1e0` (_code @ 0x2ba1e0, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002adba8(int *, int, int);
int FUN_002aff74(unsigned int);
int FUN_002b0124(int);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp64; /* 0x64: local_64 */
} param_4_stack;

/* Supplied declaration required: FUN_002adba8. */
/* Supplied declaration required: FUN_002aff74. */
/* Supplied declaration required: FUN_002b0124. */


void FUN_002ba1e0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int uStack_20;
  unsigned int uStack_1c;
  
  uStack_20 = param_3;
  uStack_1c = param_4;
  FUN_002b0124(1);
  FUN_002aff74(param_1);
  FUN_002aff74(param_2);
  FUN_002aff74(param_3);
  FUN_002aff74(param_4);
  uStack_20 = 1;
  uStack_1c = 0x10245;
  FUN_002adba8(&uStack_20,0x18,1);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
