/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002758b0` (_code @ 0x2758b0, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00487110(int);
int FUN_0048a378(int);
int FUN_004cf978(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_00487110. */
/* Supplied declaration required: FUN_0048a378. */
/* Supplied declaration required: FUN_004cf978. */


void FUN_002758b0(int param_1,char param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00587f28;
  if (DAT_00587f28 != 0) {
    FUN_004cf978(DAT_00587f28 + 0x206bc,(int)param_2);
    FUN_00487110(temp_v0 + 0x68);
    if (param_1 != 0) {
      FUN_0048a378(temp_v0 + 0x68);
      return;
    }
  }
  return;
}

} /* extern "C" */
