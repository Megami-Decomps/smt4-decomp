/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00195150` (_code @ 0x195150, 0x350 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029efd8(int, int);
int FUN_0029f5d8(int, unsigned int, int, int, int, int, unsigned char [8], int, int);
int FUN_002b8ee0(int, int);
int FUN_002bc01c(int);
int timerStart(int, int, int);
int FUN_002bf818(int);
int FUN_002c1658(void);

/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned int FUN_002907a8(void);
extern int FUN_0029ee54(int);
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
/* Supplied declaration required: FUN_0029efd8. */
/* Supplied declaration required: FUN_0029f5d8. */
extern unsigned short FUN_002b8584(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b8ee0. */
/* Supplied declaration required: FUN_002bc01c. */
/* Supplied declaration required: timerStart. */
extern unsigned int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf818. */
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c1658. */


void FUN_00195150(int *param_1)

{
/* irregular: 7 native warning(s); review required */
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
        FUN_002b8ee0(temp_v5 + temp_v1 * 0x8c + 0x20,0);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 5);
    if (*(char *)(temp_v5 + 0x2da) != '\0') {
      temp_v0 = FUN_002b8584(0x30,0x1a);
      *(unsigned short *)(temp_v5 + 0x348) = temp_v0;
      temp_v0 = FUN_002b8584(0x30,0x1b);
      *(unsigned short *)(temp_v5 + 0x34a) = temp_v0;
      temp_v0 = FUN_002b8584(0x30,0x1c);
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
      FUN_002bf818(temp_v5 + temp_v1 * 0x8c + 0x20);
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
    temp_v1 = FUN_0029ee54(temp_v5 + 0x2dc);
    if (0 < temp_v1) {
      do {
        temp_v7 = (unsigned int)*(short *)(temp_v5 + temp_v6 * 2 + 0x424);
        temp_v4 = dataTableGet(0x37,0);
        temp_v1 = dataTableGetEntries();
        temp_v2 = dataTableGetCount(temp_v4);
        if (((temp_v7 < temp_v2) && (psVar4 = (short *)(temp_v1 + temp_v7 * 0x40), psVar4 != (short *)0x0))
           && (*psVar4 < 0)) {
          temp_v4 = FUN_002907a8();
          *(unsigned int *)(temp_v5 + temp_v6 * 4 + 0x35c) = temp_v4;
        }
        temp_v6 = temp_v6 + 1;
        temp_v1 = FUN_0029ee54(temp_v5 + 0x2dc);
      } while (temp_v6 < temp_v1);
    }
    temp_v8[0] = 0;
    temp_v4 = FUN_002bf4f8(0x30,0x1c);
    temp_v1 = FUN_0029efc0(temp_v5 + 0x2dc);
    temp_v6 = temp_v5 + 0x2dc;
    FUN_0029f5d8(temp_v6,temp_v4,0,(int)*(short *)(temp_v5 + 0x34c),(int)*(short *)(temp_v5 + 0x348),
                 (int)*(short *)(temp_v5 + 0x34a),temp_v8,0,0);
    if (temp_v6 != 0) {
      temp_v6 = FUN_0029efc0(temp_v5 + 0x2dc);
    }
    else {
      temp_v6 = temp_v5 + 0x2dc;
      FUN_0029efd8(temp_v6,0);
      if (temp_v6 == 0) {
        temp_v1 = 1;
        FUN_002c1658();
        if (temp_v1 == 0) {
          *(int *)(temp_v5 + 0x340) = *(int *)(temp_v5 + 0x340) + 1;
          return;
        }
        FUN_002bc01c(0x100016e);
        temp_v1 = 0;
        do {
          timerStart(temp_v5 + temp_v1 * 0x8c + 0x20,1,0);
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 5);
        temp_v4 = 2;
        *(unsigned int *)(temp_v5 + 0x344) = temp_v4;
        *(int *)(temp_v5 + 0x340) = *(int *)(temp_v5 + 0x340) + 1;
        return;
      }
      temp_v6 = FUN_0029ee54(temp_v5 + 0x2dc);
      if (temp_v6 >= 6) {
        temp_v6 = FUN_0029efc0(temp_v5 + 0x2dc);
        while ((temp_v6 == temp_v1 &&
               ((temp_v6 = FUN_0029efc0(temp_v5 + 0x2dc), temp_v6 != 0 ||
                (temp_v6 = FUN_0029efa8(temp_v5 + 0x2dc), temp_v6 != 0))))) {
          temp_v6 = FUN_0029efc0(temp_v5 + 0x2dc);
          temp_v3 = FUN_0029ee54(temp_v5 + 0x2dc);
          if ((temp_v6 == temp_v3 - 5) && (temp_v6 = FUN_0029efa8(temp_v5 + 0x2dc), temp_v6 == 4)) break;
          FUN_0029efd8(temp_v5 + 0x2dc,0);
          temp_v6 = FUN_0029efc0(temp_v5 + 0x2dc);
        }
      }
      temp_v6 = FUN_0029efc0(temp_v5 + 0x2dc);
    }
    if (temp_v6 != temp_v1) {
      FUN_002bc01c(0x100016c);
    }
  }
  *(int *)(temp_v5 + 0x340) = *(int *)(temp_v5 + 0x340) + 1;
  return;
}

} /* extern "C" */
