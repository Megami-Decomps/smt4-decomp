/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a0c5c` (_code @ 0x3a0c5c, 0x104 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00231240(unsigned int *, unsigned int, unsigned int);
int FUN_00233240(unsigned int *, int);
int FUN_00297684(void);
int FUN_0029ee6c(int, int);
int FUN_002a0b34(void);
int FUN_002bf818(unsigned int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00231240. */
/* Supplied declaration required: FUN_00233240. */
extern int FUN_00293edc(void);
/* Supplied declaration required: FUN_00297684. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002a0b34. */
extern unsigned int FUN_002bed98(unsigned int *);
extern unsigned int FUN_002beda4(unsigned int *);
/* Supplied declaration required: FUN_002bf818. */


void FUN_003a0c5c(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  
  temp_v0 = FUN_002a0b34();
  if (temp_v0 != 0) {
    FUN_002a0b34();
    FUN_00297684();
  }
  temp_v1 = param_1[2];
  if (temp_v1 == 0) {
    FUN_00233240(param_1 + 0xea,1);
    param_1[2] = 1;
    FUN_0029ee6c(0,0x323232ff);
    return;
  }
  if (temp_v1 != 1) {
    if (temp_v1 != 2) {
      return;
    }
  }
  else {
    puVar5 = param_1 + 0x115;
    FUN_002bf818(puVar5);
    temp_v2 = FUN_002bed98(puVar5);
    temp_v3 = FUN_002beda4(puVar5);
    FUN_00231240(param_1 + 0xe0,temp_v3,temp_v2);
    if (*(char *)((int)param_1 + 0x4de) == '\0') {
      return;
    }
    *param_1 = *param_1 & 0xfffff1ff;
    temp_v0 = FUN_002a0b34();
    if (temp_v0 == 0) {
      param_1[1] = 0x12;
      param_1[2] = 0;
      return;
    }
    param_1[2] = 2;
  }
  FUN_002a0b34();
  temp_v0 = FUN_00293edc();
  if (temp_v0 == 0) {
    return;
  }
  param_1[1] = 0x12;
  param_1[2] = 0;
  return;
}

} /* extern "C" */
