#include "romwright_types.h"

extern "C" {

int FUN_00232388(void);
int scrGetArg(...);
int scrSetResult(int);

extern int *FUN_001ab888(void);
/* Supplied declaration required: FUN_00232388. */
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0037fdc0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = scrGetArg();
  scrGetArg(1);
  FUN_00232388();
  piVar2 = (int *)FUN_001ab888();
  scrSetResult(*piVar2 <= temp_v0);
  return 1;
}

} /* extern "C" */
