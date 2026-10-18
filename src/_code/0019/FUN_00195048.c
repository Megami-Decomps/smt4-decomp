/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00195048` (_code @ 0x195048, 0x350 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned int FUN_00290a4c(void);
extern int FUN_0029f0f4(int);
extern int FUN_0029f248(int);
extern int FUN_0029f260(int);
/* Supplied declaration required: FUN_0029f278. */
/* Supplied declaration required: FUN_0029f878. */
extern unsigned short FUN_002b88c4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b9220. */
/* Supplied declaration required: FUN_002bc200. */
/* Supplied declaration required: FUN_002bdac0. */
extern unsigned int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf9f0. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);
extern int FUN_002c1830(unsigned int);


void FUN_00195048(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  short *psVar4;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [8];
  
  temp_v5 = *param_1;
  temp_v1 = *(int *)(temp_v5 + 0x344);
  if (temp_v1 == 0) {
    temp_v1 = 0;
    do {
      if (temp_v1 <= *(int *)(temp_v5 + 0x340)) {
        FUN_002b9220(temp_v5 + temp_v1 * 0x8c + 0x20,0);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 5);
    if (*(char *)(temp_v5 + 0x2da) != '\0') {
      temp_v0 = FUN_002b88c4(0x30,0x1a);
      *(unsigned short *)(temp_v5 + 0x348) = temp_v0;
      temp_v0 = FUN_002b88c4(0x30,0x1b);
      *(unsigned short *)(temp_v5 + 0x34a) = temp_v0;
      temp_v0 = FUN_002b88c4(0x30,0x1c);
      *(unsigned short *)(temp_v5 + 0x34c) = temp_v0;
      *(short *)(temp_v5 + 0x358) = *(short *)(temp_v5 + 0x358) + 3;
      *(unsigned int *)(temp_v5 + 0x344) = 1;
    }
  }
  else if (temp_v1 != 1) {
    if (temp_v1 != 2) {
      *(int *)(temp_v5 + 0x340) = *(int *)(temp_v5 + 0x340) + 1;
      return;
    }
    temp_v1 = 0;
    do {
      FUN_002bf9f0(temp_v5 + temp_v1 * 0x8c + 0x20);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 5);
    if (*(char *)(temp_v5 + 0x2da) == '\0') {
      *(int *)(temp_v5 + 0x340) = *(int *)(temp_v5 + 0x340) + 1;
      return;
    }
    temp_v4 = 3;
    *(unsigned int *)(temp_v5 + 0x344) = temp_v4;
  }
  else {
    temp_v6 = 0;
    temp_v1 = FUN_0029f0f4(temp_v5 + 0x2dc);
    if (0 < temp_v1) {
      do {
        temp_v7 = (unsigned int)*(short *)(temp_v5 + temp_v6 * 2 + 0x424);
        temp_v4 = FUN_002c0ec4(0x37,0);
        temp_v1 = FUN_002c0e9c();
        temp_v2 = FUN_002c0e4c(temp_v4);
        if (((temp_v7 < temp_v2) && (psVar4 = (short *)(temp_v1 + temp_v7 * 0x40), psVar4 != (short *)0x0))
           && (*psVar4 < 0)) {
          temp_v4 = FUN_00290a4c();
          *(unsigned int *)(temp_v5 + temp_v6 * 4 + 0x35c) = temp_v4;
        }
        temp_v6 = temp_v6 + 1;
        temp_v1 = FUN_0029f0f4(temp_v5 + 0x2dc);
      } while (temp_v6 < temp_v1);
    }
    temp_v8[0] = 0;
    temp_v4 = FUN_002bf6d0(0x30,0x1c);
    temp_v1 = FUN_0029f260(temp_v5 + 0x2dc);
    temp_v6 = temp_v5 + 0x2dc;
    FUN_0029f878(temp_v6,temp_v4,0,(int)*(short *)(temp_v5 + 0x34c),(int)*(short *)(temp_v5 + 0x348),
                 (int)*(short *)(temp_v5 + 0x34a),temp_v8,0,0);
    if (temp_v6 != 0) {
      temp_v6 = FUN_0029f260(temp_v5 + 0x2dc);
    }
    else {
      temp_v6 = temp_v5 + 0x2dc;
      FUN_0029f278(temp_v6,0);
      if (temp_v6 == 0) {
        temp_v1 = FUN_002c1830(1);
        if (temp_v1 == 0) {
          *(int *)(temp_v5 + 0x340) = *(int *)(temp_v5 + 0x340) + 1;
          return;
        }
        FUN_002bc200(0x100016e);
        temp_v1 = 0;
        do {
          FUN_002bdac0(temp_v5 + temp_v1 * 0x8c + 0x20,1,0);
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 5);
        temp_v4 = 2;
        *(unsigned int *)(temp_v5 + 0x344) = temp_v4;
        *(int *)(temp_v5 + 0x340) = *(int *)(temp_v5 + 0x340) + 1;
        return;
      }
      temp_v6 = FUN_0029f0f4(temp_v5 + 0x2dc);
      if (temp_v6 >= 6) {
        temp_v6 = FUN_0029f260(temp_v5 + 0x2dc);
        while ((temp_v6 == temp_v1 &&
               ((temp_v6 = FUN_0029f260(temp_v5 + 0x2dc), temp_v6 != 0 ||
                (temp_v6 = FUN_0029f248(temp_v5 + 0x2dc), temp_v6 != 0))))) {
          temp_v6 = FUN_0029f260(temp_v5 + 0x2dc);
          temp_v3 = FUN_0029f0f4(temp_v5 + 0x2dc);
          if ((temp_v6 == temp_v3 - 5) && (temp_v6 = FUN_0029f248(temp_v5 + 0x2dc), temp_v6 == 4)) break;
          FUN_0029f278(temp_v5 + 0x2dc,0);
          temp_v6 = FUN_0029f260(temp_v5 + 0x2dc);
        }
      }
      temp_v6 = FUN_0029f260(temp_v5 + 0x2dc);
    }
    if (temp_v6 != temp_v1) {
      FUN_002bc200(0x100016c);
    }
  }
  *(int *)(temp_v5 + 0x340) = *(int *)(temp_v5 + 0x340) + 1;
  return;
}
