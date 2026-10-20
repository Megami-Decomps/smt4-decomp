#include "romwright_types.h"

extern "C" {

int FUN_00249a54(void);
int scrSetResult(int);
int scrGetArg(...);

/* Supplied declaration required: FUN_00249a54. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: scrGetArg. */
extern int *FUN_002a8764(void);


unsigned int FUN_002f73e0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = scrGetArg();
  scrGetArg(1);
  FUN_00249a54();
  piVar2 = (int *)FUN_002a8764();
  scrSetResult(*piVar2 <= temp_v0);
  return 1;
}

} /* extern "C" */
