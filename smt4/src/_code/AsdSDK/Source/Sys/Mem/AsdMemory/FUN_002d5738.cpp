#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004e411c; /* 0x4e411c */


unsigned int FUN_002d5738(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_004e411c + 0x18));
}

} /* extern "C" */
