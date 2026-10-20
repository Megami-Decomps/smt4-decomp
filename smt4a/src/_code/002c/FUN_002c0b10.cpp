#include "romwright_types.h"

extern "C" {

int resourceLookupWithFallback(unsigned int, int);

extern int g_cecProcess; /* 0x57f390 */

/* Supplied declaration required: resourceLookupWithFallback. */
extern int FUN_004bb308(unsigned int);


unsigned int FUN_002c0b10(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = g_cecProcess;
  temp_v2 = 0;
  if ((g_cecProcess != 0 && param_1 != 0) &&
     (temp_v1 = FUN_004bb308(*(unsigned int *)(g_cecProcess + 4)), temp_v1 != 0)) {
    resourceLookupWithFallback(*(unsigned int *)(temp_v0 + 4),param_1);
    temp_v2 = 1;
  }
  return temp_v2;
}

} /* extern "C" */
