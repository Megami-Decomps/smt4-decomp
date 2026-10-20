/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2000` (_code @ 0x2c2000, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(unsigned int);

extern unsigned short *FUN_001801a4(void);
extern unsigned short *scrGetArg(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_002c2000(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  unsigned short *puVar2;
  unsigned int temp_v0;
  unsigned short *puVar4;
  unsigned char temp_v1;
  
  puVar1 = (unsigned short *)scrGetArg();
  puVar2 = (unsigned short *)FUN_001801a4();
  puVar4 = (unsigned short *)(unsigned int)*puVar2;
  temp_v0 = 0;
  temp_v1 = puVar4 != puVar1;
  if (temp_v1) {
    puVar4 = (unsigned short *)(unsigned int)puVar2[1];
  }
  if (temp_v1 && puVar4 != puVar1) {
    puVar4 = (unsigned short *)(unsigned int)puVar2[3];
    temp_v1 = puVar4 != puVar1;
    if (temp_v1) {
      puVar4 = (unsigned short *)(unsigned int)puVar2[4];
    }
    if (temp_v1 && puVar4 != puVar1) {
      puVar4 = (unsigned short *)(unsigned int)puVar2[5];
      temp_v1 = puVar4 != puVar1;
      if (temp_v1) {
        puVar4 = (unsigned short *)(unsigned int)puVar2[6];
      }
      if (temp_v1 && puVar4 != puVar1) {
        puVar2 = (unsigned short *)(unsigned int)puVar2[2];
      }
      if ((temp_v1 && puVar4 != puVar1) && puVar2 != puVar1) {
        scrSetResult(temp_v0);
        return 1;
      }
    }
  }
  temp_v0 = 1;
  scrSetResult(temp_v0);
  return 1;
}

} /* extern "C" */
