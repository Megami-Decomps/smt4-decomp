/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00299218` (_code @ 0x299218, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002117a8. */
extern int FUN_00292f28(void);
extern int FUN_002c09d0(void);
extern unsigned char *FUN_003106c0(unsigned int);


unsigned char FUN_00299218(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  temp_v0 = param_1;
  FUN_002117a8();
  temp_v2 = 0;
  if (temp_v2 < temp_v0) {
    do {
      puVar2 = (unsigned char *)FUN_003106c0(temp_v2);
      if ((((puVar2 != (unsigned char *)0x0) && ((unsigned char)puVar2[1] == param_1)) &&
          ((*(short *)(puVar2 + 0x56) == 0 || (temp_v1 = FUN_002c09d0(), temp_v1 != 0)))) &&
         ((*(short *)(puVar2 + 0x58) == 0 || (temp_v1 = FUN_00292f28(), temp_v1 != 0)))) {
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
