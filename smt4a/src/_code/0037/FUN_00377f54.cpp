/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377f54` (_code @ 0x377f54, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int controllerSetDestination(unsigned int, unsigned char [16]);
int controllerSetRotationEulerDegrees(unsigned int);

extern int g_mapGimic; /* 0x580ca0 */

/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: controllerSetRotationEulerDegrees. */


void FUN_00377f54(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [16];
  int iStack_18;
  
  temp_v1 = 0;
  iStack_18 = param_1;
  do {
    temp_v0 = g_mapGimic + temp_v1 * 0x18;
    if ((*(char *)(temp_v0 + 0x8c4) != '\0') && (*(short *)(temp_v0 + 0x8c8) == param_1)) {
      temp_v2 = *(unsigned int *)(*(int *)(temp_v0 + 0x8cc) + 4);
      controllerSetDestination(temp_v2,temp_v3);
      controllerSetRotationEulerDegrees(temp_v2);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 10);
  return;
}

} /* extern "C" */
