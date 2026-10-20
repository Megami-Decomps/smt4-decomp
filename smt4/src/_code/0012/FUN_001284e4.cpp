#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_0044e458; /* 0x44e458 */
extern unsigned char DAT_004c64a4; /* 0x4c64a4 */


void FUN_001284e4(void)

{
  int temp_v0;
  
  if ((*(signed char *)((unsigned char *)&DAT_0044e458 + 0x2)) != '\0') {
    temp_v0 = 0;
    do {
      if (*(romwright_code **)(&DAT_004c64a4 + temp_v0 * 4) != (romwright_code *)0x0) {
        (**(romwright_code **)(&DAT_004c64a4 + temp_v0 * 4))();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
    (*(signed char *)((unsigned char *)&DAT_0044e458 + 0x2)) = '\0';
  }
  return;
}

} /* extern "C" */
