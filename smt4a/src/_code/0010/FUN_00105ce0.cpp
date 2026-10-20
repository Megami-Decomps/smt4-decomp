/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105ce0` (_code @ 0x105ce0, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineTimeGetNow(int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_005588c8; /* 0x5588c8 */

/* Supplied declaration required: onlineTimeGetNow. */


unsigned int *
FUN_00105ce0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_14;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (unsigned int)&DAT_005588c8;
  *(unsigned char *)(param_1 + 3) = 0;
  *(unsigned char *)((int)param_1 + 0xd) = 0;
  *(unsigned char *)((int)param_1 + 0xe) = 0;
  *(unsigned char *)((int)param_1 + 0xf) = 0;
  *(unsigned char *)(param_1 + 4) = 0;
  *(unsigned char *)((int)param_1 + 0x11) = 0;
  *(unsigned char *)((int)param_1 + 0x12) = 0;
  *(unsigned char *)((int)param_1 + 0x13) = 0;
  *(unsigned char *)(param_1 + 5) = 0;
  *(unsigned char *)((int)param_1 + 0x15) = 0;
  temp_v0 = param_3;
  uStack_14 = param_4;
  onlineTimeGetNow(&temp_v0);
  param_1[6] = 0;
  param_1[7] = temp_v0;
  return param_1;
}

} /* extern "C" */
