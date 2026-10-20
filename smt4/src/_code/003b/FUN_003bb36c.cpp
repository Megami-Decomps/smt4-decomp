#include "romwright_types.h"

extern "C" {

int FUN_002ae898(int, int);

extern int FUN_002a60b4(unsigned int, int);
/* Supplied declaration required: FUN_002ae898. */


unsigned int FUN_003bb36c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = 0;
  do {
    if ((*(char *)(param_1 + temp_v2 + 0xc78) != '\0') &&
       (temp_v0 = FUN_002a60b4(0x2a,temp_v2), temp_v0 != 0)) {
      FUN_002ae898(0x2a,temp_v2);
      *(unsigned char *)(param_1 + temp_v2 + 0xc78) = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x40);
  temp_v2 = 0;
  while( 1 ) {
    temp_v0 = param_1 + temp_v2;
    temp_v1 = temp_v0 + 0xc00;
    temp_v3 = *(char *)(temp_v1 + 0x78) == '\0';
    if (temp_v3) {
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v1 + 0x79);
    }
    if (!temp_v3 || temp_v1 != 0) break;
    temp_v2 = temp_v2 + 2;
    if (temp_v2 >= 0x40) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
