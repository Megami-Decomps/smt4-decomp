/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_Message_GetMessageId` (_code @ 0x238c3c, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int cecMessageIdClear(void);
int ARM_common_memcpy4_8(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned int FUN_00238c80(unsigned char *, int);
/* Supplied declaration required: cecMessageIdClear. */
/* Supplied declaration required: ARM_common_memcpy4_8. */


unsigned int nn_cec_CTR_Message_GetMessageId(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [8];
  
  if (param_3 != 0) {
    temp_v0 = FUN_00238c80(temp_v1,param_2 + 0x20);
    ARM_common_memcpy4_8(param_3,temp_v0);
  }
  if (param_2 != -0x20) {
    ARM_common_memcpy4_8();
  }
  else {
    cecMessageIdClear();
  }
  return param_1;
}

} /* extern "C" */
