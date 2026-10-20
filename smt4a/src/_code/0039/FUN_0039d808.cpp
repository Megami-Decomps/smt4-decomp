/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039d808` (_code @ 0x39d808, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable04FindById(void);
int scrSetResult(int);

/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: scrSetResult. */
extern int btlUnitGet(unsigned int);


unsigned int FUN_0039d808(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = btlUnitGet(*param_1);
  temp_v2 = *(int *)(temp_v0 + 0x28);
  temp_v3 = 0;
  temp_v0 = 0;
  do {
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v0 * 2 + 0x118);
    if ((temp_v1 != 0) && (dataTable04FindById(), temp_v1 != 0)) {
      temp_v3 = temp_v3 + 1;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 8);
  scrSetResult(temp_v3);
  return 1;
}

} /* extern "C" */
