/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021545c` (_code @ 0x21545c, 0x4a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001517b4(...);
int FUN_00163aa4(int);
int eventQueueAddUniqueIfValid(int);
int uiSpriteSelectAnim(int, int);
int FUN_002007f4(int);
int FUN_00228b04(int, int);
int FUN_003450d4(int, unsigned int, int, int, int, int, unsigned char [16], int, int);

/* stack frame of void: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int g_playLog; /* 0x57f278 */

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern unsigned short FUN_001643b4(unsigned int, unsigned int);
extern unsigned int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: uiSpriteSelectAnim. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_002007f4. */
/* Supplied declaration required: FUN_00228b04. */
extern int FUN_002a4860(int);
extern int FUN_002a4894(int);
extern int objectApplyIfUnblocked(int);
extern int FUN_002e50d4(void);
/* Supplied declaration required: FUN_003450d4. */
extern int countersGetB(unsigned int);


void FUN_0021545c(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  short *psVar5;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9 [16];
  
  temp_v0 = g_playLog;
  switch(*(unsigned int *)(g_playLog + 0x344)) {
  case 0:
    temp_v7 = 0;
    do {
      if (temp_v7 <= *(int *)(temp_v0 + 0x340)) {
        FUN_00163aa4(temp_v0 + temp_v7 * 0x8c + 0x20);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 5);
    if (*(char *)(temp_v0 + 0x2da) != '\0') {
      temp_v1 = FUN_001643b4(0x25,0x1a);
      *(unsigned short *)(temp_v0 + 0x348) = temp_v1;
      temp_v1 = FUN_001643b4(0x25,0x1b);
      *(unsigned short *)(temp_v0 + 0x34a) = temp_v1;
      temp_v1 = FUN_001643b4(0x25,0x1c);
      *(unsigned short *)(temp_v0 + 0x34c) = temp_v1;
      *(short *)(temp_v0 + 0x358) = *(short *)(temp_v0 + 0x358) + 3;
      *(unsigned int *)(temp_v0 + 0x344) = 1;
      *(unsigned int *)(temp_v0 + 0x6ec) = 0;
    }
    break;
  case 1:
    temp_v6 = 0;
    temp_v7 = objectApplyIfUnblocked(g_playLog + 0x2dc);
    if (0 < temp_v7) {
      do {
        temp_v8 = (unsigned int)*(short *)(temp_v0 + temp_v6 * 2 + 0x424);
        temp_v2 = dataTableGet(0x37,0);
        temp_v7 = dataTableGetEntries();
        temp_v3 = dataTableGetCount(temp_v2);
        if (((temp_v8 < temp_v3) && (psVar5 = (short *)(temp_v7 + temp_v8 * 0x40), psVar5 != (short *)0x0)
            ) && (*psVar5 == 0x2e)) {
          temp_v7 = FUN_002e50d4();
          temp_v4 = countersGetB(0x2e);
          temp_v5 = temp_v0 + temp_v6 * 4;
          *(int *)(temp_v5 + 0x490) = temp_v7 - temp_v4;
          *(int *)(temp_v5 + 0x5c0) = temp_v7;
          *(unsigned int *)(temp_v5 + 0x35c) =
               *(unsigned int *)(temp_v0 + (unsigned int)*(unsigned char *)(temp_v0 + 0x489) * 0x130 + temp_v6 * 4 + 0x490);
        }
        temp_v6 = temp_v6 + 1;
        temp_v7 = objectApplyIfUnblocked(temp_v0 + 0x2dc);
      } while (temp_v6 < temp_v7);
    }
    temp_v9[0] = 0;
    temp_v2 = FUN_001834a4(0x25,0x1c);
    temp_v7 = FUN_002a4860(temp_v0 + 0x2dc);
    temp_v6 = temp_v0 + 0x2dc;
    FUN_003450d4(temp_v6,temp_v2,0,(int)*(short *)(temp_v0 + 0x34c),(int)*(short *)(temp_v0 + 0x348),
                 (int)*(short *)(temp_v0 + 0x34a),temp_v9,0,0);
    if (temp_v6 != 0) {
      temp_v6 = FUN_002a4860(temp_v0 + 0x2dc);
    }
    else {
      temp_v6 = temp_v0 + 0x2dc;
      FUN_00228b04(temp_v6,0);
      if (temp_v6 == 0) {
        temp_v7 = 1;
        FUN_001517b4();
        if (temp_v7 != 0) {
          eventQueueAddUniqueIfValid(0x100020f);
          temp_v7 = 0;
          do {
            uiSpriteSelectAnim(temp_v0 + temp_v7 * 0x8c + 0x20,1);
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < 5);
          *(unsigned int *)(temp_v0 + 0x344) = 2;
          *(unsigned int *)(temp_v0 + 0x6ec) = 0;
        }
        else if (*(char *)(temp_v0 + 0x488) != '\0') {
          temp_v7 = 8;
          FUN_001517b4(8,1);
          if (temp_v7 != 0) {
            temp_v7 = 0;
            do {
              uiSpriteSelectAnim(temp_v0 + temp_v7 * 0x8c + 0x20,3);
              temp_v7 = temp_v7 + 1;
            } while (temp_v7 < 5);
            *(unsigned char *)(temp_v0 + 0x6f0) = 1;
            *(unsigned int *)(temp_v0 + 0x344) = 3;
            *(unsigned int *)(temp_v0 + 0x6ec) = 0;
          }
          else if (*(char *)(temp_v0 + 0x488) != '\0') {
            temp_v7 = 7;
            FUN_001517b4(7,1);
            if (temp_v7 != 0) {
              temp_v7 = 0;
              do {
                uiSpriteSelectAnim(temp_v0 + temp_v7 * 0x8c + 0x20,1);
                temp_v7 = temp_v7 + 1;
              } while (temp_v7 < 5);
              *(unsigned char *)(temp_v0 + 0x6f0) = 0;
              *(unsigned int *)(temp_v0 + 0x344) = 3;
              *(unsigned int *)(temp_v0 + 0x6ec) = 0;
            }
          }
        }
        break;
      }
      temp_v6 = objectApplyIfUnblocked(temp_v0 + 0x2dc);
      if (temp_v6 >= 6) {
        temp_v6 = FUN_002a4860(temp_v0 + 0x2dc);
        while ((temp_v6 == temp_v7 &&
               ((temp_v6 = FUN_002a4860(temp_v0 + 0x2dc), temp_v6 != 0 ||
                (temp_v6 = FUN_002a4894(temp_v0 + 0x2dc), temp_v6 != 0))))) {
          temp_v6 = FUN_002a4860(temp_v0 + 0x2dc);
          temp_v4 = objectApplyIfUnblocked(temp_v0 + 0x2dc);
          if ((temp_v6 == temp_v4 - 5) && (temp_v6 = FUN_002a4894(temp_v0 + 0x2dc), temp_v6 == 4)) break;
          FUN_00228b04(temp_v0 + 0x2dc,0);
          temp_v6 = FUN_002a4860(temp_v0 + 0x2dc);
        }
      }
      temp_v6 = FUN_002a4860(temp_v0 + 0x2dc);
    }
    if (temp_v6 != temp_v7) {
      eventQueueAddUniqueIfValid(0x100020d);
    }
    break;
  case 2:
    temp_v7 = 0;
    do {
      FUN_00163aa4(temp_v0 + temp_v7 * 0x8c + 0x20);
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 5);
    if (*(char *)(temp_v0 + 0x2da) != '\0') {
      *(unsigned int *)(temp_v0 + 0x344) = 4;
      *(unsigned int *)(temp_v0 + 0x6ec) = 0;
    }
    break;
  case 3:
    FUN_002007f4(g_playLog);
  }
  *(int *)(temp_v0 + 0x340) = *(int *)(temp_v0 + 0x340) + 1;
  return;
}

} /* extern "C" */
