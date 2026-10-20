/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00220438` (_code @ 0x220438, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00254884(int, unsigned char [496], int);
int FUN_002a84e8(unsigned char [496]);
int FUN_002ad888(void);
int FUN_002c3510(void);

/* Supplied declaration required: FUN_00254884. */
/* Supplied declaration required: FUN_002a84e8. */
/* Supplied declaration required: FUN_002ad888. */
/* Supplied declaration required: FUN_002c3510. */


unsigned char * FUN_00220438(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char temp_v0 [496];
  
  puVar1 = temp_v0;
  FUN_00254884(param_1,temp_v0,1);
  if (param_1 != 0) {
    FUN_002ad888();
    FUN_002a84e8(temp_v0);
    FUN_002c3510();
    return puVar1;
  }
  FUN_002c3510();
  return (unsigned char *)0xe0e046bc;
}

} /* extern "C" */
