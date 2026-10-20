/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b9324` (_code @ 0x2b9324, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagsGetBlock(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char g_gameState; /* 0x5f15fc */

/* Supplied declaration required: gameFlagsGetBlock. */
extern int FUN_001ba570(void);
extern int FUN_001bd118(unsigned short);
extern int recordIsAvailable(unsigned short);
extern int FUN_003df004(unsigned short, int, int *);
extern int partyEntryFlagsBit1(unsigned short);
extern int partyEntryBitsBit1(unsigned short);


int FUN_002b9324(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5 [3];
  
  temp_v4 = 0;
  gameFlagsGetBlock();
  if ((*(signed char *)((unsigned char *)&g_gameState + 0xdc)) != '\0') {
    temp_v4 = 4;
  }
  else {
    temp_v0 = 100;
    do {
      temp_v1 = partyEntryFlagsBit1(temp_v0);
      if (temp_v1 != 0) {
        temp_v1 = FUN_001bd118(temp_v0);
        if (temp_v1 != 1) {
          if (((temp_v1 == 0) && (temp_v1 = partyEntryBitsBit1(temp_v0), temp_v1 != 0)) &&
             (temp_v1 = recordIsAvailable(temp_v0), temp_v1 != 0)) {
            temp_v1 = 0;
            temp_v3 = temp_v1;
            do {
              temp_v2 = FUN_003df004(temp_v0,temp_v1,temp_v5);
              if (temp_v2 != 0) {
                temp_v3 = temp_v3 + temp_v5[0];
              }
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < 4);
            if (temp_v3 == 0) {
              temp_v4 = 2;
            }
          }
        }
        else {
          temp_v1 = partyEntryBitsBit1(temp_v0);
          if (temp_v1 != 0) {
            temp_v1 = 0;
            temp_v3 = temp_v1;
            do {
              temp_v2 = FUN_003df004(temp_v0,temp_v1,temp_v5);
              if (temp_v2 != 0) {
                temp_v3 = temp_v3 + temp_v5[0];
              }
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < 4);
            if (temp_v3 == 0) {
              temp_v4 = 1;
            }
          }
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 400);
    if ((temp_v4 == 0) && (temp_v1 = FUN_001ba570(), temp_v1 != 0)) {
      temp_v4 = 3;
    }
  }
  return temp_v4;
}

} /* extern "C" */
