/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b470` (_code @ 0x38b470, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_00123858. */
extern int FUN_002a1578(int *);
/* Supplied declaration required: FUN_002bad44. */
/* Supplied declaration required: FUN_002bb09c. */
/* Supplied declaration required: FUN_002c583c. */
/* Supplied declaration required: FUN_00353d10. */


void FUN_0038b470(int *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int iStack_2c;
  unsigned int uStack_28;
  int temp_v2;
  int iStack_1c;
  int temp_v3;
  int iStack_14;
  
  FUN_00123858();
  FUN_002bb09c(&temp_v2);
  iStack_2c = param_2 + 0x18;
  temp_v1 = param_2 + 4;
  uStack_28 = 1;
  FUN_00353d10(&temp_v3,param_2 + 0x7c,param_2 + 0x80,param_2 + 0x10);
  temp_v2 = temp_v3;
  iStack_1c = iStack_14;
  temp_v0 = FUN_002a1578(&temp_v2);
  if (-1 < temp_v0) {
    FUN_002bad44(&temp_v1,param_2 + 0x84,*(unsigned int *)(param_2 + 0x80));
    temp_v2 = temp_v1;
    iStack_1c = iStack_2c;
    temp_v0 = FUN_002a1578(&temp_v2);
    if (-1 < temp_v0) {
      *param_1 = temp_v2;
      param_1[1] = iStack_1c;
      return;
    }
  }
  FUN_002c583c(0);
  *param_1 = temp_v2;
  param_1[1] = iStack_1c;
  return;
}
