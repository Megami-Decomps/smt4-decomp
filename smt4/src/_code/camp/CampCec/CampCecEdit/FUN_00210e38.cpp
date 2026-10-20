/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00210e38` (_code @ 0x210e38, 0x250 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001eb874(unsigned int, unsigned int, int, int, int, int);
int FUN_00259838(unsigned int, int, int);
int FUN_002bed3c(void);
int FUN_002bf380(int, int, int, unsigned int, unsigned int, int);
int FUN_002bf4f8(int, int);
int FUN_002c18e4(...);
int FUN_002c198c(...);
int FUN_002c39a4(int);
int FUN_002d670c(...);
int FUN_002e15f8(int, int, int);
int FUN_002ec210(int, int, int, unsigned int, int);
int FUN_002ec2e0(...);
int FUN_00309ec8(...);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int DAT_0043dad0; /* 0x43dad0 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_001eb874. */
extern unsigned int FUN_0025981c(void);
/* Supplied declaration required: FUN_00259838. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002d670c. */
/* Supplied declaration required: FUN_002e15f8. */
/* Supplied declaration required: FUN_002ec210. */
/* Supplied declaration required: FUN_002ec2e0. */
/* Supplied declaration required: FUN_00309ec8. */


unsigned int FUN_00210e38(void)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar8;
  int temp_v7;
  unsigned int temp_v8;
  
  temp_v0 = DAT_0043dad0;
  FUN_002bf4f8(0x39,0xcf);
  temp_v7 = *(int *)(temp_v0 + 0x138);
  temp_v1 = FUN_002bf4f8(0x39,0x97);
  if (*(char *)(temp_v0 + 0x128) != '\0') {
    temp_v2 = FUN_0025981c();
    FUN_002ec210(temp_v0 + 0x3c,0,0,temp_v2,1);
    FUN_00259838(*(unsigned int *)(temp_v0 + 0x10),temp_v0 + 0x50,0);
    FUN_001eb874(*(unsigned int *)(temp_v0 + 0xc),*(unsigned int *)(temp_v0 + 8),temp_v0 + 100,
                 (int)*(short *)(temp_v1 + 8),(int)*(short *)(temp_v1 + 10),0);
    if (*(int *)(temp_v0 + 0x10c) == 1) {
      FUN_002e15f8(temp_v0 + 0x78,(int)*(short *)(temp_v1 + 8),(int)*(short *)(temp_v1 + 10));
    }
  }
  if (*(char *)(temp_v0 + 0x12a) != '\0') {
    temp_v2 = *(unsigned int *)(temp_v0 + 0x90);
    temp_v8 = *(unsigned int *)(temp_v0 + 0x94);
    FUN_002c39a4(DAT_0044ea00);
    FUN_002bed3c();
    temp_v1 = DAT_0044ea00;
    temp_v3 = FUN_002c5d80(1,0);
    piVar8 = (int *)(temp_v1 + 0x124c);
    temp_v5 = *piVar8;
    temp_v6 = piVar8[temp_v5 + 2];
    *piVar8 = temp_v5 + 1;
    piVar8[temp_v5 + 3] = temp_v3;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v6 != temp_v3) {
      (**(romwright_code **)(temp_v1 + 0x1268))();
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    FUN_002bf380(2,0x39,0x12,temp_v2,temp_v8,0xb);
    FUN_002d670c(temp_v0 + 0x8c,*(unsigned int *)(temp_v0 + 0xb0),*(unsigned int *)(temp_v0 + 0xac),
                 *(unsigned int *)(temp_v0 + 0x138),*(unsigned int *)(temp_v0 + 0x134),
                 *(unsigned int *)(temp_v0 + 0x148));
    temp_v4 = *(unsigned int *)(temp_v0 + 0x130);
    if (temp_v7 < 0xb) {
      temp_v7 = 0xb;
    }
    FUN_00309ec8(temp_v0 + 0x8c,0,0,temp_v4 & 1,(temp_v4 & 2) >> 1,(temp_v4 & 4) >> 2,
                 *(unsigned int *)(temp_v0 + 300),*(unsigned int *)(temp_v0 + 0x134),temp_v7);
    if (*(char *)(temp_v0 + 0x141) != '\0') {
      FUN_002ec2e0(*(unsigned int *)(temp_v0 + 0xb0),*(unsigned int *)(temp_v0 + 0xac),
                   *(unsigned int *)(temp_v0 + 0x134),*(unsigned int *)(temp_v0 + 0x148),
                   *(unsigned int *)(temp_v0 + 0x13c),*(unsigned int *)(temp_v0 + 0x14c),
                   *(unsigned int *)(temp_v0 + 0x144));
    }
    temp_v0 = DAT_0044ea00;
    piVar8 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v1 = *piVar8;
    temp_v7 = piVar8[temp_v1 + 2];
    *piVar8 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v7 != piVar8[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    FUN_002c198c(DAT_0044ea00);
    FUN_002c18e4(DAT_0044ea00);
  }
  return 0;
}

} /* extern "C" */
