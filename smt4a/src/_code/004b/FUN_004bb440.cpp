/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bb440` (_code @ 0x4bb440, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020203c(unsigned int, unsigned int);
int FUN_0020214c(void);
int FUN_00280124(void);
int FUN_0028022c(void);

extern unsigned char LAB_004bb4a4; /* 0x4bb4a4 */
extern unsigned char LAB_004bb4bc; /* 0x4bb4bc */
extern unsigned char DAT_00557ec8; /* 0x557ec8 */
extern unsigned int DAT_0057f2c8; /* 0x57f2c8 */

/* Supplied declaration required: FUN_0020203c. */
/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: FUN_00280124. */
/* Supplied declaration required: FUN_0028022c. */
extern unsigned int FUN_0042d694(unsigned int);
extern int FUN_00430f18(unsigned int *);


int FUN_004bb440(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_00557ec8;
  param_1[2] = 0;
  temp_v0 = FUN_00430f18(param_1 + 3);
  FUN_0028022c();
  FUN_00280124();
  puVar2 = &LAB_004bb4a4;
  FUN_0020214c();
  *(unsigned char **)(temp_v0 - 8) = puVar2;
  puVar2 = &LAB_004bb4bc;
  FUN_0020214c();
  *(unsigned char **)(temp_v0 - 4) = puVar2;
  temp_v1 = FUN_0042d694(0x19a2);
  FUN_0020203c(temp_v1,DAT_0057f2c8);
  return temp_v0 - 0xc;
}

} /* extern "C" */
