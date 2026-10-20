#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0053d838; /* 0x53d838 */


unsigned char FUN_00202178(int param_1)

{
  return (&DAT_0053d838)[param_1];
}

} /* extern "C" */
