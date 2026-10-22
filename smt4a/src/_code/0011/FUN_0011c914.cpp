#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055a8e0; /* 0x55a8e0 */

extern int _ZN9Obj55aff4D1Ev(int);
extern int vectorDestroyBytes(unsigned int *);
extern int vectorTeardown_00307368(int);


int FUN_0011c914(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055a8e0;
  temp_v0 = vectorDestroyBytes(param_1 + 0xb);
  temp_v0 = vectorTeardown_00307368(temp_v0 - 0xc);
  temp_v0 = vectorTeardown_00307368(temp_v0 - 0xc);
  temp_v0 = _ZN9Obj55aff4D1Ev(temp_v0 - 8);
  return temp_v0 - 0xc;
}

} /* extern "C" */
