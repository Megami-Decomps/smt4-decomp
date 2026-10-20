/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027daf4` (_code @ 0x27daf4, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003768dc(void);
int FUN_004842cc(int);
int FUN_00485abc(int);

/* Supplied declaration required: FUN_003768dc. */
extern int FUN_0037692c(void);
/* Supplied declaration required: FUN_004842cc. */
/* Supplied declaration required: FUN_00485abc. */


unsigned int FUN_0027daf4(int param_1)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  
  temp_v2 = *(int *)(param_1 + 4);
  temp_v0 = *(char *)(temp_v2 + 0xd);
  if (temp_v0 == '\0') {
    *(unsigned char *)(temp_v2 + 0xd) = 1;
  }
  else {
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        if (temp_v0 != '\x03') {
          return 0;
        }
        temp_v2 = FUN_0037692c();
        if (temp_v2 != 0) {
          FUN_003768dc();
        }
        return 0xffffffff;
      }
      FUN_004842cc(temp_v2 + 0x10);
      temp_v1 = 3;
      *(unsigned char *)(temp_v2 + 0xc) = 1;
    }
    else {
      FUN_00485abc(temp_v2 + 0x10);
      if (*(char *)(temp_v2 + 0x10) == '\0') {
        return 0;
      }
      temp_v1 = 2;
    }
    *(unsigned char *)(temp_v2 + 0xd) = temp_v1;
  }
  return 0;
}

} /* extern "C" */
