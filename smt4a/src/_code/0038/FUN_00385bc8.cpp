/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00385bc8` (_code @ 0x385bc8, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int slotSetRequest(int, unsigned int, unsigned int);
int FUN_00212204(void);

extern int FUN_00162ea4(void);
extern int FUN_00163e84(unsigned int);
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: FUN_00212204. */
extern unsigned int scrGetArg(unsigned int);
extern int scrGetCommandFrame(void);


unsigned int FUN_00385bc8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetCommandFrame();
  if (temp_v0 != 0) {
    temp_v0 = FUN_00162ea4();
    if (temp_v0 != 0) {
      FUN_00212204();
      temp_v1 = 1;
    }
    else {
      temp_v0 = FUN_00163e84(0);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        return 1;
      }
    }
    return temp_v1;
  }
  temp_v0 = FUN_00162ea4();
  if (temp_v0 != 0) {
    return 1;
  }
  temp_v1 = scrGetArg(0);
  slotSetRequest(0,temp_v1,0xffffffff);
  return 0;
}

} /* extern "C" */
