/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025043c` (_code @ 0x25043c, 0x184 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023d9b8(int, int, unsigned int);
int FUN_002ae164(void);
int FUN_002b4670(void);
int FUN_0033fe6c(int, int, int);

/* Supplied declaration required: FUN_0023d9b8. */
extern int btlGetMainState(void);
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: FUN_002b4670. */
/* Supplied declaration required: FUN_0033fe6c. */


unsigned int FUN_0025043c(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if ((param_2 == 0) || (FUN_002b4670(), param_2 == 0)) {
    return 1;
  }
  if ((*(char *)(param_2 + 0x6d) != '\x02' && *(char *)(param_2 + 0x6d) != '\x03') ||
     (*(char *)(param_2 + 0x6b) != '\x01')) {
    return 2;
  }
  temp_v0 = (unsigned int)*(unsigned short *)(param_2 + 0x62);
  if (temp_v0 == 0) {
    temp_v1 = btlGetMainState();
    if ((*(unsigned int *)(temp_v1 + 0x44a8) & 0x2000000) != 0) {
      return 0;
    }
    FUN_0033fe6c(param_1,1,param_2);
    temp_v2 = 0;
    if (param_1 != 0) {
      temp_v2 = 3;
    }
    return temp_v2;
  }
  FUN_002ae164();
  if (temp_v0 == 0) {
    return 1;
  }
  if ((*(unsigned int *)(temp_v0 + 0x28) & 0x7ff) >> 9 != 2 && (*(unsigned int *)(temp_v0 + 0x28) & 0x7ff) >> 9 != 3) {
    return 2;
  }
  switch(*(unsigned char *)(temp_v0 + 0x23)) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 6:
  case 10:
    break;
  default:
    temp_v1 = btlGetMainState();
    if ((*(unsigned int *)(temp_v1 + 0x44a8) & 0x2000000) == 0) {
      if (*(char *)(temp_v0 + 0x23) != '\x03') {
        switch((*(unsigned int *)(temp_v0 + 0x28) & 0x1ff) >> 5) {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 8:
          return 0;
        }
      }
      FUN_0023d9b8(param_1,1,temp_v0);
      temp_v2 = 0;
      if (param_1 != 0) {
        temp_v2 = 3;
      }
      return temp_v2;
    }
  }
  return 0;
}

} /* extern "C" */
