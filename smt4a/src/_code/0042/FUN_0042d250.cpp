/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042d250` (_code @ 0x42d250, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fb0d4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_7: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_7_stack;

extern int *DAT_005894d0; /* 0x5894d0 */

/* Supplied declaration required: FUN_002fb0d4. */


unsigned int FUN_0042d250(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = (**(romwright_code **)(*DAT_005894d0 + 8))(DAT_005894d0,param_5);
  temp_v1 = param_1;
  FUN_002fb0d4(param_1,param_2,param_3,param_4,temp_v0,param_6,param_7,1);
  if ((temp_v1 & 0x80000000) == 0) {
    temp_v1 = 0;
    *(unsigned char *)(param_1 + 5) = 1;
  }
  else {
    (**(romwright_code **)(*DAT_005894d0 + 0xc))(DAT_005894d0,temp_v0,1);
  }
  return temp_v1;
}

} /* extern "C" */
