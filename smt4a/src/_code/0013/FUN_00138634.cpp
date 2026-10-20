#include "romwright_types.h"

extern "C" {

int FUN_0014192c(int, int);
int FUN_00144ab4(int);
int FUN_00157558(int);
int FUN_001575cc(int);
int FUN_0017dd80(int, int);

extern unsigned char DAT_0057ffd0; /* 0x57ffd0 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_0014192c. */
/* Supplied declaration required: FUN_00144ab4. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_001575cc. */
extern int FUN_001696f4(void);
/* Supplied declaration required: FUN_0017dd80. */


unsigned int FUN_00138634(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001696f4();
  if ((temp_v0 == 1) && ((*(signed char *)((unsigned char *)&DAT_0057ffd0 + 0x1)) != '\0')) {
    FUN_00144ab4(1);
    *(unsigned int *)(DAT_0059dbb4 + 0x52c) = 1;
    FUN_0017dd80(DAT_0059dbb4,1);
    FUN_0014192c(1,0);
    FUN_001575cc(DAT_0059dbb4);
    FUN_00157558(DAT_0059dbb4);
  }
  return 0;
}

} /* extern "C" */
