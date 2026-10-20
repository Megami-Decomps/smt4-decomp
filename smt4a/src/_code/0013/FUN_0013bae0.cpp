#include "romwright_types.h"

extern "C" {

int FUN_00148d68(int, int, int);

/* Supplied declaration required: FUN_00148d68. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern int FUN_00192748(unsigned int);
extern int FUN_00192798(void);


void FUN_0013bae0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  int temp_v3;
  
  temp_v0 = FUN_00187180(2,3);
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  temp_v3 = 0;
  if (temp_v3 < temp_v2) {
    do {
      puVar4 = (unsigned char *)(temp_v1 + temp_v3 * 2);
      FUN_00148d68(*puVar4,puVar4[1],0);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  return;
}

} /* extern "C" */
