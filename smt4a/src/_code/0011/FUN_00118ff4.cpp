/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00118ff4` (_code @ 0x118ff4, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e5700(...);
int FUN_002f5020(unsigned char [56], unsigned char *, int, int);
int FUN_00304efc(...);
int FUN_0030540c(...);

extern unsigned char LAB_001145e5; /* 0x1145e5 */
extern unsigned char LAB_00114615; /* 0x114615 */
extern unsigned char LAB_0030ca9d; /* 0x30ca9d */

/* Supplied declaration required: FUN_002e5700. */
/* Supplied declaration required: FUN_002f5020. */
extern int FUN_00304d10(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00304efc. */
/* Supplied declaration required: FUN_0030540c. */


void FUN_00118ff4(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  unsigned char temp_v2 [56];
  
  temp_v0 = FUN_00304d10(param_2,0);
  if (temp_v0 != 0) {
    FUN_00304efc(param_1,temp_v0);
    if (*(char *)(param_1 + 4) != '\0') {
      return;
    }
  }
  else {
    FUN_002f5020(temp_v2,&LAB_001145e5,0x38,1);
    FUN_00304efc(param_1,temp_v2);
    if (*(char *)(param_1 + 4) != '\0') {
      puVar2 = &LAB_00114615;
      temp_v1 = 0x38;
      FUN_002e5700(temp_v2,puVar2,temp_v1,1);
      return;
    }
    FUN_002e5700(temp_v2,&LAB_00114615,0x38,1);
  }
  temp_v0 = FUN_00304d10(param_2,1);
  if (temp_v0 != 0) {
    FUN_0030540c(param_1,temp_v0);
    return;
  }
  FUN_002f5020(temp_v2,&LAB_0030ca9d,0x30,1);
  FUN_0030540c(param_1,temp_v2);
  puVar2 = (unsigned char *)0x30ca93;
  temp_v1 = 0x30;
  FUN_002e5700(temp_v2,puVar2,temp_v1,1);
  return;
}

} /* extern "C" */
