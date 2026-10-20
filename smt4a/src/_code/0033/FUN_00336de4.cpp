/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336de4` (_code @ 0x336de4, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014afd0(int, unsigned int);
int FUN_00184310(void);
int FUN_00191e00(unsigned int, int, unsigned int, int);
int FUN_0019cac4(void);
int FUN_001a6568(unsigned int, int, unsigned int, int);
int FUN_001acf98(int, unsigned int);
int FUN_0021ba5c(int);
int FUN_003d44ac(int);

extern unsigned int DAT_00570280; /* 0x570280 */
extern int DAT_005710dc; /* 0x5710dc */

/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00191e00. */
/* Supplied declaration required: FUN_0019cac4. */
extern int FUN_001a6508(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001a6568. */
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_0021ba5c. */
/* Supplied declaration required: FUN_003d44ac. */


void FUN_00336de4(int param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_005710dc;
  if (DAT_005710dc != 0) {
    temp_v1 = param_1;
    FUN_0019cac4();
    *(unsigned int *)(temp_v0 + 0x2f0) = (unsigned int)(*(unsigned char *)(temp_v1 + 0xa5) >> 2);
    temp_v1 = param_1;
    FUN_00184310();
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x9c);
    *(unsigned int *)(temp_v0 + 0x2f8) = temp_v2;
    *(int *)(temp_v0 + 0x308) = param_1;
    if (param_2 == 0) {
      temp_v1 = FUN_001a6508(DAT_00570280,0x10,temp_v2,1);
      if (temp_v1 != 0) {
        FUN_00191e00(DAT_00570280,0x10,*(unsigned int *)(temp_v0 + 0x2f8),0x10000);
      }
      else {
        FUN_0014afd0(0x10,*(unsigned int *)(temp_v0 + 0x2f8));
      }
      FUN_003d44ac(temp_v0);
      FUN_0021ba5c(temp_v0);
      *(unsigned int *)(temp_v0 + 0x2e8) = 2;
      *(unsigned int *)(temp_v0 + 0x2ec) = 0;
      return;
    }
    temp_v1 = FUN_001a6508(DAT_00570280,0x10,temp_v2,1);
    if (temp_v1 != 0) {
      FUN_001a6568(DAT_00570280,0x10,*(unsigned int *)(temp_v0 + 0x2f8),0x10000);
    }
    else {
      FUN_001acf98(0x10,*(unsigned int *)(temp_v0 + 0x2f8));
    }
    *(unsigned int *)(temp_v0 + 0x2e8) = 1;
    *(unsigned int *)(temp_v0 + 0x2ec) = 0;
  }
  return;
}

} /* extern "C" */
