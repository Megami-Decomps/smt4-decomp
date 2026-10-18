/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00148f48` (_code @ 0x148f48, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_00589190; /* 0x589190 */
extern int *DAT_005b40e8; /* 0x5b40e8 */
extern unsigned int *DAT_005b4400; /* 0x5b4400 */


void FUN_00148f48(void)

{
/* irregular: 1 unstructured edge(s); irregular input(s): in_r12 */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  int temp_v1;
  unsigned int *puVar5;
  int *piVar6;
  romwright_code *in_r12;
  unsigned char temp_v2;
  
  if (DAT_005b40e8 == (int *)0x0) {
    return;
  }
  piVar6 = (int *)DAT_005b40e8[1];
  piVar2 = DAT_005b40e8;
  do {
    piVar1 = piVar6;
    DAT_005b40e8 = piVar2;
    if (piVar1 == (int *)0x0) {
      temp_v0 = *piVar2;
      while (temp_v0 != 0) {
        temp_v2 = temp_v0 != 0;
        if (temp_v2) {
          in_r12 = DAT_00589190;
        }
        temp_v0 = *(int *)(temp_v0 + 0x24);
        if (temp_v2 && in_r12 != (romwright_code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
        }
      }
      DAT_005b40e8 = (int *)0x0;
      return;
    }
    piVar6 = (int *)piVar1[0x11];
    if (piVar1 != (int *)0x0) {
      for (temp_v0 = *piVar2; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x24)) {
        temp_v1 = 0;
        do {
          puVar5 = (unsigned int *)(temp_v0 + temp_v1 * 0x10);
          if ((int *)puVar5[3] == piVar1) {
            if (piVar2[2] == temp_v0) {
              *DAT_005b4400 = *DAT_005b4400 | 1;
            }
            puVar5[3] = 0;
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 2);
      }
      if (*piVar1 != 0) {
        in_r12 = DAT_00589190;
        piVar2 = DAT_005b40e8;
        if (DAT_00589190 == (romwright_code *)0x0) continue;
        (*DAT_00589190)(piVar1[0xf],0x103,piVar1[0x10]);
      }
      in_r12 = DAT_00589190;
      piVar2 = DAT_005b40e8;
      if (DAT_00589190 != (romwright_code *)0x0) {
        (*DAT_00589190)(0x10000,0x100,0,piVar1);
        piVar2 = DAT_005b40e8;
      }
    }
  } while( 1 );
}
