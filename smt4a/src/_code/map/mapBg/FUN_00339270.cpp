/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00339270` (_code @ 0x339270, 0x5bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00178b04(int, unsigned char *, int);
int FUN_001cd3ec(unsigned int, unsigned char [132]);
int FUN_0040a908(unsigned int, int);
int FUN_0040a918(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spB0; /* 0xb0: local_b0 */
} void_stack;

extern unsigned char LAB_00339680; /* 0x339680 */
extern unsigned char LAB_003396ac; /* 0x3396ac */
extern unsigned char LAB_003396c8; /* 0x3396c8 */
extern unsigned char LAB_003396e8; /* 0x3396e8 */
extern int DAT_0058069c; /* 0x58069c */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00178b04. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_001cd3ec. */
/* Supplied declaration required: FUN_0040a908. */
/* Supplied declaration required: FUN_0040a918. */
extern int FUN_0040ab8c(unsigned int);
extern unsigned int FUN_0040ac08(void);


unsigned int FUN_00339270(void)

{
/* irregular: 5 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [132];
  
  temp_v0 = *(short *)(DAT_0058069c + 0x18);
  if (temp_v0 == 3) {
    temp_v1 = FUN_0040ab8c(*(unsigned int *)(DAT_0058069c + 0x10));
    if (temp_v1 == 0) {
      return 0;
    }
    *(unsigned short *)(DAT_0058069c + 0x18) = 10;
    return 0;
  }
  if (temp_v0 < 3) {
    if (temp_v0 == 0) {
      return 1;
    }
    if (temp_v0 == 1) {
      return 0;
    }
    if (temp_v0 != 2) {
      return 0;
    }
    if (0 < *(int *)(DAT_0058069c + 0x1c)) {
      temp_v1 = 0x20;
      FUN_00178b04(0x20,&LAB_00339680,0x4c7);
      temp_v2 = 0;
      if (temp_v1 != 0) {
        temp_v2 = FUN_0040ac08();
      }
      temp_v1 = DAT_0058069c;
      *(unsigned int *)(DAT_0058069c + 0x10) = temp_v2;
      FUN_00100388(temp_v4,&LAB_003396ac,*(unsigned int *)(temp_v1 + 0x1c));
      FUN_001cd3ec(*(unsigned int *)(DAT_0058069c + 0x10),temp_v4);
      *(short *)(DAT_0058069c + 0x18) = *(short *)(DAT_0058069c + 0x18) + 1;
      return 0;
    }
    *(unsigned short *)(DAT_0058069c + 0x18) = 10;
    return 0;
  }
  if (temp_v0 != 10) {
    if (temp_v0 != 0xb) {
      if (temp_v0 != 99) {
        return 0;
      }
      return 1;
    }
    temp_v1 = FUN_0040ab8c(*(unsigned int *)(DAT_0058069c + 0xc));
    if (temp_v1 == 0) {
      return 0;
    }
    temp_v1 = FUN_0040ab8c(*(unsigned int *)(DAT_0058069c + 0x14));
    if (temp_v1 == 0) {
      return 0;
    }
    *(unsigned short *)(DAT_0058069c + 0x18) = 99;
    return 0;
  }
  temp_v1 = 0x20;
  FUN_00178b04(0x20,&LAB_00339680,0x4fe);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_0040ac08();
  }
  temp_v1 = DAT_0058069c;
  *(unsigned int *)(DAT_0058069c + 0xc) = temp_v2;
  temp_v3 = (int)*(short *)(temp_v1 + 0x20);
  FUN_00100388(temp_v4,&LAB_003396c8,temp_v3,temp_v3,(int)*(short *)(temp_v1 + 0x22));
  temp_v1 = FUN_0018719c(0x9d);
  if (((((temp_v1 != 0) && (*(short *)(DAT_0058069c + 0x20) == 0x27)) &&
       ((*(short *)(DAT_0058069c + 0x22) != 1 ||
        (FUN_00100388(temp_v4,&LAB_003396c8,0x27,0x27,0xf),
        *(short *)(DAT_0058069c + 0x20) == 0x27)))) &&
      ((*(short *)(DAT_0058069c + 0x22) != 2 ||
       (FUN_00100388(temp_v4,&LAB_003396c8,0x27,0x27,0x10),
       *(short *)(DAT_0058069c + 0x20) == 0x27)))) &&
     (((*(short *)(DAT_0058069c + 0x22) != 3 ||
       (FUN_00100388(temp_v4,&LAB_003396c8,0x27,0x27,0x11),
       *(short *)(DAT_0058069c + 0x20) == 0x27)) &&
      ((*(short *)(DAT_0058069c + 0x22) != 4 ||
       (FUN_00100388(temp_v4,&LAB_003396c8,0x27,0x27,0x12),
       *(short *)(DAT_0058069c + 0x20) == 0x27)))))) {
    if (*(short *)(DAT_0058069c + 0x22) == 5) {
      FUN_00100388(temp_v4,&LAB_003396c8,0x27,0x27,0x13);
      if (*(short *)(DAT_0058069c + 0x20) == 0x2c || *(short *)(DAT_0058069c + 0x20) == 0x2f) {
        FUN_00100388(temp_v4,&LAB_003396c8,0x2b,0x2b,2);
      }
      if (*(short *)(DAT_0058069c + 0x20) == 0x2d || *(short *)(DAT_0058069c + 0x20) == 0x2e) {
        FUN_00100388(temp_v4,&LAB_003396c8,0x2b,0x2b,1);
      }
    }
  }
  else {
    if (*(short *)(DAT_0058069c + 0x20) == 0x2c || *(short *)(DAT_0058069c + 0x20) == 0x2f) {
      FUN_00100388(temp_v4,&LAB_003396c8,0x2b,0x2b,2);
    }
    if (*(short *)(DAT_0058069c + 0x20) == 0x2d || *(short *)(DAT_0058069c + 0x20) == 0x2e) {
      FUN_00100388(temp_v4,&LAB_003396c8,0x2b,0x2b,1);
    }
  }
  FUN_001cd3ec(*(unsigned int *)(DAT_0058069c + 0xc),temp_v4);
  temp_v1 = 0x20;
  FUN_00178b04(0x20,&LAB_00339680,0x528);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_0040ac08();
  }
  temp_v1 = DAT_0058069c;
  *(unsigned int *)(DAT_0058069c + 0x14) = temp_v2;
  temp_v3 = (int)*(short *)(temp_v1 + 0x20);
  FUN_00100388(temp_v4,&LAB_003396e8,temp_v3,temp_v3,(int)*(short *)(temp_v1 + 0x22));
  temp_v1 = FUN_0018719c(0x9d);
  if (((((temp_v1 != 0) && (*(short *)(DAT_0058069c + 0x20) == 0x27)) &&
       ((*(short *)(DAT_0058069c + 0x22) != 1 ||
        (FUN_00100388(temp_v4,&LAB_003396e8,0x27,0x27,0xf),
        *(short *)(DAT_0058069c + 0x20) == 0x27)))) &&
      (((*(short *)(DAT_0058069c + 0x22) != 2 ||
        (FUN_00100388(temp_v4,&LAB_003396e8,0x27,0x27,0x10),
        *(short *)(DAT_0058069c + 0x20) == 0x27)) &&
       ((*(short *)(DAT_0058069c + 0x22) != 3 ||
        (FUN_00100388(temp_v4,&LAB_003396e8,0x27,0x27,0x11),
        *(short *)(DAT_0058069c + 0x20) == 0x27)))))) &&
     ((*(short *)(DAT_0058069c + 0x22) != 4 ||
      (FUN_00100388(temp_v4,&LAB_003396e8,0x27,0x27,0x12),
      *(short *)(DAT_0058069c + 0x20) == 0x27)))) {
    if (*(short *)(DAT_0058069c + 0x22) != 5) {
      FUN_001cd3ec(*(unsigned int *)(DAT_0058069c + 0x14),temp_v4);
      FUN_0040a908(*(unsigned int *)(DAT_0058069c + 0x14),0x10000);
      FUN_0040a918(*(unsigned int *)(DAT_0058069c + 0x14),0x20000);
      *(short *)(DAT_0058069c + 0x18) = *(short *)(DAT_0058069c + 0x18) + 1;
      return 0;
    }
    FUN_00100388(temp_v4,&LAB_003396e8,0x27,0x27,0x13);
  }
  if (*(short *)(DAT_0058069c + 0x20) == 0x2c || *(short *)(DAT_0058069c + 0x20) == 0x2f) {
    FUN_00100388(temp_v4,&LAB_003396e8,0x2b,0x2b,2);
  }
  if (*(short *)(DAT_0058069c + 0x20) == 0x2d || *(short *)(DAT_0058069c + 0x20) == 0x2e) {
    FUN_00100388(temp_v4,&LAB_003396e8,0x2b,0x2b,1);
  }
  FUN_001cd3ec(*(unsigned int *)(DAT_0058069c + 0x14),temp_v4);
  FUN_0040a908(*(unsigned int *)(DAT_0058069c + 0x14),0x10000);
  FUN_0040a918(*(unsigned int *)(DAT_0058069c + 0x14),0x20000);
  *(short *)(DAT_0058069c + 0x18) = *(short *)(DAT_0058069c + 0x18) + 1;
  return 0;
}

} /* extern "C" */
