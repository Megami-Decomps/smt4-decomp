/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d0100` (_code @ 0x4d0100, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_002a4844(char *);
extern int FUN_002a4860(void);
/* Supplied declaration required: FUN_002a48ac. */
/* Supplied declaration required: FUN_002a48e0. */
extern int FUN_0031d18c(char *);
extern int FUN_0031d1a0(void);
/* Supplied declaration required: FUN_0031d1b4. */
/* Supplied declaration required: FUN_0031d1d8. */


void FUN_004d0100(char *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  
  if (*param_1 != '\x01') {
    temp_v1 = FUN_002a4860();
  }
  else {
    temp_v1 = FUN_002a4844(param_1 + 0x10);
  }
  if (*param_1 != '\x01') {
    temp_v2 = FUN_0031d1a0();
  }
  else {
    temp_v2 = FUN_0031d18c(param_1 + 0x10);
  }
  temp_v3 = *(int *)(param_1 + 8);
  temp_v4 = *(int *)(param_1 + 4);
  if (temp_v1 < temp_v3 - temp_v4) {
    temp_v1 = temp_v1 + 1;
  }
  else {
    temp_v7 = SBORROW4(temp_v3,temp_v4);
    temp_v0 = temp_v3 - temp_v4;
    temp_v6 = temp_v3 == temp_v4;
    if (temp_v4 < temp_v3) {
      temp_v5 = temp_v4 - 1;
      temp_v7 = SBORROW4(temp_v5,temp_v2);
      temp_v0 = temp_v5 - temp_v2;
      temp_v6 = temp_v5 == temp_v2;
    }
    if (temp_v6 || temp_v0 < 0 != temp_v7) {
      temp_v6 = SBORROW4(temp_v3,temp_v4);
      temp_v0 = temp_v3 - temp_v4;
      if (temp_v3 <= temp_v4) {
        temp_v6 = SBORROW4(temp_v2,temp_v3 - 1);
        temp_v0 = temp_v2 - (temp_v3 - 1);
      }
      if (temp_v0 < 0 == temp_v6) {
        temp_v2 = 0;
        temp_v1 = temp_v2;
        if (*param_1 == '\0') {
          FUN_002a48e0(param_1 + 0x10,temp_v1);
          FUN_0031d1d8(param_1 + 0x10,temp_v2);
        }
        if (*param_1 != '\x01') {
          return;
        }
        FUN_002a48ac(param_1 + 0x10,temp_v1);
        FUN_0031d1b4(param_1 + 0x10,temp_v2);
        return;
      }
    }
    temp_v2 = temp_v2 + 1;
  }
  if (*param_1 == '\0') {
    FUN_002a48e0(param_1 + 0x10,temp_v1);
    FUN_0031d1d8(param_1 + 0x10,temp_v2);
  }
  if (*param_1 != '\x01') {
    return;
  }
  FUN_002a48ac(param_1 + 0x10,temp_v1);
  FUN_0031d1b4(param_1 + 0x10,temp_v2);
  return;
}
