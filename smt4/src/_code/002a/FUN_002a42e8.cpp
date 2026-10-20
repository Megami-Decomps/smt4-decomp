/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a42e8` (_code @ 0x2a42e8, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a8554(unsigned int, int *, int, int, int, int);
int hasExclusiveAccess(int *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int DAT_00471b58; /* 0x471b58 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_002a8554. */


int FUN_002a42e8(int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  
  do {
    temp_v2 = *param_1;
    temp_v1 = (int)*(short *)((int)param_1 + 6);
    if (temp_v2 <= *(short *)((int)param_1 + 6) - param_2) {
      temp_v1 = temp_v2 + param_2;
    }
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
  } while (!temp_v0);
  *param_1 = temp_v1;
  if ((temp_v2 < 1) || (0 < (short)param_1[1])) {
    FUN_002a8554(DAT_00471b58,param_1,0,param_2,0,0);
  }
  return temp_v2;
}

} /* extern "C" */
