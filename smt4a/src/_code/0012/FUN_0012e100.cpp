/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012e100` (_code @ 0x12e100, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030be2a(char **, int, int, char *, unsigned int);
int FUN_0030bf3a(...);

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int wordRefsEqual_0030060c(char **, char **);
/* Supplied declaration required: FUN_0030be2a. */
/* Supplied declaration required: FUN_0030bf3a. */


void FUN_0012e100(unsigned int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  char *pcVar4;
  unsigned char temp_v3;
  char *temp_v4;
  char *temp_v5;
  char *temp_v6;
  char *temp_v7;
  
  temp_v5 = *(char **)(param_2 + 0x10);
  temp_v1 = 1;
  temp_v2 = param_2 + 0x19;
  pcVar4 = *(char **)(temp_v5 + 4);
  while (pcVar4 != (char *)0x0) {
    temp_v5 = pcVar4;
    temp_v1 = FUN_0030bf3a(temp_v2,param_3,pcVar4 + 0x10);
    if (temp_v1 != 0) {
      pcVar4 = *(char **)(pcVar4 + 8);
    }
    else {
      pcVar4 = *(char **)(pcVar4 + 0xc);
    }
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    temp_v4 = temp_v5;
    if (temp_v1 != 0) {
      temp_v6 = *(char **)(*(int *)(param_2 + 0x10) + 8);
      temp_v1 = wordRefsEqual_0030060c(&temp_v4,&temp_v6);
      if (temp_v1 != 0) {
        FUN_0030be2a(&temp_v7,param_2,0,temp_v5,param_3);
        temp_v0 = 1;
        temp_v6 = temp_v7;
        *param_1 = (unsigned int)temp_v6;
        *(unsigned char *)(param_1 + 1) = temp_v0;
        return;
      }
      if ((*temp_v4 == '\0') && (*(char **)(*(int *)(temp_v4 + 4) + 4) == temp_v4)) {
        temp_v4 = *(char **)(temp_v4 + 0xc);
      }
      else {
        pcVar4 = *(char **)(temp_v4 + 8);
        if (*(char **)(temp_v4 + 8) != (char *)0x0) {
          do {
            temp_v4 = pcVar4;
            pcVar4 = *(char **)(temp_v4 + 0xc);
          } while (pcVar4 != (char *)0x0);
        }
        else {
          do {
            pcVar4 = *(char **)(temp_v4 + 4);
            temp_v3 = temp_v4 == *(char **)(pcVar4 + 8);
            temp_v4 = pcVar4;
          } while (temp_v3);
        }
      }
    }
    temp_v1 = FUN_0030bf3a(temp_v2,temp_v4 + 0x10,param_3);
    if (temp_v1 == 0) {
      temp_v0 = 0;
      temp_v6 = temp_v4;
      *param_1 = (unsigned int)temp_v6;
      *(unsigned char *)(param_1 + 1) = temp_v0;
      return;
    }
  }
  FUN_0030be2a(&temp_v6,param_2,0,temp_v5,param_3);
  temp_v0 = 1;
  *param_1 = (unsigned int)temp_v6;
  *(unsigned char *)(param_1 + 1) = temp_v0;
  return;
}

} /* extern "C" */
