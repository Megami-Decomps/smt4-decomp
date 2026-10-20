#include "romwright_types.h"

extern "C" {

int FUN_00250d84(unsigned int, unsigned int);

/* Supplied declaration required: FUN_00250d84. */
extern int FUN_0028e9d4(unsigned int);
extern unsigned int FUN_0028fb40(unsigned int);
extern int FUN_002a0d0c(void);


unsigned int FUN_002fca4c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0x79f;
  do {
    temp_v0 = FUN_0028e9d4(temp_v2);
    if (temp_v0 != 0) {
      temp_v1 = FUN_0028fb40(temp_v2);
      FUN_00250d84(temp_v2,temp_v1);
      temp_v0 = FUN_002a0d0c();
      temp_v0 = temp_v0 + (temp_v2 >> 3);
      *(unsigned char *)(temp_v0 + 0x44) = *(unsigned char *)(temp_v0 + 0x44) | (unsigned char)(1 << (temp_v2 & 7));
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 <= 0x802);
  return 1;
}

} /* extern "C" */
