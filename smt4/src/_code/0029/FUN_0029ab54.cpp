/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029ab54` (_code @ 0x29ab54, 0x11c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bf288(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int g_statusDown; /* 0x44e190 */

extern int FUN_00288498(void);
/* Supplied declaration required: FUN_002bf288. */


void FUN_0029ab54(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = g_statusDown;
  temp_v0 = FUN_00288498();
  if (temp_v0 != 0) {
    temp_v0 = *(int *)(temp_v1 + 0x424);
    if (!(temp_v0 == 1 || temp_v0 == 2)) {
      FUN_002bf288(2,0x1a,0x4d3,param_1,param_2,0xba);
      FUN_002bf288(2,0x1a,0x4d7,param_1,param_2,0xba);
    }
    else {
      FUN_002bf288(2,0x1a,0x4d5,param_1,param_2,0xba);
      FUN_002bf288(2,0x1a,0x4d9,param_1,param_2,0xba);
    }
    temp_v1 = *(int *)(temp_v1 + 0x428);
    if (temp_v1 == 1 || temp_v1 == 2) {
      FUN_002bf288(2,0x1a,0x4d4,param_1,param_2,0xba);
      FUN_002bf288(2,0x1a,0x4d8,param_1,param_2,0xba);
      return;
    }
    FUN_002bf288(2,0x1a,0x4d2,param_1,param_2,0xba);
    FUN_002bf288(2,0x1a,0x4d6,param_1,param_2,0xba);
  }
  return;
}

} /* extern "C" */
