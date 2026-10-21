/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00287188` (_code @ 0x287188, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00205bf4(void);
int buttonHelpRelease(void);
int FUN_002958f8(...);
int asdTMTexTableFreeEntry(int);
int asdTMTexTableReleaseNode(int, int, unsigned int, unsigned int, unsigned int, unsigned int);
int ifTouchRegionRemove(void);
int asdMemFree(...);
int FUN_002d661c(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern signed char DAT_0043da29; /* 0x43da29 */
extern unsigned int DAT_0043da30; /* 0x43da30 */
extern unsigned int DAT_0043da34; /* 0x43da34 */

/* Supplied declaration required: FUN_00205bf4. */
/* Supplied declaration required: buttonHelpRelease. */
/* Supplied declaration required: FUN_002958f8. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
extern int FUN_002b6a54(int, unsigned short);
extern int FUN_002b6ad0(void);
extern int gameGetSupportUnitData(void);
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002d661c. */


void FUN_00287188(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_lr; 8 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int unaff_r4;
  int temp_v2;
  unsigned int in_lr;
  
  if (*(int *)(param_1 + 0x59bc) != 0) {
    asdMemFree();
    *(int *)(param_1 + 0x59bc) = 0;
  }
  FUN_00205bf4();
  FUN_002958f8(0xffffffff,1);
  temp_v2 = 0;
  do {
    temp_v1 = *(int *)(param_1 + temp_v2 * 4 + 0x3410);
    if (0 < temp_v1) {
      FUN_002958f8((int)(short)temp_v1,1);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  temp_v2 = FUN_002b6ad0();
  if (temp_v2 != 0) {
    temp_v2 = gameGetSupportUnitData();
    temp_v0 = *(unsigned short *)(temp_v2 + 0x606);
    temp_v2 = gameGetSupportUnitData();
    temp_v2 = FUN_002b6a54((int)*(short *)(temp_v2 + 0x604),temp_v0);
    FUN_002958f8((int)(short)(*(short *)(temp_v2 + 0x5a) + 1),0);
  }
  temp_v2 = 0;
  if (temp_v2 < *(short *)(param_1 + 0x5714)) {
    do {
      ifTouchRegionRemove();
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(short *)(param_1 + 0x5714));
  }
  *(unsigned short *)(param_1 + 0x5714) = 0;
  buttonHelpRelease();
  DAT_0043da29 = DAT_0043da29 - '\x01';
  if (DAT_0043da29 < '\x01') {
    FUN_002d661c();
    asdMemFree(DAT_0043da30);
    asdMemFree(DAT_0043da34);
    asdTMTexTableReleaseNode(0x12,0,param_3,param_4,unaff_r4,in_lr);
    asdTMTexTableFreeEntry(0x12);
    DAT_0043da29 = '\0';
  }
  return;
}

} /* extern "C" */
