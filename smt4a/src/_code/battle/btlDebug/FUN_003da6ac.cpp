/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003da6ac` (_code @ 0x3da6ac, 0x244 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002cc228(char *, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int DAT_00573be8; /* 0x573be8 */
extern unsigned int DAT_00573bec; /* 0x573bec */

extern int btlGetMainState(void);
extern int FUN_0018719c(void);
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
extern int FUN_00291e14(void);
extern int FUN_002b24fc(void);
/* Supplied declaration required: FUN_002cc228. */
extern int FUN_003bcf2c(int);
extern int FUN_003e46f4(void);
extern int FUN_004bd748(int);


char FUN_003da6ac(int param_1,int param_2)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  char *pcVar3;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar6;
  int temp_v4;
  int temp_v5;
  
  temp_v5 = 0;
  temp_v1 = FUN_001ab888();
  temp_v3 = 0;
  piVar6 = (int *)(param_1 + 0x3890);
  do {
    pcVar3 = (char *)(temp_v3 & 0xff);
    FUN_002cc228(pcVar3,*piVar6 == 0);
    temp_v2 = *piVar6;
    temp_v4 = 0;
    if ((temp_v2 != 4 && temp_v2 != 0) && (-1 < *(char *)(temp_v2 + temp_v1 + 0x1c9f))) {
      temp_v4 = FUN_001ab854();
    }
    if ((((pcVar3 != (char *)0x0) && (pcVar3[1] == '\x01')) &&
        ((*(short *)(pcVar3 + 0x5c) == 0 || (temp_v2 = FUN_0018719c(), temp_v2 != 0)))) &&
       (((*(short *)(pcVar3 + 0x5e) == 0 || (temp_v2 = FUN_003e46f4(), temp_v2 != 0)) &&
        ((pcVar3[0x5b] == '\0' ||
         (temp_v2 = btlGetMainState(),
         (*(unsigned int *)(temp_v2 + 0x45a0) & DAT_00573be8) == 0 &&
         (*(unsigned int *)(temp_v2 + 0x45a4) & DAT_00573bec) == 0)))))) {
      temp_v0 = *pcVar3;
      if (temp_v0 != '\x05') {
        if (temp_v0 != '\x02') {
          if (temp_v0 == '\x03') {
            if ((*(short *)(param_1 + *piVar6 * 2 + 0x4210) == -1) || (temp_v4 == 0))
            goto LAB_003da878;
            temp_v2 = FUN_004bd748(temp_v4);
            if ((temp_v2 == 0) &&
               ((((*pcVar3 != '\x03' || ((*(unsigned int *)(pcVar3 + 0x60) & 1) != 0)) ||
                 (temp_v2 = FUN_00291e14(), temp_v2 == 0)) || (temp_v2 = FUN_003bcf2c(temp_v4), temp_v2 == 0))
               )) {
              temp_v3 = temp_v3 + 1;
              if ((int)temp_v3 >= 10) {
                return '\0';
              }
              continue;
            }
          }
          if (*pcVar3 != '\x06' && *pcVar3 != '\b') goto LAB_003da878;
          if (((*(unsigned int *)(pcVar3 + 0x60) & 1) == 0) || (temp_v2 = FUN_00291e14(), temp_v2 == 0)) {
            if (temp_v5 == param_2) {
              return *pcVar3;
            }
            temp_v5 = temp_v5 + 1;
          }
        }
      }
      else if ((*(short *)(param_1 + *piVar6 * 2 + 0x4210) == -1) ||
              (*(char *)(param_1 + 0x41ed) == '\0')) {
LAB_003da878:
        if ((*pcVar3 != '\t') || (temp_v2 = FUN_002b24fc(), temp_v2 != 0)) {
          if (((*(unsigned int *)(pcVar3 + 0x60) & 1) == 0) || (temp_v2 = FUN_00291e14(), temp_v2 == 0)) {
            if (temp_v5 == param_2) {
              return *pcVar3;
            }
            temp_v5 = temp_v5 + 1;
          }
        }
      }
    }
    temp_v3 = temp_v3 + 1;
    if ((int)temp_v3 >= 10) {
      return '\0';
    }
  } while( 1 );
}

} /* extern "C" */
