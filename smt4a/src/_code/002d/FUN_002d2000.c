/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d2000` (_code @ 0x2d2000, 0x270 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char DAT_005f1623; /* 0x5f1623 */
extern unsigned int DAT_005f16a4; /* 0x5f16a4 */
extern unsigned int DAT_005f1a50; /* 0x5f1a50 */
extern unsigned char DAT_005f1a99; /* 0x5f1a99 */
extern unsigned int DAT_005f1c98; /* 0x5f1c98 */
extern unsigned int DAT_005f1c9c; /* 0x5f1c9c */
extern unsigned int DAT_005f1ca0; /* 0x5f1ca0 */
extern unsigned int DAT_005f1ca4; /* 0x5f1ca4 */

/* Supplied declaration required: FUN_00162e8c. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_001b4aa0. */
extern int FUN_001ba570(void);
extern int FUN_00261424(void);
/* Supplied declaration required: FUN_00268450. */
/* Supplied declaration required: FUN_002854a8. */
/* Supplied declaration required: FUN_002b945c. */
/* Supplied declaration required: FUN_002c7ad8. */
extern int FUN_0037692c(void);
extern char *FUN_003798f0(int);
extern int FUN_003857c8(int);
extern int FUN_003b56e8(void);
/* Supplied declaration required: FUN_003fd63c. */


void FUN_002d2000(void)

{
/* irregular: 1 goto(s); 7 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  char *pcVar5;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  
  temp_v1 = FUN_00162e8c();
  temp_v0 = *(char *)(temp_v1 + 0x7c4);
  if (temp_v0 != '\0') {
    *(unsigned char *)(temp_v1 + 0x7c4) = 0;
    if (temp_v0 != '\x01') {
      temp_v2 = FUN_001b4aa0();
      if (temp_v2 == 0) {
        temp_v2 = FUN_003857c8((int)*(float *)(temp_v1 + 0x15c4));
        FUN_002854a8(temp_v2,1);
        if (temp_v2 == 9) {
          temp_v4 = 0x4d2;
          temp_v2 = FUN_0018719c(0x4d2);
          if (temp_v2 != 0) {
            temp_v4 = 0x4d3;
          }
          FUN_003fd63c(temp_v4,1);
          temp_v2 = FUN_00261424();
          FUN_00268450(temp_v2 + 1);
          temp_v2 = 0;
          do {
            FUN_002854a8(temp_v2,0);
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 10);
          FUN_002c7ad8();
          *(unsigned int *)(temp_v1 + 0x15cc) = 1;
          return;
        }
        if ((temp_v2 == 8) && (temp_v3 = FUN_0018719c(0x4d1), temp_v3 == 0)) {
          *(unsigned int *)(temp_v1 + 0x15cc) = 0x25;
          FUN_003fd63c(0x4d4,1);
          return;
        }
        temp_v3 = FUN_0037692c();
        if (temp_v3 == 0) {
          temp_v5 = 0;
          DAT_005f1c98 = 0x18;
          DAT_005f1c9c = 1;
          DAT_005f1ca0 = 0;
          temp_v3 = FUN_003b56e8();
          if (0 < temp_v3) {
            do {
              pcVar5 = (char *)FUN_003798f0(temp_v5);
              temp_v0 = *pcVar5;
              temp_v6 = temp_v0 == '\x18';
              if (temp_v6) {
                temp_v0 = pcVar5[1];
              }
              temp_v7 = temp_v6 && temp_v0 == '\x01';
              if (temp_v6 && temp_v0 == '\x01') {
                temp_v7 = pcVar5[2] == '\0';
              }
              if (temp_v7) {
                DAT_005f1ca4 = (unsigned int)(unsigned char)pcVar5[3];
                goto LAB_002d21fc;
              }
              temp_v5 = temp_v5 + 1;
              temp_v3 = FUN_003b56e8();
            } while (temp_v5 < temp_v3);
          }
          DAT_005f1ca4 = 0xffffffff;
LAB_002d21fc:
          DAT_005f1a50 = 0xffffffff;
          temp_v0 = (char)DAT_005f16a4;
          temp_v3 = FUN_00162e8c();
          *(char *)(temp_v3 + 3) = temp_v0 + 'd';
          FUN_002b945c(DAT_005f16a4);
          DAT_005f1623 = 1;
        }
        if (temp_v2 == 8) {
          FUN_003fd63c(0x4d4,1);
          FUN_003fd63c(0x11d1,1);
        }
        DAT_005f1a99 = 1;
        *(unsigned int *)(temp_v1 + 0x15cc) = DAT_005f16a4;
        return;
      }
    }
    else {
      temp_v4 = FUN_001b4aa0();
      switch(temp_v4) {
      case 0:
      case 1:
      case 3:
      case 5:
        temp_v1 = FUN_001ba570();
        if (temp_v1 == 0) {
          temp_v1 = FUN_00162e8c(0);
          *(unsigned char *)(temp_v1 + 3) = 0;
          temp_v1 = FUN_00162e8c();
          *(unsigned char *)(temp_v1 + 0x1c) = 0;
          return;
        }
      }
    }
  }
  return;
}
