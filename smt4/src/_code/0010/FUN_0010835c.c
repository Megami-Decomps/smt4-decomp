/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010835c` (_code @ 0x10835c, 0x1ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bfab0. */
/* Supplied declaration required: FUN_002bfadc. */
extern int FUN_002bff10(unsigned int);
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c39a4. */


char FUN_0010835c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int unaff_r7;
  int *piVar6;
  int unaff_r8;
  int *piVar7;
  int *piVar8;
  unsigned char temp_v5;
  
  temp_v2 = FUN_002c08f0();
  *(unsigned char *)(temp_v2 + 0xe95) = 0;
  temp_v5 = *(char *)(temp_v2 + 0xe8c) != '\0';
  temp_v1 = '\0';
  if (temp_v5) {
    temp_v1 = *(char *)(temp_v2 + 0xe8d);
  }
  if (temp_v5 && temp_v1 != '\0') {
    piVar8 = (int *)(temp_v2 + 0xfdc);
    temp_v1 = '\0';
    if (*(int *)(temp_v2 + 0xfdc) != 0) {
      if (*(char *)(temp_v2 + 0xfd8) != '\0') {
        temp_v1 = '\0';
      }
      else {
        FUN_002c39a4(DAT_0044ea00);
        *(unsigned int *)(*(int *)(temp_v2 + 0xfdc) + 0x14) = 0x200;
        *(unsigned int *)(*piVar8 + 0x18) = 0x200;
        temp_v0 = 0;
        FUN_002bfadc(0,*piVar8);
        *(unsigned char *)(temp_v2 + 0xe94) = temp_v0;
        temp_v3 = FUN_002bff10(0);
        temp_v4 = *(int *)(temp_v2 + 0xe90);
        if (((temp_v3 == 0) && (temp_v4 >= 2)) && (temp_v4 = temp_v4 - 1, temp_v4 < 1)) {
          temp_v4 = 1;
        }
        if (*(char *)(temp_v2 + 0xfe0) != '\0') {
          if (0 < temp_v4) {
            unaff_r7 = temp_v2 + 0xc00;
            unaff_r8 = temp_v2 + 0xc00;
          }
          temp_v3 = 0;
          if (0 < temp_v4) {
            piVar6 = (int *)(unaff_r7 + 1000);
            piVar7 = (int *)(unaff_r8 + 0x3e4);
            do {
              FUN_002bfab0(*(unsigned int *)(temp_v2 + 0xfdc),*(unsigned int *)(temp_v2 + 0xfe4));
              *(int *)(*piVar7 + 0x14) = *(int *)(*piVar8 + 0x14) >> 1;
              *(int *)(*piVar7 + 0x18) = *(int *)(*piVar8 + 0x18) >> 1;
              while( 1 ) {
                temp_v3 = temp_v3 + 1;
                if (temp_v4 <= temp_v3) {
                  *(unsigned char *)(temp_v2 + 0xe95) = 1;
                  temp_v1 = '\0';
                  *(unsigned char *)(temp_v2 + 0xe96) = 0;
                  return temp_v1;
                }
                if (temp_v3 == 0) break;
                if (temp_v3 != 1) {
                  FUN_002bfab0(*(unsigned int *)(temp_v2 + 0xfe8),*(unsigned int *)(temp_v2 + 0xfe8));
                  *(int *)(*piVar6 + 0x14) = *(int *)(*piVar6 + 0x14) >> 1;
                  *(int *)(*piVar6 + 0x18) = *(int *)(*piVar6 + 0x18) >> 1;
                }
                else {
                  FUN_002bfab0(*(unsigned int *)(temp_v2 + 0xfe4),*(unsigned int *)(temp_v2 + 0xfe8));
                  *(int *)(*piVar6 + 0x14) = *(int *)(*piVar7 + 0x14) >> 1;
                  *(int *)(*piVar6 + 0x18) = *(int *)(*piVar7 + 0x18) >> 1;
                }
              }
            } while( 1 );
          }
        }
        else {
          temp_v3 = 0;
          if (temp_v3 < temp_v4) {
            do {
              FUN_002bfab0(*(unsigned int *)(temp_v2 + 0xfdc),*(unsigned int *)(temp_v2 + 0xfdc));
              temp_v3 = temp_v3 + 1;
              *(int *)(*piVar8 + 0x14) = *(int *)(*piVar8 + 0x14) >> 1;
              *(int *)(*piVar8 + 0x18) = *(int *)(*piVar8 + 0x18) >> 1;
            } while (temp_v3 < temp_v4);
          }
        }
        *(unsigned char *)(temp_v2 + 0xe95) = 1;
        temp_v1 = '\0';
        *(unsigned char *)(temp_v2 + 0xe96) = 0;
      }
    }
  }
  return temp_v1;
}
