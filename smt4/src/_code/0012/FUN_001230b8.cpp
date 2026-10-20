/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001230b8` (_code @ 0x1230b8, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memClear(int, int);

typedef int romwright_code(...);
extern romwright_code *DAT_0044e334; /* 0x44e334 */
extern int DAT_004655f0; /* 0x4655f0 */
extern unsigned int DAT_004655f4; /* 0x4655f4 */

extern int FUN_00137c14(void);
/* Supplied declaration required: memClear. */


unsigned int FUN_001230b8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  DAT_004655f0 = param_1;
  memClear(param_1,0x854);
  temp_v0 = FUN_00137c14();
  *(int *)(DAT_004655f0 + 0x800) = temp_v0;
  if (temp_v0 != 0) {
    DAT_004655f4 = 1;
    return 0;
  }
  if (DAT_0044e334 != (romwright_code *)0x0) {
    (*DAT_0044e334)(0x10000,0x100,0);
  }
  DAT_004655f0 = 0;
  return 0xffffffff;
}

} /* extern "C" */
