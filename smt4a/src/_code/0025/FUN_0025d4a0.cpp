/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025d4a0` (_code @ 0x25d4a4, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int linkHolderApplyFlag(unsigned int, int);
int FUN_0037b7d8(void);
int FUN_003aedc8(unsigned int, int);
int FUN_003e54b8(unsigned int);

typedef int romwright_code(...);
/* Supplied declaration required: linkHolderApplyFlag. */
/* Supplied declaration required: FUN_0037b7d8. */
/* Supplied declaration required: FUN_003aedc8. */
/* Supplied declaration required: FUN_003e54b8. */


unsigned int FUN_0025d4a0(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  romwright_code *pcVar2;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = *param_1;
  pcVar2 = *(romwright_code **)(temp_v2 + *(int *)(temp_v2 + 0xf4) * 4 + 0x60);
  if (pcVar2 != (romwright_code *)0x0) {
    temp_v0 = (*pcVar2)(temp_v2);
    if (temp_v0 != 3) {
      if (temp_v0 == 1) {
        linkHolderApplyFlag(*(unsigned int *)(temp_v2 + 4),0);
        *(unsigned char *)(temp_v2 + 0x10f) = 1;
      }
    }
    else {
      temp_v0 = *(int *)(temp_v2 + 0xf8);
      if (temp_v0 != -1) {
        temp_v1 = *(unsigned int *)(temp_v2 + 0xf4);
        *(int *)(temp_v2 + 0xf4) = temp_v0;
        *(unsigned int *)(temp_v2 + 0xf0) = temp_v1;
        *(unsigned int *)(temp_v2 + 0xf8) = 0xffffffff;
        if (temp_v0 == 9) {
          *(unsigned int *)(temp_v2 + 0x1c) = 0;
          *(unsigned char *)(temp_v2 + 0x20) = 0;
          *(unsigned int *)(temp_v2 + 0x30) = 0;
          *(unsigned char *)(temp_v2 + 0x34) = 0;
        }
      }
      *(unsigned int *)(temp_v2 + 0x150) = 0;
    }
  }
  FUN_003aedc8(*(unsigned int *)(temp_v2 + 0xc),*(unsigned char *)(*(int *)(temp_v2 + 8) + 0x22));
  if (*(int *)(temp_v2 + 4) != 0) {
    FUN_0037b7d8();
    FUN_003e54b8(*(unsigned int *)(*(int *)(temp_v2 + 4) + 0x1c));
  }
  *(int *)(temp_v2 + 0x150) = *(int *)(temp_v2 + 0x150) + 1;
  return 0;
}

} /* extern "C" */
