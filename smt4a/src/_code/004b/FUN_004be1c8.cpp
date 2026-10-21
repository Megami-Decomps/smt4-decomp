/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004be1c8` (_code @ 0x4be1c8, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"

extern "C" {

int ifTouchRegionRemove(void);
int __aeabi_memset4(int, int, unsigned int);
int dialogOpen(int, int);
int FUN_00275bc8(int, unsigned int);
int ifTouchResetRecord(void);
int FUN_002a49e4(unsigned int, int);
int FUN_002a7324(int);
int FUN_003e4d68(unsigned int);

/* Supplied declaration required: ifTouchRegionRemove. */
extern unsigned short FUN_001643b4(unsigned int, int);
extern int FUN_00187168(void);
/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: dialogOpen. */
extern int FUN_0023b3d0(void);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: ifTouchResetRecord. */
/* Supplied declaration required: FUN_002a49e4. */
/* Supplied declaration required: FUN_002a7324. */
/* Supplied declaration required: FUN_003e4d68. */


void FUN_004be1c8(int param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned short unaff_r7;
  unsigned char temp_v5;
  
  temp_v5 = *(int *)(param_1 + 0x314) != 0;
  temp_v1 = 0;
  if (temp_v5) {
    temp_v1 = *(int *)(param_1 + 0x318);
  }
  if (((temp_v5 && temp_v1 != 0) && (*(int *)(param_1 + 0x31c) != 0)) &&
     ((*(char *)(param_1 + 4) == '\x01' || (temp_v1 = FUN_0023b3d0(), temp_v1 != 0)))) {
    temp_v1 = *(int *)(param_1 + 0x31c);
    FUN_00275bc8(temp_v1,*(unsigned int *)(param_1 + 0x318));
    *(int *)(param_1 + 800) = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 2;
    if (*(char *)(param_1 + 4) == '\x01') {
      FUN_002a49e4(*(unsigned int *)(param_1 + 0x318),4);
      dialogOpen(0,1);
      *(unsigned int *)(param_1 + 8) = 9;
      return;
    }
    __aeabi_memset4(param_1 + 0x2f8,0x18,0xffffffff);
    temp_v1 = *(int *)(param_1 + 0x310);
    if (0 < temp_v1) {
      temp_v3 = 0;
      if (0 < temp_v1) {
        unaff_r7 = 0xffff;
      }
      *(int *)(param_1 + 0x310) = temp_v1 + 1;
      if (0 < temp_v1) {
        do {
          ifTouchRegionRemove();
          temp_v1 = temp_v3 * 2;
          temp_v3 = temp_v3 + 1;
          *(unsigned short *)(param_1 + temp_v1 + 0x2f8) = unaff_r7;
          temp_v1 = *(int *)(param_1 + 0x310);
          *(int *)(param_1 + 0x310) = temp_v1 + 1;
        } while (temp_v3 < temp_v1);
      }
      *(unsigned int *)(param_1 + 0x310) = 0;
      ifTouchResetRecord();
    }
    temp_v4 = 0;
    do {
      temp_v1 = FUN_003e4d68(temp_v4 & 0xffff);
      if ((temp_v1 != 0) && (temp_v1 = FUN_00187168(), temp_v1 != 0)) {
        temp_v0 = FUN_001643b4(0x11,*(int *)(param_1 + 0x310) + 0xae);
        *(unsigned short *)(param_1 + *(int *)(param_1 + 0x310) * 2 + 0x2f8) = temp_v0;
        *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x310) + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 0xc);
    if (0 < *(int *)(param_1 + 0x324)) {
      temp_v2 = FUN_003e4d68(*(unsigned int *)(param_1 + 0x2c4) & 0xffff);
      statusRequestUnitDetails((const UnitCategoryRecord*)temp_v2,0,0);
      FUN_002a7324(1);
    }
    *(unsigned int *)(param_1 + 8) = 2;
    *(unsigned int *)(param_1 + 0xc) = 3;
    *(unsigned int *)(param_1 + 0x344) = 1;
  }
  return;
}

} /* extern "C" */
