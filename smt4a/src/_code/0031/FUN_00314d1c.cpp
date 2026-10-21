/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00314d1c` (_code @ 0x314d1c, 0x1b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f4908(...);
int FUN_0022677c(...);
int scrGetArg(...);
int SBORROW4(int, int);

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_00162ea4(void);
extern int FUN_00163e84(unsigned int);
/* Supplied declaration required: FUN_001f4908. */
extern int FUN_00203d74(void);
/* Supplied declaration required: FUN_0022677c. */
/* Supplied declaration required: scrGetArg. */
extern int scrGetCommandFrame(void);
extern int frameTextureGetState(void);


unsigned int FUN_00314d1c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetCommandFrame();
  if (temp_v1 == 0) {
    temp_v1 = FUN_00203d74();
    temp_v2 = temp_v1 != 0;
    temp_v1 = 0;
    if (temp_v2) {
      temp_v1 = temp_v0 - 4;
    }
    if ((temp_v2 && temp_v0 != 4) && temp_v1 < 0 == (temp_v2 && SBORROW4(temp_v0,4))) {
      temp_v0 = 4;
    }
    temp_v1 = scrGetArg(0);
    if (temp_v1 == 0) {
      temp_v1 = frameTextureGetState();
      if (temp_v1 == 0) {
        FUN_001f4908(0,temp_v0,0xff);
      }
      FUN_001f4908(1,temp_v0,0xff);
      return 0;
    }
    if (temp_v1 != 1) {
      return 1;
    }
    temp_v1 = frameTextureGetState();
    if (temp_v1 == 0) {
      FUN_001f4908(0,temp_v0,0xffffffff);
    }
    FUN_001f4908(1,temp_v0,0xffffffff);
    return 0;
  }
  temp_v0 = frameTextureGetState();
  if (temp_v0 != 0) {
    temp_v0 = FUN_00163e84(1);
    if (temp_v0 != 0) {
      return 1;
    }
  }
  else {
    temp_v0 = FUN_00163e84(0);
    if (temp_v0 != 0) {
      temp_v0 = FUN_00163e84(1);
      if (temp_v0 != 0) {
        return 1;
      }
    }
  }
  temp_v0 = FUN_00162ea4();
  if (temp_v0 != 0) {
    temp_v0 = scrGetArg(0);
    if (temp_v0 != 0) {
      if (temp_v0 == 1) {
        temp_v0 = frameTextureGetState();
        if (temp_v0 == 0) {
          FUN_0022677c(0,0xffffffff);
        }
        FUN_0022677c(1,0xffffffff);
      }
    }
    else {
      temp_v0 = frameTextureGetState();
      if (temp_v0 == 0) {
        FUN_0022677c(0,0xff);
      }
      FUN_0022677c(1,0xff);
    }
  }
  return 0;
}

} /* extern "C" */
