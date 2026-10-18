/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c288` (_code @ 0x10c288, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_8_stack;

/* Supplied declaration required: FUN_002f5d38. */
extern int FUN_002f5f70(unsigned int, int);


unsigned char FUN_0010c288(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *(unsigned short *)(param_2 + 0x3c) = *(unsigned short *)(param_2 + 0x3c) | 0x80;
  temp_v1 = param_2;
  temp_v0 = FUN_002f5f70(param_1,param_2);
  if (temp_v0 != 0) {
    FUN_002f5d38(param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_1,temp_v1);
  }
  return temp_v0 != 0;
}
