/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cfg_CTR_detail_InitializeBase` (_code @ 0x1a0db4, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00195fc8(void);

extern int FUN_0016f864(void);
extern unsigned int FUN_0016f988(int *, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00195fc8. */
extern unsigned int wstrlen(unsigned int);


unsigned int nn_cfg_CTR_detail_InitializeBase(int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0016f864();
  if (temp_v0 < 0) {
    FUN_00195fc8();
  }
  if (*param_1 != 0) {
    temp_v1 = 0xd8a103f9;
  }
  else {
    temp_v2 = wstrlen(param_2);
    temp_v1 = FUN_0016f988(param_1,param_2,temp_v2,0);
    if ((temp_v1 & 0x80000000) != 0) {
      temp_v1 = 0xd92103fb;
    }
  }
  return temp_v1;
}

} /* extern "C" */
