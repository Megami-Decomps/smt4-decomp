/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290ba4` (_code @ 0x290ba4, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(void);
int FUN_002e3328(unsigned int);
int FUN_00318c3c(int);
int FUN_0035b304(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_00318c3c. */
/* Supplied declaration required: FUN_0035b304. */


void FUN_00290ba4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  FUN_0035b304();
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10));
  FUN_00318c3c((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x28c4);
  FUN_002e3328(*(unsigned int *)(temp_v0 + 0x7488));
  *(unsigned int *)(temp_v0 + 0x7488) = 0;
  if ((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) != 0) {
    FUN_0019a5a0();
    (*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) = 0;
  }
  FUN_001631d0(*(unsigned int *)(param_1 + 0x78),0);
  return;
}

} /* extern "C" */
