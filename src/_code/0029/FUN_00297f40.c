/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00297f40` (_code @ 0x297f40, 0x278 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0023de14(void);
extern int FUN_00292bb8(int);
/* Supplied declaration required: FUN_00292c04. */
extern int FUN_002931cc(void);
extern int FUN_00293c2c(void);
/* Supplied declaration required: FUN_00293c98. */
extern int FUN_0029eba8(int);
extern int FUN_002a89e4(int);
/* Supplied declaration required: FUN_002a8a08. */
extern int FUN_002c0ba8(void);


unsigned int FUN_00297f40(int param_1,int param_2)

{
/* irregular: 8 goto(s); 3 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = param_1;
  if ((param_2 != 0) && (temp_v0 = *(int *)(param_1 + 0x3048), temp_v0 == 6)) {
    return 0xb;
  }
  temp_v0 = FUN_002a8a08(temp_v0);
  temp_v4 = 0;
  temp_v2 = 0;
  do {
    pcVar2 = (char *)(temp_v2 & 0xff);
    FUN_00292c04(pcVar2,*(int *)(param_1 + 0x305c) == 0);
    temp_v3 = 0;
    if ((*(int *)(param_1 + 0x305c) != 0) &&
       (-1 < *(char *)(*(int *)(param_1 + 0x305c) + temp_v0 + 0x9107))) {
      temp_v3 = FUN_002a8a08();
      temp_v3 = FUN_002a89e4((int)*(char *)(*(int *)(param_1 + 0x305c) + temp_v3 + 0x9107));
    }
    if (((((pcVar2 != (char *)0x0) && (pcVar2[1] == '\x01')) &&
         ((*(short *)(pcVar2 + 0x5c) == 0 || (temp_v1 = FUN_002c0ba8(), temp_v1 != 0)))) &&
        ((*(short *)(pcVar2 + 0x5e) == 0 || (temp_v1 = FUN_002931cc(), temp_v1 != 0)))) &&
       ((pcVar2[0x5b] == '\0' ||
        (temp_v1 = FUN_00293c98(), (*(unsigned int *)(temp_v1 + 0x44a0) & 0x40000) == 0)))) {
      if (*pcVar2 != '\x05') {
        if (*pcVar2 == '\x02') {
          FUN_00293c98();
          temp_v1 = FUN_00293c2c();
          if ((temp_v1 == 0) || (temp_v1 = FUN_00293c98(), (*(unsigned int *)(temp_v1 + 0x44a0) & 0x40000) != 0))
          goto LAB_00298108;
        }
        if (*pcVar2 == '\x03') {
          if (*(int *)(param_1 + 0x305c) == 0) goto LAB_002980f8;
          if (temp_v3 != 0) {
            temp_v3 = FUN_00292bb8(temp_v3);
            if (temp_v3 == 0) goto LAB_00298108;
            goto LAB_002980d8;
          }
        }
        else {
LAB_002980d8:
          if (*pcVar2 != '\x06' && *pcVar2 != '\b') goto LAB_002980e8;
        }
      }
      else {
        if (*(char *)(param_1 + 0x38d1) != '\0') goto LAB_00298108;
LAB_002980e8:
        if (*(int *)(param_1 + 0x305c) == 0) {
LAB_002980f8:
          temp_v3 = FUN_0023de14();
          if (temp_v3 != 0) goto LAB_00298108;
        }
      }
      temp_v3 = FUN_0029eba8(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
      if (temp_v3 == temp_v4) goto LAB_0029811c;
      temp_v4 = temp_v4 + 1;
    }
LAB_00298108:
    temp_v2 = temp_v2 + 1;
  } while ((int)temp_v2 < 9);
  if (pcVar2 != (char *)0x0) {
LAB_0029811c:
    switch(*pcVar2) {
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
    }
  }
  return 5;
}
