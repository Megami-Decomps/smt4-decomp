#include "romwright_types.h"

extern "C" {

int zlib_inflateInit2_(unsigned int, int, unsigned int, unsigned int);

/* Supplied declaration required: zlib_inflateInit2_. */


void FUN_00128638(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  zlib_inflateInit2_(param_1,0xf,param_2,param_3);
  return;
}

} /* extern "C" */
