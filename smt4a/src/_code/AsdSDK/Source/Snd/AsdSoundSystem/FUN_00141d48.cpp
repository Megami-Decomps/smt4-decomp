/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141d48` (_code @ 0x141d48, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern int *DAT_0063e944; /* 0x63e944 */
extern int DAT_0063e948; /* 0x63e948 */


unsigned char FUN_00141d48(int param_1)

{
  int *piVar1;
  int temp_v0;
  
  temp_v0 = 0;
  piVar1 = DAT_0063e944;
  if (0 < DAT_0063e948) {
    while (piVar1 != (int *)0x0) {
      if (piVar1[6] == param_1) {
        if (*piVar1 == 0) {
          return 0;
        }
        return (char)piVar1[3];
      }
      piVar1 = (int *)piVar1[5];
      temp_v0 = temp_v0 + 1;
      if (DAT_0063e948 <= temp_v0) {
        return 0;
      }
    }
  }
  return 0;
}

} /* extern "C" */
