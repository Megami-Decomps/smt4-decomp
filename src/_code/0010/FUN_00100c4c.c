/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100c4c` (_code @ 0x100c4c, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


char * FUN_00100c4c(char *param_1,char *param_2)

{
/* irregular: 3 goto(s) */
  char temp_v0;
  char temp_v1;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = param_2;
  pcVar4 = param_1;
LAB_00100c54:
  temp_v0 = *param_1;
  temp_v1 = *pcVar3;
  param_1 = param_1 + 1;
  if (temp_v0 != '\0') goto LAB_00100c60;
  goto LAB_00100c64;
LAB_00100c60:
  pcVar3 = pcVar3 + 1;
  if (temp_v0 != temp_v1) {
LAB_00100c64:
    pcVar3 = pcVar4;
    if ((temp_v1 == '\0') || (pcVar3 = (char *)0x0, temp_v0 == '\0')) {
      return pcVar3;
    }
    param_1 = pcVar4 + 1;
    pcVar3 = param_2;
    pcVar4 = param_1;
  }
  goto LAB_00100c54;
}
