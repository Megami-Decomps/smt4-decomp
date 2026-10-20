/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002540b8` (_code @ 0x2540b8, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002886c8(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_002886b0(unsigned short);
/* Supplied declaration required: FUN_002886c8. */
extern int idIsAtLeast350(unsigned short);
extern int FUN_00298f88(unsigned short);
extern int FUN_00298fa0(unsigned short, unsigned int);
extern int gameGetFlagBlock(void);


void FUN_002540b8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  if (*(char *)(param_1 + 0x5c4) != '\0') {
    temp_v1 = FUN_00298fa0(*(unsigned short *)(param_1 + 0x982),0);
    if (temp_v1 == 0) {
      return;
    }
    temp_v1 = FUN_00298f88(*(unsigned short *)(param_1 + 0x982));
    if (temp_v1 == 0) {
      return;
    }
    temp_v1 = FUN_002886c8(*(unsigned short *)(param_1 + 0x982));
    if (temp_v1 != 0) {
      temp_v0 = *(unsigned short *)(param_1 + 0x982);
      temp_v1 = gameGetFlagBlock();
      temp_v1 = temp_v1 + (unsigned int)temp_v0 * 4;
      *(unsigned char *)(temp_v1 + 0x200) = *(unsigned char *)(temp_v1 + 0x200) & 0x9f;
      return;
    }
    temp_v1 = FUN_002886b0(*(unsigned short *)(param_1 + 0x982));
    if (temp_v1 == 0) {
      return;
    }
  }
  else {
    temp_v1 = idIsAtLeast350(*(unsigned short *)(param_1 + 0x982));
    if (temp_v1 != 0) {
      temp_v1 = FUN_002886c8();
      if (temp_v1 == 0) {
        return;
      }
      temp_v0 = *(unsigned short *)(param_1 + 0x982);
      temp_v1 = gameGetFlagBlock();
      temp_v1 = temp_v1 + (unsigned int)temp_v0 * 4;
      *(unsigned char *)(temp_v1 + 0x200) = *(unsigned char *)(temp_v1 + 0x200) & 0x9f;
      return;
    }
    temp_v1 = FUN_00298fa0(*(unsigned short *)(param_1 + 0x982),0);
    if (temp_v1 == 0) {
      return;
    }
    temp_v1 = FUN_00298f88(*(unsigned short *)(param_1 + 0x982));
    if (temp_v1 != 0) {
      return;
    }
    temp_v1 = FUN_002886c8(*(unsigned short *)(param_1 + 0x982));
    if (temp_v1 == 0) {
      temp_v1 = FUN_002886b0(*(unsigned short *)(param_1 + 0x982));
      if (temp_v1 == 0) {
        return;
      }
    }
  }
  temp_v0 = *(unsigned short *)(param_1 + 0x982);
  temp_v1 = gameGetFlagBlock();
  temp_v1 = temp_v1 + (unsigned int)temp_v0 * 4;
  *(unsigned char *)(temp_v1 + 0x200) = *(unsigned char *)(temp_v1 + 0x200) & 0x9f;
  return;
}

} /* extern "C" */
