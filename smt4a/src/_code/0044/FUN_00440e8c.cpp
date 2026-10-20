/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00440e8c` (_code @ 0x440e8c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern signed char DAT_005c0b00; /* 0x5c0b00 */
extern unsigned int DAT_005c0b04; /* 0x5c0b04 */

extern int FUN_004407c8(unsigned int *, unsigned int, unsigned int, unsigned int, unsigned int);


int FUN_00440e8c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int temp_v0;
  int temp_v1;
  
  if (DAT_005c0b00 == '\0') {
    temp_v0 = -0x375f8c08;
  }
  else {
    temp_v1 = DAT_005c0b04;
    temp_v0 = FUN_004407c8((unsigned int *)&temp_v1,param_1,param_2,param_3,param_4);
    if (-1 < temp_v0) {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
