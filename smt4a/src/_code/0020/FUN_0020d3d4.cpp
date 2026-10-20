/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020d3d4` (_code @ 0x20d3d4, 0x328 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_00203b40(int, int, int, int, int, int);
int FUN_002cc228(char *, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned int DAT_00573bb0; /* 0x573bb0 */
extern unsigned int DAT_00573bb4; /* 0x573bb4 */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_00184310. */
extern int FUN_0018719c(void);
extern int FUN_001ab854(int);
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_00203b40. */
extern int FUN_00291e14(void);
extern int FUN_002b24fc(void);
/* Supplied declaration required: FUN_002cc228. */
extern int FUN_003e46f4(void);
extern int FUN_004bd748(int);


void FUN_0020d3d4(int param_1)

{
/* irregular: 2 goto(s); 3 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v5 = 0;
  temp_v4 = 0;
  do {
    pcVar2 = (char *)(temp_v4 & 0xff);
    FUN_002cc228(pcVar2,1);
    if (((((pcVar2 != (char *)0x0) && (pcVar2[1] == '\x01')) &&
         ((*(short *)(pcVar2 + 0x5c) == 0 || (temp_v1 = FUN_0018719c(), temp_v1 != 0)))) &&
        (((*(short *)(pcVar2 + 0x5e) == 0 || (temp_v1 = FUN_003e46f4(), temp_v1 != 0)) &&
         ((pcVar2[0x5b] == '\0' ||
          (temp_v1 = btlGetMainState(),
          (*(unsigned int *)(temp_v1 + 0x45a0) & DAT_00573bb0) == 0 &&
          (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_00573bb4) == 0)))))) &&
       (((temp_v0 = *pcVar2, temp_v0 != '\x02' &&
         (((temp_v0 == '\x06' || temp_v0 == '\b' || (*pcVar2 != '\t')) ||
          (temp_v1 = FUN_002b24fc(), temp_v1 != 0)))) &&
        (((*(unsigned int *)(pcVar2 + 0x60) & 1) == 0 || (temp_v1 = FUN_00291e14(), temp_v1 == 0)))))) {
      temp_v5 = temp_v5 + 1;
    }
    temp_v4 = temp_v4 + 1;
  } while ((int)temp_v4 < 10);
  FUN_00203b40(param_1 + 0x38bc,temp_v5,1,temp_v5,1,1);
  temp_v5 = 0;
  do {
    temp_v6 = 0;
    temp_v1 = FUN_001ab888();
    if (-1 < *(char *)(temp_v1 + temp_v5 + 0x1ca0)) {
      temp_v1 = FUN_001ab888();
      temp_v1 = FUN_001ab854((int)*(char *)(temp_v1 + temp_v5 + 0x1ca0));
      if (temp_v1 != 0) {
        temp_v4 = 0;
        do {
          pcVar2 = (char *)(temp_v4 & 0xff);
          FUN_002cc228(pcVar2,0);
          if (((((pcVar2 != (char *)0x0) && (pcVar2[1] == '\x01')) &&
               ((*(short *)(pcVar2 + 0x5c) == 0 || (temp_v2 = FUN_0018719c(), temp_v2 != 0)))) &&
              ((*(short *)(pcVar2 + 0x5e) == 0 || (temp_v2 = FUN_003e46f4(), temp_v2 != 0)))) &&
             ((pcVar2[0x5b] == '\0' ||
              (temp_v2 = btlGetMainState(),
              (DAT_00573bb4 & *(unsigned int *)(temp_v2 + 0x45a4)) == 0 &&
              (*(unsigned int *)(temp_v2 + 0x45a0) & DAT_00573bb0) == 0)))) {
            if (*pcVar2 != '\x05') {
              if ((*pcVar2 != '\x03') || (temp_v2 = FUN_004bd748(temp_v1), temp_v2 != 0)) {
LAB_0020d624:
                if (((*(unsigned int *)(pcVar2 + 0x60) & 1) == 0) || (temp_v2 = FUN_00291e14(), temp_v2 == 0)) {
                  temp_v6 = temp_v6 + 1;
                }
              }
              else if ((*pcVar2 == '\x03') &&
                      (((((*(unsigned int *)(pcVar2 + 0x60) & 1) == 0 &&
                         (temp_v2 = FUN_00291e14(), temp_v2 != 0)) && (temp_v1 != 0)) &&
                       (temp_v2 = FUN_00291e14(), temp_v2 != 0)))) {
                temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0x62);
                FUN_00184310();
                if ((temp_v3 != 0) && ((*(unsigned char *)(temp_v3 + 0xb3) & 4) != 0)) goto LAB_0020d624;
              }
            }
            else if (*(char *)(param_1 + 0x41ed) == '\0') goto LAB_0020d624;
          }
          temp_v4 = temp_v4 + 1;
        } while ((int)temp_v4 < 10);
      }
    }
    FUN_00203b40(param_1 + temp_v5 * 100 + 0x3920,temp_v6,1,temp_v6,1,1);
    temp_v5 = temp_v5 + 1;
    if (temp_v5 >= 3) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
