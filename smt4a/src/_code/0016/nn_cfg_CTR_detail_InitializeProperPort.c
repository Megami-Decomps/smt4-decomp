/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cfg_CTR_detail_InitializeProperPort` (_code @ 0x16e5fc, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0016e468(void);
extern int FUN_001895e4(void);
extern unsigned int FUN_0018968c(void);


unsigned int nn_cfg_CTR_detail_InitializeProperPort(unsigned char *param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0016e468();
  if ((temp_v0 & 0x80000000) == 0) {
    *param_1 = 0;
  }
  else {
    temp_v1 = FUN_001895e4();
    if (temp_v1 < 0) {
      temp_v0 = FUN_0018968c();
      if ((temp_v0 & 0x80000000) == 0) {
        *param_1 = 2;
        temp_v2 = 0;
      }
      else {
        temp_v2 = 0xd90103ea;
      }
      return temp_v2;
    }
    *param_1 = 1;
  }
  return 0;
}
