/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00299410` (_code @ 0x299410, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int DAT_0043da90; /* 0x43da90 */

extern int FUN_0029d8e4(unsigned int);
/* Supplied declaration required: FUN_002b9008. */


void FUN_00299410(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0043da90;
  FUN_002b9008();
  FUN_002b9008();
  FUN_002b9008();
  *(unsigned short *)(temp_v0 + 0xe02) = 0xffff;
  *(unsigned short *)(temp_v0 + 0xe04) = 0xffff;
  *(unsigned short *)(temp_v0 + 0xe06) = 0xffff;
  *(unsigned short *)(temp_v0 + 0xe08) = 0xffff;
  *(unsigned short *)(temp_v0 + 0xe0a) = 0xffff;
  temp_v2 = 0;
  temp_v1 = FUN_0029d8e4(param_1);
  if (0 < temp_v1) {
    do {
      temp_v1 = temp_v0 + temp_v2 * 2;
      if (-1 < *(short *)(temp_v1 + 0xe0c)) {
        FUN_002b9008();
        *(unsigned short *)(temp_v1 + 0xe0c) = 0xffff;
      }
      temp_v2 = temp_v2 + 1;
      temp_v1 = FUN_0029d8e4(param_1);
    } while (temp_v2 < temp_v1);
  }
  if (param_2 == 0) {
    FUN_002b9008();
    FUN_002b9008();
    return;
  }
  return;
}
