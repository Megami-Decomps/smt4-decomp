/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00186f58` (_code @ 0x186f58, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp30; /* 0x30: local_30 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned char LAB_0019dfd4; /* 0x19dfd4 */

/* Supplied declaration required: FUN_00100854. */
extern int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(int);
extern unsigned int FUN_00192798(int);


void FUN_00186f58(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v0 = FUN_00187180(0xb,0);
  if (temp_v0 == 0) {
    return;
  }
  if (param_1 == 0x8b) {
    pcVar2 = "撂鎂钂辂趂膂䂁憂辂辂鎂钂";
  }
  else if (param_1 == 0x8c) {
    pcVar2 = "抂辂趂薂节膂莂讂";
  }
  else if (param_1 == 0x81) {
    pcVar2 = "斂銂薂躂骂馂";
  }
  else if (param_1 == 0x80) {
    pcVar2 = "悂躂躂覂袂覂貂膂钂覂辂躂";
  }
  else {
    if (param_1 != 0) {
      temp_v1 = FUN_00192798(temp_v0);
      temp_v2 = FUN_00192748(temp_v0);
      temp_v4 = (unsigned short)param_1;
      FUN_00100854(temp_v3,temp_v1,temp_v2,0x40,&LAB_0019dfd4);
      return;
    }
    pcVar2 = (char *)0x531118;
  }
  if (pcVar2 != (char *)0x0) {
    return;
  }
  temp_v1 = FUN_00192798(temp_v0);
  temp_v2 = FUN_00192748(temp_v0);
  temp_v4 = (unsigned short)param_1;
  FUN_00100854(temp_v3,temp_v1,temp_v2,0x40,&LAB_0019dfd4);
  return;
}

} /* extern "C" */
