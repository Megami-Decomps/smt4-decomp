/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013e8f8` (_code @ 0x13e8f8, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014b01c(int);
int FUN_00157558(unsigned int);

extern int DAT_0057f65c; /* 0x57f65c */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_0014b01c. */
/* Supplied declaration required: FUN_00157558. */
extern int FUN_00164a9c(void);


unsigned char FUN_0013e8f8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00164a9c();
  if (((*(char *)(temp_v0 + 0x1414) != '\0') && (*(char *)(temp_v0 + 0x1417) != '\0')) &&
     (*(char *)(temp_v0 + 0xc) != '\0')) {
    FUN_00157558(DAT_0059dbb4);
    temp_v1 = *(int *)(temp_v0 + 0x10);
    if ((0 < temp_v1) || (0 < *(int *)(temp_v0 + 0x14))) {
      temp_v2 = *(int *)(temp_v0 + 0x14);
      if (temp_v2 < 1) {
        temp_v1 = temp_v1 + 1;
      }
      *(int *)(temp_v0 + 0x18) = *(int *)(temp_v0 + 0x18) + 1;
      if (temp_v2 < 1) {
        *(int *)(temp_v0 + 0x10) = temp_v1;
      }
      else {
        *(int *)(temp_v0 + 0x14) = temp_v2 + 1;
        temp_v0 = DAT_0057f65c;
        if (temp_v2 + 1 >= 0x1f) {
          *(unsigned char *)(DAT_0057f65c + 0xc) = 0;
          *(unsigned int *)(temp_v0 + 0x10) = 0;
          *(unsigned int *)(temp_v0 + 0x14) = 0;
          *(unsigned int *)(temp_v0 + 0x18) = 0;
          *(unsigned char *)(temp_v0 + 0x1414) = 0;
          *(unsigned char *)(temp_v0 + 0x1417) = 0;
          *(unsigned char *)(temp_v0 + 0x1418) = 0;
          *(unsigned char *)(temp_v0 + 0x1419) = 0;
          *(unsigned char *)(temp_v0 + 0x144c) = 0;
          return 0;
        }
      }
      FUN_0014b01c(1);
    }
  }
  return 0;
}

} /* extern "C" */
