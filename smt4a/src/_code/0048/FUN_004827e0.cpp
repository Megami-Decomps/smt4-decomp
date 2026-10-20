#include "romwright_types.h"

extern "C" {

int FUN_001aea28(unsigned int, unsigned char *);

typedef int romwright_code(...);
extern unsigned char DAT_0055c824; /* 0x55c824 */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001aea28. */


unsigned int * FUN_004827e0(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  *param_1 = (unsigned int)&DAT_0055c824;
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x1d] + 4))(param_1[0x1d]);
    param_1[0x1d] = 0;
  }
  temp_v0 = param_1[0x1e];
  if (temp_v0 != 0 && (puVar2 = *(unsigned char **)(temp_v0 + 4), puVar2 != (unsigned char *)0x0)) {
    FUN_001aea28(DAT_0056fcc0,puVar2);
    if ((int *)param_1[0x1e] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[0x1e] + 4))(param_1[0x1e]);
      param_1[0x1e] = 0;
    }
  }
  return param_1;
}

} /* extern "C" */
