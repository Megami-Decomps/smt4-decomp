/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cad18` (_code @ 0x2cad18, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a4894(...);

extern int g_partyPanel; /* 0x57f268 */

extern int FUN_002a4878(int);
/* Supplied declaration required: FUN_002a4894. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_002cad18(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = g_partyPanel;
  temp_v0 = *(int *)(g_partyPanel + 0x20);
  if (temp_v0 != 6) {
    param_2 = *(int *)(g_partyPanel + 0x1c);
  }
  if (temp_v0 == 6 || param_2 == 6) {
    return 0;
  }
  if (!(temp_v0 == 4 || param_2 == 4)) {
    temp_v2 = g_partyPanel + 0xdb4;
    if (!(temp_v0 == 8 || param_2 == 8)) {
      if (temp_v0 == 10 || param_2 == 10) {
        if (*(short *)(g_partyPanel + 0x38) < 0) {
          return 1;
        }
        return 0;
      }
      if (temp_v0 != 0x14 && param_2 != 0x14) {
        return 0;
      }
      if (*(char *)(g_partyPanel + 0x42) != '\0') {
        temp_v1 = FUN_002a4894(temp_v2);
        if (temp_v1 != 0) {
          return 0;
        }
        temp_v1 = FUN_002a4878(temp_v2);
      }
      else {
        temp_v0 = FUN_002a4894(g_partyPanel + 0xd50);
        if (temp_v0 != 0) {
          return 0;
        }
        temp_v1 = FUN_002a4878(temp_v1 + 0xd50);
      }
    }
    else if (*(char *)(g_partyPanel + 0x42) != '\0') {
      temp_v1 = FUN_002a4894(temp_v2);
      if (temp_v1 != 0) {
        return 0;
      }
      temp_v1 = FUN_002a4878(temp_v2);
    }
    else {
      temp_v0 = FUN_002a4894(g_partyPanel + 0xd50);
      if (temp_v0 != 0) {
        return 0;
      }
      temp_v1 = FUN_002a4878(temp_v1 + 0xd50);
    }
  }
  else {
    temp_v1 = g_partyPanel + 0xc24;
    temp_v0 = FUN_002a4894();
    if (temp_v0 != 0) {
      return 0;
    }
    temp_v1 = FUN_002a4878(temp_v1);
  }
  if (temp_v1 == 0) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
