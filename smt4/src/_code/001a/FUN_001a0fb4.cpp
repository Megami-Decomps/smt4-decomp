#include "romwright_types.h"

extern "C" {

unsigned int FUN_002c0c74(unsigned int);

/* Supplied declaration required: FUN_002c0c74. */
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


unsigned short FUN_001a0fb4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v5;
  
  temp_v1 = FUN_002c0cec(1,3);
  temp_v2 = FUN_002c0cc4();
  
  for (temp_v5 = 0; temp_v5 < FUN_002c0c74(temp_v1); temp_v5 = temp_v5 + 1) {
    if (*(unsigned short *)(temp_v2 + temp_v5 * 4) == param_1) {
      temp_v0 = *(unsigned short *)(temp_v2 + temp_v5 * 4 + 2);
      if (temp_v0 == 0) {
        return 0x32;
      }
      return temp_v0;
    }
  }
  return 0x32;
}

} /* extern "C" */
