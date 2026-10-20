#include "romwright_types.h"

extern "C" {

extern int asdListBoxFindItem(void);


int FUN_0022a344(void)

{
  int temp_v0;
  
  temp_v0 = asdListBoxFindItem();
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + 0x20c;
  }
  return temp_v0;
}

} /* extern "C" */
