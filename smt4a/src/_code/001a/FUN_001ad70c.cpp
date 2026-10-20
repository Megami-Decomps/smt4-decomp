/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad70c` (_code @ 0x1ad70c, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e59f8(int, unsigned char [8], int);
int SBORROW4(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_002e59f8. */
extern int rt_memcmp(int, char *, unsigned int);


int FUN_001ad70c(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int unaff_r8;
  unsigned char temp_v3;
  unsigned char temp_v4 [8];
  int temp_v5;
  
  temp_v0 = rt_memcmp(param_1,"ATBC",4);
  if ((temp_v0 == 0) || (temp_v0 = rt_memcmp(param_1,"ABCH",4), temp_v0 == 0)) {
    temp_v2 = *(int *)(param_1 + 8);
    temp_v3 = temp_v2 == 0;
    temp_v0 = temp_v2;
    if (0 < temp_v2) {
      temp_v0 = temp_v2 - param_2;
      temp_v3 = temp_v2 == param_2;
    }
    if (!temp_v3 && temp_v0 < 0 == (0 < temp_v2 && SBORROW4(temp_v2,param_2))) {
      temp_v0 = 0;
      param_1 = param_1 + *(int *)(param_1 + 0x10);
      do {
        temp_v1 = rt_memcmp(param_1,"EPLSIGN",7);
        if (temp_v1 != 0) {
          return unaff_r8;
        }
        FUN_002e59f8(param_1,temp_v4,0x10);
        unaff_r8 = param_1 + 0x10;
        if (param_2 == temp_v0) {
          return unaff_r8;
        }
        temp_v0 = temp_v0 + 1;
        param_1 = param_1 + temp_v5;
      } while (temp_v2 != 0);
    }
  }
  return unaff_r8;
}

} /* extern "C" */
