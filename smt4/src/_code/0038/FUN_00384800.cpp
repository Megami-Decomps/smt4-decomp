/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00384800` (_code @ 0x384800, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00235554(int, unsigned char *);
int FUN_002355ac(int);
int FUN_00259258(void);
int FUN_0026374c(void);
int FUN_002b8838(int);
int FUN_00385b24(int, int);

extern unsigned char LAB_0038489c; /* 0x38489c */
extern unsigned char LAB_003848ac; /* 0x3848ac */

/* Supplied declaration required: FUN_00235554. */
/* Supplied declaration required: FUN_002355ac. */
/* Supplied declaration required: FUN_00259258. */
/* Supplied declaration required: FUN_0026374c. */
/* Supplied declaration required: FUN_002b8838. */
extern int FUN_002c09d0(unsigned int);
extern int FUN_00348f70(void);
extern int FUN_0034904c(void);
/* Supplied declaration required: FUN_00385b24. */


void FUN_00384800(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0034904c();
  if ((temp_v0 != 0) && (temp_v0 = FUN_00348f70(), temp_v0 != 0)) {
    FUN_002b8838(0x3c);
    FUN_00235554(param_1,&LAB_0038489c);
    *(unsigned int *)(param_1 + 4) = 0xd;
    *(unsigned int *)(param_1 + 8) = 0;
    return;
  }
  temp_v0 = FUN_002c09d0(0x24);
  if (temp_v0 != 0) {
    FUN_002355ac(1);
  }
  FUN_00259258();
  FUN_00235554(param_1,&LAB_003848ac);
  FUN_00385b24(param_1 + 0x20,(int)*(char *)(param_1 + 0x10));
  FUN_0026374c();
  *(unsigned int *)(param_1 + 4) = 6;
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}

} /* extern "C" */
