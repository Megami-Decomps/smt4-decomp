#include "romwright_types.h"

extern "C" {

int listIteratorNext4(int *);

extern int wordRefsEqual_00132162(int *, unsigned int);
/* Supplied declaration required: listIteratorNext4. */


void FUN_0030f490(int *param_1,int *param_2,unsigned int param_3,int *param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  while ((temp_v0 = wordRefsEqual_00132162(param_2,param_3), temp_v0 == 0 && (*param_2 != *param_4))) {
    listIteratorNext4(param_2);
  }
  *param_1 = *param_2;
  return;
}

} /* extern "C" */
