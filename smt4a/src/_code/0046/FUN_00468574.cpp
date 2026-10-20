/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00468574` (_code @ 0x468574, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_0019ea64(int);
int FUN_00275bc8(...);
int FUN_003c1060(void);
int FUN_003c3e14(void);
int FUN_003d54f8(int, int);
int pickObjStart(int, unsigned char *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char LAB_0046867c; /* 0x46867c */

extern int FUN_0013def0(unsigned int);
/* Supplied declaration required: sysPlaySe. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_0019ea64. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_003c1060. */
/* Supplied declaration required: FUN_003c3e14. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: pickObjStart. */


void FUN_00468574(int param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v1 = *(int *)(param_1 + 0x284);
  if (temp_v1 != 0) {
    param_2 = *(int *)(param_1 + 0x288);
  }
  if (temp_v1 != 0 && param_2 != 0) {
    temp_v4 = *(int *)(param_1 + 0x290) != 0;
    temp_v3 = 0;
    if (temp_v4) {
      temp_v3 = *(int *)(param_1 + 0x294);
    }
    if (temp_v4 && temp_v3 != 0) {
      FUN_00275bc8();
      *(int *)(param_1 + 0x28c) = temp_v1;
      *(unsigned int *)(temp_v1 + 0x108) = 2;
      temp_v1 = *(int *)(param_1 + 0x290);
      FUN_00275bc8(temp_v1,*(unsigned int *)(param_1 + 0x294));
      *(int *)(param_1 + 0x298) = temp_v1;
      *(unsigned int *)(temp_v1 + 0x108) = 2;
      temp_v1 = gameFlagIsSet(0x467);
      if (temp_v1 != 0) {
        FUN_003c1060();
        FUN_0019ea64(1);
        FUN_003c3e14();
        sysPlaySe(0x92);
        pickObjStart(param_1,&LAB_0046867c);
        *(unsigned int *)(param_1 + 4) = 0xf;
        *(unsigned int *)(param_1 + 8) = 0;
      }
      else {
        temp_v0 = *(char *)(param_1 + 0x1a);
        if (temp_v0 != '\x01' && temp_v0 != '\x02') {
          temp_v2 = 3;
        }
        else {
          temp_v2 = 0x10;
        }
        *(unsigned int *)(param_1 + 4) = temp_v2;
        *(unsigned int *)(param_1 + 8) = 0;
        if (temp_v0 != '\x01' && temp_v0 != '\x02') {
          temp_v1 = FUN_0013def0(0);
          if (temp_v1 == 3) {
            FUN_003d54f8(0,10);
          }
          temp_v1 = FUN_0013def0(1);
          if (temp_v1 == 3) {
            FUN_003d54f8(1,10);
            return;
          }
        }
      }
    }
  }
  return;
}

} /* extern "C" */
