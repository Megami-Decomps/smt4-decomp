/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ff77c` (_code @ 0x2ff77c, 0x1e8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002499fc(unsigned int, int [4], int [2]);
int scrSetResult(int);
int btlGetMainState(void);
int scrGetArg(int);
int FUN_002ae164(void);
int devilGetRecord(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int FUN_001d2ac8(void);
extern int btlMainFindActiveEntry(void);
/* Supplied declaration required: FUN_002499fc. */
extern unsigned int FUN_00249a54(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: devilGetRecord. */


unsigned int FUN_002ff77c(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  unsigned char temp_v6;
  int temp_v7 [2];
  int temp_v8 [4];
  
  temp_v0 = scrGetArg(0);
  scrGetArg(1);
  temp_v1 = FUN_00249a54();
  FUN_002499fc(temp_v1,temp_v8,temp_v7);
  temp_v5 = temp_v8[0];
  if (temp_v8[0] < temp_v7[0] + temp_v8[0]) {
    do {
      temp_v2 = btlGetMainState();
      puVar6 = (unsigned int *)(*(int *)(temp_v2 + 0x1fc0) + temp_v5 * 0x288);
      temp_v3 = *puVar6;
      if (((temp_v3 & 0x10) == 0) && ((temp_v3 & 1) != 0)) {
        temp_v6 = (temp_v3 & 0x40) == 0;
        if (temp_v6) {
          temp_v3 = (unsigned int)*(unsigned short *)((int)puVar6 + 0xce);
        }
        if (temp_v6 && temp_v3 == temp_v0) {
          if (puVar6[0x9e] != 0) {
            temp_v2 = 0;
            do {
              temp_v3 = (unsigned int)*(unsigned short *)(puVar6[0x9e] + temp_v2 * 2 + 0x34);
              FUN_002ae164();
              if ((temp_v3 != 0) && (*(char *)(temp_v3 + 0x23) == '\x03')) {
                scrSetResult(1);
                return 1;
              }
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < 8);
          }
          if (puVar6[0x9f] != 0) {
            temp_v2 = 0;
            do {
              temp_v3 = (unsigned int)*(unsigned short *)(puVar6[0x9f] + temp_v2 * 2 + 0x34);
              FUN_002ae164();
              if ((temp_v3 != 0) && (*(char *)(temp_v3 + 0x23) == '\x03')) {
                scrSetResult(1);
                return 1;
              }
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < 8);
          }
          if (puVar6[0xa1] != 0) {
            temp_v3 = (unsigned int)*(unsigned short *)((int)puVar6 + 0xce);
            devilGetRecord();
            temp_v2 = 0;
            do {
              temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v2 * 2 + 0x3c);
              FUN_002ae164();
              if ((temp_v4 != 0) && (*(char *)(temp_v4 + 0x23) == '\x03')) {
                scrSetResult(1);
                return 1;
              }
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < 8);
          }
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v8[0] + temp_v7[0]);
  }
  temp_v5 = btlGetMainState();
  if (*(char *)(temp_v5 + 0x49c5) != '\0') {
    btlGetMainState();
    temp_v5 = btlMainFindActiveEntry();
    if (((temp_v5 != 0) && (*(unsigned short *)(temp_v5 + 0xce) == temp_v0)) &&
       (temp_v5 = FUN_001d2ac8(), temp_v5 != 0)) {
      scrSetResult(1);
      return 1;
    }
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
