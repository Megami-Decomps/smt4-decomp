/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a8158` (_code @ 0x1a8158, 0xf4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int FUN_002a89e4(int);
/* Supplied declaration required: FUN_002b9364. */


unsigned int FUN_001a8158(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = *param_2;
  if (-1 < *param_1) {
    if (temp_v3 < 0) {
      return 0xffffffff;
    }
    temp_v3 = FUN_002a89e4(*param_1);
    temp_v0 = FUN_002a89e4(*param_2);
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v3 + 0x46);
    FUN_002b9364();
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0x46);
    FUN_002b9364();
    temp_v1 = (unsigned int)*(unsigned char *)(temp_v1 + 5) - (unsigned int)*(unsigned char *)(temp_v2 + 5);
    if (temp_v1 != 0) {
      return temp_v1;
    }
    if (-1 < *param_1) {
      if (*param_2 < 0) {
        return 0xffffffff;
      }
      temp_v3 = FUN_002a89e4(*param_1);
      temp_v0 = FUN_002a89e4(*param_2);
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v3 + 0x46);
      FUN_002b9364();
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0x46);
      FUN_002b9364();
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v1 + 2) - (unsigned int)*(unsigned char *)(temp_v2 + 2);
      if (temp_v1 != 0) {
        return temp_v1;
      }
      temp_v1 = 0;
      if (*param_1 < 0) {
        if (-1 < *param_2) {
          temp_v1 = 1;
        }
      }
      else if (*param_2 < 0) {
        temp_v1 = 0xffffffff;
      }
      else {
        temp_v3 = FUN_002a89e4(*param_1);
        temp_v0 = FUN_002a89e4(*param_2);
        temp_v1 = (unsigned int)*(unsigned char *)(temp_v0 + 0x48) - (unsigned int)*(unsigned char *)(temp_v3 + 0x48);
        if (temp_v1 == 0) {
          temp_v1 = (unsigned int)*(unsigned short *)(temp_v3 + 0x46);
          FUN_002b9364();
          temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0x46);
          FUN_002b9364();
          temp_v1 = (unsigned int)*(unsigned char *)(temp_v1 + 2) - (unsigned int)*(unsigned char *)(temp_v2 + 2);
          if (temp_v1 == 0) {
            return (unsigned int)*(unsigned short *)(temp_v3 + 0x46) - (unsigned int)*(unsigned short *)(temp_v0 + 0x46);
          }
        }
      }
      return temp_v1;
    }
    temp_v3 = *param_2;
  }
  return (unsigned int)(-1 < temp_v3);
}
