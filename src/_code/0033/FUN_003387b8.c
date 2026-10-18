/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003387b8` (_code @ 0x3387b8, 0x174 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0023ec3c(unsigned int);
extern int FUN_00295fac(unsigned int);
/* Supplied declaration required: FUN_002b087c. */
extern int FUN_002b66ec(void);
extern int FUN_002c0ba8(unsigned int);
extern int FUN_002c615c(int, int);


/* WARNING: Removing unreachable block (ram,0x003388ec) */

unsigned int FUN_003387b8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  temp_v0 = FUN_00295fac(1);
  if ((((temp_v0 == 0) && ((*(unsigned int *)(param_1 + 0x44a0) & 0x40000) == 0)) &&
      (temp_v0 = FUN_002c0ba8(0x416), temp_v0 == 0)) &&
     ((*(short *)(param_1 + 0x1fc6) < 2 && (*(short *)(param_1 + 0x1fc6) != 0)))) {
    temp_v0 = 4;
    do {
      puVar3 = (unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v0 * 0x288);
      temp_v1 = *puVar3;
      if ((((temp_v1 & 1) != 0) && ((temp_v1 & 0x40) == 0)) && ((temp_v1 & 0x10) != 0)) {
        if (puVar3 == (unsigned int *)0x0) {
          return 0;
        }
        temp_v1 = (unsigned int)*(unsigned short *)((int)puVar3 + 0xce);
        FUN_002b087c();
        if ((*(unsigned short *)(temp_v1 + 0x16) & 0x10) != 0) {
          return 0;
        }
        if ((*puVar3 & 0x100000) != 0 || (*puVar3 & 0x10000000) != 0) {
          return 0;
        }
        *puVar3 = *puVar3 | 0x10000000;
        if ((*(unsigned short *)((int)puVar3 + 0x1c6) & 0x80) == 0) {
          if ((*(unsigned int *)(param_1 + 0x44a8) & 0x200000) == 0) {
            temp_v0 = FUN_002c615c((short)puVar3[0x6d] * 100,(int)*(short *)((int)puVar3 + 0x1b6));
            if (temp_v0 >= 0x14) {
              return 0;
            }
            temp_v0 = FUN_002b66ec();
            temp_v1 = (((unsigned int)*(unsigned char *)(temp_v0 + 0x76) + (unsigned int)*(unsigned char *)(temp_v1 + 2)) >> 1) + 5;
            if (temp_v1 >= 11) {
              temp_v1 = 10;
            }
            temp_v0 = FUN_0023ec3c(99);
            if ((int)temp_v1 < temp_v0) {
              return 0;
            }
          }
          *puVar3 = *puVar3 | 0x100000;
          return 1;
        }
        return 0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x36);
  }
  return 0;
}
