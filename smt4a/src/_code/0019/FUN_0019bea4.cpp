/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019bea4` (_code @ 0x19bea4, 0x1bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} void_stack;

extern signed char g_inputResetState; /* 0x5c1460 */
extern signed char DAT_005c1461; /* 0x5c1461 */
extern int DAT_005c1464; /* 0x5c1464 */
extern int DAT_005c1468; /* 0x5c1468 */
extern unsigned int DAT_005c146c; /* 0x5c146c */
extern unsigned int DAT_005c1470; /* 0x5c1470 */
extern short DAT_006473dc; /* 0x6473dc */


void FUN_0019bea4(void)

{
  char temp_v0;
  int temp_v1;
  short *psVar3;
  unsigned int temp_v2;
  unsigned short *puVar5;
  int temp_v3;
  int temp_v4;
  
  temp_v1 = DAT_005c1464;
  temp_v0 = '\0';
  if (g_inputResetState != '\0') {
    temp_v0 = DAT_005c1461;
  }
  if (g_inputResetState != '\0' && temp_v0 != '\0') {
    psVar3 = (short *)(DAT_005c1464 + 0x4e00);
    *(char *)(DAT_005c1464 + *psVar3 * 0x138 + 1) = (char)*(unsigned short *)(DAT_005c1464 + 0x4e02);
    *(char *)(temp_v1 + *psVar3 * 0x138 + 2) = (char)*(unsigned int *)(temp_v1 + 0x4e2c);
    *(unsigned int *)(temp_v1 + *psVar3 * 0x138 + 4) = DAT_005c146c;
    *(unsigned int *)(temp_v1 + *psVar3 * 0x138 + 8) = DAT_005c1470;
    DAT_005c146c = 0;
    DAT_005c1470 = 0;
    if (*(short *)(DAT_005c1468 + 0x34) != 0) {
      *(char *)(temp_v1 + *psVar3 * 0x138 + 2) = (char)*(short *)(DAT_005c1468 + 0x34);
      temp_v2 = (unsigned int)*(unsigned short *)(DAT_005c1468 + 0x34);
      if (temp_v2 != 0) {
        temp_v3 = 0;
        puVar5 = (unsigned short *)(DAT_005c1468 + 4);
        do {
          temp_v2 = temp_v2 - 1;
          temp_v4 = temp_v3 * 2;
          temp_v3 = temp_v3 + 1;
          *(unsigned short *)(temp_v1 + *psVar3 * 0x138 + temp_v4 + 0x108) = *puVar5;
          puVar5 = puVar5 + 1;
        } while (temp_v2 != 0);
      }
      *(unsigned short *)(temp_v1 + *psVar3 * 0x138 + (unsigned int)*(unsigned short *)(DAT_005c1468 + 0x34) * 2 + 0x108)
           = 0;
    }
    else {
      *(unsigned char *)(temp_v1 + *psVar3 * 0x138 + 2) = 0;
      if (DAT_006473dc != 0) {
        temp_v3 = 0;
        do {
          *(short *)(temp_v1 + *psVar3 * 0x138 + temp_v3 * 2 + 0x108) = (&DAT_006473dc)[temp_v3];
          if ((&DAT_006473dc)[temp_v3] == 0) break;
          temp_v3 = temp_v3 + 1;
          temp_v4 = temp_v1 + *psVar3 * 0x138;
          *(char *)(temp_v4 + 2) = *(char *)(temp_v4 + 2) + '\x01';
        } while (temp_v3 < 0x18);
      }
    }
    if (*psVar3 < 0x40) {
      *psVar3 = *psVar3 + 1;
    }
  }
  return;
}

} /* extern "C" */
