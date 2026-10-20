/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004036fc` (_code @ 0x4036fc, 0x1dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001643b4(int, int);
int dataTableGetEntries(void);
int FUN_00202400(void);
int FUN_00203b40(int, unsigned int, unsigned int, int, int, int);
int FUN_0039b984(void);
int FUN_004029f4(int, int, int);
int FUN_00403b84(int);
int sortOwnerRun(int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_001643b4. */
extern int FUN_0018206c(unsigned int, int);
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int dataTableGetCount(unsigned int);
/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: FUN_00202400. */
/* Supplied declaration required: FUN_00203b40. */
extern int FUN_00341940(unsigned int);
/* Supplied declaration required: FUN_0039b984. */
/* Supplied declaration required: FUN_004029f4. */
/* Supplied declaration required: FUN_00403b84. */
/* Supplied declaration required: sortOwnerRun. */
extern int FUN_004717e0(unsigned int);
extern int FUN_00471960(unsigned int);


void FUN_004036fc(int param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  temp_v5 = *(int *)(param_1 + 8) != 0;
  temp_v1 = 0;
  if (temp_v5) {
    temp_v1 = *(int *)(param_1 + 0xc);
  }
  if (((!temp_v5 || temp_v1 == 0) || (temp_v1 = FUN_00471960(g_aocSystem), temp_v1 == 0)) ||
     (temp_v1 = FUN_00341940(0x32), temp_v1 == 0)) {
    return;
  }
  temp_v1 = 0;
  do {
    temp_v2 = FUN_0018206c(0x32,temp_v1);
    if (temp_v2 == 0) {
      return;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  temp_v4 = 0;
  do {
    if (*(char *)(param_1 + temp_v4 + 0x18) != '\0') {
      if ((temp_v4 & 0xff) == 0) {
        temp_v3 = 1;
      }
      else if ((temp_v4 & 0xff) == 1) {
        temp_v3 = 0xf;
      }
      else {
        temp_v3 = 0xffffffff;
      }
      temp_v1 = FUN_00341940(temp_v3);
      if (temp_v1 == 0) {
        return;
      }
    }
    temp_v4 = temp_v4 + 1;
  } while ((int)temp_v4 < 2);
  temp_v3 = dataTableGet(0x45,0);
  dataTableGetEntries();
  temp_v1 = dataTableGetCount(temp_v3);
  temp_v2 = FUN_004717e0(g_aocSystem);
  *(int *)(param_1 + 0x14) = temp_v1 + temp_v2;
  FUN_00403b84(param_1);
  FUN_00203b40(param_1 + 0x90,*(unsigned int *)(param_1 + 0x660),*(unsigned int *)(param_1 + 0xfc),1,1,1
              );
  temp_v1 = 0;
  do {
    if (*(int *)(param_1 + 0xfc) <= temp_v1) break;
    temp_v0 = FUN_001643b4(0x32,temp_v1 + 0x67);
    temp_v2 = temp_v1 * 2;
    temp_v1 = temp_v1 + 1;
    *(unsigned short *)(param_1 + temp_v2 + 0x10c) = temp_v0;
    *(short *)(param_1 + 0x128) = *(short *)(param_1 + 0x128) + 1;
  } while (temp_v1 < 10);
  temp_v0 = FUN_001643b4(0x32,0x8c);
  *(unsigned short *)(param_1 + 0x122) = temp_v0;
  temp_v0 = FUN_001643b4(0x32,0x8d);
  *(unsigned short *)(param_1 + 0x124) = temp_v0;
  temp_v0 = FUN_001643b4(0x32,0x8b);
  *(unsigned short *)(param_1 + 0x126) = temp_v0;
  *(short *)(param_1 + 0x128) = *(short *)(param_1 + 0x128) + 3;
  temp_v4 = (unsigned int)*(unsigned short *)(param_1 + 0x408);
  FUN_0039b984();
  *(unsigned int *)(param_1 + 0x664) = temp_v4;
  sortOwnerRun(param_1);
  FUN_00202400();
  FUN_004029f4(param_1,2,3);
  return;
}

} /* extern "C" */
