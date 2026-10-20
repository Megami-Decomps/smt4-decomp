#include "romwright_types.h"

extern "C" {

int FUN_003d9d9c(unsigned int);
int FUN_003daf6c(unsigned int);
int FUN_003dc924(unsigned int, unsigned int, int);

extern unsigned int DAT_0043427c; /* 0x43427c */
extern unsigned int DAT_00435d18; /* 0x435d18 */

extern int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_003d9d9c. */
/* Supplied declaration required: FUN_003daf6c. */
extern int FUN_003db1f4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003dc924. */


unsigned char FUN_00339e90(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0027e928(DAT_0043427c);
  temp_v1 = FUN_003db1f4(DAT_00435d18,*(unsigned int *)(temp_v0 + 0x594));
  if (temp_v1 != 0) {
    FUN_003daf6c(DAT_00435d18);
    FUN_003d9d9c(DAT_00435d18);
    FUN_003dc924(DAT_00435d18,*(unsigned int *)(temp_v0 + 0x594),1);
  }
  return temp_v1 != 0;
}

} /* extern "C" */
