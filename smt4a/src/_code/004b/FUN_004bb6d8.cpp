/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bb6d8` (_code @ 0x4bb6d8, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00148d68(int, int, int);
int gameFlagSetValue(unsigned int, unsigned int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_00148d68. */
extern int gameDataGetTableEntry(unsigned char, unsigned char);
extern int FUN_0015fa74(unsigned char, unsigned char);
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int gameFlagIsSet(void);
extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: gameFlagSetValue. */


void FUN_004bb6d8(unsigned int param_1,unsigned int param_2)

{
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int i;
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  
  if (param_2 != 0) {
    temp_v2 = gameFlagIsSet();
    if (temp_v2 != 0) {
      return;
    }
  }
  else {
    temp_v2 = gameFlagIsSet();
    if (temp_v2 == 0) {
      return;
    }
  }
  temp_v3 = dataTableGet(2,0);
  temp_v2 = dataTableGetEntries();
  temp_v4 = dataTableGetCount(temp_v3);
  for (i = 0; i < temp_v4; i++) {
    if (*(unsigned short *)(temp_v2 + i * 0xa4 + 0xe) == param_1 || *(unsigned short *)(temp_v2 + i * 0xa4 + 0x10) == param_1) {
      temp_v0 = *(unsigned char *)(temp_v2 + i * 0xa4 + 1);
      temp_v1 = *(unsigned char *)(temp_v2 + i * 0xa4);
      temp_v5 = gameDataGetTableEntry(temp_v1,temp_v0);
      temp_v6 = FUN_0015fa74(temp_v1,temp_v0);
      gameFlagSetValue(param_1,param_2,0);
      temp_v7 = FUN_0015fa74(temp_v1,temp_v0);
      if (temp_v6 != temp_v7) {
        *(unsigned char *)(temp_v5 + 2) = 0;
        *(unsigned char *)(temp_v5 + 3) = *(unsigned char *)(temp_v5 + 3) & ~0x1f;
        FUN_00148d68(temp_v1,temp_v0,0);
      }
      gameFlagSetValue(param_1,param_2 ^ 1,0);
    }
  }
  return;
}

} /* extern "C" */
