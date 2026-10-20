/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00393980` (_code @ 0x393980, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b2d74(unsigned int, unsigned int, int);
int FUN_002b2f08(void);
int FUN_0038439c(void);
int FUN_003a1ef4(void);

/* Supplied declaration required: FUN_002b2d74. */
/* Supplied declaration required: FUN_002b2f08. */
extern int FUN_002b41c4(void);
/* Supplied declaration required: FUN_0038439c. */
/* Supplied declaration required: FUN_003a1ef4. */


unsigned int * FUN_00393980(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002b41c4();
  puVar2 = (unsigned int *)(temp_v0 + 0x1c);
  FUN_003a1ef4();
  FUN_0038439c();
  temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 0xc);
  if (puVar2[0xc] != 0) {
    FUN_002b2f08();
  }
  FUN_002b2d74(temp_v1,*puVar2,temp_v0 + 0x1c);
  puVar2[0xc] = temp_v1;
  return puVar2;
}

} /* extern "C" */
