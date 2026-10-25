#include "romwright_types.h"
#include "shard/FUN_00384cf4.h"

extern "C" {

int gameFlagsGetBlock(void);

/* Supplied declaration required: gameFlagsGetBlock. */
extern int dataTableGetEntry49(unsigned char);


unsigned int FUN_00384cf4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = gameFlagsGetBlock();
  if (temp_v0 != 0) {
    puVar2 = (unsigned char *)gameFlagsGetBlock();
    if (puVar2 != (unsigned char *)0x0) {
      puVar2 = puVar2 + 0x1590;
    }
    temp_v0 = dataTableGetEntry49(*puVar2);
    if (0 < *(short *)(temp_v0 + 0x32)) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
