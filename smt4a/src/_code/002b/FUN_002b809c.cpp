#include "romwright_types.h"

extern "C" {

extern int *DAT_0058104c; /* 0x58104c */


unsigned char FUN_002b809c(void)

{
  return *DAT_0058104c != 0;
}

} /* extern "C" */
