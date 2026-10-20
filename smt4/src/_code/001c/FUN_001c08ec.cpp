/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c08ec` (_code @ 0x1c08ec, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002adba8(unsigned long long *, int, int);
int FUN_002b7dc4(unsigned int, unsigned int, unsigned int);
int FUN_002b81e4(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_002adba8. */
/* Supplied declaration required: FUN_002b7dc4. */
/* Supplied declaration required: FUN_002b81e4. */


void FUN_001c08ec(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned long long uStack_20;
  unsigned long long uStack_18;
  unsigned long long uStack_10;
  
  FUN_002b81e4();
  FUN_002b7dc4(0xffffffff,0xffffffff,0xffffffff);
  uStack_20 = 0x1024500000001;
  uStack_18 = 0xf023100000001;
  uStack_10 = 0x1025300000000;
  FUN_002adba8(&uStack_20,0x18,1);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
