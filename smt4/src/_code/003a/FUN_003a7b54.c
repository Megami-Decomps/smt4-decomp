/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7b54` (_code @ 0x3a7b54, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0022ddd0(int);
/* Supplied declaration required: FUN_00231240. */
extern int FUN_0026b564(void);
extern int FUN_00295618(void);
/* Supplied declaration required: FUN_0029c4c8. */
/* Supplied declaration required: FUN_0029e874. */
extern unsigned int FUN_002bed98(int);
extern unsigned int FUN_002beda4(int);
/* Supplied declaration required: FUN_002bf818. */


void FUN_003a7b54(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1 + 0x188;
  FUN_002bf818(temp_v2);
  temp_v0 = FUN_002bed98(temp_v2);
  temp_v1 = FUN_002beda4(temp_v2);
  FUN_00231240(param_1 + 200,temp_v1,temp_v0);
  temp_v2 = FUN_00295618();
  if ((((temp_v2 != 0) && (*(char *)(param_1 + 0x212) != '\0')) &&
      (temp_v2 = FUN_0026b564(), temp_v2 != 0)) && (temp_v2 = FUN_0022ddd0(param_1 + 0x96), temp_v2 == 0)) {
    FUN_0029e874(0);
    FUN_0029c4c8(0);
    *(unsigned int *)(param_1 + 0x14) = 0xc;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}
