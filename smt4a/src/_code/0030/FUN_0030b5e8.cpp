/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b5e8` (_code @ 0x30b5e8, 0x10e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rbTreeRotateRight_0030b99c(...);
int rbTreeRotateLeft_0030b9ce(...);

typedef struct fn_0030b5e8_arg1 fn_0030b5e8_arg1;
struct fn_0030b5e8_arg1 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x8];
    void *field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
};

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
} param_5_stack;

extern int FUN_002f6c5c(unsigned char *, unsigned int *, int);
/* Supplied declaration required: rbTreeRotateRight_0030b99c. */
/* Supplied declaration required: rbTreeRotateLeft_0030b9ce. */
extern char *FUN_0030f364(fn_0030b5e8_arg1 *);


void FUN_0030b5e8(unsigned int *param_1,fn_0030b5e8_arg1 *param_2,int param_3,int param_4,
                 unsigned int *param_5)

{
/* irregular: 2 native warning(s); review required */
  char *pcVar1;
  int temp_v0;
  void *pvVar3;
  char *pcVar4;
  unsigned int temp_v1;
  char *pcVar6;
  char *pcVar7;
  
  pcVar1 = (char *)FUN_0030f364(param_2);
  if (pcVar1 + 0x10 != (char *)0x0) {
    temp_v1 = *param_5;
    *(unsigned int *)(pcVar1 + 0x14) = param_5[1];
    *(unsigned int *)(pcVar1 + 0x10) = temp_v1;
    *(unsigned int *)(pcVar1 + 0x18) = param_5[2];
  }
  param_2->field_0x14 = param_2->field_0x14 + 1;
  if (((param_2->field_0x10 == (void *)param_4) || (param_3 != 0)) ||
     (temp_v0 = FUN_002f6c5c((unsigned char *)((int)&param_2->field_0x18 + 1),param_5,param_4 + 0x10),
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
  pcVar7 = pcVar1;
  do {
    while( 1 ) {
      if ((*(char **)((int)param_2->field_0x10 + 4) == pcVar7) ||
         (pcVar4 = *(char **)(pcVar7 + 4), *pcVar4 != '\0')) {
        **(unsigned char **)((int)param_2->field_0x10 + 4) = 1;
        *param_1 = (unsigned int)pcVar1;
        return;
      }
      pcVar6 = *(char **)(*(int *)(pcVar4 + 4) + 8);
      if (pcVar4 != pcVar6) break;
      pcVar6 = *(char **)(*(int *)(pcVar4 + 4) + 0xc);
      if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\0')) {
        if (*(char **)(pcVar4 + 0xc) == pcVar7) {
          rbTreeRotateLeft_0030b9ce(param_2,pcVar4);
          pcVar7 = pcVar4;
        }
        **(unsigned char **)(pcVar7 + 4) = 1;
        **(unsigned char **)(*(int *)(pcVar7 + 4) + 4) = 0;
        rbTreeRotateRight_0030b99c(param_2,*(unsigned int *)(*(int *)(pcVar7 + 4) + 4));
      }
      else {
        *pcVar4 = '\x01';
        *pcVar6 = '\x01';
        **(unsigned char **)(*(int *)(pcVar7 + 4) + 4) = 0;
        pcVar7 = *(char **)(*(int *)(pcVar7 + 4) + 4);
      }
    }
    if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\0')) {
      *pcVar4 = '\x01';
      *pcVar6 = '\x01';
      **(unsigned char **)(*(int *)(pcVar7 + 4) + 4) = 0;
      pcVar7 = *(char **)(*(int *)(pcVar7 + 4) + 4);
      continue;
    }
    if (*(char **)(pcVar4 + 8) == pcVar7) {
      rbTreeRotateRight_0030b99c(param_2,pcVar4);
      pcVar7 = pcVar4;
    }
    **(unsigned char **)(pcVar7 + 4) = 1;
    **(unsigned char **)(*(int *)(pcVar7 + 4) + 4) = 0;
    rbTreeRotateLeft_0030b9ce(param_2,*(unsigned int *)(*(int *)(pcVar7 + 4) + 4));
  } while( 1 );
}

} /* extern "C" */
