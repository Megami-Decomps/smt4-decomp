/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013cd7c` (_code @ 0x13cd7c, 0x200 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

extern int FUN_001546e8(unsigned int);
/* Supplied declaration required: FUN_00154edc. */
/* Supplied declaration required: FUN_00155024. */
/* Supplied declaration required: FUN_00157558. */
extern int FUN_00164a9c(void);


unsigned int FUN_0013cd7c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int unaff_r5;
  int *piVar4;
  int temp_v3;
  int unaff_r7;
  int *piVar6;
  int *piVar7;
  
  temp_v1 = FUN_00164a9c();
  *(unsigned char *)(temp_v1 + 0xfae) = 0;
  temp_v2 = FUN_001546e8(0);
  if ((((temp_v2 != 0) || (*(char *)(temp_v1 + 0xfa4) == '\0')) || (*(char *)(temp_v1 + 0xfa5) == '\0'))
     || ((piVar7 = (int *)(temp_v1 + 0x1490), *piVar7 == 0 || (*(char *)(temp_v1 + 0x148c) != '\0')))) {
    return 0;
  }
  FUN_00157558(DAT_0059dbb4);
  *(unsigned int *)(*piVar7 + 0x14) = 0x200;
  *(unsigned int *)(*piVar7 + 0x18) = 0x200;
  temp_v0 = 0;
  FUN_00154edc(0,*piVar7);
  *(unsigned char *)(temp_v1 + 0xfac) = temp_v0;
  temp_v2 = FUN_001546e8(0);
  temp_v3 = *(int *)(temp_v1 + 0xfa8);
  if ((temp_v2 == 0) && ((temp_v3 >= 2 && (temp_v3 = temp_v3 - 1, temp_v3 < 1)))) {
    temp_v3 = 1;
  }
  if (*(char *)(temp_v1 + 0x1494) != '\0') {
    if (0 < temp_v3) {
      unaff_r5 = temp_v1 + 0x1400;
      unaff_r7 = temp_v1 + 0x1400;
    }
    temp_v2 = 0;
    if (0 < temp_v3) {
      piVar4 = (int *)(unaff_r5 + 0x9c);
      piVar6 = (int *)(unaff_r7 + 0x98);
      do {
        FUN_00155024(*piVar7,*piVar6);
        *(int *)(*piVar6 + 0x14) = *(int *)(*piVar7 + 0x14) >> 1;
        *(int *)(*piVar6 + 0x18) = *(int *)(*piVar7 + 0x18) >> 1;
        while( 1 ) {
          temp_v2 = temp_v2 + 1;
          if (temp_v3 <= temp_v2) {
            *(unsigned char *)(temp_v1 + 0xfae) = 1;
            *(unsigned char *)(temp_v1 + 0xfad) = 0;
            return 0;
          }
          if (temp_v2 == 0) break;
          if (temp_v2 != 1) {
            FUN_00155024(*piVar4,*piVar4);
            *(int *)(*piVar4 + 0x14) = *(int *)(*piVar4 + 0x14) >> 1;
            *(int *)(*piVar4 + 0x18) = *(int *)(*piVar4 + 0x18) >> 1;
          }
          else {
            FUN_00155024(*piVar6,*piVar4);
            *(int *)(*piVar4 + 0x14) = *(int *)(*piVar6 + 0x14) >> 1;
            *(int *)(*piVar4 + 0x18) = *(int *)(*piVar6 + 0x18) >> 1;
          }
        }
      } while( 1 );
    }
  }
  else {
    temp_v2 = 0;
    if (temp_v2 < temp_v3) {
      do {
        FUN_00155024(*piVar7,*piVar7);
        temp_v2 = temp_v2 + 1;
        *(int *)(*piVar7 + 0x14) = *(int *)(*piVar7 + 0x14) >> 1;
        *(int *)(*piVar7 + 0x18) = *(int *)(*piVar7 + 0x18) >> 1;
      } while (temp_v2 < temp_v3);
    }
  }
  *(unsigned char *)(temp_v1 + 0xfae) = 1;
  *(unsigned char *)(temp_v1 + 0xfad) = 0;
  return 0;
}
