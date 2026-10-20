/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00494740` (_code @ 0x494740, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167458(int, int);
int FUN_00184528(int, int);
int FUN_00224880(unsigned int);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int FUN_0038b010(int);
int FUN_003fd7b4(unsigned int);
int FUN_0040aad4(int, int);
int FUN_0040ace8(unsigned int, unsigned int);
int FUN_004935b0(int, unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char LAB_00494914; /* 0x494914 */
extern unsigned char LAB_00494924; /* 0x494924 */
extern unsigned int g_handleRegistry; /* 0x56fcc0 */

extern unsigned int vec2GetXInt(int);
extern unsigned int vec2GetYInt(int);
/* Supplied declaration required: FUN_00167458. */
/* Supplied declaration required: FUN_00184528. */
/* Supplied declaration required: FUN_00224880. */
extern int FUN_0023b3d0(void);
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_0038b010. */
/* Supplied declaration required: FUN_003fd7b4. */
/* Supplied declaration required: FUN_0040aad4. */
extern int FUN_0040ab8c(void);
/* Supplied declaration required: FUN_0040ace8. */
/* Supplied declaration required: FUN_004935b0. */


void FUN_00494740(int param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) == 1) {
      temp_v2 = param_1 + 0x3ec;
      FUN_00167458(temp_v2,0);
      temp_v0 = vec2GetYInt(temp_v2);
      temp_v1 = vec2GetXInt(temp_v2);
      FUN_004935b0(param_1 + 0x3a4,temp_v1,temp_v0);
      if (*(char *)(param_1 + 0x476) != '\0') {
        switch(*(unsigned int *)(param_1 + 0xb40)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
          temp_v2 = FUN_0023b3d0();
          if (temp_v2 != 0) {
            *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 4);
            *(unsigned int *)(param_1 + 4) = 7;
            *(unsigned int *)(param_1 + 8) = 0;
          }
          break;
        case 7:
          *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 4);
          *(unsigned int *)(param_1 + 4) = 8;
          *(unsigned int *)(param_1 + 8) = 0;
          temp_v0 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x184),&LAB_00494914);
          scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x18c),temp_v0);
          FUN_00224880(*(unsigned int *)(param_1 + 0x18c));
          break;
        case 8:
          *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 4);
          *(unsigned int *)(param_1 + 4) = 9;
          *(unsigned int *)(param_1 + 8) = 0;
          temp_v0 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x184),&LAB_00494924);
          scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x18c),temp_v0);
          FUN_00224880(*(unsigned int *)(param_1 + 0x18c));
          break;
        default:
        }
      }
    }
  }
  else {
    FUN_0038b010(1);
    FUN_00184528(param_1 + 0x3cc,0);
    *(unsigned int *)(param_1 + 8) = 1;
  }
  if (((*(int *)(param_1 + 0x16028) != 0) && (temp_v2 = FUN_0040ab8c(), temp_v2 != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x16028) + 4) == 0)) {
    FUN_0040aad4(*(int *)(param_1 + 0x16028),0);
    temp_v0 = *(unsigned int *)(*(int *)(param_1 + 0x16028) + 4);
    FUN_0040ace8(g_handleRegistry,temp_v0);
    FUN_003fd7b4(temp_v0);
    return;
  }
  return;
}

} /* extern "C" */
