/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110b36` (_code @ 0x110b36, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineStringConstruct(int *, unsigned int);
int onlineStringDestroy(int *);
int FUN_002fbb92(unsigned int, int *);

/* Supplied declaration required: onlineStringConstruct. */
/* Supplied declaration required: onlineStringDestroy. */
extern unsigned int onlineUrlGetText(unsigned int);
/* Supplied declaration required: FUN_002fbb92. */


void FUN_00110b36(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int uStack_10;
  unsigned int uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  temp_v0 = onlineUrlGetText(param_2);
  onlineStringConstruct(&uStack_10,temp_v0);
  FUN_002fbb92(param_1,&uStack_10);
  onlineStringDestroy(&uStack_10);
  return;
}

} /* extern "C" */
