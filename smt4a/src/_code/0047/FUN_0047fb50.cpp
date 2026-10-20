#include "romwright_types.h"

extern "C" {

int FUN_00192608(int);

/* Supplied declaration required: FUN_00192608. */
extern int FUN_003dfe60(void);


unsigned int FUN_0047fb50(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_003dfe60();
  temp_v2 = FUN_00192608(param_1);
  if (temp_v2 == 0) {
    return 0;
  }
  temp_v0 = *(unsigned char *)(temp_v2 + 0x30);
  if ((((temp_v0 & 1) != 0 && (temp_v1 == 4)) || (((temp_v0 & 4) != 0 && (temp_v1 == 5)))) ||
      (((temp_v0 & 2) != 0 && (temp_v1 == 1)))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
