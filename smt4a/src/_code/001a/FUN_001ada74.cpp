/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ada74` (_code @ 0x1ada74, 0x2a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameGetSlotRecord(void);
int gameGetSlotTable(void);
int FUN_001ad9b4(void);
int bitArrayCountSet1to500(void);

/* Supplied declaration required: gameGetSlotRecord. */
/* Supplied declaration required: gameGetSlotTable. */
/* Supplied declaration required: FUN_001ad9b4. */
extern int gameSlotTableFindFree(void);
extern int gameOptionsClassifyMode(void);
extern int gameDataTableGetFlag(void);
/* Supplied declaration required: bitArrayCountSet1to500. */
extern unsigned int gameCountersGetWord(unsigned short);
extern int gameFindRosterEntry(int);
extern unsigned int FUN_001ba3d4(unsigned short);
extern int bitSetTest(unsigned int, unsigned short);
extern int partyFindSlotById(unsigned short);
extern int FUN_001ba570(void);


void FUN_001ada74(int param_1)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  
  temp_v3 = param_1;
  FUN_001ad9b4();
  if (temp_v3 != 0) {
    temp_v0 = *(char *)(temp_v3 + 6);
    if (!(temp_v0 == '\x04' || temp_v0 == '\x05')) {
      if (temp_v0 != '\x06') {
        temp_v2 = gameOptionsClassifyMode();
        if ((temp_v2 != 2) || (temp_v2 = FUN_001ba570(), temp_v2 == 0)) {
          if (*(short *)(temp_v3 + 0x100) == 5) {
            temp_v2 = gameSlotTableFindFree();
            temp_v10 = gameGetSlotTable();
            temp_v9 = 0;
            if (temp_v2 < 1) {
              return;
            }
            do {
              if (-1 < *(char *)(temp_v10 + 0x1c88 + temp_v9)) {
                temp_v4 = gameGetSlotRecord();
                temp_v8 = 0;
                while( 1 ) {
                  temp_v5 = temp_v3 + temp_v8 * 8;
                  temp_v1 = *(short *)(temp_v5 + 0x100);
                  if (((temp_v1 != 0) && (temp_v1 == 5)) &&
                     (temp_v5 = bitSetTest(temp_v4,*(unsigned short *)(temp_v5 + 0x102)), temp_v5 == 0))
                  break;
                  temp_v8 = temp_v8 + 1;
                  if (temp_v8 >= 4) {
                    return;
                  }
                }
              }
              temp_v9 = temp_v9 + 1;
            } while (temp_v9 < temp_v2);
            return;
          }
          temp_v2 = 0;
          do {
            temp_v10 = temp_v3 + temp_v2 * 8;
            switch(*(unsigned short *)(temp_v10 + 0x100)) {
            case 1:
              temp_v7 = FUN_001ba3d4(*(unsigned short *)(temp_v10 + 0x102));
              if (temp_v7 < *(unsigned int *)(temp_v10 + 0x104)) {
                return;
              }
              break;
            case 2:
              if (*(char *)(temp_v3 + 6) != '\x01') {
                temp_v10 = partyFindSlotById(*(unsigned short *)(temp_v10 + 0x102));
                if (temp_v10 < 0) {
                  return;
                }
              }
              else {
                temp_v9 = gameFindRosterEntry(param_1);
                if ((temp_v9 == 0) ||
                   ((unsigned int)*(unsigned short *)(temp_v9 + temp_v2 * 2 + 4) < *(unsigned int *)(temp_v10 + 0x104))) {
                  return;
                }
              }
              break;
            case 3:
              puVar7 = (unsigned int *)gameGetSlotTable();
              if (*puVar7 < *(unsigned int *)(temp_v10 + 0x104)) {
                return;
              }
              break;
            case 6:
              temp_v9 = gameSlotTableFindFree();
              temp_v8 = gameGetSlotTable();
              temp_v5 = 0;
              if (0 < temp_v9) {
                do {
                  if (-1 < *(char *)(temp_v8 + 0x1c88 + temp_v5)) {
                    temp_v6 = gameGetSlotRecord();
                    temp_v7 = temp_v6 + 0x68;
                    bitArrayCountSet1to500();
                    if (*(unsigned int *)(temp_v10 + 0x104) <= temp_v7) goto LAB_001add08;
                  }
                  temp_v5 = temp_v5 + 1;
                  if (temp_v9 <= temp_v5) break;
                } while( 1 );
              }
            case 7:
              return;
            case 8:
              temp_v7 = gameCountersGetWord(*(unsigned short *)(temp_v10 + 0x102) & 0xff);
              if (temp_v7 < *(unsigned int *)(temp_v10 + 0x104)) {
                return;
              }
            }
LAB_001add08:
            temp_v2 = temp_v2 + 1;
            if (temp_v2 >= 4) {
              return;
            }
          } while( 1 );
        }
      }
      else {
        temp_v3 = gameDataTableGetFlag();
        if (temp_v3 != 4) {
          return;
        }
      }
    }
    else {
      temp_v3 = gameOptionsClassifyMode();
      if ((temp_v3 != 0) && (temp_v3 = FUN_001ba570(), temp_v3 == 0)) {
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
