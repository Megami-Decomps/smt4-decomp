/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002469d0` (_code @ 0x2469d0, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int DAT_00581280; /* 0x581280 */

/* Supplied declaration required: FUN_002947b8. */
/* Supplied declaration required: FUN_002b563c. */
extern int FUN_0036d578(unsigned int *);


unsigned int FUN_002469d0(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  temp_v2 = 0;
  temp_v1 = 0;
  do {
    temp_v0 = DAT_00581280 + temp_v1 * 0x3c;
    if (*(char *)(temp_v0 + 0xc) != '\0') {
      if (*(int *)(temp_v0 + 0x3c) != 0) {
        temp_v0 = FUN_0036d578((unsigned int *)&temp_v3);
      }
      else {
        temp_v0 = FUN_0036d578((unsigned int *)&temp_v3);
      }
      if (temp_v0 != 0) {
        temp_v2 = 1;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x40);
  FUN_002947b8(&temp_v3);
  FUN_002b563c(&temp_v3);
  *param_1 = temp_v3;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  return temp_v2;
}
