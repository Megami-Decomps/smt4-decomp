/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116608` (_code @ 0x116608, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f7830(unsigned int *, unsigned char [8]);
int FUN_00302428(char *, char **, int);

/* stack frame of param_5: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

/* Supplied declaration required: FUN_002f7830. */
extern unsigned long long FUN_00302420(unsigned int, char **, unsigned int);
/* Supplied declaration required: FUN_00302428. */


unsigned int
FUN_00116608(unsigned int *param_1,unsigned long long *param_2,char *param_3,char *param_4,unsigned int *param_5
            )

{
/* irregular: 2 native warning(s); review required */
  char *pcVar1;
  unsigned long long temp_v0;
  char *temp_v1;
  unsigned char temp_v2 [8];
  unsigned int *temp_v3;
  unsigned long long *puStack_20;
  char *pcStack_1c;
  char *pcStack_18;
  
  temp_v2[0] = 0;
  temp_v3 = param_1;
  puStack_20 = param_2;
  pcStack_1c = param_3;
  pcStack_18 = param_4;
  FUN_002f7830(param_1,temp_v2);
  temp_v1 = (char *)0x0;
  temp_v0 = FUN_00302420(*temp_v3,&temp_v1,10);
  *param_2 = temp_v0;
  if ((param_2 != (unsigned long long *)0x0) && (*temp_v1 == ',')) {
    pcVar1 = temp_v1 + 1;
    FUN_00302428(pcVar1,&temp_v1,10);
    if ((param_3 != (char *)0x0) && ((*temp_v1 == ',' && (pcVar1 == param_3)))) {
      pcVar1 = temp_v1 + 1;
      FUN_00302428(pcVar1,&temp_v1,10);
      if (((pcVar1 != (char *)0x0) && (param_4 == pcVar1)) ||
         ((param_4 == (char *)0x1 || (param_4 == (char *)0x0)))) {
        *param_5 = (unsigned int)pcVar1;
        return 1;
      }
    }
  }
  return 0;
}

} /* extern "C" */
