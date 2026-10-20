/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bdf94` (_code @ 0x2bdf94, 0x348 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b23bc(...);
int FUN_002bf288(int, int);

/* stack frame of param_1: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

/* Supplied declaration required: FUN_002b23bc. */
/* Supplied declaration required: FUN_002bf288. */


void FUN_002bdf94(unsigned int param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_stack_00000004, in_stack_00000008; 4 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  unsigned long long temp_v1;
  unsigned int in_stack_00000004;
  unsigned int in_stack_00000008;
  unsigned char uStack0000000c;
  int temp_v2;
  char temp_v3 [32];
  unsigned char temp_v4 [44];
  
  temp_v1 = (unsigned long long)in_stack_00000004;
  FUN_002b23bc(temp_v3,0x20,in_stack_00000008,&uStack0000000c);
  FUN_002b23bc(temp_v4,0x20,temp_v3,&temp_v2,temp_v3);
  switch(param_1) {
  case 0:
    break;
  case 1:
  case 2:
  case 3:
    break;
  case 4:
  case 5:
    break;
  case 6:
  }
  switch(param_1) {
  case 0:
    break;
  case 1:
  case 2:
  case 3:
    break;
  case 4:
  case 5:
    break;
  case 6:
  }
  pcVar2 = temp_v3;
  switch(param_1) {
  case 0:
    break;
  case 1:
  case 2:
  case 3:
    break;
  case 4:
  case 5:
    break;
  case 6:
  }
  do {
    if (temp_v3[0] == '\0') {
      return;
    }
    temp_v0 = *pcVar2;
    if (temp_v0 != ' ') {
      if (temp_v0 != '-') {
        if (temp_v0 < '-') {
          if (((temp_v0 != '%') && (temp_v0 != '*')) && ((temp_v0 != '+' && (temp_v0 != ',')))) {
LAB_002be16c:
            switch(param_1) {
            default:
              break;
            case 1:
              break;
            case 2:
              break;
            case 3:
              break;
            case 4:
              break;
            case 5:
              break;
            case 6:
            }
          }
        }
        else if (((temp_v0 != '/') && (temp_v0 != ':')) && (temp_v0 != '?')) goto LAB_002be16c;
      }
      temp_v2 = (unsigned int)temp_v1;
      FUN_002bf288(2,0xd);
    }
    pcVar2 = pcVar2 + 1;
    temp_v3[0] = *pcVar2;
  } while( 1 );
}

} /* extern "C" */
