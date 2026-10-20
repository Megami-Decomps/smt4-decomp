/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003588fc` (_code @ 0x3588fc, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e0874(void);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern signed char DAT_004656d2; /* 0x4656d2 */

/* Supplied declaration required: FUN_003e0874. */


void FUN_003588fc(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  char temp_v1 [8];
  
  temp_v0 = (**(romwright_code **)(*param_1 + 0x2c))(param_1,temp_v1,1,2,0,0);
  if ((((-1 < temp_v0) && (temp_v1[0] != '\0')) &&
      (temp_v0 = (**(romwright_code **)(*param_1 + 0x2c))(param_1,temp_v1,1,3,0,0), -1 < temp_v0)) &&
     ((temp_v1[0] == '\0' && (DAT_004656d2 == '\0')))) {
    FUN_003e0874();
    DAT_004656d2 = (char)((int)param_1 >> 0x1f) + '\x01';
  }
  return;
}

} /* extern "C" */
