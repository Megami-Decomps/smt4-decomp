/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f9b54` (_code @ 0x4f9b54, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy_w(unsigned char [4], int, int);

/* stack frame of param_1: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned char sp8; /* 0x8: local_8 */
    unsigned int sp8C; /* 0x8c: local_8c */
} param_1_stack;

/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_004f9b54(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [4];
  int temp_v2;
  unsigned char temp_v3;
  
  rt_memcpy_w(temp_v1,param_1 + 0x3054,0x8c);
  if (((temp_v3 & 1) == 0) || (temp_v0 = 0, temp_v2 != 0)) {
    temp_v0 = 1;
  }
                    /* WARNING: Treating indirect jump as return */
  return temp_v0;
}

} /* extern "C" */
