/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002954f4` (_code @ 0x2954f4, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int panelSetupButtons(int);
int asdTMTexTableLoadEntryAsync(int, unsigned int);
int FUN_002a5ee4(unsigned int, int, unsigned int, int);
int FUN_002ae8e4(unsigned int, int, unsigned int, int);
int dataTable00FindById(void);
int devilGetRecord(void);
int FUN_002c58c8(int, unsigned int);
int FUN_0032c3fc(int);

extern unsigned int g_aocSystem; /* 0x433158 */
extern int g_btlTalkBustUp; /* 0x434210 */

/* Supplied declaration required: panelSetupButtons. */
/* Supplied declaration required: asdTMTexTableLoadEntryAsync. */
/* Supplied declaration required: FUN_002a5ee4. */
/* Supplied declaration required: FUN_002ae8e4. */
extern int FUN_002ae98c(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: FUN_002c58c8. */
/* Supplied declaration required: FUN_0032c3fc. */


void FUN_002954f4(int param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = g_btlTalkBustUp;
  if (g_btlTalkBustUp != 0) {
    temp_v1 = param_1;
    dataTable00FindById();
    *(unsigned int *)(temp_v0 + 0x2f0) = (unsigned int)*(unsigned char *)(temp_v1 + 0xa2);
    temp_v1 = param_1;
    devilGetRecord();
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x90);
    *(unsigned int *)(temp_v0 + 0x2f8) = temp_v2;
    *(int *)(temp_v0 + 0x308) = param_1;
    if (param_2 == 0) {
      temp_v1 = FUN_002ae98c(g_aocSystem,0x18,temp_v2,1);
      if (temp_v1 != 0) {
        FUN_002ae8e4(g_aocSystem,0x18,*(unsigned int *)(temp_v0 + 0x2f8),0x10000);
      }
      else {
        FUN_002c58c8(0x18,*(unsigned int *)(temp_v0 + 0x2f8));
      }
      FUN_0032c3fc(temp_v0);
      panelSetupButtons(temp_v0);
      *(unsigned int *)(temp_v0 + 0x2e8) = 2;
      *(unsigned int *)(temp_v0 + 0x2ec) = 0;
      return;
    }
    temp_v1 = FUN_002ae98c(g_aocSystem,0x18,temp_v2,1);
    if (temp_v1 != 0) {
      FUN_002a5ee4(g_aocSystem,0x18,*(unsigned int *)(temp_v0 + 0x2f8),0x10000);
    }
    else {
      asdTMTexTableLoadEntryAsync(0x18,*(unsigned int *)(temp_v0 + 0x2f8));
    }
    *(unsigned int *)(temp_v0 + 0x2e8) = 1;
    *(unsigned int *)(temp_v0 + 0x2ec) = 0;
  }
  return;
}

} /* extern "C" */
