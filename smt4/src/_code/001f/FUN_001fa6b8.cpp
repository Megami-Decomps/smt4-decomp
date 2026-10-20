#include "romwright_types.h"

extern "C" {

int FUN_00152bec(void);

extern int DAT_00447a60; /* 0x447a60 */

/* Supplied declaration required: FUN_00152bec. */


void FUN_001fa6b8(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  char *pcVar3;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = 0;
  do {
    pcVar3 = (char *)(DAT_00447a60 + temp_v2 * 0x3c + 0x24);
    if (*pcVar3 != '\0' && pcVar3[0x28] != '\0') {
      if (pcVar3[0x30] != '\0' && *(int *)(pcVar3 + 0x2c) != 0) {
        FUN_00152bec();
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x10);
  temp_v2 = 0;
  do {
    if (*(int *)(DAT_00447a60 + temp_v2 * 8 + 0x18) != 0) {
      FUN_00152bec();
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  return;
}

} /* extern "C" */
