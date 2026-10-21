/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034858c` (_code @ 0x34858c, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobSetIntensity(unsigned int, int);
int jobBlendSetRate(unsigned int, int);
int messageMainSetMode(int);
int scrGetArg(int);

extern int g_eventTex; /* 0x57f3b0 */

extern int jobIsValid(unsigned int);
/* Supplied declaration required: jobSetIntensity. */
/* Supplied declaration required: jobBlendSetRate. */
extern short eventTexJobGetId(unsigned int);
extern short FUN_00167898(unsigned int);
/* Supplied declaration required: messageMainSetMode. */
extern unsigned char FUN_00169580(unsigned int);
extern unsigned char FUN_00169590(unsigned int);
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_0034858c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  short temp_v2;
  short temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  
  temp_v2 = scrGetArg(0);
  temp_v4 = scrGetArg(1);
  temp_v0 = g_eventTex;
  temp_v7 = temp_v4 != 0;
  if (g_eventTex != 0) {
    temp_v4 = 0;
    if (0 < *(int *)(g_eventTex + 0x44)) {
      do {
        temp_v6 = temp_v0 + temp_v4 * 4;
        temp_v5 = jobIsValid(*(unsigned int *)(temp_v6 + 4));
        if (((temp_v5 != 0) && (temp_v3 = eventTexJobGetId(*(unsigned int *)(temp_v6 + 4)), temp_v3 == temp_v2)) &&
           (jobSetIntensity(*(unsigned int *)(temp_v6 + 4),temp_v7), temp_v7)) {
          temp_v1 = FUN_00169580(*(unsigned int *)(temp_v6 + 4));
          messageMainSetMode(temp_v1);
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < *(int *)(temp_v0 + 0x44));
    }
    temp_v4 = 0;
    do {
      temp_v6 = temp_v0 + temp_v4 * 4;
      temp_v5 = jobIsValid(*(unsigned int *)(temp_v6 + 0x4c));
      if (((temp_v5 != 0) && (temp_v3 = FUN_00167898(*(unsigned int *)(temp_v6 + 0x4c)), temp_v3 == temp_v2)) &&
         (jobBlendSetRate(*(unsigned int *)(temp_v6 + 0x4c),temp_v7), temp_v7)) {
        temp_v1 = FUN_00169590(*(unsigned int *)(temp_v6 + 0x4c));
        messageMainSetMode(temp_v1);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x10);
  }
  return 1;
}

} /* extern "C" */
