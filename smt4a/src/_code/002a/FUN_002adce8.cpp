/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002adce8` (_code @ 0x2adce8, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001641c4(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: FUN_001641c4. */
extern int FUN_00348ed0(unsigned int);


void FUN_002adce8(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0057f108;
  FUN_001641c4();
  FUN_001641c4();
  FUN_001641c4();
  *(unsigned short *)(temp_v0 + 0x1b34) = 0xffff;
  *(unsigned short *)(temp_v0 + 0x1b36) = 0xffff;
  *(unsigned short *)(temp_v0 + 0x1b38) = 0xffff;
  *(unsigned short *)(temp_v0 + 0x1b3a) = 0xffff;
  *(unsigned short *)(temp_v0 + 0x1b3c) = 0xffff;
  temp_v2 = 0;
  temp_v1 = FUN_00348ed0(param_1);
  if (0 < temp_v1) {
    do {
      temp_v1 = temp_v0 + temp_v2 * 2;
      if (-1 < *(short *)(temp_v1 + 0x1b3e)) {
        FUN_001641c4();
        *(unsigned short *)(temp_v1 + 0x1b3e) = 0xffff;
      }
      temp_v2 = temp_v2 + 1;
      temp_v1 = FUN_00348ed0(param_1);
    } while (temp_v2 < temp_v1);
  }
  if (param_2 == 0) {
    FUN_001641c4();
    FUN_001641c4();
    return;
  }
  return;
}

} /* extern "C" */
