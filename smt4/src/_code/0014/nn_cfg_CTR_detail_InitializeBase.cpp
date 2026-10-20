/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cfg_CTR_detail_InitializeBase` (_code @ 0x146748, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdFatalError(void);

extern unsigned int asdModelForwardChecked(int *, unsigned int, unsigned int, unsigned int);
extern int FUN_002c1398(void);
extern unsigned int libc_strlen(unsigned int);
/* Supplied declaration required: asdFatalError. */


unsigned int nn_cfg_CTR_detail_InitializeBase(int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c1398();
  if (temp_v0 < 0) {
    asdFatalError();
  }
  if (*param_1 != 0) {
    temp_v1 = 0xd8a103f9;
  }
  else {
    temp_v2 = libc_strlen(param_2);
    temp_v1 = asdModelForwardChecked(param_1,param_2,temp_v2,0);
    if ((temp_v1 & 0x80000000) != 0) {
      temp_v1 = 0xd92103fb;
    }
  }
  return temp_v1;
}

} /* extern "C" */
