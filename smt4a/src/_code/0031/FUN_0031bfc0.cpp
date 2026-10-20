#include "romwright_types.h"

extern "C" {

int scrGetArg(...);
int scrSetResult(void);
int FUN_0039b2d0(unsigned int, int, int, unsigned int);

extern char s__U_U_U_U_U_0057f4ac[21]; /* 0x57f4ac */

/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_0039b2d0. */


unsigned int FUN_0031bfc0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(1);
  FUN_0039b2d0(*(unsigned int *)(s__U_U_U_U_U_0057f4ac + temp_v0 * 4),0,0,temp_v1);
  scrSetResult();
  return 1;
}

} /* extern "C" */
