/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00292200` (_code @ 0x292200, 0x100 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_002a89e4(int);
/* Supplied declaration required: FUN_002b9364. */


int FUN_00292200(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = 0;
  if (*param_1 < 0) {
    if (-1 < *param_2) {
      temp_v0 = 1;
    }
  }
  else if (*param_2 < 0) {
    temp_v0 = -1;
  }
  else {
    temp_v0 = FUN_002a89e4(*param_1);
    temp_v1 = FUN_002a89e4(*param_2);
    temp_v0 = (int)*(short *)(temp_v1 + 0xe) - (int)*(short *)(temp_v0 + 0xe);
    if (temp_v0 == 0) {
      temp_v0 = 0;
      if (*param_1 < 0) {
        if (-1 < *param_2) {
          temp_v0 = 1;
        }
      }
      else if (*param_2 < 0) {
        temp_v0 = -1;
      }
      else {
        temp_v1 = FUN_002a89e4(*param_1);
        temp_v2 = FUN_002a89e4(*param_2);
        temp_v0 = (unsigned int)*(unsigned char *)(temp_v2 + 0x48) - (unsigned int)*(unsigned char *)(temp_v1 + 0x48);
        if (temp_v0 == 0) {
          temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0x46);
          FUN_002b9364();
          temp_v4 = (unsigned int)*(unsigned short *)(temp_v2 + 0x46);
          FUN_002b9364();
          temp_v0 = (unsigned int)*(unsigned char *)(temp_v3 + 2) - (unsigned int)*(unsigned char *)(temp_v4 + 2);
          if (temp_v0 == 0) {
            return (unsigned int)*(unsigned short *)(temp_v1 + 0x46) - (unsigned int)*(unsigned short *)(temp_v2 + 0x46);
          }
        }
      }
      return temp_v0;
    }
  }
  return temp_v0;
}
