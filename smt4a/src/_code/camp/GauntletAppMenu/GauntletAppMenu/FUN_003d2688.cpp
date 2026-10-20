#include "romwright_types.h"

extern "C" {

int FUN_0016c410(unsigned int);
int FUN_0016c4b8(unsigned int, int);
int FUN_0016c560(unsigned int);
int FUN_003db56c(unsigned int);

extern unsigned int DAT_0057f238; /* 0x57f238 */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_003db56c. */


unsigned int FUN_003d2688(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = DAT_0057f238;
  FUN_0016c4b8(DAT_0059dbb4,0);
  FUN_003db56c(temp_v0);
  FUN_0016c560(DAT_0059dbb4);
  FUN_0016c410(DAT_0059dbb4);
  return 0;
}

} /* extern "C" */
