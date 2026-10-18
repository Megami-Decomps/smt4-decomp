/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a95b4` (_code @ 0x3a95b4, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0022df64(int);
/* Supplied declaration required: FUN_002313d4. */
extern int FUN_0026b7cc(void);
extern int FUN_002958bc(void);
/* Supplied declaration required: FUN_0029eb14. */
extern unsigned int FUN_002bef70(int);
extern unsigned int FUN_002bef7c(int);
/* Supplied declaration required: FUN_002bf9f0. */


void FUN_003a95b4(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002958bc();
  if (temp_v0 != 0) {
    FUN_0029eb14(0);
  }
  temp_v0 = param_1 + 0x188;
  FUN_002bf9f0(temp_v0);
  temp_v1 = FUN_002bef70(temp_v0);
  temp_v2 = FUN_002bef7c(temp_v0);
  FUN_002313d4(param_1 + 200,temp_v2,temp_v1);
  temp_v0 = FUN_002958bc();
  if ((((temp_v0 != 0) && (*(char *)(param_1 + 0x212) != '\0')) &&
      (temp_v0 = FUN_0026b7cc(), temp_v0 != 0)) && (temp_v0 = FUN_0022df64(param_1 + 0x96), temp_v0 == 0)) {
    *(unsigned int *)(param_1 + 0x14) = 7;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}
