/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031156c` (_code @ 0x31156c, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_002f2978. */
/* Supplied declaration required: FUN_002f9056. */
/* Supplied declaration required: FUN_0031113e. */
extern int *FUN_0031115e(char *);


unsigned int FUN_0031156c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  int *piVar3;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  pcVar2 = (char *)(param_1 + 0x1d8);
  if ((*pcVar2 != '\0') && (*(char *)(param_1 + 0x41) != '\0')) {
    temp_v4 = 0;
    temp_v5 = 1;
    do {
      piVar3 = (int *)FUN_0031115e(pcVar2);
      if ((piVar3 == (int *)0x0) || (temp_v3 = *piVar3, temp_v3 == 0)) break;
      if ((int)((unsigned int)*(unsigned char *)(temp_v3 + 0x1c) << 0x1e) < 0) {
        FUN_0031113e(pcVar2,piVar3);
        temp_v5 = temp_v5 + 1;
      }
      else {
        temp_v0 = *(char *)(temp_v3 + 0x1d);
        if (temp_v0 != '\0') {
          FUN_002f9056(param_1,temp_v0);
        }
        *(int *)(*(int *)(param_1 + 0x21c) + 0x38) = temp_v3;
        temp_v1 = param_1;
        FUN_002f2978(param_1,*(int *)(temp_v3 + 0xc) + *(int *)(temp_v3 + 0x18),
                     *(unsigned int *)(temp_v3 + 0x10),piVar3 + 1,*(unsigned int *)(param_1 + 0x21c));
        if (temp_v0 != '\0') {
          FUN_002f9056(param_1,0x40);
        }
        FUN_0031113e(pcVar2,piVar3);
        if (temp_v1 != 0) break;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v5);
    temp_v2 = 1;
  }
  else {
    temp_v2 = 0;
  }
  return temp_v2;
}
