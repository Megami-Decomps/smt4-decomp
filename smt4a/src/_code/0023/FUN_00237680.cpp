#include "romwright_types.h"

extern "C" {

int asdMemFree(int);

typedef int romwright_code(...);
extern int g_cecProcess; /* 0x57f390 */

/* Supplied declaration required: asdMemFree. */


void FUN_00237680(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_cecProcess;
  if (*(int **)(g_cecProcess + 4) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(g_cecProcess + 4) + 4))(*(int **)(g_cecProcess + 4));
  }
  *(unsigned int *)(temp_v0 + 4) = 0;
  asdMemFree(temp_v0);
  g_cecProcess = 0;
  return;
}

} /* extern "C" */
