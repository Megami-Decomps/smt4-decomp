/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f7778` (_code @ 0x4f7778, 0x1a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(int, int);
int FUN_003bfd84(unsigned char [524], unsigned int);
int FUN_003cbb60(unsigned int, int);
int controllerSetDestination(unsigned int, float *);
int tripleOwnerSetValue(unsigned int, unsigned char [12]);
int FUN_004019c0(int, unsigned char [12]);
int FUN_00401b50(int, float *);
int rt_memcpy_w(int, unsigned char [524], int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
} param_1_stack;

/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_003bfd84. */
/* Supplied declaration required: FUN_003cbb60. */
/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: tripleOwnerSetValue. */
/* Supplied declaration required: FUN_004019c0. */
/* Supplied declaration required: FUN_00401b50. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_004f7778(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [524];
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned char temp_v9 [12];
  
  temp_v3 = 0;
  do {
    temp_v0 = param_1 + temp_v3 * 0x28;
    piVar4 = (int *)(temp_v0 + 400);
    if ((*(unsigned int *)(temp_v0 + 0x1b4) & 2) != 0) {
      temp_v1 = 0;
      while ((temp_v2 = param_1 + temp_v1 * 0x3c, *(int *)(temp_v2 + 0x1398) != *(int *)(temp_v0 + 0x194) ||
             ((*(unsigned int *)(temp_v2 + 0x13d0) & 1) == 0))) {
        temp_v1 = temp_v1 + 1;
        if (temp_v1 >= 0x32) {
          return 0;
        }
      }
      sysMemClear(param_1 + 0x3618,0x6658);
      temp_v1 = 0;
      do {
        temp_v2 = param_1 + temp_v1 * 0x3c;
        if (*(int *)(temp_v2 + 0x1398) == *(int *)(temp_v0 + 0x194)) {
          FUN_004019c0(temp_v2 + 0x13a0,temp_v9);
          temp_v4 = *(unsigned int *)(*piVar4 + 4);
          tripleOwnerSetValue(temp_v4,temp_v9);
          FUN_00401b50(temp_v2 + 0x13a0,&temp_v6);
          temp_v6 = temp_v6 + *(float *)(temp_v0 + 0x1a0);
          temp_v7 = temp_v7 + *(float *)(temp_v0 + 0x1a4);
          temp_v8 = temp_v8 + *(float *)(temp_v0 + 0x1a8);
          controllerSetDestination(temp_v4,&temp_v6);
          FUN_003bfd84(temp_v5,*(unsigned int *)(*piVar4 + 4));
          temp_v0 = param_1 + temp_v1 * 0x20c;
          rt_memcpy_w(temp_v0 + 0x3618,temp_v5,0x20c);
          *(char *)(temp_v0 + 0x3820) =
               (char)*(unsigned int *)(*(int *)(*(int *)(temp_v2 + 0x13a8) + 0xc) + 0x34);
          FUN_003cbb60(*(unsigned int *)(*piVar4 + 4),temp_v2 + 0x13a0);
          break;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x32);
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x32) {
      return 1;
    }
  } while( 1 );
}

} /* extern "C" */
