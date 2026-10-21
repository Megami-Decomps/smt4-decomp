/* NON_MATCHING: romwright 0.5.0 decompilation of `questRequirementsMet` (_code @ 0x240a6c, 0x248 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable1bOr1cGetRecord(void);
int gameFlagIsSet(...);

extern int padGetStickHorizontalDirection(void);
extern int padStickDirectionIsDown(unsigned int);
extern int questIsCompleted(void);
/* Supplied declaration required: dataTable1bOr1cGetRecord. */
/* Supplied declaration required: gameFlagIsSet. */


unsigned int questRequirementsMet(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1;
  dataTable1bOr1cGetRecord();
  if (temp_v1 == 0) {
    return 0;
  }
  if ((*(short *)(temp_v1 + 0x19e) != 0) && (temp_v0 = gameFlagIsSet(), temp_v0 == 0)) {
    return 0;
  }
  if ((*(short *)(temp_v1 + 0x1a8) != 0) && (temp_v0 = gameFlagIsSet(), temp_v0 != 0)) {
    return 0;
  }
  if ((*(short *)(temp_v1 + 0x1a0) != 0) && (temp_v0 = questIsCompleted(), temp_v0 == 0)) {
    return 0;
  }
  if ((*(short *)(temp_v1 + 0x1a2) != 0) && (temp_v0 = questIsCompleted(), temp_v0 == 0)) {
    return 0;
  }
  if ((*(short *)(temp_v1 + 0x1a4) != 0) && (temp_v0 = questIsCompleted(), temp_v0 == 0)) {
    return 0;
  }
  switch(*(unsigned short *)(temp_v1 + 0x1a6)) {
  case 1:
    temp_v0 = padGetStickHorizontalDirection();
    if (temp_v0 != 5) {
      return 0;
    }
    break;
  case 2:
    temp_v0 = padGetStickHorizontalDirection();
    if (temp_v0 != 4) {
      return 0;
    }
    break;
  case 3:
    temp_v0 = padGetStickHorizontalDirection();
    if (temp_v0 != 1) {
      return 0;
    }
    break;
  case 4:
    temp_v0 = padStickDirectionIsDown(5);
    if (temp_v0 == 0) {
      return 0;
    }
    break;
  case 5:
    temp_v0 = padStickDirectionIsDown(4);
    if (temp_v0 == 0) {
      return 0;
    }
  }
  if ((((*(short *)(temp_v1 + 0x1aa) == 0) || (temp_v0 = questIsCompleted(), temp_v0 == 0)) &&
      ((*(short *)(temp_v1 + 0x1ac) == 0 || (temp_v1 = questIsCompleted(), temp_v1 == 0)))) &&
     (((((((dataTable1bOr1cGetRecord(), param_1 == 0 || ((*(unsigned char *)(param_1 + 7) & 4) == 0)) ||
          (temp_v1 = gameFlagIsSet(0x675), temp_v1 != 0)) ||
         ((temp_v1 = gameFlagIsSet(0x676), temp_v1 != 0 || (temp_v1 = gameFlagIsSet(0x677), temp_v1 != 0))))
        || (temp_v1 = gameFlagIsSet(0x678), temp_v1 != 0)) ||
       ((temp_v1 = gameFlagIsSet(0x679), temp_v1 != 0 || (temp_v1 = gameFlagIsSet(0x67a), temp_v1 != 0)))) ||
      ((temp_v1 = gameFlagIsSet(0x67b), temp_v1 != 0 || (temp_v1 = gameFlagIsSet(0x674), temp_v1 != 0)))))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
