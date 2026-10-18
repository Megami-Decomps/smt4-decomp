/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002542f8` (_code @ 0x2542f8, 0xe0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_00288918(unsigned short);
/* Supplied declaration required: FUN_00288930. */
extern int FUN_00299084(unsigned short);
extern int FUN_00299224(unsigned short);
extern int FUN_0029923c(unsigned short, unsigned int);
extern int FUN_002adf14(void);


void FUN_002542f8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  if (*(char *)(param_1 + 0x5c4) != '\0') {
    temp_v1 = FUN_0029923c(*(unsigned short *)(param_1 + 0x982),0);
    if (temp_v1 == 0) {
      return;
    }
    temp_v1 = FUN_00299224(*(unsigned short *)(param_1 + 0x982));
    if (temp_v1 == 0) {
      return;
    }
    temp_v1 = FUN_00288930(*(unsigned short *)(param_1 + 0x982));
    if (temp_v1 != 0) {
      temp_v0 = *(unsigned short *)(param_1 + 0x982);
      temp_v1 = FUN_002adf14();
      temp_v1 = temp_v1 + (unsigned int)temp_v0 * 4;
      *(unsigned char *)(temp_v1 + 0x200) = *(unsigned char *)(temp_v1 + 0x200) & 0x9f;
      return;
    }
    temp_v1 = FUN_00288918(*(unsigned short *)(param_1 + 0x982));
    if (temp_v1 == 0) {
      return;
    }
  }
  else {
    temp_v1 = FUN_00299084(*(unsigned short *)(param_1 + 0x982));
    if (temp_v1 != 0) {
      temp_v1 = FUN_00288930();
      if (temp_v1 == 0) {
        return;
      }
      temp_v0 = *(unsigned short *)(param_1 + 0x982);
      temp_v1 = FUN_002adf14();
      temp_v1 = temp_v1 + (unsigned int)temp_v0 * 4;
      *(unsigned char *)(temp_v1 + 0x200) = *(unsigned char *)(temp_v1 + 0x200) & 0x9f;
      return;
    }
    temp_v1 = FUN_0029923c(*(unsigned short *)(param_1 + 0x982),0);
    if (temp_v1 == 0) {
      return;
    }
    temp_v1 = FUN_00299224(*(unsigned short *)(param_1 + 0x982));
    if (temp_v1 != 0) {
      return;
    }
    temp_v1 = FUN_00288930(*(unsigned short *)(param_1 + 0x982));
    if (temp_v1 == 0) {
      temp_v1 = FUN_00288918(*(unsigned short *)(param_1 + 0x982));
      if (temp_v1 == 0) {
        return;
      }
    }
  }
  temp_v0 = *(unsigned short *)(param_1 + 0x982);
  temp_v1 = FUN_002adf14();
  temp_v1 = temp_v1 + (unsigned int)temp_v0 * 4;
  *(unsigned char *)(temp_v1 + 0x200) = *(unsigned char *)(temp_v1 + 0x200) & 0x9f;
  return;
}
