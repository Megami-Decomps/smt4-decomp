#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_002360dc(void);

/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_002360dc. */


unsigned int FUN_00368c7c(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002360dc();
  scrGetArg(1);
  scrGetArg(2);
  scrGetArg(3);
  scrGetArg(4);
  return 1;
}

} /* extern "C" */
