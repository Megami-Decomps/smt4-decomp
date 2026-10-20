/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e3ef4` (_code @ 0x2e3ef4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00101518(unsigned int *, int, int);
int FUN_002e40ec(void);

extern unsigned char DAT_0064c010; /* 0x64c010 */

/* Supplied declaration required: FUN_00101518. */
extern int FUN_002e3390(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e40ec. */


unsigned int * FUN_002e3ef4(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002e3390(param_2,param_3);
  if (temp_v0 != 0) {
    puVar2 = param_1;
    FUN_00101518(param_1,0,temp_v0);
  }
  else {
    puVar2 = (unsigned int *)&DAT_0064c010;
  }
  *param_1 = (unsigned int)puVar2;
  FUN_002e40ec();
  return param_1;
}

} /* extern "C" */
