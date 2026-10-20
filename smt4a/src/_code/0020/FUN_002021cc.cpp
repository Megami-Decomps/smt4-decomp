/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002021cc` (_code @ 0x2021cc, 0x224 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int statusCameraApply(void);
int FUN_003e5858(unsigned int);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char g_campCec; /* 0x57f110 */

/* Supplied declaration required: statusCameraApply. */
extern int FUN_0039a2d8(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_003e5858. */


unsigned int FUN_002021cc(void)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  romwright_code *pcVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned long long temp_v6;
  
  temp_v0 = (*(int *)((unsigned char *)&g_campCec + 0x4));
  pcVar5 = *(romwright_code **)((*(int *)((unsigned char *)&g_campCec + 0x4)) + *(int *)((*(int *)((unsigned char *)&g_campCec + 0x4)) + 0x140) * 4 + 8);
  if (((pcVar5 != (romwright_code *)0x0) && (temp_v1 = (*pcVar5)((*(int *)((unsigned char *)&g_campCec + 0x4))), temp_v1 == 3)) &&
     (*(int *)(temp_v0 + 0x144) != -1)) {
    *(unsigned int *)(temp_v0 + 0x13c) = *(unsigned int *)(temp_v0 + 0x140);
    *(int *)(temp_v0 + 0x140) = *(int *)(temp_v0 + 0x144);
    *(unsigned int *)(temp_v0 + 0x144) = 0xffffffff;
  }
  temp_v1 = *(int *)(temp_v0 + 0x140);
  if ((0 < temp_v1) && (temp_v1 != 10 && temp_v1 != 0xc)) {
    statusCameraApply();
    FUN_003e5858(*(unsigned int *)(temp_v0 + 0xcc));
  }
  temp_v5 = 0xfffffeb6;
  if (*(int *)(temp_v0 + 0x1a0) == 2) {
    temp_v4 = 0x14a;
    if (*(char *)(temp_v0 + 0x1a4) != '\0') {
      temp_v4 = temp_v5;
    }
    temp_v1 = 0;
    temp_v6 = 0x3f800000;
    do {
      temp_v2 = FUN_0039a2d8(temp_v0 + 0x17c,temp_v4,0,4,*(unsigned int *)(temp_v0 + 0x184),1);
      temp_v3 = temp_v1;
      if (temp_v2 != 0) {
        *(unsigned char *)(temp_v0 + 0x188) = 1;
      }
      else {
        *(int *)(temp_v0 + 0x184) = *(int *)(temp_v0 + 0x184) + 1;
      }
      while( 1 ) {
        temp_v1 = temp_v3 + 1;
        *(int *)(temp_v0 + temp_v3 * 0x14 + 0x178) = (int)temp_v6;
        if (temp_v1 >= 2) {
          if (*(char *)(temp_v0 + 0x19c) != '\0') {
            *(unsigned int *)(temp_v0 + 0x184) = 0;
            *(unsigned char *)(temp_v0 + 0x188) = 0;
            *(unsigned int *)(temp_v0 + 0x198) = 0;
            *(unsigned char *)(temp_v0 + 0x19c) = 0;
            *(unsigned int *)(temp_v0 + 0x1a0) = 3;
            return 0;
          }
          goto LAB_00202354;
        }
        if (temp_v1 == 0) break;
        temp_v2 = temp_v0 + temp_v1 * 0x14;
        temp_v3 = temp_v1;
        if (*(int *)(temp_v2 + 0x170) >= 3) {
          temp_v1 = FUN_0039a2d8(temp_v2 + 0x17c,temp_v4,0,4,*(unsigned int *)(temp_v2 + 0x184),1);
          if (temp_v1 != 0) {
            *(unsigned char *)(temp_v2 + 0x188) = 1;
          }
          else {
            *(int *)(temp_v2 + 0x184) = *(int *)(temp_v2 + 0x184) + 1;
          }
        }
      }
    } while( 1 );
  }
LAB_00202354:
  if (*(int *)(temp_v0 + 0x1a0) == 1) {
    if (*(char *)(temp_v0 + 0x1a4) != '\0') {
      temp_v5 = 0x14a;
    }
    temp_v1 = 0;
    do {
      temp_v2 = temp_v0 + temp_v1 * 0x14;
      temp_v3 = FUN_0039a2d8(temp_v2 + 0x17c,0,temp_v5,3,*(unsigned int *)(temp_v2 + 0x184),1);
      if (temp_v3 != 0) {
        *(unsigned char *)(temp_v2 + 0x188) = 1;
      }
      else {
        *(int *)(temp_v2 + 0x184) = *(int *)(temp_v2 + 0x184) + 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 2);
    if (*(char *)(temp_v0 + 0x19c) != '\0') {
      *(unsigned int *)(temp_v0 + 0x184) = 0;
      *(unsigned char *)(temp_v0 + 0x188) = 0;
      *(unsigned int *)(temp_v0 + 0x198) = 0;
      *(unsigned char *)(temp_v0 + 0x19c) = 0;
      *(unsigned int *)(temp_v0 + 0x1a0) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
