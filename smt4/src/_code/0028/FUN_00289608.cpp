/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00289608` (_code @ 0x289608, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028d6d0(void);
int FUN_002a03d8(int, int);
int FUN_002a7218(void);
int FUN_002c415c(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0028d6d0. */
/* Supplied declaration required: FUN_002a03d8. */
/* Supplied declaration required: FUN_002a7218. */
extern int FUN_002c2a04(unsigned int);
/* Supplied declaration required: FUN_002c415c. */


void FUN_00289608(unsigned int *param_1,unsigned char param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  *(unsigned char *)(param_1 + 2) = param_2;
  param_1[1] = 0xb;
  *param_1 = 0;
  if (param_1[3] != 0) {
    FUN_002c415c();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    FUN_002c415c();
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    FUN_002a7218();
    param_1[5] = 0;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_0028d6d0();
  }
  param_1[1] = 0xc;
  temp_v0 = FUN_002c2a04(0);
  if (temp_v0 == 3) {
    FUN_002a03d8(0,5);
  }
  temp_v0 = FUN_002c2a04(1);
  if (temp_v0 == 3) {
    FUN_002a03d8(1,5);
    return;
  }
  return;
}

} /* extern "C" */
