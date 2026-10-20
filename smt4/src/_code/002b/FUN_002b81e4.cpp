/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b81e4` (_code @ 0x2b81e4, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002adba8(int *, int, int);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

/* Supplied declaration required: FUN_002adba8. */


void FUN_002b81e4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int temp_v2;
  unsigned int uStack_14;
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  temp_v1 = 0x2025e;
  uStack_30 = 1;
  uStack_2c = 0xf025f;
  uStack_28 = 0x80000000;
  uStack_24 = 0xf0227;
  uStack_20 = 0xf;
  uStack_1c = 0xf0232;
  temp_v2 = 1;
  uStack_14 = 0x30253;
  uStack_10 = 0;
  uStack_c = 0x10245;
  temp_v0 = 0x100;
  FUN_002adba8(&temp_v0,0x30,1);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
