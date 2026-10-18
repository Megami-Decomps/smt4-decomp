/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a34a0` (_code @ 0x4a34a0, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_00184310. */
extern int FUN_001ba3d4(unsigned int);
extern int FUN_002a4b28(unsigned int);
/* Supplied declaration required: FUN_004a8750. */
extern int FUN_004cfe4c(int);
extern unsigned int FUN_004d05b4(void);
extern int FUN_004d0bf0(unsigned int);
extern int FUN_004d0cd4(void);


unsigned int FUN_004a34a0(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  char *pcVar5;
  
  temp_v1 = param_2;
  FUN_004a8750(param_2,*(unsigned char *)(param_1 + 0x861),0,'c' < *(char *)(param_1 + 0x94),0);
  temp_v2 = FUN_004cfe4c(param_1 + 0x20);
  if (*(char *)(param_1 + 0x861) == '\0') {
    FUN_00184310(*(unsigned short *)(param_1 + temp_v2 * 0x20 + 0x868));
  }
  temp_v2 = FUN_002a4b28(param_2);
  pcVar5 = (char *)(param_1 + 0xa870);
  if (temp_v2 == 0) {
    temp_v0 = '\x06';
  }
  else {
    temp_v3 = FUN_004d05b4();
    if ((temp_v3 < temp_v1) && (temp_v2 = FUN_001ba3d4(0x7c3), temp_v2 < 1)) {
      temp_v0 = '\x01';
    }
    else {
      temp_v2 = FUN_004d0bf0(param_2);
      if (temp_v2 != 0) {
        temp_v0 = '\x02';
      }
      else {
        if (*(char *)(param_1 + 0x861) != '\x02') {
          temp_v2 = FUN_004d0cd4();
          if (temp_v2 == -1) {
            *pcVar5 = '\x05';
            return 0;
          }
          temp_v0 = *pcVar5;
          if (temp_v0 == '\0') {
            temp_v3 = FUN_004d05b4();
            if ((temp_v3 < temp_v1) && (temp_v2 = FUN_001ba3d4(0x7c3), 0 < temp_v2)) {
              *pcVar5 = '\a';
              return 1;
            }
            temp_v0 = *pcVar5;
            if (temp_v0 == '\0') {
              return 1;
            }
          }
          if (temp_v0 != '\a') {
            return 0;
          }
          return 1;
        }
        temp_v0 = '\x03';
      }
    }
  }
  *pcVar5 = temp_v0;
  return 0;
}
