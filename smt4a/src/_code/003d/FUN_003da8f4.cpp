/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003da8f4` (_code @ 0x3da8f4, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e26ac(void);

extern int gameFlagIsSet(void);
/* Supplied declaration required: FUN_002e26ac. */
extern unsigned char *dataTable15GetEntry(unsigned int);
extern int gameDataFlagTestBit(void);


unsigned char FUN_003da8f4(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  temp_v0 = param_1;
  FUN_002e26ac();
  temp_v2 = 0;
  if (temp_v2 < temp_v0) {
    do {
      puVar2 = (unsigned char *)dataTable15GetEntry(temp_v2);
      if ((((puVar2 != (unsigned char *)0x0) && ((unsigned char)puVar2[1] == param_1)) &&
          ((*(short *)(puVar2 + 0x56) == 0 || (temp_v1 = gameFlagIsSet(), temp_v1 != 0)))) &&
         ((*(short *)(puVar2 + 0x58) == 0 || (temp_v1 = gameDataFlagTestBit(), temp_v1 != 0)))) {
        if (temp_v3 == param_2) {
          return *puVar2;
        }
        temp_v3 = temp_v3 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v0);
  }
  return 0;
}

} /* extern "C" */
