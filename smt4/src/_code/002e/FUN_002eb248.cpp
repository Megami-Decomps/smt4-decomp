#include "romwright_types.h"

extern "C" {

int FUN_002592d8(void);
int scrGetArg(int);

/* Supplied declaration required: FUN_002592d8. */
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_002eb248(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002592d8();
  scrGetArg(1);
  scrGetArg(2);
  scrGetArg(3);
  scrGetArg(4);
  return 1;
}

} /* extern "C" */
