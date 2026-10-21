/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035c158` (_code @ 0x35c158, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

float FUN_00275b10(int);
void eventTexSetJobParam(unsigned int);
int scrSetResult(unsigned int);
int FUN_0036f298(unsigned int);
unsigned int npc2dCreateDemonPortrait(unsigned int, unsigned int, int, int, float);

extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_0036f298. */
extern int FUN_0039af04(void);


unsigned int FUN_0035c158(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  float alpha;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = scrGetArg(2);
  alpha = FUN_00275b10(3);
  temp_v3 = scrGetArg(4);
  temp_v4 = FUN_0039af04();
  temp_v5 = 0;
  if (temp_v4 != 0) {
    temp_v5 = npc2dCreateDemonPortrait(temp_v0,temp_v3,(int)temp_v1,(int)temp_v2,alpha);
    eventTexSetJobParam(temp_v5);
    FUN_0036f298(temp_v5);
  }
  scrSetResult(temp_v5);
  return 1;
}

} /* extern "C" */
