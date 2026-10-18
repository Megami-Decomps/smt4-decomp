/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043d588` (_code @ 0x43d588, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int FUN_00300c20(void);
/* Supplied declaration required: FUN_0043e7a4. */


/* WARNING: Type propagation algorithm not settling */

void FUN_0043d588(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2 [3];
  
  temp_v2[1] = 0xc;
  piVar1 = temp_v2;
  temp_v2[0] = 0;
  FUN_0043e7a4(piVar1,0xfffe,0x4003,&temp_v0,temp_v2 + 1);
  if ((int)piVar1 < 0) {
    temp_v2[0] = FUN_00300c20();
  }
  if (-1 < temp_v2[0]) {
    if (param_1 != (unsigned int *)0x0) {
      *param_1 = temp_v0;
    }
    if (param_2 != (unsigned int *)0x0) {
      *param_2 = temp_v1;
    }
  }
  return;
}
