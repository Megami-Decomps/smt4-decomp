/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4ee4` (_code @ 0x2b4ee4, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002b4f64. */
extern int FUN_002baed8(void);


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b4ee4(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002baed8();
  temp_v1 = temp_v0;
  FUN_002b4f64(temp_v0,6);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 10;
  temp_v2 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
  *(unsigned int *)(temp_v1 + 0x10) = temp_v2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
