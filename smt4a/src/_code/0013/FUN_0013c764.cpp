/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013c764` (_code @ 0x13c764, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00150d38(int);
int FUN_00157558(unsigned int);

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00150d38. */
/* Supplied declaration required: FUN_00157558. */
extern int FUN_00164a9c(void);


unsigned int FUN_0013c764(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = FUN_00164a9c();
  temp_v2 = temp_v1 + 0xf00;
  temp_v3 = *(char *)(temp_v1 + 0xff4) != '\0';
  temp_v0 = '\0';
  if (temp_v3) {
    temp_v0 = *(char *)(temp_v1 + 0xff5);
  }
  if (temp_v3 && temp_v0 != '\0') {
    temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + 0xffd);
  }
  if ((((temp_v3 && temp_v0 != '\0') && temp_v2 != 0) && (*(int *)(temp_v1 + 0x1490) != 0)) &&
     (*(char *)(temp_v1 + 0x148c) == '\0')) {
    FUN_00157558(DAT_0059dbb4);
    FUN_00150d38(1);
    return 0;
  }
  return 0;
}

} /* extern "C" */
