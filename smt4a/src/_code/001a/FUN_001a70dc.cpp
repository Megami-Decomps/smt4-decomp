/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a70dc` (_code @ 0x1a70dc, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a72b0(int *, char [256], unsigned int);
int FUN_002e3390(...);
int FUN_002e59f8(char *, char [256], unsigned int);
int FUN_002e6dd0(char [256], int);
int aeabi_uidivmod(int);

/* stack frame of param_2: 2 slot(s), 2 byte(s) */
typedef struct {
    unsigned char sp11F; /* 0x11f: local_11f */
    unsigned char sp120; /* 0x120: local_120 */
} param_2_stack;

extern char FUN_00100790(int);
extern int FUN_0019a37c(int, char *, unsigned int);
/* Supplied declaration required: FUN_001a72b0. */
/* Supplied declaration required: FUN_002e3390. */
/* Supplied declaration required: FUN_002e59f8. */
/* Supplied declaration required: FUN_002e6dd0. */
/* Supplied declaration required: aeabi_uidivmod. */


int * FUN_001a70dc(int *param_1,char *param_2)

{
/* irregular: 6 native warning(s); review required */
  char *pcVar1;
  unsigned short temp_v0;
  char temp_v1;
  char *pcVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned short *puVar7;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int *piVar11;
  int temp_v8;
  unsigned char temp_v9;
  char temp_v10 [256];
  
  pcVar4 = (char *)*param_1;
  if ((pcVar4 != (char *)0x0) && (*pcVar4 == 'H')) {
    temp_v1 = pcVar4[1];
    temp_v9 = temp_v1 == 'P';
    if (temp_v9) {
      temp_v1 = pcVar4[2];
    }
    if (temp_v9 && temp_v1 == 'I') {
      pcVar1 = pcVar4 + 3;
      if (*pcVar1 == 'H') {
        pcVar4 = (char *)(unsigned int)*(unsigned short *)(pcVar4 + 0x10);
      }
      if (((*pcVar1 == 'H' && pcVar4 == (char *)0x0) && (param_2 != (char *)0x0)) &&
         (*param_2 != '\0')) {
        FUN_002e6dd0(temp_v10,0x100);
        temp_v2 = FUN_002e3390(param_2);
        FUN_002e59f8(param_2,temp_v10,temp_v2);
        temp_v2 = FUN_002e3390(temp_v10);
        FUN_001a72b0(param_1,temp_v10,temp_v2);
        temp_v3 = FUN_002e3390(temp_v10);
        if ((int)temp_v3 < 1) {
          temp_v7 = 0;
        }
        else {
          temp_v7 = temp_v3 & 1;
          if (temp_v7 == 1) {
            temp_v10[0] = FUN_00100790((int)temp_v10[0]);
          }
        }
        for (; (int)temp_v7 < (int)temp_v3; temp_v7 = temp_v7 + 2) {
          temp_v1 = FUN_00100790((int)temp_v10[temp_v7]);
          temp_v10[temp_v7] = temp_v1;
          temp_v1 = FUN_00100790((int)temp_v10[temp_v7 + 1]);
          temp_v10[temp_v7 + 1] = temp_v1;
        }
        temp_v6 = 0;
        if (*(short *)(*param_1 + 0x12) != 0) {
          temp_v6 = (int)temp_v10[0];
          pcVar4 = temp_v10 + 1;
          while (temp_v10[1] != '\0') {
            temp_v6 = temp_v6 * 0x25 + (int)*pcVar4;
            pcVar4 = pcVar4 + 1;
            temp_v10[1] = *pcVar4;
          }
          aeabi_uidivmod(temp_v6);
          temp_v6 = temp_v5;
        }
        puVar7 = (unsigned short *)(param_1[1] + temp_v6 * 4);
        temp_v7 = (unsigned int)puVar7[1];
        if (temp_v7 != 0) {
          temp_v0 = *puVar7;
          temp_v6 = 0;
          do {
            piVar11 = (int *)(param_1[2] + ((unsigned int)temp_v0 + temp_v6) * 0x10);
            temp_v8 = param_1[3] + *piVar11;
            temp_v4 = FUN_002e3390(temp_v8);
            if ((temp_v4 == temp_v3) && (temp_v8 = FUN_0019a37c(temp_v8,temp_v10,temp_v3), temp_v8 == 0)) {
              return piVar11;
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < (int)temp_v7);
        }
      }
    }
  }
  return (int *)0x0;
}

} /* extern "C" */
