/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e707c` (_code @ 0x2e707c, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001801b8(unsigned short, unsigned char);
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int gameFlagIsSet(void);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned short *dataTableGetEntries(void);


unsigned int FUN_002e707c(unsigned int param_1)

{
  unsigned int temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v0 = dataTableGet(0x35,1);
  puVar2 = (unsigned short *)dataTableGetEntries();
  temp_v1 = dataTableGetCount(temp_v0);
  temp_v4 = 0;
  temp_v3 = 0;
  if (temp_v1 != 0) {
    do {
      if ((((*puVar2 == param_1) && ((puVar2[7] == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 != 0)))) &&
          ((puVar2[8] == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 != 0)))) &&
         ((((puVar2[9] == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 == 0)) &&
           ((puVar2[10] == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 == 0)))) &&
          (temp_v2 = FUN_001801b8(*puVar2,(char)puVar2[0x29]), temp_v2 != 0)))) {
        temp_v4 = temp_v4 + 1;
      }
      temp_v3 = temp_v3 + 1;
      puVar2 = puVar2 + 0x2a;
    } while (temp_v3 < temp_v1);
    if (0 < temp_v4) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
