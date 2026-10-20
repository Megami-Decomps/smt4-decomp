/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b2fc` (_code @ 0x38b2fc, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023a1b8(void);
int FUN_002b2368(void);
int FUN_002c222c(void);
int FUN_002c3944(void);
int FUN_002c415c(void);
int FUN_002c52f8(void);
int FUN_002c5300(int, int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0023a1b8. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002c222c. */
/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c52f8. */
/* Supplied declaration required: FUN_002c5300. */
extern unsigned int FUN_00352740(void);


void FUN_0038b2fc(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x5b0) != 0) {
    FUN_0023a1b8();
    FUN_002b2368();
    *(unsigned int *)(param_1 + 0x5b0) = 0;
  }
  if (*(int *)(param_1 + 0x5b4) != 0) {
    FUN_002c415c();
    *(int *)(param_1 + 0x5b4) = 0;
  }
  temp_v0 = 0x10000;
  FUN_002c5300(0x10000,0x100,0,0x20000);
  *(unsigned int *)(param_1 + 0x5b4) = temp_v0;
  FUN_002c3944();
  if (*(int *)(param_1 + 0x5b4) != 0) {
    temp_v1 = 0x10;
    FUN_002c222c();
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = FUN_00352740();
    }
    *(unsigned int *)(param_1 + 0x5b0) = temp_v0;
    return;
  }
  FUN_002c52f8();
  return;
}

} /* extern "C" */
