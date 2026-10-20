/* NON_MATCHING: romwright 0.5.0 decompilation of `asdMemFree` (_code @ 0x19a5a0, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryFreeRegion(...);
int FUN_0017fe8c(unsigned int);
int FUN_0018003c(void);
int FUN_002e3140(void);
int software_interrupt(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int *DAT_005b402c; /* 0x5b402c */
extern unsigned int DAT_005b4050; /* 0x5b4050 */
extern unsigned int DAT_005b4054; /* 0x5b4054 */
extern int DAT_005b4060; /* 0x5b4060 */
extern int DAT_005b4064; /* 0x5b4064 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: asdMemoryFreeRegion. */
/* Supplied declaration required: FUN_0017fe8c. */
/* Supplied declaration required: FUN_0018003c. */
/* Supplied declaration required: FUN_002e3140. */


void asdMemFree(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  FUN_0018003c();
  if (((param_1 >= DAT_005b4050) && (DAT_005b4060 + DAT_005b4050 >= param_1)) ||
     ((param_1 >= DAT_005b4054 && (DAT_005b4054 + DAT_005b4064 >= param_1)))) {
    asdMemoryFreeRegion(param_1);
    temp_v0 = *DAT_005b402c;
    software_interrupt(0x14);
  }
  else {
    FUN_0017fe8c(param_1);
    asdMemoryFreeRegion();
    temp_v0 = *DAT_005b402c;
    software_interrupt(0x14);
  }
  if (-1 < temp_v0) {
    return;
  }
  FUN_002e3140();
  return;
}

} /* extern "C" */
