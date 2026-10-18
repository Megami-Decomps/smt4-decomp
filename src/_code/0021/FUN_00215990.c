/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00215990` (_code @ 0x215990, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0044e190; /* 0x44e190 */

extern int FUN_0029af30(void);
/* Supplied declaration required: FUN_0029fae8. */
/* Supplied declaration required: FUN_002b8b78. */


void FUN_00215990(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_0044e190;
  if ((-1 < *(short *)(DAT_0044e190 + 0x47e)) && (*(char *)(DAT_0044e190 + 0x3fc) == '\x01')) {
    temp_v1 = FUN_0029af30();
    if ((temp_v1 == 0xd) || (temp_v1 == 6)) {
      temp_v2 = 0x2f;
    }
    else {
      temp_v2 = 0x1f;
    }
    FUN_002b8b78(temp_v2);
  }
  *(unsigned short *)(temp_v0 + 0x47e) = 0xffff;
  *(unsigned int *)(temp_v0 + 0x554) = *param_1;
  *(unsigned int *)(temp_v0 + 0x558) = param_1[1];
  *(unsigned int *)(temp_v0 + 0x55c) = param_1[2];
  *(unsigned short *)(temp_v0 + 0x560) = *(unsigned short *)(param_1 + 3);
  FUN_0029fae8(temp_v0 + 0x564,7,7,1,0,1);
  *(unsigned char *)(temp_v0 + 0x410) = 1;
  return;
}
