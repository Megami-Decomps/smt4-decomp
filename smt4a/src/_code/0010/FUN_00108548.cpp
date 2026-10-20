/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00108548` (_code @ 0x108548, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7232(int);
int FUN_002eb108(int, int, int, int, int, int);
int FUN_002ef34c(unsigned char [12], int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_002e7232. */
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002eb108. */
/* Supplied declaration required: FUN_002ef34c. */


void FUN_00108548(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [12];
  
  temp_v1 = 0;
  do {
    temp_v0 = FUN_002e760a(0x150);
    if (temp_v0 != 0) {
      FUN_002eb108(temp_v0,param_1,3,0,0,0);
    }
    *(unsigned char *)(temp_v0 + 0x24) = *(unsigned char *)(param_1 + 0x14c);
    FUN_002ef34c(temp_v2,param_1,temp_v0);
    FUN_002e7232(temp_v0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  return;
}

} /* extern "C" */
