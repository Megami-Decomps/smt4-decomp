/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cfg_CTR_IsRestrictP2pCec` (_code @ 0x431170, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016e800(int, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC8; /* 0xc8: local_c8 */
} void_stack;

/* Supplied declaration required: FUN_0016e800. */
extern int FUN_00189738(unsigned int *, unsigned int, unsigned int);


unsigned int nn_cfg_CTR_IsRestrictP2pCec(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [50];
  
  temp_v0 = FUN_00189738(temp_v1,0xc0,0xc0000);
  if (temp_v0 < 0) {
    FUN_0016e800(temp_v0,0x431190);
  }
                    /* WARNING: Treating indirect jump as return */
  return (temp_v1[0] & 0x20) >> 5;
}

} /* extern "C" */
