/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022fb78` (_code @ 0x22fb78, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: FUN_001835b4. */
extern int FUN_00230544(void);


void FUN_0022fb78(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = DAT_00588fe8;
  temp_v0 = FUN_00230544();
  if (temp_v0 != 0) {
    temp_v0 = *(int *)(temp_v1 + 0x53c);
    if (!(temp_v0 == 1 || temp_v0 == 2)) {
      FUN_001835b4(2,0x12,0x4d3,param_1,param_2,0xba);
      FUN_001835b4(2,0x12,0x4d7,param_1,param_2,0xba);
    }
    else {
      FUN_001835b4(2,0x12,0x4d5,param_1,param_2,0xba);
      FUN_001835b4(2,0x12,0x4d9,param_1,param_2,0xba);
    }
    temp_v1 = *(int *)(temp_v1 + 0x540);
    if (temp_v1 == 1 || temp_v1 == 2) {
      FUN_001835b4(2,0x12,0x4d4,param_1,param_2,0xba);
      FUN_001835b4(2,0x12,0x4d8,param_1,param_2,0xba);
      return;
    }
    FUN_001835b4(2,0x12,0x4d2,param_1,param_2,0xba);
    FUN_001835b4(2,0x12,0x4d6,param_1,param_2,0xba);
  }
  return;
}
