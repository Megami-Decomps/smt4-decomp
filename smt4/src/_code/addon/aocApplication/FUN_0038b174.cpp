/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b174` (_code @ 0x38b174, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b2368(void);
int FUN_002c222c(void);
int FUN_002c3944(void);
int FUN_002c415c(void);
int FUN_002c52f8(void);
int FUN_002c5300(int, int, int, int);
int FUN_00352f0c(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002c222c. */
/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c52f8. */
/* Supplied declaration required: FUN_002c5300. */
extern unsigned int FUN_00352ee8(void);
/* Supplied declaration required: FUN_00352f0c. */


void FUN_0038b174(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x5a8) != 0) {
    FUN_00352f0c();
    FUN_002b2368();
    *(unsigned int *)(param_1 + 0x5a8) = 0;
  }
  if (*(int *)(param_1 + 0x5ac) != 0) {
    FUN_002c415c();
    *(int *)(param_1 + 0x5ac) = 0;
  }
  temp_v0 = 0x10000;
  FUN_002c5300(0x10000,0x100,0,0x20000);
  *(unsigned int *)(param_1 + 0x5ac) = temp_v0;
  FUN_002c3944();
  if (*(int *)(param_1 + 0x5ac) != 0) {
    temp_v1 = 0x10;
    FUN_002c222c();
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = FUN_00352ee8();
    }
    *(unsigned int *)(param_1 + 0x5a8) = temp_v0;
    return;
  }
  FUN_002c52f8();
  return;
}

} /* extern "C" */
