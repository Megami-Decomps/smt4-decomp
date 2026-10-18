/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a06dc` (_code @ 0x2a06dc, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char LAB_0015555c; /* 0x15555c */

/* Supplied declaration required: FUN_00244f04. */
/* Supplied declaration required: FUN_00244f20. */
extern unsigned int FUN_002a3494(int);
/* Supplied declaration required: FUN_002c028c. */
/* Supplied declaration required: FUN_002cba48. */


void FUN_002a06dc(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002a3494(param_2);
  FUN_002cba48(*(unsigned int *)(param_1 + 8),param_2);
  if (param_2 == 0) {
    FUN_002c028c(temp_v0,*(unsigned int *)(param_1 + 0xc));
    FUN_00244f20(1);
    temp_v1 = *(int *)(param_1 + 4);
    if (temp_v1 != 0) {
      *(unsigned char *)(temp_v1 + 0x58) = 1;
      *(unsigned char **)(temp_v1 + 0x4c) = &LAB_0015555c;
    }
    FUN_00244f04(0);
    return;
  }
  if (param_2 == 1) {
    FUN_002c028c(temp_v0,*(unsigned int *)(param_1 + 0xc));
    FUN_00244f20(2);
    temp_v1 = *(int *)(param_1 + 4);
    if (temp_v1 != 0) {
      *(unsigned char *)(temp_v1 + 0x58) = 1;
      *(unsigned char **)(temp_v1 + 0x4c) = &LAB_0015555c;
    }
    FUN_00244f04(1);
    return;
  }
  return;
}
