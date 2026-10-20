#include "romwright_types.h"

extern "C" {

int FUN_002a780c(unsigned int);
int FUN_002ae7e8(int);
int FUN_002ae898(int, int);
int FUN_002c415c(int);

extern unsigned char DAT_0043dc20; /* 0x43dc20 */

/* Supplied declaration required: FUN_002a780c. */
/* Supplied declaration required: FUN_002ae7e8. */
/* Supplied declaration required: FUN_002ae898. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */


void FUN_002ed5dc(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  FUN_002a780c(*(unsigned int *)(temp_v0 + 0xc));
  FUN_002a780c(*(unsigned int *)(temp_v0 + 0x10));
  FUN_002ae898(0x2d,0);
  FUN_002ae7e8(0x2d);
  FUN_002c415c(temp_v0);
  (*(unsigned int *)((unsigned char *)&DAT_0043dc20 + 0x8)) = 0;
  return;
}

} /* extern "C" */
