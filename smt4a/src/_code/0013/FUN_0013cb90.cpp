/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013cb90` (_code @ 0x13cb90, 0x1e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00154edc(int, int);
int surfaceCopy(int, int);
int FUN_00157558(unsigned int);

extern unsigned int g_renderCtx; /* 0x59dbb4 */

extern int FUN_001546e8(unsigned int);
/* Supplied declaration required: FUN_00154edc. */
/* Supplied declaration required: surfaceCopy. */
/* Supplied declaration required: FUN_00157558. */
extern int jobGetWork(void);


char FUN_0013cb90(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int unaff_r5;
  int *piVar5;
  int temp_v4;
  int unaff_r7;
  int *piVar7;
  int *piVar8;
  unsigned char temp_v5;
  
  temp_v2 = jobGetWork();
  *(unsigned char *)(temp_v2 + 0xfad) = 0;
  temp_v5 = *(char *)(temp_v2 + 0xfa4) != '\0';
  temp_v1 = '\0';
  if (temp_v5) {
    temp_v1 = *(char *)(temp_v2 + 0xfa5);
  }
  if (temp_v5 && temp_v1 != '\0') {
    piVar8 = (int *)(temp_v2 + 0x1490);
    temp_v1 = '\0';
    if (*piVar8 != 0) {
      if (*(char *)(temp_v2 + 0x148c) != '\0') {
        temp_v1 = '\0';
      }
      else {
        FUN_00157558(g_renderCtx);
        *(unsigned int *)(*piVar8 + 0x14) = 0x200;
        *(unsigned int *)(*piVar8 + 0x18) = 0x200;
        temp_v0 = 0;
        FUN_00154edc(0,*piVar8);
        *(unsigned char *)(temp_v2 + 0xfac) = temp_v0;
        temp_v3 = FUN_001546e8(0);
        temp_v4 = *(int *)(temp_v2 + 0xfa8);
        if (((temp_v3 == 0) && (temp_v4 >= 2)) && (temp_v4 = temp_v4 - 1, temp_v4 < 1)) {
          temp_v4 = 1;
        }
        if (*(char *)(temp_v2 + 0x1494) != '\0') {
          if (0 < temp_v4) {
            unaff_r5 = temp_v2 + 0x1400;
            unaff_r7 = temp_v2 + 0x1400;
          }
          temp_v3 = 0;
          if (0 < temp_v4) {
            piVar5 = (int *)(unaff_r5 + 0x9c);
            piVar7 = (int *)(unaff_r7 + 0x98);
            do {
              surfaceCopy(*piVar8,*piVar7);
              *(int *)(*piVar7 + 0x14) = *(int *)(*piVar8 + 0x14) >> 1;
              *(int *)(*piVar7 + 0x18) = *(int *)(*piVar8 + 0x18) >> 1;
              while( 1 ) {
                temp_v3 = temp_v3 + 1;
                if (temp_v4 <= temp_v3) {
                  *(unsigned char *)(temp_v2 + 0xfad) = 1;
                  temp_v1 = '\0';
                  *(unsigned char *)(temp_v2 + 0xfae) = 0;
                  return temp_v1;
                }
                if (temp_v3 == 0) break;
                if (temp_v3 != 1) {
                  surfaceCopy(*piVar5,*piVar5);
                  *(int *)(*piVar5 + 0x14) = *(int *)(*piVar5 + 0x14) >> 1;
                  *(int *)(*piVar5 + 0x18) = *(int *)(*piVar5 + 0x18) >> 1;
                }
                else {
                  surfaceCopy(*piVar7,*piVar5);
                  *(int *)(*piVar5 + 0x14) = *(int *)(*piVar7 + 0x14) >> 1;
                  *(int *)(*piVar5 + 0x18) = *(int *)(*piVar7 + 0x18) >> 1;
                }
              }
            } while( 1 );
          }
        }
        else {
          temp_v3 = 0;
          if (temp_v3 < temp_v4) {
            do {
              surfaceCopy(*piVar8,*piVar8);
              temp_v3 = temp_v3 + 1;
              *(int *)(*piVar8 + 0x14) = *(int *)(*piVar8 + 0x14) >> 1;
              *(int *)(*piVar8 + 0x18) = *(int *)(*piVar8 + 0x18) >> 1;
            } while (temp_v3 < temp_v4);
          }
        }
        *(unsigned char *)(temp_v2 + 0xfad) = 1;
        temp_v1 = '\0';
        *(unsigned char *)(temp_v2 + 0xfae) = 0;
      }
    }
  }
  return temp_v1;
}

} /* extern "C" */
