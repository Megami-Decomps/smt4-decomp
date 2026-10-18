/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353acc` (_code @ 0x353acc, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern int DAT_004e64c0; /* 0x4e64c0 */
extern unsigned int DAT_004e64c4; /* 0x4e64c4 */
extern unsigned int DAT_004e64c8; /* 0x4e64c8 */


unsigned int FUN_00353acc(int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  if ((param_4 == *param_1) && (param_4 != 0)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 0xd8a138c1;
  }
  if (-1 < (int)temp_v0) {
    if (DAT_004e64c8 >= DAT_004e64c4) {
      temp_v0 = 0xe0613881;
    }
    else {
      puVar2 = (unsigned int *)(DAT_004e64c0 + DAT_004e64c8 * 8);
      *puVar2 = param_2;
      puVar2[1] = param_3;
      DAT_004e64c8 = DAT_004e64c8 + 1;
      temp_v0 = 0;
    }
    if ((temp_v0 & 0x80000000) == 0) {
      temp_v0 = 0;
    }
    else {
      *param_1 = 0;
    }
  }
  return temp_v0;
}
