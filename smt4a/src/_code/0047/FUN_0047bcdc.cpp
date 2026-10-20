/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047bcdc` (_code @ 0x47bcdc, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e38c(...);
int FUN_0015155c(...);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int FUN_00478a70(...); /* 0x478a70 */
extern int FUN_00478ac4(...); /* 0x478ac4 */
extern unsigned char LAB_0047bd64; /* 0x47bd64 */
extern unsigned char LAB_0047bd80; /* 0x47bd80 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */


void FUN_0047bcdc(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  
  param_1[0x5e7] = param_2;
  if ((*param_1 & 0x100) == 0) {
    *param_1 = *param_1 | 0x100;
    puVar1 = &LAB_0047bd64;
    FUN_0014e38c(&LAB_0047bd64,4,0,0,FUN_00478a70,0,param_1);
    param_1[0x5e5] = (unsigned int)puVar1;
    FUN_0015155c(&LAB_0047bd80,0xec,1,0,FUN_00478ac4,0,param_1,puVar1);
  }
  return;
}

} /* extern "C" */
