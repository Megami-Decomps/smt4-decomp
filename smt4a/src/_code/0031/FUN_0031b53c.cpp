/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031b53c` (_code @ 0x31b53c, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTextureCreate(void);
int sysMemClear(int, int);
int FUN_0030ea58(int *, unsigned int);
int strncpy(int, unsigned int, int);

extern int DAT_005cc500; /* 0x5cc500 */

/* Supplied declaration required: asdTextureCreate. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_0030ea58. */


void FUN_0031b53c(unsigned int param_1)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int *piVar3;
  int temp_v1;
  
  temp_v1 = 0;
  piVar3 = (int *)0x5702fc;
  do {
    piVar1 = piVar3 + 1;
    FUN_0030ea58(piVar1,param_1);
    if (piVar1 == (int *)0x0) goto LAB_0031b638;
    temp_v1 = temp_v1 + 1;
    piVar3 = piVar3 + 0x13;
  } while (temp_v1 < 0x1a);
  piVar3 = (int *)0x5cb200;
  temp_v1 = 0;
  if (temp_v1 < DAT_005cc500) {
    do {
      if (*piVar3 != 0) {
        piVar1 = piVar3 + 1;
        FUN_0030ea58(piVar1,param_1);
        if (piVar1 == (int *)0x0) {
          if (*piVar3 != 0) {
            return;
          }
          break;
        }
      }
      temp_v1 = temp_v1 + 1;
      piVar3 = piVar3 + 0x13;
    } while (temp_v1 < DAT_005cc500);
  }
  if (DAT_005cc500 < 0x40) {
    sysMemClear(DAT_005cc500 * 0x4c + 0x5cb200,0x4c);
    strncpy(DAT_005cc500 * 0x4c + 0x5cb204,param_1,0x40);
    temp_v0 = 0;
    asdTextureCreate();
    *(unsigned int *)(DAT_005cc500 * 0x4c + 0x5cb200) = temp_v0;
    DAT_005cc500 = DAT_005cc500 + 1;
  }
  return;
LAB_0031b638:
  if (*piVar3 != 0) {
    return;
  }
  if (DAT_005cc500 < 0x40) {
    sysMemClear(DAT_005cc500 * 0x4c + 0x5cb200,0x4c);
    strncpy(DAT_005cc500 * 0x4c + 0x5cb204,param_1,0x40);
    temp_v0 = 0;
    asdTextureCreate();
    *(unsigned int *)(DAT_005cc500 * 0x4c + 0x5cb200) = temp_v0;
    DAT_005cc500 = DAT_005cc500 + 1;
  }
  return;
}

} /* extern "C" */
