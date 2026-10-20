#include "romwright_types.h"

extern "C" {

int resourceListDestroy(void);
int asdMemFree(void);
int asdOperatorDelete(int);

/* Supplied declaration required: resourceListDestroy. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdOperatorDelete. */


void itemTableClear(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int unaff_r4;
  int temp_v0;
  
  if (*param_1 != 0) {
    unaff_r4 = 0;
  }
  if (0 < *param_1) {
    do {
      temp_v0 = *(int *)(param_1[1] + unaff_r4 * 4);
      if (temp_v0 != 0) {
        if (*(int *)(temp_v0 + 0xc) != 0) {
          resourceListDestroy();
          *(unsigned int *)(temp_v0 + 0xc) = 0;
        }
        asdOperatorDelete(temp_v0);
        *(unsigned int *)(param_1[1] + unaff_r4 * 4) = 0;
      }
      unaff_r4 = unaff_r4 + 1;
    } while (unaff_r4 < *param_1);
  }
  if (param_1[1] != 0) {
    asdMemFree();
    param_1[1] = 0;
  }
  *param_1 = 0;
  return;
}

} /* extern "C" */
