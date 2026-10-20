#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_00203a6c(int);
int FUN_0035bb70(void);
int FUN_0035bbc4(void);
int FUN_003d8f20(void);

extern unsigned char DAT_0057f554; /* 0x57f554 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
extern int FUN_00203a5c(void);
/* Supplied declaration required: FUN_00203a6c. */
/* Supplied declaration required: FUN_0035bb70. */
/* Supplied declaration required: FUN_0035bbc4. */
/* Supplied declaration required: FUN_003d8f20. */


unsigned int FUN_0031be7c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00203a5c();
  if (temp_v0 != 0) {
    FUN_003d8f20();
    FUN_00203a6c(0);
  }
  temp_v0 = FUN_00163e40((*(unsigned int *)((unsigned char *)&DAT_0057f554 + 0x4)));
  if (temp_v0 != 0) {
    FUN_0035bb70();
    FUN_0035bbc4();
    FUN_001631d0((*(unsigned int *)((unsigned char *)&DAT_0057f554 + 0x4)),0);
  }
  return 1;
}

} /* extern "C" */
