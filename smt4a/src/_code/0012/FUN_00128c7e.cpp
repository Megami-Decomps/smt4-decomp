/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128c7e` (_code @ 0x128c7e, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strAssign(unsigned int, int *, int, unsigned int);

/* stack frame of param_4: 8 slot(s), 8 byte(s) */
typedef struct {
    unsigned char sp11; /* 0x11: local_11 */
    unsigned char sp12; /* 0x12: local_12 */
    unsigned char sp13; /* 0x13: local_13 */
    unsigned char sp14; /* 0x14: local_14 */
    unsigned char sp15; /* 0x15: local_15 */
    unsigned char sp16; /* 0x16: local_16 */
    unsigned char sp17; /* 0x17: local_17 */
    unsigned char sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: strAssign. */


unsigned int FUN_00128c7e(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = param_3;
  temp_v1 = param_4;
  strAssign(*(unsigned int *)(param_1 + 8),&temp_v0,8,0xffffffff);
  return 1;
}

} /* extern "C" */
