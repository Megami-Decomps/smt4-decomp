#include "romwright_types.h"

extern "C" {

int sysPlaySe(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: sysPlaySe. */
extern int FUN_0018719c(unsigned int);


void FUN_002f7bc4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (param_1 == 0x13 || param_1 == 0x48) {
    temp_v0 = FUN_0018719c(0x410);
    if (temp_v0 == 0) {
      temp_v1 = 0x15;
    }
    else {
      temp_v1 = 0xe;
    }
    sysPlaySe(temp_v1);
  }
  if (param_1 == 0x14 || param_1 == 0x49) {
    sysPlaySe(0xf);
    return;
  }
  if (param_1 == 0x15 || param_1 == 0x4a) {
    sysPlaySe(0x10);
    return;
  }
  if (param_1 == 0x16 || param_1 == 0x4b) {
    temp_v0 = FUN_0018719c(0x410);
    if (temp_v0 == 0) {
      temp_v1 = 0x16;
    }
    else {
      temp_v1 = 0x11;
    }
    sysPlaySe(temp_v1);
  }
  if (param_1 == 0x17 || param_1 == 0x4c) {
    sysPlaySe(0x12);
    return;
  }
  if (param_1 == 0x18 || param_1 == 0x4d) {
    sysPlaySe(0x13);
    return;
  }
  if (param_1 != 0x19 && param_1 != 0x4e) {
    return;
  }
  sysPlaySe(0x14);
  return;
}

} /* extern "C" */
