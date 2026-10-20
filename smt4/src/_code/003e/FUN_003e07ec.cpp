/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e07ec` (_code @ 0x3e07ec, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4938(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_002c4938. */


unsigned int FUN_003e07ec(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  FUN_002c4938(param_2,0x60);
  temp_v0 = (**(romwright_code **)(*param_1 + 0x34))(param_1,param_2,0x60,&temp_v1,param_3,2,0x12);
  if (((temp_v0 & 0x3ff) != 0x3f7) && (temp_v1 == 0)) {
    temp_v0 = 0xc8810bef;
  }
  return temp_v0;
}

} /* extern "C" */
