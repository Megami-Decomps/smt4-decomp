/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00429f74` (_code @ 0x429f74, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c5be4(unsigned int *, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_10: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} param_10_stack;

/* Supplied declaration required: FUN_001c5be4. */


void FUN_00429f74(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
                 unsigned int param_9,unsigned int param_10)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int uStack_24;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = param_5;
  puVar1 = (unsigned int *)&temp_v0;
  temp_v1 = param_3;
  uStack_24 = param_4;
  temp_v2 = param_2;
  FUN_001c5be4(puVar1,&temp_v1,param_6,param_7,param_8,param_9,param_10);
  if (-1 < (int)puVar1) {
    *param_1 = temp_v0;
    param_1[1] = 0xffffffff;
  }
  return;
}

} /* extern "C" */
