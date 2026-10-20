/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a24c` (_code @ 0x12a24c, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNewE(unsigned int);

extern unsigned char DAT_005949d8; /* 0x5949d8 */

extern unsigned int rt_malloc(int);
/* Supplied declaration required: asdOperatorNewE. */


void FUN_0012a24c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  
  if ((*(unsigned int *)((unsigned char *)&DAT_005949d8 + 0x28)) == 0xffffffff) {
    asdOperatorNewE(0xfffffffe);
  }
  temp_v0 = rt_malloc((*(unsigned int *)((unsigned char *)&DAT_005949d8 + 0x28)) << 1);
  *(unsigned int *)(param_1 + 8) = temp_v0;
  for (temp_v1 = 0; temp_v1 < (*(unsigned int *)((unsigned char *)&DAT_005949d8 + 0x28)); temp_v1 = temp_v1 + 1) {
    puVar2 = (unsigned short *)(*(int *)(param_1 + 8) + temp_v1 * 2);
    if (puVar2 != (unsigned short *)0x0) {
      *puVar2 = *(unsigned short *)(param_1 + 0xe);
    }
  }
  return;
}

} /* extern "C" */
