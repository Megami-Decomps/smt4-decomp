/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010854c` (_code @ 0x10854c, 0x204 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int surfaceCopy(unsigned int, unsigned int);
int FUN_002bfadc(int, int);
int FUN_002c39a4(unsigned int);

extern unsigned int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: surfaceCopy. */
/* Supplied declaration required: FUN_002bfadc. */
extern int FUN_002bff10(unsigned int);
extern int jobGetWork(void);
/* Supplied declaration required: FUN_002c39a4. */


unsigned int FUN_0010854c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int unaff_r7;
  int *piVar5;
  int unaff_r8;
  int *piVar6;
  int *piVar7;
  
  temp_v1 = jobGetWork();
  *(unsigned char *)(temp_v1 + 0xe96) = 0;
  temp_v2 = FUN_002bff10(0);
  if ((((temp_v2 != 0) || (*(char *)(temp_v1 + 0xe8c) == '\0')) || (*(char *)(temp_v1 + 0xe8d) == '\0'))
     || ((piVar7 = (int *)(temp_v1 + 0xfdc), *(int *)(temp_v1 + 0xfdc) == 0 ||
         (*(char *)(temp_v1 + 0xfd8) != '\0')))) {
    return 0;
  }
  FUN_002c39a4(g_titleScene);
  *(unsigned int *)(*(int *)(temp_v1 + 0xfdc) + 0x14) = 0x200;
  *(unsigned int *)(*piVar7 + 0x18) = 0x200;
  temp_v0 = 0;
  FUN_002bfadc(0,*piVar7);
  *(unsigned char *)(temp_v1 + 0xe94) = temp_v0;
  temp_v2 = FUN_002bff10(0);
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
        surfaceCopy(*(unsigned int *)(temp_v1 + 0xfdc),*(unsigned int *)(temp_v1 + 0xfe4));
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
            surfaceCopy(*(unsigned int *)(temp_v1 + 0xfe8),*(unsigned int *)(temp_v1 + 0xfe8));
            *(int *)(*piVar5 + 0x14) = *(int *)(*piVar5 + 0x14) >> 1;
            *(int *)(*piVar5 + 0x18) = *(int *)(*piVar5 + 0x18) >> 1;
          }
          else {
            surfaceCopy(*(unsigned int *)(temp_v1 + 0xfe4),*(unsigned int *)(temp_v1 + 0xfe8));
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
        surfaceCopy(*(unsigned int *)(temp_v1 + 0xfdc),*(unsigned int *)(temp_v1 + 0xfdc));
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

} /* extern "C" */
