/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026e420` (_code @ 0x26e420, 0x1c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00215c5c(void);
int questEntryCheck(void);
int gameFlagSetValue(...);
int libc_bsearch(...);
int FUN_00334ff8(void);

/* stack frame of param_3: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp40; /* 0x40: local_40 */
    unsigned int sp68; /* 0x68: local_68 */
} param_3_stack;

extern unsigned char LAB_00145c78; /* 0x145c78 */

/* Supplied declaration required: FUN_00215c5c. */
extern int gameDataGetFlagBits(void);
/* Supplied declaration required: questEntryCheck. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGetCount(int);
extern unsigned int dataTableGetEntries(void);
extern int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00334ff8. */


unsigned int FUN_0026e420(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char *pbVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char *puVar8;
  unsigned char temp_v6 [32];
  unsigned short temp_v7;
  
  temp_v1 = gameDataGetFlagBits();
  temp_v2 = gameDataGetFlagBits();
  if ((((unsigned int)*(unsigned char *)(temp_v2 + (param_1 >> 3)) & (1 << (param_1 & 7))) == 0) &&
     ((param_2 != 0 || (temp_v3 = param_1, questEntryCheck(), temp_v3 == 0)))) {
    if (param_3 == 0) {
      pbVar5 = (unsigned char *)(((int)(param_1 + ((unsigned int)((int)param_1 >> 0x1f) >> 0x1d)) >> 3) + temp_v1);
      temp_v0 = (unsigned char)(1 << (((int)param_1 % 8) & 0xffU));
      *pbVar5 = *pbVar5 | temp_v0;
      pbVar5[0x12] = temp_v0 | pbVar5[0x12];
      FUN_00334ff8();
      temp_v2 = dataTableGet(0xb,0);
      if (temp_v2 != 0) {
        temp_v4 = dataTableGetEntries();
        temp_v5 = dataTableGetCount(temp_v2);
        temp_v7 = (short)param_1;
        libc_bsearch(temp_v6,temp_v4,temp_v5,0x40,&LAB_00145c78);
      }
      FUN_00215c5c();
      temp_v2 = dataTableGet(0xb,0);
      if (temp_v2 == 0) {
        puVar8 = (unsigned char *)0x0;
      }
      else {
        temp_v4 = dataTableGetEntries();
        temp_v5 = dataTableGetCount(temp_v2);
        puVar8 = temp_v6;
        temp_v7 = (short)param_1;
        libc_bsearch(puVar8,temp_v4,temp_v5,0x40,&LAB_00145c78);
      }
      if (puVar8[0x22] == '\0') {
        temp_v1 = temp_v1 + (unsigned int)(unsigned char)puVar8[0x2a] * 2;
        *(short *)(temp_v1 + 0x24) = *(short *)(temp_v1 + 0x24) + 1;
      }
      if (param_1 != 0x2e) {
        if (param_1 != 0x18) {
          if (param_1 != 0x76) {
            return 1;
          }
          gameFlagSetValue(0x527,0,1);
          return 1;
        }
        temp_v4 = 0x521;
      }
      else {
        temp_v4 = 0x520;
      }
      gameFlagSetValue(temp_v4,0,1);
    }
    return 1;
  }
  return 0;
}

} /* extern "C" */
