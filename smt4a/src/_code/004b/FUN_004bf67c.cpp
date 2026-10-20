/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bf67c` (_code @ 0x4bf67c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable04FindById(void);

extern unsigned int *gameGetSlotTable(void);
/* Supplied declaration required: dataTable04FindById. */
extern unsigned int ll_sdiv(unsigned int, int, unsigned int, unsigned int);


unsigned int FUN_004bf67c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  dataTable04FindById();
  if ((param_1 != 0) && ((*(unsigned int *)(param_1 + 0x3c) & 0x7f000) != 0)) {
    puVar1 = (unsigned int *)gameGetSlotTable();
    temp_v0 = *puVar1;
    temp_v1 = 100 - ((*(unsigned int *)(param_1 + 0x3c) & 0x7ffff) >> 0xc);
    temp_v2 = ll_sdiv((int)((unsigned long long)temp_v0 * (unsigned long long)temp_v1),
                    temp_v1 * ((int)temp_v0 >> 0x1f) +
                    ((int)temp_v1 >> 0x1f) * temp_v0 +
                    (int)((unsigned long long)temp_v0 * (unsigned long long)temp_v1 >> 0x20),100,0);
  }
  return temp_v2;
}

} /* extern "C" */
