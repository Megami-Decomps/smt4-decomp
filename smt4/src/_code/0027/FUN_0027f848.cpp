/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027f848` (_code @ 0x27f848, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001e2a40(int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int DAT_00447e58; /* 0x447e58 */

/* Supplied declaration required: FUN_001e2a40. */
extern int FUN_00280a58(unsigned int *);


unsigned int FUN_0027f848(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  temp_v2 = 0;
  temp_v1 = 0;
  do {
    temp_v0 = DAT_00447e58 + temp_v1 * 0x38;
    if (*(char *)(temp_v0 + 0xc) != '\0') {
      if (*(int *)(temp_v0 + 0x38) != 0) {
        temp_v0 = FUN_00280a58((unsigned int *)&temp_v3);
      }
      else {
        temp_v0 = FUN_00280a58((unsigned int *)&temp_v3);
      }
      if (temp_v0 != 0) {
        temp_v2 = 1;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x40);
  FUN_001e2a40(&temp_v3);
  *param_1 = temp_v3;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  return temp_v2;
}

} /* extern "C" */
