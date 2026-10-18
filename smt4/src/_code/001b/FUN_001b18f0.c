/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b18f0` (_code @ 0x1b18f0, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int FUN_002a8740(int);
/* Supplied declaration required: FUN_002b9024. */


int FUN_001b18f0(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
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
    temp_v0 = FUN_002a8740(*param_1);
    temp_v1 = FUN_002a8740(*param_2);
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0x46);
    FUN_002b9024();
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0x46);
    FUN_002b9024();
    temp_v0 = (unsigned int)*(unsigned char *)(temp_v2 + 2) - (unsigned int)*(unsigned char *)(temp_v3 + 2);
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
        temp_v1 = FUN_002a8740(*param_1);
        temp_v4 = FUN_002a8740(*param_2);
        temp_v0 = (unsigned int)*(unsigned char *)(temp_v4 + 0x48) - (unsigned int)*(unsigned char *)(temp_v1 + 0x48);
        if (temp_v0 == 0) {
          temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x46);
          FUN_002b9024();
          temp_v3 = (unsigned int)*(unsigned short *)(temp_v4 + 0x46);
          FUN_002b9024();
          temp_v0 = (unsigned int)*(unsigned char *)(temp_v2 + 2) - (unsigned int)*(unsigned char *)(temp_v3 + 2);
          if (temp_v0 == 0) {
            return (unsigned int)*(unsigned short *)(temp_v1 + 0x46) - (unsigned int)*(unsigned short *)(temp_v4 + 0x46);
          }
        }
      }
      return temp_v0;
    }
  }
  return temp_v0;
}
