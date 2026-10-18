/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042b654` (_code @ 0x42b654, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_0042bec0. */
extern unsigned int FUN_00500924(void);


void FUN_0042b654(int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v2 = param_2[2];
  if (temp_v2 < 0x201) {
    temp_v3 = *param_2;
    temp_v4 = param_2[1];
    temp_v0 = *(unsigned int *)(param_1 + 8);
    temp_v1 = *(unsigned int *)(param_1 + 0xc);
    temp_v5 = FUN_00500924();
    FUN_0042bec0(&temp_v5,0,temp_v0,temp_v1,temp_v3,temp_v4,temp_v2,0);
  }
  return;
}
