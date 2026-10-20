/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dbeb8` (_code @ 0x1dbeb8, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026b9bc(void);
int FUN_0028a368(int);
int FUN_0028a924(int, int, unsigned int);
int FUN_002b8838(int);
int FUN_002d67fc(int);
int campCecEditDestroy(void);

extern int campCecEditExists(void);
extern int campCecEditGetFlag125(void);
/* Supplied declaration required: FUN_0026b9bc. */
/* Supplied declaration required: FUN_0028a368. */
/* Supplied declaration required: FUN_0028a924. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002d67fc. */
/* Supplied declaration required: campCecEditDestroy. */


unsigned int FUN_001dbeb8(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = campCecEditExists();
  if (temp_v0 != 0) {
    temp_v0 = campCecEditGetFlag125();
    if (temp_v0 != 0) {
      campCecEditDestroy();
      FUN_002b8838(3);
      *(unsigned int *)(param_1 + 0xd2c) = 6;
      *(unsigned int *)(param_1 + 0xd34) = 0;
      FUN_0026b9bc();
      FUN_0028a924(1,0,0xffffffff);
      FUN_0028a368(1);
      temp_v1 = 2;
    }
  }
  else {
    FUN_002d67fc(0);
  }
  return temp_v1;
}

} /* extern "C" */
