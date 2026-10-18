/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3310` (_code @ 0x1d3310, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_9: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
} param_9_stack;

extern int FUN_001aeefc(unsigned int, int *);
/* Supplied declaration required: FUN_001c5be4. */


/* WARNING: Removing unreachable block (ram,0x001d3370) */

void FUN_001d3310(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
                 ,unsigned int param_6,unsigned int param_7,unsigned int param_8,unsigned int param_9)

{
/* irregular: 2 native warning(s); review required */
  int **ppiVar1;
  int temp_v0;
  int *temp_v1;
  unsigned int temp_v2 [4];
  
  temp_v2[0] = param_3 | ((param_2 & 0xff0fffff) << 8);
  temp_v2[1] = 0x4008c;
  temp_v2[2] = 1;
  ppiVar1 = &temp_v1;
  temp_v2[3] = param_4;
  FUN_001c5be4(ppiVar1,temp_v2,param_5,param_6,param_7,param_8,param_9);
  if ((-1 < (int)ppiVar1) && (temp_v0 = FUN_001aeefc(param_1,temp_v1), temp_v0 < 0)) {
    (**(romwright_code **)(*temp_v1 + 0x30))();
  }
  return;
}
