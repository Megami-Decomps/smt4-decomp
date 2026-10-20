#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055a884; /* 0x55a884 */
extern unsigned char DAT_0055ad28; /* 0x55ad28 */

extern int FUN_001145c8(unsigned int *);


void FUN_0030d134(unsigned int *param_1)

{
  int temp_v0;
  
  unsigned int vt = (unsigned int)&DAT_0055ad28;
  *param_1 = vt;
  *(unsigned char *)(param_1 + 1) = 0;
  temp_v0 = FUN_001145c8(param_1 + 2);
  unsigned char **q = (unsigned char **)(temp_v0 - 8);
  *q = &DAT_0055a884;
  return;
}

} /* extern "C" */
