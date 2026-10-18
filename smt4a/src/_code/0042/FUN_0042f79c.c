/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042f79c` (_code @ 0x42f79c, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern signed char DAT_005b448d; /* 0x5b448d */

/* Supplied declaration required: FUN_00501c20. */


void FUN_0042f79c(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  char temp_v1 [8];
  
  temp_v0 = (**(romwright_code **)(*param_1 + 0x2c))(param_1,temp_v1,1,2,0,0);
  if ((((-1 < temp_v0) && (temp_v1[0] != '\0')) &&
      (temp_v0 = (**(romwright_code **)(*param_1 + 0x2c))(param_1,temp_v1,1,3,0,0), -1 < temp_v0)) &&
     ((temp_v1[0] == '\0' && (DAT_005b448d == '\0')))) {
    FUN_00501c20();
    DAT_005b448d = (char)((int)param_1 >> 0x1f) + '\x01';
  }
  return;
}
