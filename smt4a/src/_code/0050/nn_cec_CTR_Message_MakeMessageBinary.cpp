/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_Message_MakeMessageBinary` (_code @ 0x501e70, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a9110(int, int);
int rt_memcpy(...);

/* Supplied declaration required: FUN_001a9110. */
/* Supplied declaration required: rt_memcpy. */


unsigned int nn_cec_CTR_Message_MakeMessageBinary(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  rt_memcpy(param_2,param_1,0x70);
  param_2 = param_2 + 0x70;
  temp_v0 = *(char *)(param_1 + 0x130);
  temp_v1 = 0;
  if ((int)temp_v0 != 0) {
    do {
      temp_v2 = param_1 + temp_v1 * 0xc;
      FUN_001a9110(param_2,temp_v2 + 0x70);
      rt_memcpy(param_2 + 8,*(unsigned int *)(temp_v2 + 0x78),*(unsigned int *)(temp_v2 + 0x74));
      temp_v1 = temp_v1 + 1;
      param_2 = param_2 + 8 + ((*(int *)(temp_v2 + 0x74) + 3U) & 0xfffffffc);
    } while (temp_v1 < (unsigned int)(int)temp_v0);
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    rt_memcpy(param_2,*(int *)(param_1 + 0x138),*(unsigned int *)(param_1 + 0x134));
    param_2 = param_2 + *(int *)(param_1 + 0x134);
  }
  if (*(int *)(param_1 + 0x13c) != 0) {
    rt_memcpy(param_2,*(int *)(param_1 + 0x13c),0x20);
  }
  return *(unsigned int *)(param_1 + 4);
}

} /* extern "C" */
