/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043e7a4` (_code @ 0x43e7a4, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;

extern signed char DAT_005c0b00; /* 0x5c0b00 */
extern unsigned int DAT_005c0b04; /* 0x5c0b04 */

extern int FUN_00440500(unsigned int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


int FUN_0043e7a4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5)

{
  int temp_v0;
  int temp_v1;
  
  if (DAT_005c0b00 == '\0') {
    temp_v0 = -0x375f8c08;
  }
  else {
    temp_v1 = DAT_005c0b04;
    temp_v0 = FUN_00440500((unsigned int *)&temp_v1,param_1,param_2,param_3,param_4,param_5);
    if (-1 < temp_v0) {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
