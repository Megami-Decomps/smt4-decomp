/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea614` (_code @ 0x2ea614, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea2a8(int *, int);
int FUN_002ea2b4(unsigned char *, int *);
int ptrHolderDestroy(int *);
int FUN_002ecac4(int);

extern unsigned char DAT_0055b1ec; /* 0x55b1ec */
extern unsigned char DAT_00594ec4; /* 0x594ec4 */

extern int onlineStringDestroy(unsigned int *);
/* Supplied declaration required: FUN_002ea2a8. */
/* Supplied declaration required: FUN_002ea2b4. */
/* Supplied declaration required: ptrHolderDestroy. */
/* Supplied declaration required: FUN_002ecac4. */
extern int FUN_002fb028(int);
extern int ptrHolderDestroyAlias(int);


void FUN_002ea614(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int uStack_10;
  unsigned int uStack_c;
  
  *param_1 = (unsigned int)&DAT_0055b1ec;
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_002ea2a8(&uStack_10,0);
  FUN_002ea2b4(&DAT_00594ec4,&uStack_10);
  ptrHolderDestroy(&uStack_10);
  temp_v0 = onlineStringDestroy(param_1 + 0x44);
  temp_v0 = ptrHolderDestroyAlias(temp_v0 - 8);
  temp_v0 = FUN_002fb028(temp_v0 - 0xa0);
  FUN_002ecac4(temp_v0 - 0x68);
  return;
}

} /* extern "C" */
