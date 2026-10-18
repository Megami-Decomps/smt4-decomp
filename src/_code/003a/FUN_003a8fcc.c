/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8fcc` (_code @ 0x3a8fcc, 0x120 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_0022df64(int);
/* Supplied declaration required: FUN_002333d4. */
extern int FUN_002337a0(int *);
extern int FUN_002879c0(void);
/* Supplied declaration required: FUN_0029d924. */
/* Supplied declaration required: FUN_0029e19c. */
/* Supplied declaration required: FUN_0029e260. */
extern int FUN_0029e398(void);
/* Supplied declaration required: FUN_002b8b78. */


void FUN_003a8fcc(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  short temp_v2;
  
  temp_v0 = (**(romwright_code **)(*param_1 + 0x24))(param_1);
  if (temp_v0 == 0) {
    return;
  }
  temp_v0 = FUN_0022df64((int)param_1 + 0x96);
  if (temp_v0 != 0) {
    return;
  }
  if (((char)param_1[0x169] == '\x01') && (temp_v0 = FUN_002879c0(), temp_v0 == 0)) {
    return;
  }
  param_1[5] = 1;
  param_1[6] = 0;
  FUN_002333d4(param_1 + 0x37);
  FUN_002333d4(param_1 + 0x37,1);
  if ((char)param_1[0x169] == '\0') {
    temp_v1 = 0x2e;
    FUN_002b8b78(temp_v1);
  }
  else if ((char)param_1[0x169] == '\x01') {
    temp_v1 = 0x46;
    FUN_002b8b78(temp_v1);
  }
  if ((short)param_1[0x16a] != 0) {
    temp_v0 = FUN_002337a0(param_1 + 8);
    temp_v2 = (short)param_1[temp_v0 * 8 + 0x16b];
    temp_v0 = FUN_002337a0(param_1 + 8);
    if ((char)param_1[temp_v0 * 8 + 0x171] == '\0') {
      temp_v2 = 0;
    }
    temp_v0 = FUN_0029e398();
    if ((temp_v0 == 0) || ((short)param_1[0x296c] == temp_v2)) {
      return;
    }
    *(short *)(param_1 + 0x296c) = temp_v2;
    if (temp_v2 != 0) {
      FUN_0029e19c((int)temp_v2,1);
      FUN_0029d924(1);
      return;
    }
  }
  FUN_0029e260(0);
  return;
}
