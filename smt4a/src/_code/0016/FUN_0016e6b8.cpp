#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_00589284; /* 0x589284 */
extern unsigned char DAT_0061a684; /* 0x61a684 */


void FUN_0016e6b8(void)

{
  int temp_v0;
  
  if ((*(signed char *)((unsigned char *)&DAT_00589284 + 0x2)) != '\0') {
    temp_v0 = 0;
    do {
      if (*(romwright_code **)(&DAT_0061a684 + temp_v0 * 4) != (romwright_code *)0x0) {
        (**(romwright_code **)(&DAT_0061a684 + temp_v0 * 4))();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
    (*(signed char *)((unsigned char *)&DAT_00589284 + 0x2)) = '\0';
  }
  return;
}

} /* extern "C" */
