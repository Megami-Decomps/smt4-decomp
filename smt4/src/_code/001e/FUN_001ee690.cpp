/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ee690` (_code @ 0x1ee690, 0x204 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029f848(int, int, int, int, int, int);
int FUN_002b7bca(...);
int FUN_002b9024(void);
int memClear(int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_001f61c4(...); /* 0x1f61c4 */
extern int FUN_001f625c(...); /* 0x1f625c */
extern int FUN_00206d4c(...); /* 0x206d4c */
extern int FUN_002dc9d4(...); /* 0x2dc9d4 */
extern int FUN_002dca6c(...); /* 0x2dca6c */
extern int FUN_002e45a8(...); /* 0x2e45a8 */
extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_0029f848. */
extern int FUN_002a0d0c(void);
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: memClear. */


void FUN_001ee690(int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  int temp_v4;
  unsigned short *puVar7;
  unsigned char temp_v5;
  
  temp_v2 = DAT_0044e190;
  *(unsigned short *)(DAT_0044e190 + 0xdc8) = 0;
  *(unsigned short *)(temp_v2 + 0xdca) = 0;
  memClear(temp_v2 + 0x5c8,0x800);
  puVar7 = (unsigned short *)0x0;
  do {
    puVar5 = puVar7;
    FUN_002b9024();
    if (puVar5 != (unsigned short *)0x0) {
      temp_v1 = puVar5[3];
      temp_v5 = (temp_v1 & 1) != 0;
      if (temp_v5) {
        temp_v1 = puVar5[0x1c];
      }
      if (temp_v5 && temp_v1 != 0) {
        if (((unsigned int)*(unsigned char *)(param_1 + (unsigned int)(temp_v1 >> 3)) & (1 << (temp_v1 & 7))) != 0) {
          *(unsigned short *)(temp_v2 + *(short *)(temp_v2 + 0xdc8) * 4 + 0x5c8) = *puVar5;
          *(unsigned short *)(temp_v2 + *(short *)(temp_v2 + 0xdc8) * 4 + 0x5ca) = puVar5[0x1c];
          *(short *)(temp_v2 + 0xdc8) = *(short *)(temp_v2 + 0xdc8) + 1;
        }
        *(short *)(temp_v2 + 0xdca) = *(short *)(temp_v2 + 0xdca) + 1;
      }
    }
    puVar7 = (unsigned short *)(((int)puVar7 + 1U) & 0xffff);
  } while (puVar7 < (unsigned short *)0x500);
  FUN_0029f848(temp_v2 + 0xdcc,(int)*(short *)(temp_v2 + 0xdc8),0xb,1,0,1);
  temp_v3 = DAT_0044e190;
  temp_v4 = FUN_002a0d0c();
  if ((*(unsigned char *)(temp_v4 + 0x15) & 0x7f) == 1) {
    if ((char)*(unsigned char *)(temp_v4 + 0x15) < '\0') {
      FUN_002b7bca(temp_v3 + 0x5c8,(int)*(short *)(temp_v3 + 0xdc8),4,FUN_002e45a8);
    }
    else {
      FUN_002b7bca(temp_v3 + 0x5c8,(int)*(short *)(temp_v3 + 0xdc8),4,FUN_00206d4c);
    }
  }
  temp_v0 = *(unsigned char *)(temp_v4 + 0x15);
  if ((temp_v0 & 0x7f) == 0x21) {
    if ((char)temp_v0 < '\0') {
      FUN_002b7bca(temp_v3 + 0x5c8,(int)*(short *)(temp_v3 + 0xdc8),4,FUN_002dc9d4);
    }
    else {
      FUN_002b7bca(temp_v3 + 0x5c8,(int)*(short *)(temp_v3 + 0xdc8),4,FUN_001f61c4);
    }
  }
  temp_v0 = *(unsigned char *)(temp_v4 + 0x15);
  if ((temp_v0 & 0x7f) == 3) {
    if ((char)temp_v0 < '\0') {
      FUN_002b7bca(temp_v3 + 0x5c8,(int)*(short *)(temp_v3 + 0xdc8),4,FUN_002dca6c);
    }
    else {
      FUN_002b7bca(temp_v3 + 0x5c8,(int)*(short *)(temp_v3 + 0xdc8),4,FUN_001f625c);
    }
  }
  *(unsigned char *)(temp_v2 + 0x410) = 1;
  return;
}

} /* extern "C" */
