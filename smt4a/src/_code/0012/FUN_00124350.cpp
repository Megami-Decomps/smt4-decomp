/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124350` (_code @ 0x124350, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_idivmod(int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int isLeapYear(unsigned int, int);
/* Supplied declaration required: __aeabi_idivmod. */


int FUN_00124350(unsigned int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned long long temp_v4;
  
  temp_v0 = param_2 - 2000;
  if (param_3 < 3) {
    param_3 = param_3 + 9;
    temp_v0 = param_2 - 0x7d1;
  }
  else {
    param_3 = param_3 - 3;
  }
  temp_v2 = 1;
  if (temp_v0 < 0) {
    temp_v2 = isLeapYear(param_1,temp_v0);
  }
  temp_v4 = __aeabi_idivmod(temp_v0,100);
  temp_v3 = (int)((unsigned long long)temp_v4 >> 0x20) * 0x5b5;
  temp_v1 = (int)temp_v4 * 0x23ab1;
  temp_v0 = __aeabi_idivmod(param_3 * 0x99 + 2,5);
  return temp_v0 + ((int)(((unsigned int)(temp_v1 >> 0x1f) >> 0x1e) + temp_v1) >> 2) +
                 ((int)(((unsigned int)(temp_v3 >> 0x1f) >> 0x1e) + temp_v3) >> 2) + param_4 + temp_v2 + 0x3a;
}

} /* extern "C" */
