/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_QuestUI_OpenWithArg` (_code @ 0x31c2c8, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00215cd4(int);
int FUN_00269dc8(int);
int FUN_00296934(void);
int FUN_00296cc8(int);
int FUN_002b8838(int);
int FUN_003490f0(int, unsigned int);

extern int FUN_00215c9c(void);
/* Supplied declaration required: FUN_00215cd4. */
/* Supplied declaration required: FUN_00269dc8. */
extern int FUN_002893d8(void);
/* Supplied declaration required: FUN_00296934. */
/* Supplied declaration required: FUN_00296cc8. */
/* Supplied declaration required: FUN_002b8838. */
extern int FUN_002c1d5c(void);
/* Supplied declaration required: FUN_003490f0. */


unsigned char scrComm_QuestUI_OpenWithArg(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_002893d8();
  if (temp_v2 == 0) {
    FUN_003490f0(temp_v0,temp_v1);
    temp_v2 = FUN_002c1d5c();
    if (temp_v2 != 0) {
      return 1;
    }
    FUN_00269dc8(0);
    FUN_00215cd4(temp_v0);
  }
  temp_v2 = FUN_00215c9c();
  if (temp_v2 != 0) {
    FUN_00296934();
    FUN_002b8838(0x90);
  }
  return temp_v2 != 0;
}

} /* extern "C" */
