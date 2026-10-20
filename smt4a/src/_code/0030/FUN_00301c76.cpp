#include "romwright_types.h"

extern "C" {

extern int copyObjectCtorDerived(unsigned char *, unsigned char *);


int FUN_00301c76(unsigned char *param_1,unsigned char *param_2)

{
  int temp_v0;
  
  *param_1 = *param_2;
  temp_v0 = copyObjectCtorDerived(param_1 + 8,param_2 + 8);
  return temp_v0 - 8;
}

} /* extern "C" */
