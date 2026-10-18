/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ff888` (_code @ 0x3ff888, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0018719c(unsigned int);
extern int FUN_001ab854(int);
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001b4a90. */
extern int FUN_004bd0d8(int);
extern int FUN_004bd340(int, unsigned int);
extern int FUN_004bd730(void);


unsigned int FUN_003ff888(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  char acStack_30 [28];
  
  temp_v0 = FUN_0018719c(0x401);
  if (temp_v0 != 0) {
    temp_v0 = FUN_001ab888();
    temp_v4 = 0;
    FUN_001b4a90(acStack_30,0x18,0xffffffff);
    temp_v3 = (unsigned int)*(unsigned char *)(temp_v0 + 0x1ca3);
    if (temp_v3 != 0) {
      pcVar2 = (char *)(temp_v0 + 0x1c88);
      do {
        if (-1 < *pcVar2) {
          acStack_30[temp_v4] = *pcVar2;
          temp_v4 = temp_v4 + 1;
        }
        temp_v3 = temp_v3 - 1;
        pcVar2 = pcVar2 + 1;
      } while (temp_v3 != 0);
      temp_v0 = 0;
      if (temp_v4 != 0) {
        do {
          temp_v1 = FUN_001ab854((int)acStack_30[temp_v0]);
          if ((((temp_v1 != 0) && (temp_v2 = FUN_004bd730(), temp_v2 != 0)) &&
              (temp_v2 = FUN_004bd0d8(temp_v1), temp_v2 == 0)) &&
             ((temp_v2 = FUN_004bd340(temp_v1,1), temp_v2 == 0 &&
              (temp_v1 = FUN_004bd340(temp_v1,10), temp_v1 == 0)))) {
            return 1;
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < (int)temp_v4);
      }
    }
  }
  return 0;
}
