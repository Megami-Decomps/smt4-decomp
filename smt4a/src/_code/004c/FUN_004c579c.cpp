/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c579c` (_code @ 0x4c579c, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_003ea884(unsigned int, unsigned int *, int);
int FUN_003f0e20(unsigned int *, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_00571438; /* 0x571438 */
extern unsigned int DAT_0057143c; /* 0x57143c */
extern unsigned int DAT_00571440; /* 0x571440 */
extern unsigned int DAT_00571444; /* 0x571444 */
extern unsigned int DAT_00571478; /* 0x571478 */
extern unsigned int DAT_0057147c; /* 0x57147c */

/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_003ea884. */
/* Supplied declaration required: FUN_003f0e20. */


void FUN_004c579c(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_0014aa78();
  FUN_003f0e20(puVar1,param_1);
  if ((puVar1[1] & DAT_0057143c) != 0 || (*puVar1 & DAT_00571438) != 0) {
    temp_v0 = FUN_0014aa78();
    FUN_003ea884(temp_v0,puVar1,1);
  }
  if ((*puVar1 & DAT_00571440) != 0 || (puVar1[1] & DAT_00571444) != 0) {
    temp_v0 = FUN_0014aa78();
    FUN_003ea884(temp_v0,puVar1,2);
  }
  if ((DAT_0057147c & puVar1[1]) != 0 || (DAT_00571478 & *puVar1) != 0) {
    temp_v0 = FUN_0014aa78();
    FUN_003ea884(temp_v0,puVar1,3);
    return;
  }
  return;
}

} /* extern "C" */
