/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b2ce` (_code @ 0x30b2ce, 0x286 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f6d1c(void **);
int rbTreeRotateRight_0030b574(...);
int rbTreeRotateLeft_0030b5a6(...);

typedef struct fn_0030b2ce_arg1 fn_0030b2ce_arg1;
struct fn_0030b2ce_arg1 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x8];
    void *field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
};

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_002f6d1c. */
/* Supplied declaration required: rbTreeRotateRight_0030b574. */
/* Supplied declaration required: rbTreeRotateLeft_0030b5a6. */
extern int wordRefsEqual_0030b5d8(void **, void **);


void FUN_0030b2ce(unsigned int *param_1,fn_0030b2ce_arg1 *param_2,unsigned int *param_3)

{
/* irregular: 8 unstructured edge(s); 1 goto(s); 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  void *temp_v2;
  void *temp_v3;
  unsigned int *temp_v4;
  fn_0030b2ce_arg1 *pfStack_1c;
  unsigned int *puStack_18;
  
  temp_v2 = (void *)*param_3;
  temp_v3 = param_2->field_0x10;
  temp_v4 = param_1;
  pfStack_1c = param_2;
  puStack_18 = param_3;
  temp_v1 = wordRefsEqual_0030b5d8(&temp_v2,&temp_v3);
  if (temp_v1 != 0) {
    temp_v2 = param_2->field_0x10;
    *temp_v4 = (unsigned int)temp_v2;
    return;
  }
  FUN_002f6d1c(&temp_v2);
  pcVar6 = (char *)*param_3;
  pcVar3 = *(char **)(pcVar6 + 8);
  pcVar7 = pcVar6;
  if (pcVar3 != (char *)0x0) {
    pcVar4 = *(char **)(pcVar6 + 0xc);
    pcVar5 = pcVar3;
    if (*(char **)(pcVar6 + 0xc) != (char *)0x0) {
      do {
        pcVar7 = pcVar4;
        pcVar4 = *(char **)(pcVar7 + 8);
      } while (*(char **)(pcVar7 + 8) != (char *)0x0);
      pcVar5 = *(char **)(pcVar7 + 0xc);
    }
LAB_0030b354:
    if (pcVar7 != pcVar6) {
      *(char **)(pcVar3 + 4) = pcVar7;
      *(unsigned int *)(pcVar7 + 8) = *(unsigned int *)(pcVar6 + 8);
      if (*(char **)(pcVar6 + 0xc) != pcVar7) {
        if (pcVar5 != (char *)0x0) {
          *(unsigned int *)(pcVar5 + 4) = *(unsigned int *)(pcVar7 + 4);
        }
        *(char **)(*(int *)(pcVar7 + 4) + 8) = pcVar5;
        *(unsigned int *)(pcVar7 + 0xc) = *(unsigned int *)(pcVar6 + 0xc);
        *(char **)(*(int *)(pcVar6 + 0xc) + 4) = pcVar7;
      }
      else if (pcVar5 != (char *)0x0) {
        *(char **)(pcVar5 + 4) = pcVar7;
      }
      if (*(char **)((int)param_2->field_0x10 + 4) == pcVar6) {
        *(char **)((int)param_2->field_0x10 + 4) = pcVar7;
      }
      else {
        temp_v1 = *(int *)(pcVar6 + 4);
        if (*(char **)(temp_v1 + 8) == pcVar6) {
          *(char **)(temp_v1 + 8) = pcVar7;
        }
        else {
          *(char **)(temp_v1 + 0xc) = pcVar7;
        }
      }
      *(unsigned int *)(pcVar7 + 4) = *(unsigned int *)(pcVar6 + 4);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = pcVar7;
      }
      temp_v0 = *pcVar7;
      *pcVar7 = *pcVar6;
      *pcVar6 = temp_v0;
      pcVar7 = pcVar6;
    }
    else {
      *(unsigned int *)(pcVar5 + 4) = *(unsigned int *)(pcVar7 + 4);
      if (*(char **)((int)param_2->field_0x10 + 4) == pcVar6) {
        *(char **)((int)param_2->field_0x10 + 4) = pcVar5;
      }
      else {
        temp_v1 = *(int *)(pcVar6 + 4);
        if (*(char **)(temp_v1 + 8) == pcVar6) {
          *(char **)(temp_v1 + 8) = pcVar5;
        }
        else {
          *(char **)(temp_v1 + 0xc) = pcVar5;
        }
      }
      if (*(char **)((int)param_2->field_0x10 + 8) == pcVar6) {
        pcVar3 = pcVar5;
        if (*(int *)(pcVar6 + 0xc) == 0) {
          pcVar4 = *(char **)(pcVar6 + 4);
        }
        else {
          do {
            pcVar4 = pcVar3;
            pcVar3 = *(char **)(pcVar4 + 8);
          } while (*(char **)(pcVar4 + 8) != (char *)0x0);
        }
        *(char **)((int)param_2->field_0x10 + 8) = pcVar4;
      }
      if (*(char **)((int)param_2->field_0x10 + 0xc) == pcVar6) {
        pcVar3 = pcVar5;
        if (*(int *)(pcVar6 + 8) == 0) {
          pcVar6 = *(char **)(pcVar6 + 4);
        }
        else {
          do {
            pcVar6 = pcVar3;
            pcVar3 = *(char **)(pcVar6 + 0xc);
          } while (*(char **)(pcVar6 + 0xc) != (char *)0x0);
        }
        *(char **)((int)param_2->field_0x10 + 0xc) = pcVar6;
      }
    }
  }
  else {
    pcVar5 = *(char **)(pcVar6 + 0xc);
    if (*(char **)(pcVar6 + 0xc) != (char *)0x0) goto LAB_0030b354;
    pcVar5 = *(char **)(pcVar6 + 4);
    if (param_2->field_0x10 == pcVar5) {
      *(char **)((int)param_2->field_0x10 + 0xc) = pcVar5;
      *(char **)((int)param_2->field_0x10 + 8) = pcVar5;
      *(unsigned int *)((int)param_2->field_0x10 + 4) = 0;
    }
    else if (*(char **)(pcVar5 + 8) == pcVar6) {
      pcVar5[8] = '\0';
      pcVar5[9] = '\0';
      pcVar5[10] = '\0';
      pcVar5[0xb] = '\0';
      if (*(char **)((int)param_2->field_0x10 + 8) == pcVar6) {
        *(char **)((int)param_2->field_0x10 + 8) = pcVar5;
      }
    }
    else {
      pcVar5[0xc] = '\0';
      pcVar5[0xd] = '\0';
      pcVar5[0xe] = '\0';
      pcVar5[0xf] = '\0';
      if (*(char **)((int)param_2->field_0x10 + 0xc) == pcVar6) {
        *(char **)((int)param_2->field_0x10 + 0xc) = pcVar5;
      }
    }
  }
  if ((param_2->field_0x10 != pcVar5) && (*pcVar7 != '\0')) {
    do {
      if ((*(char **)((int)param_2->field_0x10 + 4) == pcVar5) || (*pcVar5 != '\x01')) {
        *pcVar5 = '\x01';
        break;
      }
      pcVar3 = *(char **)(pcVar5 + 4);
      pcVar6 = *(char **)(pcVar3 + 8);
      if (pcVar6 != pcVar5) {
        if (pcVar6 == (char *)0x0) {
          *pcVar5 = '\0';
          pcVar5 = pcVar3;
          continue;
        }
        if (*pcVar6 == '\0') {
          *pcVar6 = '\x01';
          **(unsigned char **)(pcVar5 + 4) = 0;
          rbTreeRotateRight_0030b574(param_2,*(unsigned int *)(pcVar5 + 4));
          pcVar3 = *(char **)(pcVar5 + 4);
          pcVar6 = *(char **)(pcVar3 + 8);
          if (pcVar6 == (char *)0x0) {
            *pcVar5 = '\0';
            pcVar5 = pcVar3;
            continue;
          }
        }
        pcVar3 = *(char **)(pcVar6 + 0xc);
        if (((pcVar3 != (char *)0x0) && (*pcVar3 != '\x01')) ||
           ((*(char **)(pcVar6 + 8) != (char *)0x0 && (**(char **)(pcVar6 + 8) != '\x01')))) {
          if ((*(char **)(pcVar6 + 8) == (char *)0x0) || (**(char **)(pcVar6 + 8) == '\x01')) {
            if (pcVar3 != (char *)0x0) {
              *pcVar3 = '\x01';
            }
            *pcVar6 = '\0';
            rbTreeRotateLeft_0030b5a6(param_2);
            pcVar6 = *(char **)(*(int *)(pcVar5 + 4) + 8);
            if (pcVar6 == (char *)0x0) {
              *pcVar5 = '\x01';
              break;
            }
          }
          *pcVar6 = **(char **)(pcVar5 + 4);
          **(unsigned char **)(pcVar5 + 4) = 1;
          if (*(unsigned char **)(pcVar6 + 8) != (unsigned char *)0x0) {
            **(unsigned char **)(pcVar6 + 8) = 1;
          }
          rbTreeRotateRight_0030b574(param_2,*(unsigned int *)(pcVar5 + 4));
          *pcVar5 = '\x01';
          break;
        }
        *pcVar6 = '\0';
        pcVar5 = *(char **)(pcVar5 + 4);
        continue;
      }
      pcVar6 = *(char **)(pcVar3 + 0xc);
      if (pcVar6 != (char *)0x0) {
        if (*pcVar6 == '\0') {
          *pcVar6 = '\x01';
          **(unsigned char **)(pcVar5 + 4) = 0;
          rbTreeRotateLeft_0030b5a6(param_2,*(unsigned int *)(pcVar5 + 4));
          pcVar3 = *(char **)(pcVar5 + 4);
          pcVar6 = *(char **)(pcVar3 + 0xc);
          if (pcVar6 == (char *)0x0) {
            *pcVar5 = '\0';
            pcVar5 = pcVar3;
            continue;
          }
        }
        pcVar3 = *(char **)(pcVar6 + 8);
        if (((pcVar3 != (char *)0x0) && (*pcVar3 != '\x01')) ||
           ((*(char **)(pcVar6 + 0xc) != (char *)0x0 && (**(char **)(pcVar6 + 0xc) != '\x01')))) {
          if ((*(char **)(pcVar6 + 0xc) == (char *)0x0) || (**(char **)(pcVar6 + 0xc) == '\x01')) {
            if (pcVar3 != (char *)0x0) {
              *pcVar3 = '\x01';
            }
            *pcVar6 = '\0';
            rbTreeRotateRight_0030b574(param_2);
            pcVar6 = *(char **)(*(int *)(pcVar5 + 4) + 0xc);
            if (pcVar6 == (char *)0x0) {
              *pcVar5 = '\x01';
              break;
            }
          }
          *pcVar6 = **(char **)(pcVar5 + 4);
          **(unsigned char **)(pcVar5 + 4) = 1;
          if (*(unsigned char **)(pcVar6 + 0xc) != (unsigned char *)0x0) {
            **(unsigned char **)(pcVar6 + 0xc) = 1;
          }
          rbTreeRotateLeft_0030b5a6(param_2,*(unsigned int *)(pcVar5 + 4));
          *pcVar5 = '\x01';
          break;
        }
        *pcVar6 = '\0';
        pcVar5 = *(char **)(pcVar5 + 4);
        continue;
      }
      *pcVar5 = '\0';
      pcVar5 = pcVar3;
    } while( 1 );
  }
  *(void **)(pcVar7 + 0xc) = param_2->field_0x4;
  param_2->field_0x4 = pcVar7;
  param_2->field_0x14 = param_2->field_0x14 - 1;
  *temp_v4 = (unsigned int)temp_v2;
  return;
}

} /* extern "C" */
