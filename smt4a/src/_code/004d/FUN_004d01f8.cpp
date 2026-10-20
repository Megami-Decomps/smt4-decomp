/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d01f8` (_code @ 0x4d01f8, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a48ac(char *, int);
int FUN_002a48e0(char *, int);
int FUN_0031d1b4(char *, int);
int FUN_0031d1d8(char *, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_002a4844(char *);
extern int FUN_002a4860(void);
/* Supplied declaration required: FUN_002a48ac. */
/* Supplied declaration required: FUN_002a48e0. */
extern int FUN_0031d18c(char *);
extern int FUN_0031d1a0(void);
/* Supplied declaration required: FUN_0031d1b4. */
/* Supplied declaration required: FUN_0031d1d8. */


void FUN_004d01f8(char *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (*param_1 != '\x01') {
    temp_v0 = FUN_002a4860();
  }
  else {
    temp_v0 = FUN_002a4844(param_1 + 0x10);
  }
  if (*param_1 != '\x01') {
    temp_v1 = FUN_0031d1a0();
  }
  else {
    temp_v1 = FUN_0031d18c(param_1 + 0x10);
  }
  if (temp_v0 >= 1) {
    temp_v0 = temp_v0 - 1;
  }
  else if (temp_v1 >= 1) {
    temp_v1 = temp_v1 - 1;
  }
  else {
    temp_v2 = *(int *)(param_1 + 8);
    temp_v0 = *(int *)(param_1 + 4);
    if (temp_v0 < temp_v2) {
      temp_v1 = temp_v0 - 1;
      temp_v0 = temp_v2 - temp_v0;
    }
    else {
      temp_v0 = 0;
      temp_v1 = temp_v2 - 1;
    }
  }
  if (*param_1 == '\0') {
    FUN_002a48e0(param_1 + 0x10,temp_v0);
    FUN_0031d1d8(param_1 + 0x10,temp_v1);
  }
  if (*param_1 != '\x01') {
    return;
  }
  FUN_002a48ac(param_1 + 0x10,temp_v0);
  FUN_0031d1b4(param_1 + 0x10,temp_v1);
  return;
}

} /* extern "C" */
