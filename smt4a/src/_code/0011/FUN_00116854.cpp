#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559d80; /* 0x559d80 */


void FUN_00116854(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_00559d80;
  return;
}

} /* extern "C" */
