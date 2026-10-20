/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003419cc` (_code @ 0x3419cc, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerCreateLoaded(unsigned char [128], int);
int FUN_002a0428(void);
int FUN_002be624(unsigned char [128], unsigned char *, unsigned int);

extern unsigned char LAB_00341a08; /* 0x341a08 */

/* Supplied declaration required: asdMdlManagerCreateLoaded. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: FUN_002be624. */


void FUN_003419cc(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char temp_v0 [128];
  
  puVar1 = temp_v0;
  FUN_002be624(temp_v0,&LAB_00341a08,param_2);
  asdMdlManagerCreateLoaded(temp_v0,7);
  *(unsigned char **)(param_1 + 0x28) = puVar1;
  FUN_002a0428();
  return;
}

} /* extern "C" */
