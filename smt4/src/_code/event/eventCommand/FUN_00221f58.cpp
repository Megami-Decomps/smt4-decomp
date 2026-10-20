#include "romwright_types.h"

extern "C" {

int FUN_0024dc64(void);
int FUN_0024dcec(int);
int FUN_0024dcfc(void);
int FUN_00262a38(void);
int FUN_002c43b4(unsigned int, int);

extern unsigned char DAT_0043e088; /* 0x43e088 */

/* Supplied declaration required: FUN_0024dc64. */
/* Supplied declaration required: FUN_0024dcec. */
/* Supplied declaration required: FUN_0024dcfc. */
extern int FUN_002580b4(void);
/* Supplied declaration required: FUN_00262a38. */
extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002c43b4. */


unsigned int FUN_00221f58(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002580b4();
  if (temp_v0 != 0) {
    FUN_0024dcfc();
    FUN_0024dcec(0);
  }
  temp_v0 = FUN_002bf244((*(unsigned int *)((unsigned char *)&DAT_0043e088 + 0x4)));
  if (temp_v0 != 0) {
    FUN_00262a38();
    FUN_0024dc64();
    FUN_002c43b4((*(unsigned int *)((unsigned char *)&DAT_0043e088 + 0x4)),0);
  }
  return 1;
}

} /* extern "C" */
