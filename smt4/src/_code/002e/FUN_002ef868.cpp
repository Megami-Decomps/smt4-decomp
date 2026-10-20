#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004bce8c; /* 0x4bce8c */


unsigned int FUN_002ef868(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_004bce8c + 0x240));
}

} /* extern "C" */
