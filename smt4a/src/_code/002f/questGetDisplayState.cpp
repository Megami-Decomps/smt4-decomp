/* NON_MATCHING: romwright 0.5.0 decompilation of `questGetDisplayState` (_code @ 0x2f7730, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "code/Code002f.h"

extern "C" {

int questDataGetRecord(void);

extern int idIsAtLeast350(int);
/* Supplied declaration required: questDataGetRecord. */
extern int questIsCompleted(int);
extern int questHasNewMark(int);
extern int partyEntryGetByte1(int);


int questGetDisplayState(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  if ((param_2 == 0) || (temp_v1 = param_2, questDataGetRecord(), temp_v1 == 0)) {
    return -1;
  }
  temp_v0 = 0;
  temp_v2 = idIsAtLeast350(param_2);
  if ((temp_v2 != 0) && (*(char *)(temp_v1 + 6) == '\0')) {
    temp_v0 = 1;
  }
  temp_v2 = questHasNewMark(param_2);
  temp_v3 = questIsCompleted(param_2);
  temp_v5 = -1;
  temp_v6 = 0;
  do {
    temp_v5 = temp_v5 + 1;
    do {
      while( 1 ) {
        while( 1 ) {
          if (temp_v5 == param_1) {
            return temp_v6;
          }
          temp_v6 = temp_v6 + 1;
          if (temp_v6 >= 4) {
            return -1;
          }
          if (temp_v6 == 0) {
            temp_v5 = temp_v5 + 1;
            continue;
          }
          if (temp_v6 != 1) break;
          if (((unsigned int)(temp_v2 != 0 || temp_v0) & ((*(unsigned char *)(temp_v1 + 7) & 0x3f) >> 5)) != 0) {
            temp_v5 = temp_v5 + 1;
          }
        }
        if (temp_v6 == 2) break;
        if (temp_v6 == 3) {
          temp_v5 = temp_v5 + 1;
        }
      }
      temp_v4 = partyEntryGetByte1(param_2);
    } while ((temp_v4 < 1) || (temp_v3 == 0 && (temp_v2 == 0 && !temp_v0)));
  } while( 1 );
}

} /* extern "C" */
