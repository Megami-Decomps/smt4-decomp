/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002240b4` (_code @ 0x2240b4, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002a0d0c(void);


unsigned char FUN_002240b4(unsigned int param_1)

{
/* irregular: 2 unstructured edge(s) */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  
  temp_v2 = FUN_002a0d0c();
  switch(param_1) {
  default:
    temp_v1 = 0;
    return temp_v1;
  case 6:
    temp_v0 = *(char *)(temp_v2 + 0x2f);
    break;
  case 7:
    temp_v0 = *(char *)(temp_v2 + 0x30);
    break;
  case 8:
    temp_v0 = *(char *)(temp_v2 + 0x33);
    if (temp_v0 != '\x01') {
      temp_v1 = 0;
      return temp_v1;
    }
    return 1;
  case 9:
    temp_v0 = *(char *)(temp_v2 + 0x32);
    if (temp_v0 != '\x01') {
      temp_v1 = 0;
      return temp_v1;
    }
    return 1;
  }
  temp_v1 = 1;
  if (temp_v0 != '\x01') {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
