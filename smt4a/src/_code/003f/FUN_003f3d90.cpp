/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f3d90` (_code @ 0x3f3d90, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001835b4(int, int, int, unsigned int, unsigned int, int);

/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001835b4. */
extern int partyPanelGetFlag(void);
extern int partyPanelGetMember(int);


void FUN_003f3d90(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (param_4 != 0) {
    temp_v0 = partyPanelGetFlag();
    if ((temp_v0 == 1 || temp_v0 == 4) || ((temp_v0 == 0xc || temp_v0 == 0xf) || temp_v0 == 0x11)) {
      efctSetSpeed();
      FUN_001835b4(2,0x11,0xb5,param_2,param_3,0xc9);
      temp_v0 = 0;
      do {
        temp_v1 = partyPanelGetMember(temp_v0 + 0xd);
        if (temp_v1 != 0) {
          efctSetSpeed();
        }
        FUN_001835b4(2,0x11,temp_v0 + 0xb8,param_2,param_3,0xce);
        efctSetSpeed();
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 3);
    }
    return;
  }
  return;
}

} /* extern "C" */
