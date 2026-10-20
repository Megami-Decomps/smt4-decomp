#include "romwright_types.h"

extern "C" {

int FUN_00162e8c(void);

/* Supplied declaration required: FUN_00162e8c. */
extern int dataTableGetEntry49(unsigned char);


unsigned char FUN_00325064(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = FUN_00162e8c();
  if (temp_v0 != 0) {
    puVar2 = (unsigned char *)FUN_00162e8c();
    if (puVar2 != (unsigned char *)0x0) {
      puVar2 = puVar2 + 0x1590;
    }
    temp_v0 = dataTableGetEntry49(*puVar2);
    if (temp_v0 != 0) {
      return *(short *)(temp_v0 + 6) != 0;
    }
  }
  return 0;
}

} /* extern "C" */
