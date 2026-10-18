/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c0f00` (_code @ 0x1c0f00, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_0026f800. */


unsigned int FUN_001c0f00(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  romwright_code *pcVar2;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = *param_1;
  pcVar2 = *(romwright_code **)(temp_v2 + *(int *)(temp_v2 + 0x10c) * 4 + 0xb4);
  if (pcVar2 != (romwright_code *)0x0) {
    temp_v0 = (*pcVar2)(temp_v2);
    if (temp_v0 != 2) {
      if (temp_v0 == 1) {
        FUN_0026f800(*(unsigned int *)(temp_v2 + 4),0);
        *(unsigned char *)(temp_v2 + 0x125) = 1;
      }
    }
    else {
      temp_v0 = *(int *)(temp_v2 + 0x110);
      if (temp_v0 != -1) {
        temp_v1 = *(unsigned int *)(temp_v2 + 0x10c);
        *(int *)(temp_v2 + 0x10c) = temp_v0;
        *(unsigned int *)(temp_v2 + 0x108) = temp_v1;
        *(unsigned int *)(temp_v2 + 0x110) = 0xffffffff;
        if (temp_v0 == 8) {
          *(unsigned int *)(temp_v2 + 0x48) = 0;
          *(unsigned char *)(temp_v2 + 0x4c) = 0;
          *(unsigned int *)(temp_v2 + 0x5c) = 0;
          *(unsigned char *)(temp_v2 + 0x60) = 0;
          *(unsigned int *)(temp_v2 + 0x70) = 0;
          *(unsigned char *)(temp_v2 + 0x74) = 0;
          *(unsigned int *)(temp_v2 + 0x20) = 0;
          *(unsigned char *)(temp_v2 + 0x24) = 0;
          *(unsigned int *)(temp_v2 + 0x34) = 0;
          *(unsigned char *)(temp_v2 + 0x38) = 0;
        }
      }
    }
  }
  return 0;
}
