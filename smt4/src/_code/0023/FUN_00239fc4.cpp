/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00239fc4` (_code @ 0x239fc4, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003521c8(char [8], int, unsigned int);

/* stack frame of param_2: 2 slot(s), 2 byte(s) */
typedef struct {
    unsigned char sp28; /* 0x28: local_28 */
    unsigned char sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_003521c8. */
extern int FUN_0035235c(char *);


void FUN_00239fc4(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  char *pcVar3;
  unsigned int *puVar4;
  unsigned int temp_v2;
  char temp_v3 [8];
  char temp_v4 [12];
  
  temp_v1 = FUN_0035235c(temp_v4);
  if ((temp_v4[0] == '\x01' && -1 < temp_v1) && (temp_v2 = 0, param_2 != 0)) {
    do {
      puVar4 = (unsigned int *)(param_1 + temp_v2 * 8);
      temp_v0 = (char)puVar4[1];
      if (temp_v0 == '\0') {
        temp_v1 = 0x8c;
      }
      else if (temp_v0 == '\x01') {
        temp_v1 = 0xd;
      }
      else if ((temp_v0 == '\x02') || (temp_v0 != '\x03')) {
        temp_v1 = 0;
      }
      else {
        temp_v1 = 0x10;
      }
      if (temp_v1 == 0x8c) {
        pcVar3 = temp_v3;
        FUN_003521c8(temp_v3,1,(unsigned int)*(unsigned char *)((int)puVar4 + 5) | ((*puVar4 & 0xff0fffff) << 8));
        if (pcVar3 == (char *)0xd8a083fa) {
          pcVar3 = (char *)0x0;
        }
        else if ((-1 < (int)pcVar3) && (pcVar3 = (char *)0x0, temp_v3[0] != '\0')) {
          pcVar3 = (char *)0xe0a13899;
        }
        if ((int)pcVar3 < 0) {
          return;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < param_2);
  }
  return;
}

} /* extern "C" */
