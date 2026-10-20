/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9d98` (_code @ 0x2e9d98, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f8554(unsigned int);
int FUN_0030f5c4(unsigned int);

extern unsigned char DAT_00594958; /* 0x594958 */

extern unsigned int FUN_002eb56c(void);
/* Supplied declaration required: FUN_002f8554. */
/* Supplied declaration required: FUN_0030f5c4. */
extern unsigned int FUN_0030f61c(void);
extern int FUN_0030f798(unsigned int);


void FUN_002e9d98(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  if ((*(signed char *)((unsigned char *)&DAT_00594958 + 0x15)) != '\0') {
    temp_v0 = FUN_002eb56c();
    temp_v1 = FUN_0030f61c();
    for (temp_v3 = 0; temp_v3 <= temp_v1; temp_v3 = temp_v3 + 1) {
      temp_v2 = FUN_0030f798(temp_v3);
      if (temp_v2 != 0) {
        FUN_002f8554(temp_v3);
        FUN_0030f5c4(param_1);
      }
    }
    FUN_002f8554(temp_v0);
    return;
  }
  FUN_0030f5c4(param_1);
  return;
}

} /* extern "C" */
