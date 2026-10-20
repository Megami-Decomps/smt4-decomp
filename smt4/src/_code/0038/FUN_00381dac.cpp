/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00381dac` (_code @ 0x381dac, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00235554(int, unsigned char *);
int FUN_002355ac(int);
int FUN_00259258(void);
int FUN_0026374c(void);
int dataTable28Sub0GetRecord(int, int);

extern unsigned char LAB_00381df8; /* 0x381df8 */

/* Supplied declaration required: FUN_00235554. */
/* Supplied declaration required: FUN_002355ac. */
/* Supplied declaration required: FUN_00259258. */
/* Supplied declaration required: FUN_0026374c. */
extern int FUN_002c09d0(unsigned int);
/* Supplied declaration required: dataTable28Sub0GetRecord. */


void FUN_00381dac(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c09d0(0x24);
  if (temp_v0 != 0) {
    FUN_002355ac(1);
  }
  FUN_00259258();
  FUN_00235554(param_1,&LAB_00381df8);
  dataTable28Sub0GetRecord(param_1 + 0x20,(int)*(char *)(param_1 + 0x10));
  FUN_0026374c();
  *(unsigned int *)(param_1 + 4) = 6;
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}

} /* extern "C" */
