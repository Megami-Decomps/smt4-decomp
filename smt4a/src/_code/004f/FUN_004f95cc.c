/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f95cc` (_code @ 0x4f95cc, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
    unsigned int sp9C; /* 0x9c: local_9c */
} param_1_stack;

/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_004f95cc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [4];
  int temp_v3;
  unsigned char temp_v4;
  
  if (*(int *)(param_1 + 0x1f58) != 0) {
    temp_v0 = 0;
    do {
      rt_memcpy_w(temp_v2,param_1 + temp_v0 * 0x8c + 0x1f5c,0x8c);
      if (((temp_v4 & 1) != 0) && (temp_v3 == 0)) {
        return 0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
  }
  temp_v0 = *(int *)(param_1 + 0x1f54);
  if (temp_v0 != 0) {
    temp_v1 = 0;
    do {
      rt_memcpy_w(temp_v2,param_1 + temp_v1 * 0x8c + 0x218c,0x8c);
      if (((temp_v4 & 1) != 0) && (temp_v3 == 0)) {
        return 0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
  }
  if (temp_v0 != 0) {
    temp_v1 = 0;
    do {
      rt_memcpy_w(temp_v2,param_1 + temp_v1 * 0x8c + 0x23bc,0x8c);
      if (((temp_v4 & 1) != 0) && (temp_v3 == 0)) {
        return 0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
  }
  if (temp_v0 != 0) {
    temp_v0 = 0;
    do {
      rt_memcpy_w(temp_v2,param_1 + temp_v0 * 0x8c + 0x25ec,0x8c);
      if (((temp_v4 & 1) != 0) && (temp_v3 == 0)) {
        return 0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
  }
  if ((*(int **)(param_1 + 0x33a8) != (int *)0x0) &&
     (temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x33a8) + 0x18))(), temp_v0 == 0)) {
    return 0;
  }
  return 1;
}
