/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021ae40` (_code @ 0x21ae40, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a7218(...);
int FUN_002c415c(...);
int FUN_002c498c(...);
int FUN_002c4a08(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_0020ed70(...); /* 0x20ed70 */
extern unsigned char LAB_0021af30; /* 0x21af30 */
extern int FUN_002e064c(...); /* 0x2e064c */
extern int *DAT_00434260; /* 0x434260 */

/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */


void FUN_0021ae40(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  
  piVar1 = (int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x90,1);
  puVar2 = &LAB_0021af30;
  DAT_00434260 = piVar1;
  FUN_002c4a08(&LAB_0021af30,2,0,0,FUN_0020ed70,FUN_002e064c,param_1,*param_1);
  param_1[0x12] = (unsigned int)puVar2;
  piVar1 = DAT_00434260;
  if (DAT_00434260[1] != 0) {
    FUN_002a7218();
    piVar1[1] = 0;
  }
  if (*piVar1 != 0) {
    FUN_002c415c();
    *piVar1 = 0;
  }
  piVar1[3] = 0;
  return;
}

} /* extern "C" */
