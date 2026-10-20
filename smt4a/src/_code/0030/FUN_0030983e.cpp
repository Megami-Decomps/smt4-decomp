/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030983e` (_code @ 0x30983e, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ece14(char *, unsigned int *);
int FUN_003097da(...);
int FUN_0030980c(...);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
} param_5_stack;

extern char *FUN_001307be(int);
/* Supplied declaration required: FUN_002ece14. */
extern int FUN_002f44ec(int, unsigned int *, int);
/* Supplied declaration required: FUN_003097da. */
/* Supplied declaration required: FUN_0030980c. */


void FUN_0030983e(unsigned int *param_1,int param_2,int param_3,int param_4,unsigned int *param_5)

{
/* irregular: 3 native warning(s); review required */
  char *pcVar1;
  int temp_v0;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar1 = (char *)FUN_001307be(param_2);
  if (pcVar1 + 0x10 != (char *)0x0) {
    *(unsigned int *)(pcVar1 + 0x10) = *param_5;
    FUN_002ece14(pcVar1 + 0x14,param_5 + 1);
  }
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  if (((*(int *)(param_2 + 0x10) == param_4) || (param_3 != 0)) ||
     (temp_v0 = FUN_002f44ec(param_2 + 0x19,param_5,param_4 + 0x10), temp_v0 != 0)) {
    *(char **)(param_4 + 8) = pcVar1;
    temp_v0 = *(int *)(param_2 + 0x10);
    if (temp_v0 == param_4) {
      *(char **)(temp_v0 + 4) = pcVar1;
      temp_v0 = *(int *)(param_2 + 0x10);
      *(char **)(temp_v0 + 0xc) = pcVar1;
    }
    else if (*(int *)(temp_v0 + 8) == param_4) {
      *(char **)(temp_v0 + 8) = pcVar1;
    }
  }
  else {
    *(char **)(param_4 + 0xc) = pcVar1;
    temp_v0 = *(int *)(param_2 + 0x10);
    if (*(int *)(temp_v0 + 0xc) == param_4) {
      *(char **)(temp_v0 + 0xc) = pcVar1;
    }
  }
  *(int *)(pcVar1 + 4) = param_4;
  pcVar5 = pcVar1;
  do {
    while( 1 ) {
      if ((*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar5) ||
         (pcVar3 = *(char **)(pcVar5 + 4), *pcVar3 != '\0')) {
        **(unsigned char **)(*(int *)(param_2 + 0x10) + 4) = 1;
        *param_1 = (unsigned int)pcVar1;
        return;
      }
      pcVar4 = *(char **)(*(int *)(pcVar3 + 4) + 8);
      if (pcVar3 != pcVar4) break;
      pcVar4 = *(char **)(*(int *)(pcVar3 + 4) + 0xc);
      if ((pcVar4 == (char *)0x0) || (*pcVar4 != '\0')) {
        if (*(char **)(pcVar3 + 0xc) == pcVar5) {
          FUN_0030980c(param_2,pcVar3);
          pcVar5 = pcVar3;
        }
        **(unsigned char **)(pcVar5 + 4) = 1;
        **(unsigned char **)(*(int *)(pcVar5 + 4) + 4) = 0;
        FUN_003097da(param_2,*(unsigned int *)(*(int *)(pcVar5 + 4) + 4));
      }
      else {
        *pcVar3 = '\x01';
        *pcVar4 = '\x01';
        **(unsigned char **)(*(int *)(pcVar5 + 4) + 4) = 0;
        pcVar5 = *(char **)(*(int *)(pcVar5 + 4) + 4);
      }
    }
    if ((pcVar4 != (char *)0x0) && (*pcVar4 == '\0')) {
      *pcVar3 = '\x01';
      *pcVar4 = '\x01';
      **(unsigned char **)(*(int *)(pcVar5 + 4) + 4) = 0;
      pcVar5 = *(char **)(*(int *)(pcVar5 + 4) + 4);
      continue;
    }
    if (*(char **)(pcVar3 + 8) == pcVar5) {
      FUN_003097da(param_2,pcVar3);
      pcVar5 = pcVar3;
    }
    **(unsigned char **)(pcVar5 + 4) = 1;
    **(unsigned char **)(*(int *)(pcVar5 + 4) + 4) = 0;
    FUN_0030980c(param_2,*(unsigned int *)(*(int *)(pcVar5 + 4) + 4));
  } while( 1 );
}

} /* extern "C" */
