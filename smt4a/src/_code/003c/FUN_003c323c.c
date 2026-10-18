/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c323c` (_code @ 0x3c323c, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_00580238; /* 0x580238 */
extern char s_________005802ec[17]; /* 0x5802ec */
extern char s______0058047c[11]; /* 0x58047c */
extern int DAT_005f15fc; /* 0x5f15fc */
extern int DAT_005f1600; /* 0x5f1600 */

/* Supplied declaration required: FUN_001aea28. */
/* Supplied declaration required: FUN_00399290. */
/* Supplied declaration required: FUN_0040619c. */
/* Supplied declaration required: FUN_0040ace8. */


void FUN_003c323c(void)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  char *pcVar3;
  int temp_v2;
  char *pcVar5;
  char temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v1 = DAT_00580238;
  if (DAT_005f15fc != 0x65) {
LAB_003c32a4:
    for (temp_v4 = 0; temp_v2 = *(int *)(*(int *)(temp_v1 + 0xae4) + 8), temp_v4 < *(unsigned int *)(temp_v2 + 0x10);
        temp_v4 = temp_v4 + 1) {
      FUN_0040619c(temp_v2,temp_v4);
      FUN_0040ace8(DAT_0056fcc0,temp_v2);
      if ((DAT_00580238 != 0) &&
         (temp_v2 = DAT_00580238 + temp_v4 * 0x88, *(char *)(temp_v2 + 0xb78) == '\0')) {
        *(unsigned char *)(temp_v2 + 0xb78) = 1;
      }
      FUN_00399290(temp_v4,1);
    }
    return;
  }
  if (DAT_005f1600 != 1) {
    if (DAT_005f1600 != 2) {
      if (DAT_005f1600 != 3) {
        if (DAT_005f1600 != 4) {
          if (DAT_005f1600 != 5) {
            if (DAT_005f1600 != 6) {
              if (DAT_005f1600 != 7) {
                if (DAT_005f1600 != 8) {
                  if (DAT_005f1600 != 9) goto LAB_003c32a4;
                  pcVar3 = (char *)0x5804cc;
                }
                else {
                  pcVar3 = s______0058047c;
                }
              }
              else {
                pcVar3 = (char *)0x58042c;
              }
            }
            else {
              pcVar3 = (char *)0x5803dc;
            }
          }
          else {
            pcVar3 = (char *)0x58038c;
          }
        }
        else {
          pcVar3 = (char *)0x58033c;
        }
      }
      else {
        pcVar3 = s_________005802ec;
      }
    }
    else {
      pcVar3 = (char *)0x58029c;
    }
  }
  else {
    pcVar3 = (char *)0x58024c;
  }
  temp_v2 = 0;
  temp_v6 = 0;
  do {
    pcVar5 = pcVar3 + temp_v6;
    temp_v5 = 4;
    temp_v0 = *pcVar5;
    if (temp_v0 != '\t') {
      *(char *)(temp_v2 + 0x5f0c04) = temp_v0;
    }
    temp_v3 = pcVar5[8];
    if (temp_v0 != '\t') {
      temp_v2 = temp_v2 + 1;
    }
    do {
      temp_v0 = pcVar5[0x10];
      if (temp_v3 != '\t') {
        *(char *)(temp_v2 + 0x5f0c04) = temp_v3;
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = pcVar5[0x18];
      if (temp_v0 != '\t') {
        *(char *)(temp_v2 + 0x5f0c04) = temp_v0;
        temp_v2 = temp_v2 + 1;
      }
      temp_v5 = temp_v5 - 1;
      pcVar5 = pcVar5 + 0x10;
    } while (temp_v5 != 0);
    temp_v5 = temp_v6 + 0x48;
    temp_v6 = temp_v6 + 1;
    if (pcVar3[temp_v5] != '\t') {
      *(char *)(temp_v2 + 0x5f0c04) = pcVar3[temp_v5];
      temp_v2 = temp_v2 + 1;
    }
  } while (temp_v6 < 8);
  for (temp_v4 = 0; temp_v2 = *(int *)(*(int *)(temp_v1 + 0xae4) + 8), temp_v4 < *(unsigned int *)(temp_v2 + 0x10);
      temp_v4 = temp_v4 + 1) {
    if (*(char *)(temp_v4 + 0x5f0c04) != '\x01') {
      if ((DAT_00580238 != 0) && (*(char *)(DAT_00580238 + temp_v4 * 0x88 + 0xb78) != '\0')) {
        FUN_0040619c(temp_v2,temp_v4);
        FUN_001aea28(DAT_0056fcc0,temp_v2);
        if ((DAT_00580238 != 0) &&
           (temp_v2 = DAT_00580238 + temp_v4 * 0x88, *(char *)(temp_v2 + 0xb78) != '\0')) {
          *(unsigned char *)(temp_v2 + 0xb78) = 0;
        }
      }
      FUN_00399290(temp_v4,0);
    }
    else {
      if ((DAT_00580238 == 0) || (*(char *)(DAT_00580238 + temp_v4 * 0x88 + 0xb78) == '\0')) {
        FUN_0040619c(temp_v2,temp_v4);
        FUN_0040ace8(DAT_0056fcc0,temp_v2);
        if ((DAT_00580238 != 0) &&
           (temp_v2 = DAT_00580238 + temp_v4 * 0x88, *(char *)(temp_v2 + 0xb78) == '\0')) {
          *(unsigned char *)(temp_v2 + 0xb78) = 1;
        }
      }
      FUN_00399290(temp_v4,1);
    }
  }
  return;
}
