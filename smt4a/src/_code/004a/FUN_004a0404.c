/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a0404` (_code @ 0x4a0404, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001801a4(void);
extern int FUN_0018719c(unsigned int);
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
extern int FUN_001b347c(void);
extern int FUN_003df57c(unsigned int, unsigned int);
extern int FUN_004bcbb4(int, unsigned int);


unsigned int FUN_004a0404(void)

{
/* irregular: 1 unstructured edge(s) */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  
  temp_v0 = FUN_0018719c(0x401);
  if (temp_v0 == 0) {
    return 0;
  }
  temp_v0 = FUN_001801a4();
  temp_v2 = 0;
  do {
    temp_v4 = temp_v0 + temp_v2 * 2;
    temp_v6 = (unsigned int)*(unsigned short *)(temp_v4 + 0x34);
    if (temp_v6 != 0x8c) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v4 + 0x36);
    }
    if (temp_v6 == 0x8c || temp_v4 == 0x8c) {
      temp_v0 = FUN_001801a4();
      temp_v2 = FUN_003df57c(0x8c,1);
      if (temp_v2 >= *(short *)(temp_v0 + 0x2c)) break;
      return 1;
    }
    temp_v2 = temp_v2 + 2;
  } while (7 >= temp_v2);
  temp_v0 = FUN_001b347c();
  temp_v2 = FUN_001ab888();
  temp_v7 = 0;
  if (temp_v7 < temp_v0) {
    do {
      if ((-1 < *(char *)(temp_v2 + 0x1c88 + temp_v7)) && (temp_v1 = FUN_001ab854(), temp_v1 != 0)) {
        temp_v3 = 0;
        do {
          temp_v5 = temp_v1 + temp_v3 * 2;
          temp_v8 = *(short *)(temp_v5 + 0x34) == 0x8c;
          if (!temp_v8) {
            temp_v6 = (unsigned int)*(unsigned short *)(temp_v5 + 0x36);
          }
          if (temp_v8 || temp_v6 == 0x8c) {
            temp_v3 = FUN_004bcbb4(temp_v1,0x8c);
            if (temp_v3 < *(short *)(temp_v1 + 0x2c)) {
              if (!((*(unsigned short *)(temp_v1 + 0x60) & 2) == 0 && (*(unsigned short *)(temp_v1 + 0x60) & 0x400) == 0
                   )) {
                return 0;
              }
              return 1;
            }
            break;
          }
          temp_v3 = temp_v3 + 2;
        } while (temp_v3 < 8);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < temp_v0);
  }
  return 0;
}
