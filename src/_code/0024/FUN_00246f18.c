/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246f18` (_code @ 0x246f18, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
    unsigned int sp9C; /* 0x9c: local_9c */
} param_1_stack;

extern int FUN_00246708(void);
/* Supplied declaration required: FUN_0024679c. */
/* Supplied declaration required: FUN_00249e54. */
extern unsigned int FUN_0024a6b0(int);
/* Supplied declaration required: FUN_002bcd68. */


unsigned int FUN_00246f18(int param_1)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  unsigned int temp_v3;
  char *pcVar6;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6 [4];
  int temp_v7;
  unsigned char temp_v8;
  
  temp_v3 = *(unsigned int *)(param_1 + 0x3028);
  if ((temp_v3 & 0x10000) != 0) {
    if ((temp_v3 & 0x20000) != 0) {
      return 1;
    }
    temp_v2 = FUN_00246708();
    if (temp_v2 != 0) {
      *(unsigned int *)(param_1 + 0x3028) = *(unsigned int *)(param_1 + 0x3028) | 0x20000;
    }
  }
  else {
    puVar4 = (unsigned char *)(param_1 + 0x3218);
    FUN_002bcd68(temp_v6,puVar4,0x8c);
    if (((temp_v8 & 1) != 0) && (temp_v7 == 0)) {
      return 0;
    }
    *(unsigned int *)(param_1 + 0x3028) = temp_v3 | 0x10000;
    pcVar6 = *(char **)(param_1 + 0x321c);
    temp_v0 = *pcVar6;
    temp_v4 = temp_v0 == 'V';
    if (temp_v4) {
      temp_v0 = pcVar6[1];
    }
    temp_v5 = temp_v4 && temp_v0 == 'E';
    if (temp_v4 && temp_v0 == 'E') {
      temp_v5 = pcVar6[2] == 'R';
    }
    if (temp_v5) {
      temp_v1 = FUN_0024a6b0(param_1 + 0x3220);
      *puVar4 = (char)temp_v1;
      FUN_00249e54(temp_v1,pcVar6);
      *puVar4 = (char)temp_v1;
    }
    FUN_0024679c();
  }
  if ((*(unsigned int *)(param_1 + 0x3028) & 0x10000) != 0 && (*(unsigned int *)(param_1 + 0x3028) & 0x20000) != 0)
  {
    return 1;
  }
  return 0;
}
