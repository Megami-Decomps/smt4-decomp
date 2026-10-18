/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001084f0` (_code @ 0x1084f0, 0x204 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bfc88. */
extern unsigned char FUN_002bfcb4(unsigned int, int);
extern int FUN_002c00e8(unsigned int);
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c3ba8. */


unsigned int FUN_001084f0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int unaff_r7;
  int *piVar5;
  int unaff_r8;
  int *piVar6;
  int *piVar7;
  
  temp_v1 = FUN_002c0ac8();
  *(unsigned char *)(temp_v1 + 0xe96) = 0;
  temp_v2 = FUN_002c00e8(0);
  if ((((temp_v2 != 0) || (*(char *)(temp_v1 + 0xe8c) == '\0')) || (*(char *)(temp_v1 + 0xe8d) == '\0'))
     || ((piVar7 = (int *)(temp_v1 + 0xfdc), *(int *)(temp_v1 + 0xfdc) == 0 ||
         (*(char *)(temp_v1 + 0xfd8) != '\0')))) {
    return 0;
  }
  FUN_002c3ba8(DAT_0044ea00);
  *(unsigned int *)(*(int *)(temp_v1 + 0xfdc) + 0x14) = 0x200;
  *(unsigned int *)(*piVar7 + 0x18) = 0x200;
  temp_v0 = FUN_002bfcb4(0,*piVar7);
  *(unsigned char *)(temp_v1 + 0xe94) = temp_v0;
  temp_v2 = FUN_002c00e8(0);
  temp_v3 = *(int *)(temp_v1 + 0xe90);
  if ((temp_v2 == 0) && ((temp_v3 >= 2 && (temp_v3 = temp_v3 - 1, temp_v3 < 1)))) {
    temp_v3 = 1;
  }
  if (*(char *)(temp_v1 + 0xfe0) != '\0') {
    if (0 < temp_v3) {
      unaff_r7 = temp_v1 + 0xc00;
      unaff_r8 = temp_v1 + 0xc00;
    }
    temp_v2 = 0;
    if (0 < temp_v3) {
      piVar5 = (int *)(unaff_r7 + 1000);
      piVar6 = (int *)(unaff_r8 + 0x3e4);
      do {
        FUN_002bfc88(*(unsigned int *)(temp_v1 + 0xfdc),*(unsigned int *)(temp_v1 + 0xfe4));
        *(int *)(*piVar6 + 0x14) = *(int *)(*piVar7 + 0x14) >> 1;
        *(int *)(*piVar6 + 0x18) = *(int *)(*piVar7 + 0x18) >> 1;
        while( 1 ) {
          temp_v2 = temp_v2 + 1;
          if (temp_v3 <= temp_v2) {
            *(unsigned char *)(temp_v1 + 0xe96) = 1;
            *(unsigned char *)(temp_v1 + 0xe95) = 0;
            return 0;
          }
          if (temp_v2 == 0) break;
          if (temp_v2 != 1) {
            FUN_002bfc88(*(unsigned int *)(temp_v1 + 0xfe8),*(unsigned int *)(temp_v1 + 0xfe8));
            *(int *)(*piVar5 + 0x14) = *(int *)(*piVar5 + 0x14) >> 1;
            *(int *)(*piVar5 + 0x18) = *(int *)(*piVar5 + 0x18) >> 1;
          }
          else {
            FUN_002bfc88(*(unsigned int *)(temp_v1 + 0xfe4),*(unsigned int *)(temp_v1 + 0xfe8));
            *(int *)(*piVar5 + 0x14) = *(int *)(*piVar6 + 0x14) >> 1;
            *(int *)(*piVar5 + 0x18) = *(int *)(*piVar6 + 0x18) >> 1;
          }
        }
      } while( 1 );
    }
  }
  else {
    temp_v2 = 0;
    if (temp_v2 < temp_v3) {
      do {
        FUN_002bfc88(*(unsigned int *)(temp_v1 + 0xfdc),*(unsigned int *)(temp_v1 + 0xfdc));
        temp_v2 = temp_v2 + 1;
        *(int *)(*piVar7 + 0x14) = *(int *)(*piVar7 + 0x14) >> 1;
        *(int *)(*piVar7 + 0x18) = *(int *)(*piVar7 + 0x18) >> 1;
      } while (temp_v2 < temp_v3);
    }
  }
  *(unsigned char *)(temp_v1 + 0xe96) = 1;
  *(unsigned char *)(temp_v1 + 0xe95) = 0;
  return 0;
}
