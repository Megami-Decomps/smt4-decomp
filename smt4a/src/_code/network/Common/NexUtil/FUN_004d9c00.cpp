#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);
int FUN_004d9430(unsigned char *);
int FUN_004d9560(unsigned char *);
int FUN_004d9b9c(unsigned char *);

extern int DAT_0058811c; /* 0x58811c */
extern unsigned char DAT_00618888; /* 0x618888 */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_004d9430. */
/* Supplied declaration required: FUN_004d9560. */
/* Supplied declaration required: FUN_004d9b9c. */
extern int FUN_0050d3a0(unsigned char *);


void FUN_004d9c00(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0050d3a0(&DAT_00618888);
  if (temp_v0 == 0) {
    FUN_004d9b9c(&DAT_00618888);
    FUN_004d9430(&DAT_00618888);
  }
  FUN_004d9560(&DAT_00618888);
  if (DAT_0058811c != 0) {
    FUN_0019a5a0();
    DAT_0058811c = 0;
  }
  return;
}

} /* extern "C" */
