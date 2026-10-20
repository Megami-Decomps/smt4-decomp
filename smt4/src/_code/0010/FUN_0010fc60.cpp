/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fc60` (_code @ 0x10fc60, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e458; /* 0x44e458 */
extern unsigned int DAT_0044e460; /* 0x44e460 */

extern unsigned int nn_dsp_CTR_DSP_UnloadComponent(unsigned int);


unsigned int FUN_0010fc60(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((*(signed char *)((unsigned char *)&DAT_0044e458 + 0x1)) != '\0') {
    temp_v0 = nn_dsp_CTR_DSP_UnloadComponent(DAT_0044e460);
    (*(signed char *)((unsigned char *)&DAT_0044e458 + 0x1)) = '\0';
  }
  return temp_v0;
}

} /* extern "C" */
