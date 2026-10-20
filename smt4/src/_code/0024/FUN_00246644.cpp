/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246644` (_code @ 0x246644, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002890d4(unsigned int *);
int FUN_0034b6d4(unsigned int *);

extern unsigned int DAT_00433e80; /* 0x433e80 */
extern unsigned int DAT_00433f0c; /* 0x433f0c */
extern unsigned int DAT_00433f4c; /* 0x433f4c */
extern unsigned int DAT_00433f8c; /* 0x433f8c */
extern unsigned int DAT_00433fe8; /* 0x433fe8 */
extern unsigned int DAT_00434028; /* 0x434028 */
extern unsigned int DAT_00434068; /* 0x434068 */
extern unsigned int DAT_004340a8; /* 0x4340a8 */
extern unsigned int DAT_004340e8; /* 0x4340e8 */
extern unsigned int DAT_00434128; /* 0x434128 */

/* Supplied declaration required: FUN_002890d4. */
extern unsigned int *FUN_003481ec(unsigned int);
/* Supplied declaration required: FUN_0034b6d4. */
extern unsigned int *FUN_0034c24c(unsigned int *);


unsigned int * FUN_00246644(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  switch(param_1) {
  case 0:
    puVar1 = &DAT_00433e80;
    FUN_002890d4(&DAT_00433e80);
    return puVar1;
  case 1:
    puVar1 = (unsigned int *)FUN_003481ec(0x433ec0);
    return puVar1;
  case 2:
    puVar1 = &DAT_00433f0c;
    FUN_0034b6d4(&DAT_00433f0c);
    return puVar1;
  case 3:
    puVar1 = &DAT_00433f4c;
    FUN_002890d4(&DAT_00433f4c);
    return puVar1;
  case 4:
    puVar1 = (unsigned int *)FUN_0034c24c(&DAT_00433f8c);
    return puVar1;
  case 5:
    puVar1 = &DAT_00433fe8;
    FUN_002890d4(&DAT_00433fe8);
    return puVar1;
  case 6:
    puVar1 = &DAT_00434028;
    FUN_002890d4(&DAT_00434028);
    return puVar1;
  case 7:
    puVar1 = &DAT_00434068;
    FUN_002890d4(&DAT_00434068);
    return puVar1;
  case 8:
    puVar1 = &DAT_004340a8;
    FUN_002890d4(&DAT_004340a8);
    return puVar1;
  case 9:
    puVar1 = &DAT_004340e8;
    FUN_002890d4(&DAT_004340e8);
    return puVar1;
  case 10:
    puVar1 = &DAT_00434128;
    FUN_002890d4(&DAT_00434128);
    return puVar1;
  default:
    return (unsigned int *)0x0;
  }
}

} /* extern "C" */
