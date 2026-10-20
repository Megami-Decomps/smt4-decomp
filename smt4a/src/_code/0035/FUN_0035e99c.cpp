#include "romwright_types.h"

extern "C" {

int FUN_0031a218(unsigned int, int);

extern unsigned int DAT_005710e0; /* 0x5710e0 */

extern unsigned int scrGetArg(void);
/* Supplied declaration required: FUN_0031a218. */
extern int FUN_0034919c(void);


unsigned int FUN_0035e99c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  DAT_005710e0 = scrGetArg();
  temp_v0 = FUN_0034919c();
  if (temp_v0 != 0) {
    FUN_0031a218(DAT_005710e0,0);
  }
  return 1;
}

} /* extern "C" */
