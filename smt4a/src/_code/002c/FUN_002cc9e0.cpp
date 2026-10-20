/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cc9e0` (_code @ 0x2cc9e0, 0x310 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_001ab888(...);
int FUN_002cc228(char *, int);

extern unsigned int DAT_00573bb0; /* 0x573bb0 */
extern unsigned int DAT_00573bb4; /* 0x573bb4 */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_00184310. */
extern int FUN_0018719c(void);
extern int FUN_001ab854(int);
/* Supplied declaration required: FUN_001ab888. */
extern int FUN_00291e14(void);
extern int FUN_002a4878(int);
extern int FUN_002b24fc(void);
/* Supplied declaration required: FUN_002cc228. */
extern int FUN_003e46f4(void);
extern int FUN_004bd748(int);


unsigned int FUN_002cc9e0(int param_1,int param_2)

{
/* irregular: 6 goto(s); 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  char *pcVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int *piVar7;
  int temp_v5;
  int temp_v6;
  
  temp_v1 = param_1;
  if ((param_2 != 0) && (temp_v1 = *(int *)(param_1 + 0x387c), temp_v1 == 6)) {
    return 0xb;
  }
  temp_v1 = FUN_001ab888(temp_v1);
  temp_v6 = 0;
  temp_v4 = 0;
  piVar7 = (int *)(param_1 + 0x3890);
  do {
    pcVar3 = (char *)(temp_v4 & 0xff);
    FUN_002cc228(pcVar3,*piVar7 == 0);
    temp_v5 = 0;
    if ((*piVar7 != 0) && (-1 < *(char *)(*piVar7 + temp_v1 + 0x1c9f))) {
      temp_v5 = FUN_001ab888();
      temp_v5 = FUN_001ab854((int)*(char *)(*piVar7 + temp_v5 + 0x1c9f));
    }
    if (((((pcVar3 != (char *)0x0) && (pcVar3[1] == '\x01')) &&
         ((*(short *)(pcVar3 + 0x5c) == 0 || (temp_v2 = FUN_0018719c(), temp_v2 != 0)))) &&
        ((*(short *)(pcVar3 + 0x5e) == 0 || (temp_v2 = FUN_003e46f4(), temp_v2 != 0)))) &&
       ((pcVar3[0x5b] == '\0' ||
        (temp_v2 = btlGetMainState(),
        (DAT_00573bb0 & *(unsigned int *)(temp_v2 + 0x45a0)) == 0 &&
        (*(unsigned int *)(temp_v2 + 0x45a4) & DAT_00573bb4) == 0)))) {
      temp_v0 = *pcVar3;
      if (temp_v0 != '\x05') {
        if (temp_v0 != '\x02') {
          if (temp_v0 == '\x03') {
            if ((*(short *)(param_1 + *piVar7 * 2 + 0x4210) == -1) || (temp_v5 == 0))
            goto LAB_002ccb74;
            temp_v2 = FUN_004bd748(temp_v5);
            if (temp_v2 == 0) {
              if ((((*pcVar3 == '\x03') && ((*(unsigned int *)(pcVar3 + 0x60) & 1) == 0)) &&
                  (temp_v2 = FUN_00291e14(), temp_v2 != 0)) && (temp_v2 = FUN_00291e14(), temp_v2 != 0)) {
                temp_v3 = (unsigned int)*(unsigned short *)(temp_v5 + 0x62);
                FUN_00184310();
                if ((temp_v3 != 0) && ((*(unsigned char *)(temp_v3 + 0xb3) & 4) != 0)) goto LAB_002ccb64;
              }
              goto LAB_002ccc30;
            }
          }
LAB_002ccb64:
          if (*pcVar3 != '\x06' && *pcVar3 != '\b') goto LAB_002ccb74;
LAB_002ccc14:
          if (((*(unsigned int *)(pcVar3 + 0x60) & 1) == 0) || (temp_v5 = FUN_00291e14(), temp_v5 == 0)) {
            temp_v5 = FUN_002a4878(param_1 + *piVar7 * 100 + 0x38bc);
            if (temp_v5 == temp_v6) goto LAB_002ccc44;
            temp_v6 = temp_v6 + 1;
          }
        }
      }
      else if (*(char *)(param_1 + 0x41ed) == '\0') {
LAB_002ccb74:
        if ((*pcVar3 != '\t') || (temp_v5 = FUN_002b24fc(), temp_v5 != 0)) goto LAB_002ccc14;
      }
    }
LAB_002ccc30:
    temp_v4 = temp_v4 + 1;
  } while ((int)temp_v4 < 10);
  if (pcVar3 != (char *)0x0) {
LAB_002ccc44:
    switch(*pcVar3) {
    case '\x01':
      return 1;
    case '\x02':
      return 2;
    case '\x03':
      return 7;
    case '\x04':
      return 3;
    case '\x05':
      return 10;
    case '\x06':
      return 9;
    case '\a':
      return 4;
    case '\t':
      return 0xc;
    }
  }
  return 5;
}

} /* extern "C" */
