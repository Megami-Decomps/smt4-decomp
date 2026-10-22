/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011db88` (_code @ 0x11db88, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ecac4(int);

typedef int romwright_code(...);
extern unsigned char DAT_0055a9f8; /* 0x55a9f8 */
extern unsigned char DAT_0055aa44; /* 0x55aa44 */

extern int FUN_00120458(int);
extern int _ZN9Obj55aff4D1Ev(int);
/* Supplied declaration required: FUN_002ecac4. */
extern int vectorDestroyBytes(unsigned int *);
extern int FUN_002fb028(int);


void FUN_0011db88(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  param_1[0x1a] = (unsigned int)&DAT_0055aa44;
  *param_1 = (unsigned int)&DAT_0055a9f8;
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x1d] + 4))();
  }
  temp_v0 = vectorDestroyBytes(param_1 + 0x54);
  temp_v0 = FUN_00120458(temp_v0 - 0x2c);
  temp_v0 = FUN_002fb028(temp_v0 - 0x94);
  temp_v0 = _ZN9Obj55aff4D1Ev(temp_v0 - 0x14);
  FUN_002ecac4(temp_v0 - 0x7c);
  return;
}

} /* extern "C" */
