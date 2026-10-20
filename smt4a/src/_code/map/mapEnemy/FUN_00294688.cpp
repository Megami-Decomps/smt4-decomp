#include "romwright_types.h"

extern "C" {

extern int FUN_004bc850(void);
extern unsigned char DAT_005806e0[];


unsigned char FUN_00294688(void)

{
  int temp_v0;
  
  temp_v0 = FUN_004bc850();
  return DAT_005806e0[temp_v0];
}

} /* extern "C" */
