/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ca5a4` (_code @ 0x3ca5a4, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aea28(unsigned int, int);
int FUN_00398420(void);
int FUN_003b5c54(unsigned int, int);
int FUN_0040619c(int, unsigned int);
int FUN_0040ace8(unsigned int, int);
int rt_memcpy(unsigned char *, int *, int);
int rt_memcpy_w(unsigned char [160], unsigned char *, int);

/* stack frame of param_1: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned char DAT_00531270; /* 0x531270 */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_00580238; /* 0x580238 */
extern unsigned char DAT_005f0c54; /* 0x5f0c54 */

extern int FUN_0018719c(void);
/* Supplied declaration required: FUN_001aea28. */
extern char *FUN_0033f830(int);
/* Supplied declaration required: FUN_00398420. */
/* Supplied declaration required: FUN_003b5c54. */
/* Supplied declaration required: FUN_0040619c. */
/* Supplied declaration required: FUN_0040ace8. */
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_003ca5a4(int param_1)

{
/* irregular: 1 goto(s); 7 native warning(s); review required */
  char *pcVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [160];
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  
  temp_v2 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  FUN_00398420();
  if (0 < param_1) {
    do {
      pcVar1 = (char *)FUN_0033f830(temp_v2);
      temp_v0 = (int)*pcVar1;
      if (temp_v0 != -1) {
        if (*(short *)(pcVar1 + 4) != 0) {
          temp_v1 = FUN_0018719c();
          temp_v0 = 0;
          if (temp_v1 == 0) goto LAB_003ca648;
        }
        if ((*(short *)(pcVar1 + 6) == 0) || (temp_v0 = FUN_0018719c(), temp_v0 == 0)) {
          temp_v0 = (int)pcVar1[2];
          if (pcVar1[3] == '\0') {
            *(unsigned char *)((int)&temp_v5 + temp_v0) = 1;
          }
          else {
            *(unsigned char *)((int)&temp_v10 + temp_v0) = 1;
          }
        }
      }
LAB_003ca648:
      temp_v2 = temp_v2 + 1;
      FUN_00398420();
    } while (temp_v2 < temp_v0);
  }
  rt_memcpy_w(temp_v4,&DAT_00531270,0xa0);
  temp_v2 = DAT_00580238;
  rt_memcpy(&DAT_005f0c54,&temp_v5,0x28);
  for (temp_v3 = 0; temp_v0 = *(int *)(*(int *)(temp_v2 + 0x4ef8) + 8), temp_v3 < *(unsigned int *)(temp_v0 + 0x10);
      temp_v3 = temp_v3 + 1) {
    if ((&DAT_005f0c54)[temp_v3] != '\x01') {
      if ((DAT_00580238 != 0) && (*(char *)(DAT_00580238 + temp_v3 * 0x88 + 0x4f84) != '\0')) {
        FUN_0040619c(temp_v0,temp_v3);
        FUN_001aea28(DAT_0056fcc0,temp_v0);
        if ((DAT_00580238 != 0) &&
           (temp_v0 = DAT_00580238 + temp_v3 * 0x88, *(char *)(temp_v0 + 0x4f84) != '\0')) {
          *(unsigned char *)(temp_v0 + 0x4f84) = 0;
        }
      }
      FUN_003b5c54(temp_v3,0);
    }
    else {
      if ((DAT_00580238 == 0) || (*(char *)(DAT_00580238 + temp_v3 * 0x88 + 0x4f84) == '\0')) {
        FUN_0040619c(temp_v0,temp_v3);
        FUN_0040ace8(DAT_0056fcc0,temp_v0);
        if ((DAT_00580238 != 0) &&
           (temp_v0 = DAT_00580238 + temp_v3 * 0x88, *(char *)(temp_v0 + 0x4f84) == '\0')) {
          *(unsigned char *)(temp_v0 + 0x4f84) = 1;
        }
      }
      FUN_003b5c54(temp_v3,1);
    }
  }
  return;
}

} /* extern "C" */
