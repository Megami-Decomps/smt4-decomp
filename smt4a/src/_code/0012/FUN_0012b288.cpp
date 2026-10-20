/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012b288` (_code @ 0x12b288, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ecac4(int);

typedef int romwright_code(...);
extern unsigned char DAT_00559c78; /* 0x559c78 */
extern unsigned char DAT_00559cc4; /* 0x559cc4 */

extern int FUN_00114614(int);
/* Supplied declaration required: FUN_002ecac4. */
extern int FUN_002fb028(int);
extern int FUN_0030ca92(unsigned int *);
extern int FUN_00432d8c(int);


void FUN_0012b288(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  param_1[0x1a] = (unsigned int)&DAT_00559cc4;
  *param_1 = (unsigned int)&DAT_00559c78;
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x1d] + 4))();
  }
  temp_v0 = FUN_0030ca92(param_1 + 0x62);
  temp_v0 = FUN_00114614(temp_v0 - 0x38);
  temp_v0 = FUN_00432d8c(temp_v0 - 0x40);
  temp_v0 = FUN_002fb028(temp_v0 - 0x78);
  FUN_002ecac4(temp_v0 - 0x98);
  return;
}

} /* extern "C" */
