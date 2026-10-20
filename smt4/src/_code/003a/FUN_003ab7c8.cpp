/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab7c8` (_code @ 0x3ab7c8, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00231240(int, unsigned int, unsigned int);
int FUN_002bf818(int);

/* Supplied declaration required: FUN_00231240. */
extern int FUN_00241a44(void);
extern int FUN_0026b564(void);
extern int FUN_00295618(void);
extern unsigned int FUN_002bed98(int);
extern unsigned int FUN_002beda4(int);
/* Supplied declaration required: FUN_002bf818. */


void FUN_003ab7c8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1 + 0x188;
  FUN_002bf818(temp_v2);
  temp_v0 = FUN_002bed98(temp_v2);
  temp_v1 = FUN_002beda4(temp_v2);
  FUN_00231240(param_1 + 200,temp_v1,temp_v0);
  if ((((*(char *)(param_1 + 0x212) != '\0') && (temp_v2 = FUN_0026b564(), temp_v2 != 0)) &&
      (temp_v2 = FUN_00241a44(), temp_v2 != 0)) && (temp_v2 = FUN_00295618(), temp_v2 != 0)) {
    *(unsigned int *)(param_1 + 0x14) = 0xb;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

} /* extern "C" */
