/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003311b4` (_code @ 0x3311b4, 0x1d8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
} param_4_stack;

extern int FUN_0023de14(void);
extern int FUN_00292bb8(int);
/* Supplied declaration required: FUN_00292c04. */
extern int FUN_002931cc(void);
extern int FUN_00293c2c(void);
/* Supplied declaration required: FUN_00293c98. */
extern int FUN_002a89e4(void);
extern int FUN_002a8a08(void);
extern int FUN_002c0ba8(void);


char FUN_003311b4(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 unstructured edge(s); 6 goto(s); 2 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v4 = 0;
  temp_v5 = param_1;
  temp_v0 = FUN_002a8a08();
  temp_v2 = 0;
  do {
    pcVar2 = (char *)(temp_v2 & 0xff);
    FUN_00292c04(pcVar2,*(int *)(param_1 + 0x305c) == 0,param_3,param_4,temp_v5);
    temp_v3 = 0;
    if ((*(int *)(param_1 + 0x305c) != 0) &&
       (-1 < *(char *)(*(int *)(param_1 + 0x305c) + temp_v0 + 0x9107))) {
      temp_v3 = FUN_002a89e4();
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
          goto LAB_0033135c;
        }
        if (*pcVar2 == '\x03') {
          if (*(int *)(param_1 + 0x305c) == 0) goto LAB_0033134c;
          if (temp_v3 == 0) goto LAB_00331374;
          temp_v3 = FUN_00292bb8(temp_v3);
          if (temp_v3 == 0) goto LAB_0033135c;
        }
        if ((*pcVar2 != '\x06' && *pcVar2 != '\b') && (*(int *)(param_1 + 0x305c) == 0)) {
LAB_0033134c:
          temp_v3 = FUN_0023de14();
          if (temp_v3 != 0) goto LAB_0033135c;
        }
LAB_00331374:
        if (temp_v4 == param_2) {
          return *pcVar2;
        }
        temp_v4 = temp_v4 + 1;
      }
      else {
        if (*(int *)(param_1 + 0x305c) == 0) goto LAB_0033134c;
        if (*(char *)(param_1 + 0x38d1) == '\0') {
          if (temp_v4 == param_2) {
            return *pcVar2;
          }
          temp_v4 = temp_v4 + 1;
        }
      }
    }
LAB_0033135c:
    temp_v2 = temp_v2 + 1;
    if ((int)temp_v2 >= 9) {
      return '\0';
    }
  } while( 1 );
}
