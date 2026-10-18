/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004827e0` (_code @ 0x4827e0, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_0055c824; /* 0x55c824 */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001aea28. */


unsigned int * FUN_004827e0(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned char *temp_v1;
  
  puVar2 = &DAT_0055c824;
  *param_1 = (unsigned int)&DAT_0055c824;
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x1d] + 4))();
    param_1[0x1d] = 0;
    puVar2 = temp_v1;
  }
  temp_v0 = param_1[0x1e];
  if (temp_v0 != 0) {
    puVar2 = *(unsigned char **)(temp_v0 + 4);
  }
  if (temp_v0 != 0 && puVar2 != (unsigned char *)0x0) {
    FUN_001aea28(DAT_0056fcc0);
    if ((int *)param_1[0x1e] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[0x1e] + 4))();
      param_1[0x1e] = 0;
    }
  }
  return param_1;
}
