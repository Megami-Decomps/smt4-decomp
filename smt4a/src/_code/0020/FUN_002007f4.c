/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002007f4` (_code @ 0x2007f4, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_002007f4(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 0x6ec);
  if (temp_v1 == 0) {
    temp_v1 = 0;
    do {
      FUN_00163aa4(param_1 + temp_v1 * 0x8c + 0x20);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 5);
    if (*(char *)(param_1 + 0x2da) == '\0') {
      return;
    }
    *(unsigned int *)(param_1 + 0x6ec) = 1;
  }
  else if (temp_v1 != 1) {
    if (temp_v1 == 2) {
      temp_v1 = 0;
      do {
        FUN_00163aa4(param_1 + temp_v1 * 0x8c + 0x20);
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 5);
      if (*(char *)(param_1 + 0x2da) == '\0') {
        return;
      }
      *(unsigned int *)(param_1 + 0x6ec) = 3;
    }
    else if (temp_v1 != 3) {
      return;
    }
    *(unsigned int *)(param_1 + 0x344) = 1;
    *(unsigned int *)(param_1 + 0x6ec) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x489) == '\0') {
    *(unsigned char *)(param_1 + 0x489) = 1;
  }
  else {
    *(unsigned char *)(param_1 + 0x489) = 0;
  }
  rt_memcpy_w(param_1 + 0x35c,param_1 + (unsigned int)*(unsigned char *)(param_1 + 0x489) * 0x130 + 0x490,200);
  rt_memcpy_w(param_1 + 0x424,param_1 + (unsigned int)*(unsigned char *)(param_1 + 0x489) * 0x130 + 0x558,100);
  FUN_00203b40(param_1 + 0x2dc,
               *(unsigned int *)(param_1 + (unsigned int)*(unsigned char *)(param_1 + 0x489) * 0x130 + 0x48c),5,1,0,1);
  temp_v0 = 0;
  temp_v1 = 0;
  if (*(char *)(param_1 + 0x6f0) == '\0') {
    temp_v0 = 2;
  }
  do {
    FUN_001846d0(param_1 + temp_v1 * 0x8c + 0x20,temp_v0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 5);
  *(unsigned int *)(param_1 + 0x6ec) = 2;
  return;
}
