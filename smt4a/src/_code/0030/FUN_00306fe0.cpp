/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00306fe0` (_code @ 0x306fe0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int aeabi_uidivmod(void);


int FUN_00306fe0(unsigned int param_1,int param_2,int param_3)

{
  int temp_v0;
  int *piVar2;
  int temp_v1 [2];
  unsigned int uStack_10;
  int iStack_c;
  int temp_v2 [2];
  
  piVar2 = temp_v1;
  if (param_2 != 0) {
    uStack_10 = param_1;
    iStack_c = param_2;
    temp_v2[0] = param_3;
    temp_v0 = aeabi_uidivmod();
    temp_v1[0] = temp_v0 * 1000;
    if (temp_v0 * 1000 < temp_v2[0]) {
      piVar2 = temp_v2;
    }
    temp_v0 = *piVar2;
  }
  else {
    temp_v0 = 0x7fffffff;
  }
  return temp_v0;
}

} /* extern "C" */
