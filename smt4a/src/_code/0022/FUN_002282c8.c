/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002282c8` (_code @ 0x2282c8, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00570df0; /* 0x570df0 */
extern unsigned int DAT_00570e7c; /* 0x570e7c */
extern unsigned int DAT_00570ebc; /* 0x570ebc */
extern unsigned int DAT_00570efc; /* 0x570efc */
extern unsigned int DAT_00570f58; /* 0x570f58 */
extern unsigned int DAT_00570f98; /* 0x570f98 */
extern unsigned int DAT_00570fd8; /* 0x570fd8 */
extern unsigned int DAT_00571018; /* 0x571018 */
extern unsigned int DAT_00571058; /* 0x571058 */
extern unsigned int DAT_00571098; /* 0x571098 */

/* Supplied declaration required: FUN_004151b0. */
extern unsigned int *FUN_00415be0(unsigned int);
/* Supplied declaration required: FUN_0041cbac. */
extern unsigned int *FUN_0041d6bc(unsigned int *);


unsigned int * FUN_002282c8(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  switch(param_1) {
  case 0:
    puVar1 = &DAT_00570df0;
    FUN_004151b0(&DAT_00570df0);
    return puVar1;
  case 1:
    puVar1 = (unsigned int *)FUN_00415be0(0x570e30);
    return puVar1;
  case 2:
    puVar1 = &DAT_00570e7c;
    FUN_0041cbac(&DAT_00570e7c);
    return puVar1;
  case 3:
    puVar1 = &DAT_00570ebc;
    FUN_004151b0(&DAT_00570ebc);
    return puVar1;
  case 4:
    puVar1 = (unsigned int *)FUN_0041d6bc(&DAT_00570efc);
    return puVar1;
  case 5:
    puVar1 = &DAT_00570f58;
    FUN_004151b0(&DAT_00570f58);
    return puVar1;
  case 6:
    puVar1 = &DAT_00570f98;
    FUN_004151b0(&DAT_00570f98);
    return puVar1;
  case 7:
    puVar1 = &DAT_00570fd8;
    FUN_004151b0(&DAT_00570fd8);
    return puVar1;
  case 8:
    puVar1 = &DAT_00571018;
    FUN_004151b0(&DAT_00571018);
    return puVar1;
  case 9:
    puVar1 = &DAT_00571058;
    FUN_004151b0(&DAT_00571058);
    return puVar1;
  case 10:
    puVar1 = &DAT_00571098;
    FUN_004151b0(&DAT_00571098);
    return puVar1;
  default:
    return (unsigned int *)0x0;
  }
}
