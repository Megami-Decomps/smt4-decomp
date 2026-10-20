#include "romwright_types.h"

extern "C" {

extern int FUN_0029022c(void);
extern int FUN_002903f0(void);


int FUN_0027d968(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0029022c();
  if ((temp_v0 == 0) || (temp_v0 = FUN_002903f0(), temp_v0 <= 0)) {
    temp_v0 = -1;
  }
  return temp_v0;
}

} /* extern "C" */
