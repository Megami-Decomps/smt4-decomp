/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301ad0` (_code @ 0x301ad0, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_002dec4c(); /* 0x2dec4c */
extern unsigned char LAB_00301bc0; /* 0x301bc0 */
extern int FUN_00357dbc(); /* 0x357dbc */
extern int *DAT_00571130; /* 0x571130 */

/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */


void FUN_00301ad0(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  
  piVar1 = (int *)0x100;
  FUN_00163060(0x100,0x100,0,0x90,1);
  puVar2 = &LAB_00301bc0;
  DAT_00571130 = piVar1;
  FUN_0015155c(&LAB_00301bc0,4,0,0,FUN_002dec4c,FUN_00357dbc,param_1,*param_1);
  param_1[0x1b] = (unsigned int)puVar2;
  piVar1 = DAT_00571130;
  if (DAT_00571130[1] != 0) {
    FUN_0019c364();
    piVar1[1] = 0;
  }
  if (*piVar1 != 0) {
    FUN_0019a5a0();
    *piVar1 = 0;
  }
  piVar1[3] = 0;
  return;
}
