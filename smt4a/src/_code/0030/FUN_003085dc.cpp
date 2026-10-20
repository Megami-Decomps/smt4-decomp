/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003085dc` (_code @ 0x3085dc, 0x10a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030898c(...);
int FUN_003089be(...);

typedef struct fn_003085dc_arg1 fn_003085dc_arg1;
struct fn_003085dc_arg1 {
    int field_0x0; /* +0x0 */
    unsigned char pad_0x4[0xc];
    void *field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
};

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
} param_5_stack;

extern int FUN_002f44ec(unsigned char *, unsigned int *, int);
extern char *FUN_00308576(fn_003085dc_arg1 *);
/* Supplied declaration required: FUN_0030898c. */
/* Supplied declaration required: FUN_003089be. */


void FUN_003085dc(unsigned int *param_1,fn_003085dc_arg1 *param_2,int param_3,int param_4,
                 unsigned int *param_5)

{
/* irregular: 2 native warning(s); review required */
  char *pcVar1;
  int temp_v0;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar1 = (char *)FUN_00308576(param_2);
  if (pcVar1 + 0x10 != (char *)0x0) {
    *(unsigned int *)(pcVar1 + 0x10) = *param_5;
    *(unsigned int *)(pcVar1 + 0x14) = param_5[1];
  }
  param_2->field_0x14 = param_2->field_0x14 + 1;
  if (((param_2->field_0x10 == (void *)param_4) || (param_3 != 0)) ||
     (temp_v0 = FUN_002f44ec((unsigned char *)((int)&param_2[1].field_0x0 + 1),param_5,param_4 + 0x10),
     temp_v0 != 0)) {
    *(char **)(param_4 + 8) = pcVar1;
    pvVar3 = param_2->field_0x10;
    if (pvVar3 == (void *)param_4) {
      *(char **)((int)pvVar3 + 4) = pcVar1;
      pvVar3 = param_2->field_0x10;
      *(char **)((int)pvVar3 + 0xc) = pcVar1;
    }
    else if (*(int *)((int)pvVar3 + 8) == param_4) {
      *(char **)((int)pvVar3 + 8) = pcVar1;
    }
  }
  else {
    *(char **)(param_4 + 0xc) = pcVar1;
    pvVar3 = param_2->field_0x10;
    if (*(int *)((int)pvVar3 + 0xc) == param_4) {
      *(char **)((int)pvVar3 + 0xc) = pcVar1;
    }
  }
  *(int *)(pcVar1 + 4) = param_4;
  pcVar6 = pcVar1;
  do {
    while( 1 ) {
      if ((*(char **)((int)param_2->field_0x10 + 4) == pcVar6) ||
         (pcVar4 = *(char **)(pcVar6 + 4), *pcVar4 != '\0')) {
        **(unsigned char **)((int)param_2->field_0x10 + 4) = 1;
        *param_1 = (unsigned int)pcVar1;
        return;
      }
      pcVar5 = *(char **)(*(int *)(pcVar4 + 4) + 8);
      if (pcVar4 != pcVar5) break;
      pcVar5 = *(char **)(*(int *)(pcVar4 + 4) + 0xc);
      if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\0')) {
        if (*(char **)(pcVar4 + 0xc) == pcVar6) {
          FUN_003089be(param_2,pcVar4);
          pcVar6 = pcVar4;
        }
        **(unsigned char **)(pcVar6 + 4) = 1;
        **(unsigned char **)(*(int *)(pcVar6 + 4) + 4) = 0;
        FUN_0030898c(param_2,*(unsigned int *)(*(int *)(pcVar6 + 4) + 4));
      }
      else {
        *pcVar4 = '\x01';
        *pcVar5 = '\x01';
        **(unsigned char **)(*(int *)(pcVar6 + 4) + 4) = 0;
        pcVar6 = *(char **)(*(int *)(pcVar6 + 4) + 4);
      }
    }
    if ((pcVar5 != (char *)0x0) && (*pcVar5 == '\0')) {
      *pcVar4 = '\x01';
      *pcVar5 = '\x01';
      **(unsigned char **)(*(int *)(pcVar6 + 4) + 4) = 0;
      pcVar6 = *(char **)(*(int *)(pcVar6 + 4) + 4);
      continue;
    }
    if (*(char **)(pcVar4 + 8) == pcVar6) {
      FUN_0030898c(param_2,pcVar4);
      pcVar6 = pcVar4;
    }
    **(unsigned char **)(pcVar6 + 4) = 1;
    **(unsigned char **)(*(int *)(pcVar6 + 4) + 4) = 0;
    FUN_003089be(param_2,*(unsigned int *)(*(int *)(pcVar6 + 4) + 4));
  } while( 1 );
}

} /* extern "C" */
