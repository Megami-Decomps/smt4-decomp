#include "romwright_types.h"

extern "C" {

int FUN_002a775c(void);
int FUN_002c415c(void);

extern int DAT_004474d8; /* 0x4474d8 */

/* Supplied declaration required: FUN_002a775c. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_001a86bc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(DAT_004474d8 + 0xc) != 0) {
    FUN_002a775c();
    *(unsigned int *)(DAT_004474d8 + 0xc) = 0;
  }
  if (*(int *)(DAT_004474d8 + 0x10) != 0) {
    FUN_002a775c();
    *(unsigned int *)(DAT_004474d8 + 0x10) = 0;
  }
  if (*(int *)(DAT_004474d8 + 0x20) != 0) {
    FUN_002c415c();
    temp_v0 = DAT_004474d8;
    *(unsigned int *)(DAT_004474d8 + 0x20) = 0;
    *(unsigned int *)(temp_v0 + 0x24) = 0;
  }
  if (*(int *)(DAT_004474d8 + 0x28) != 0) {
    FUN_002c415c();
    temp_v0 = DAT_004474d8;
    *(unsigned int *)(DAT_004474d8 + 0x28) = 0;
    *(unsigned int *)(temp_v0 + 0x2c) = 0;
  }
  return;
}

} /* extern "C" */
