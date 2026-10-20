/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004741f0` (_code @ 0x4741f0, 0x1e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [132], unsigned char *, int, unsigned int);
int FUN_001a6f60(int, int);
int sysMemClear(unsigned char [132], int);
int FUN_00471fec(unsigned int, unsigned char [132], int, int, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA0; /* 0xa0: local_a0 */
} param_2_stack;

extern unsigned char LAB_004743d8; /* 0x4743d8 */
extern unsigned int g_aocDisplay; /* 0x57027c */

/* Supplied declaration required: FUN_00100388. */
extern unsigned int dataTableGetCount(void);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_001a6f60. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_00471fec. */


void FUN_004741f0(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5 [132];
  
  temp_v0 = *(int *)(param_1 + 0x48);
  if (temp_v0 != 0) {
    param_2 = *(int *)(param_1 + 0x4c);
  }
  if (temp_v0 != 0 && param_2 != 0) {
    temp_v3 = 0;
    if (*(char *)(param_1 + 0x45) != '\0') {
      FUN_001a6f60(temp_v0,0);
      temp_v3 = dataTableGetEntries();
    }
    temp_v4 = *(char *)(param_1 + 0x45) != '\0';
    temp_v0 = 0;
    if (temp_v4) {
      temp_v0 = *(int *)(param_1 + 0x48);
    }
    if (temp_v4 && temp_v0 != 0) {
      FUN_001a6f60(temp_v0,0);
      temp_v1 = dataTableGetCount();
      temp_v2 = 0;
      if (temp_v2 < temp_v1) {
        do {
          switch(*(unsigned char *)(temp_v3 + temp_v2 * 0x40)) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 0xb:
          case 0x12:
          case 0x13:
          case 0x15:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x3b:
            sysMemClear(temp_v5,0x80);
            FUN_00100388(temp_v5,&LAB_004743d8,param_1 + 0x24,temp_v3 + temp_v2 * 0x40 + 1);
            temp_v0 = *(int *)(param_1 + 0x4c) + temp_v2 * 0x10;
            FUN_00471fec(g_aocDisplay,temp_v5,temp_v0,1,0x80,temp_v0);
            *(unsigned char *)(*(int *)(param_1 + 0x4c) + temp_v2 * 0x10 + 0xc) = 1;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < temp_v1);
      }
    }
  }
  return;
}

} /* extern "C" */
