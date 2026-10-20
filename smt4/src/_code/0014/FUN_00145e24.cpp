#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004e0d48; /* 0x4e0d48 */


unsigned char FUN_00145e24(int param_1)

{
  return (&DAT_004e0d48)[param_1];
}

} /* extern "C" */
