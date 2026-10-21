/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001399b0` (_code @ 0x1399b0, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013d42c(unsigned int, unsigned int);
int FUN_00141724(void);
int FUN_00143424(void);
int FUN_001445d4(void);
int FUN_0014850c(unsigned int, unsigned int *);
int tripleClear(unsigned char *);
int FUN_00176538(unsigned int);
int FUN_001767a4(unsigned int, unsigned int);
int FUN_0018e9d8(...);

extern unsigned int DAT_005b3c10; /* 0x5b3c10 */
extern int DAT_005b3c14; /* 0x5b3c14 */
extern int DAT_005b3c20; /* 0x5b3c20 */
extern int DAT_005b3c38; /* 0x5b3c38 */
extern unsigned int g_effAsdLightHandle; /* 0x5b3c80 */
extern unsigned int DAT_005b3c84; /* 0x5b3c84 */
extern unsigned int g_asdModelTransformBuilder; /* 0x5b3c88 */
extern int g_asdModelSlotArray0; /* 0x5b3ca0 */
extern int DAT_005b3ca4; /* 0x5b3ca4 */
extern unsigned int DAT_00636e30; /* 0x636e30 */
extern unsigned int DAT_00636e6c; /* 0x636e6c */
extern unsigned char DAT_00636ebc; /* 0x636ebc */
extern unsigned char DAT_00636ec8; /* 0x636ec8 */

/* Supplied declaration required: FUN_0013d42c. */
/* Supplied declaration required: FUN_00141724. */
/* Supplied declaration required: FUN_00143424. */
/* Supplied declaration required: FUN_001445d4. */
/* Supplied declaration required: FUN_0014850c. */
/* Supplied declaration required: tripleClear. */
extern unsigned int asdMemoryGetDefaultAllocator(void);
/* Supplied declaration required: FUN_00176538. */
/* Supplied declaration required: FUN_001767a4. */
/* Supplied declaration required: FUN_0018e9d8. */


void FUN_001399b0(unsigned int param_1,unsigned int param_2)

{
/* irregular: 11 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  tripleClear(&DAT_00636ebc);
  tripleClear(&DAT_00636ec8);
  DAT_005b3c10 = 0;
  temp_v0 = asdMemoryGetDefaultAllocator();
  FUN_0014850c(temp_v0,&DAT_00636e30);
  g_effAsdLightHandle = temp_v0;
  temp_v0 = asdMemoryGetDefaultAllocator();
  FUN_0014850c(temp_v0,&DAT_00636e6c);
  DAT_005b3c84 = temp_v0;
  FUN_0013d42c(param_1,param_2);
  temp_v3 = 0;
  do {
    FUN_001767a4((&g_effAsdLightHandle)[temp_v3],(&g_asdModelTransformBuilder)[temp_v3]);
    FUN_00176538((&g_effAsdLightHandle)[temp_v3]);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 2);
  FUN_001445d4();
  FUN_00141724();
  FUN_00143424();
  temp_v3 = temp_v1;
  if (g_asdModelSlotArray0 != 0) {
    if (DAT_005b3c14 != 0) {
      FUN_0018e9d8();
    }
    temp_v3 = 0;
    if (DAT_005b3c38 != 0) {
      FUN_0018e9d8(g_asdModelSlotArray0);
      temp_v3 = temp_v2;
    }
  }
  if (DAT_005b3ca4 != 0) {
    temp_v3 = DAT_005b3c20;
  }
  if (DAT_005b3ca4 != 0 && temp_v3 != 0) {
    FUN_0018e9d8();
  }
  return;
}

} /* extern "C" */
