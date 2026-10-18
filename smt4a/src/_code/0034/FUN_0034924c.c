/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034924c` (_code @ 0x34924c, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern int FUN_0018719c(unsigned short);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned short *FUN_00192798(void);
/* Supplied declaration required: FUN_00229fd0. */


void FUN_0034924c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  temp_v0 = FUN_00187180(0x35,1);
  puVar2 = (unsigned short *)FUN_00192798();
  temp_v1 = FUN_00192748(temp_v0);
  temp_v4 = 0;
  if (temp_v4 < temp_v1) {
    do {
      temp_v2 = (unsigned int)(unsigned short)puVar2[7];
      temp_v5 = temp_v2 != param_1;
      if (temp_v5) {
        temp_v2 = (unsigned int)(unsigned short)puVar2[8];
      }
      if ((!temp_v5 || temp_v2 == param_1) &&
         ((temp_v3 = FUN_0018719c(puVar2[9]), temp_v3 == 0 ||
          (temp_v3 = FUN_0018719c(puVar2[10]), temp_v3 == 0)))) {
        FUN_00229fd0(*puVar2,*(unsigned char *)(puVar2 + 0x29));
      }
      temp_v4 = temp_v4 + 1;
      puVar2 = puVar2 + 0x2a;
    } while (temp_v4 < temp_v1);
  }
  return;
}
