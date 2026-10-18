/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002994b4` (_code @ 0x2994b4, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002116ac. */
extern int FUN_002931cc(void);
extern int FUN_002c0ba8(void);
extern unsigned char *FUN_00310724(unsigned int);


unsigned char FUN_002994b4(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  temp_v0 = param_1;
  FUN_002116ac();
  temp_v2 = 0;
  if (temp_v2 < temp_v0) {
    do {
      puVar2 = (unsigned char *)FUN_00310724(temp_v2);
      if ((((puVar2 != (unsigned char *)0x0) && ((unsigned char)puVar2[1] == param_1)) &&
          ((*(short *)(puVar2 + 0x56) == 0 || (temp_v1 = FUN_002c0ba8(), temp_v1 != 0)))) &&
         ((*(short *)(puVar2 + 0x58) == 0 || (temp_v1 = FUN_002931cc(), temp_v1 != 0)))) {
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
