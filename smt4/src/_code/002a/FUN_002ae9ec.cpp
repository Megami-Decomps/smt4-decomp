/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae9ec` (_code @ 0x2ae9ec, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00144fa8(unsigned int, unsigned int, int *);

/* stack frame of param_6: 7 slot(s), 24 byte(s) */
typedef struct {
    unsigned short sp22; /* 0x22: local_22 */
    unsigned short sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} param_6_stack;

/* Supplied declaration required: FUN_00144fa8. */


void FUN_002ae9ec(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_4c;
  unsigned int temp_v1;
  unsigned int uStack_44;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned short temp_v5;
  unsigned short temp_v6;
  
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v1 = param_5;
  uStack_44 = param_6;
  temp_v5 = 1;
  temp_v6 = 1;
  temp_v0 = param_1;
  uStack_4c = param_4;
  FUN_00144fa8(param_2,param_3,&temp_v0);
  return;
}

} /* extern "C" */
