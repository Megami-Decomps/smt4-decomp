#include "romwright_types.h"

extern "C" {

int FUN_003d9164(void);
int FUN_004f6184(void);

extern unsigned int DAT_005712f0; /* 0x5712f0 */
extern int DAT_00571508; /* 0x571508 */
extern int DAT_00573808; /* 0x573808 */

/* Supplied declaration required: FUN_003d9164. */
extern int FUN_0040de1c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_004f6184. */
extern int FUN_004f6384(int);


unsigned int FUN_003e8460(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0040de1c(DAT_005712f0,0);
  if (temp_v0 > 0) {
    return 0;
  }
  temp_v0 = FUN_004f6384(DAT_00573808);
  if (temp_v0 == 0) {
    return temp_v0;
  }
  if (DAT_00573808 != 0) {
    FUN_004f6184();
  }
  *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) & 0xffffbfff;
  FUN_003d9164();
  return 1;
}

} /* extern "C" */
