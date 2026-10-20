/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00480968` (_code @ 0x480968, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0048026c(unsigned int, short [4]);

/* stack frame of param_1: 4 slot(s), 8 byte(s) */
typedef struct {
    unsigned short spC; /* 0xc: local_c */
    unsigned short spE; /* 0xe: local_e */
    unsigned short sp10; /* 0x10: local_10 */
    unsigned short sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_0019c06c(unsigned int);
/* Supplied declaration required: FUN_0048026c. */


unsigned int FUN_00480968(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  short temp_v2 [4];
  short temp_v3;
  short temp_v4;
  short temp_v5;
  
  FUN_0048026c(param_1,temp_v2);
  temp_v1 = FUN_0019c06c(param_1);
  if (temp_v1 == 0) {
    return 0;
  }
  temp_v0 = *(char *)(temp_v1 + 8);
  if (temp_v0 != '\x04') {
    if (temp_v0 == '\x05') {
      if (0 < temp_v2[0]) {
        return 1;
      }
      return 0;
    }
    if (temp_v0 != '\x06') {
      return 0;
    }
    if (temp_v2[0] < 1) {
      temp_v2[0] = temp_v4;
    }
  }
  else {
    if (temp_v2[0] < 1) {
      temp_v2[0] = temp_v3;
    }
    if (temp_v2[0] < 1) {
      temp_v2[0] = temp_v5;
    }
  }
  if (0 < temp_v2[0]) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
