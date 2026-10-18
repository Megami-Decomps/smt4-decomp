/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dc504` (_code @ 0x3dc504, 0x184 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
    unsigned int sp9C; /* 0x9c: local_9c */
} param_1_stack;

/* Supplied declaration required: FUN_002bcd68. */


unsigned int FUN_003dc504(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [4];
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v1 = *(int *)(param_1 + 0x1cfc);
  if (temp_v1 != 0) {
    temp_v0 = 0;
    do {
      FUN_002bcd68(temp_v2,param_1 + temp_v0 * 0x8c + 0x1d00,0x8c);
      if (((temp_v4 & 1) != 0) && (temp_v3 == 0)) {
        return 0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
  }
  if (temp_v1 != 0) {
    temp_v0 = 0;
    do {
      FUN_002bcd68(temp_v2,param_1 + temp_v0 * 0x8c + 0x1f30,0x8c);
      if (((temp_v4 & 1) != 0) && (temp_v3 == 0)) {
        return 0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
  }
  if (temp_v1 != 0) {
    temp_v0 = 0;
    do {
      FUN_002bcd68(temp_v2,param_1 + temp_v0 * 0x8c + 0x2160,0x8c);
      if (((temp_v4 & 1) != 0) && (temp_v3 == 0)) {
        return 0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
  }
  if (temp_v1 != 0) {
    temp_v1 = 0;
    do {
      FUN_002bcd68(temp_v2,param_1 + temp_v1 * 0x8c + 0x2390,0x8c);
      if (((temp_v4 & 1) != 0) && (temp_v3 == 0)) {
        return 0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
  }
  if ((*(int **)(param_1 + 0x3034) != (int *)0x0) &&
     (temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0x3034) + 0x18))(), temp_v1 == 0)) {
    return 0;
  }
  return 1;
}
