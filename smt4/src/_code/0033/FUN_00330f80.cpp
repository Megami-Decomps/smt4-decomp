/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330f80` (_code @ 0x330f80, 0x1d8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00292960(char *, int, unsigned int, unsigned int, int);
int btlGetMainState(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
} param_4_stack;

extern int FUN_0023dcb8(void);
extern int FUN_00292914(int);
/* Supplied declaration required: FUN_00292960. */
extern int flagBitIsSet(void);
extern int FUN_00293988(void);
/* Supplied declaration required: btlGetMainState. */
extern int gameGetUnitRecord(void);
extern int gameGetSlotTable(void);
extern int gameFlagIsSet(void);


char FUN_00330f80(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

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
  temp_v0 = gameGetSlotTable();
  temp_v2 = 0;
  do {
    pcVar2 = (char *)(temp_v2 & 0xff);
    FUN_00292960(pcVar2,*(int *)(param_1 + 0x305c) == 0,param_3,param_4,temp_v5);
    temp_v3 = 0;
    if ((*(int *)(param_1 + 0x305c) != 0) &&
       (-1 < *(char *)(*(int *)(param_1 + 0x305c) + temp_v0 + 0x9107))) {
      temp_v3 = gameGetUnitRecord();
    }
    if (((((pcVar2 != (char *)0x0) && (pcVar2[1] == '\x01')) &&
         ((*(short *)(pcVar2 + 0x5c) == 0 || (temp_v1 = gameFlagIsSet(), temp_v1 != 0)))) &&
        ((*(short *)(pcVar2 + 0x5e) == 0 || (temp_v1 = flagBitIsSet(), temp_v1 != 0)))) &&
       ((pcVar2[0x5b] == '\0' ||
        (temp_v1 = btlGetMainState(), (*(unsigned int *)(temp_v1 + 0x44a0) & 0x40000) == 0)))) {
      if (*pcVar2 != '\x05') {
        if (*pcVar2 == '\x02') {
          btlGetMainState();
          temp_v1 = FUN_00293988();
          if ((temp_v1 == 0) || (temp_v1 = btlGetMainState(), (*(unsigned int *)(temp_v1 + 0x44a0) & 0x40000) != 0))
          goto LAB_00331128;
        }
        if (*pcVar2 == '\x03') {
          if (*(int *)(param_1 + 0x305c) == 0) goto LAB_00331118;
          if (temp_v3 == 0) goto LAB_00331140;
          temp_v3 = FUN_00292914(temp_v3);
          if (temp_v3 == 0) goto LAB_00331128;
        }
        if ((*pcVar2 != '\x06' && *pcVar2 != '\b') && (*(int *)(param_1 + 0x305c) == 0)) {
LAB_00331118:
          temp_v3 = FUN_0023dcb8();
          if (temp_v3 != 0) goto LAB_00331128;
        }
LAB_00331140:
        if (temp_v4 == param_2) {
          return *pcVar2;
        }
        temp_v4 = temp_v4 + 1;
      }
      else {
        if (*(int *)(param_1 + 0x305c) == 0) goto LAB_00331118;
        if (*(char *)(param_1 + 0x38d1) == '\0') {
          if (temp_v4 == param_2) {
            return *pcVar2;
          }
          temp_v4 = temp_v4 + 1;
        }
      }
    }
LAB_00331128:
    temp_v2 = temp_v2 + 1;
    if ((int)temp_v2 >= 9) {
      return '\0';
    }
  } while( 1 );
}

} /* extern "C" */
