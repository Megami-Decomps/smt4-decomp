/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012aa60` (_code @ 0x12aa60, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "classes/Obj55a9e0.h"

extern "C" {

int FUN_002ecac4(int);

typedef int romwright_code(...);
extern unsigned char DAT_00559c0c; /* 0x559c0c */
extern unsigned char DAT_00559c58; /* 0x559c58 */

extern int FUN_00115cac(int);
/* Supplied declaration required: FUN_002ecac4. */
extern int FUN_002fb028(int);


void FUN_0012aa60(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  param_1[0x1a] = (unsigned int)&DAT_00559c58;
  *param_1 = (unsigned int)&DAT_00559c0c;
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x1d] + 4))();
  }
  temp_v0 = (((Obj55a9e0 *)(param_1 + 0x53))->Obj55a9e0::~Obj55a9e0(), (int)(param_1 + 0x53));
  temp_v0 = FUN_00115cac(temp_v0 - 0x2c);
  temp_v0 = FUN_002fb028(temp_v0 - 0x88);
  FUN_002ecac4(temp_v0 - 0x98);
  return;
}

} /* extern "C" */
