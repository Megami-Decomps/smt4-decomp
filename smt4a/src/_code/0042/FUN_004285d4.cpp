/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004285d4` (_code @ 0x4285d4, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001029f4(...);
int FUN_00102bbc(...);
int libc_strtok(...);
int FUN_0043bd0c(...);
int stringFormatBounded(...);
int strncpy(...);

/* stack frame of param_3: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp21; /* 0x21: local_21 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
} param_3_stack;

extern unsigned char DAT_00536ccc; /* 0x536ccc */
extern unsigned char DAT_00536cd4; /* 0x536cd4 */

/* Supplied declaration required: FUN_001029f4. */
/* Supplied declaration required: FUN_00102bbc. */
/* Supplied declaration required: libc_strtok. */
extern int wstrlen(int);
/* Supplied declaration required: FUN_0043bd0c. */
/* Supplied declaration required: stringFormatBounded. */


unsigned int FUN_004285d4(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  unsigned char *temp_v3;
  char *temp_v4;
  unsigned char temp_v5 [128];
  unsigned char temp_v6 [31];
  unsigned char temp_v7;
  unsigned char temp_v8 [8];
  
  strncpy(temp_v6,param_2,0x20);
  temp_v7 = 0;
  temp_v0 = libc_strtok(temp_v6,&DAT_00536ccc,&temp_v3);
  temp_v1 = libc_strtok(0,&DAT_00536ccc,&temp_v3);
  FUN_001029f4(temp_v0,&temp_v4,10);
  if (*temp_v4 == '\0') {
    if (temp_v1 != 0) {
      temp_v2 = wstrlen(temp_v1);
      if (temp_v2 == 1) {
        temp_v3 = (unsigned char *)0x536cd0;
      }
      else {
        temp_v3 = &DAT_00536cd4;
      }
    }
    else {
      temp_v1 = 0x536cd8;
      temp_v3 = &DAT_00536cd4;
    }
    stringFormatBounded(temp_v8,3,"%s%s",temp_v1);
    puVar4 = temp_v8;
    FUN_001029f4(puVar4,&temp_v4,10);
    if ((*temp_v4 == '\0') && (-1 < temp_v0 && -1 < (int)puVar4)) {
      temp_v3 = puVar4;
      FUN_0043bd0c(temp_v5,0x40,*(unsigned char *)(param_3 + 0x40),temp_v0);
      FUN_00102bbc(param_1 + 0x20,temp_v5,0x40);
      strncpy(param_1,param_3,0x20);
      strncpy(param_1 + 0x60,param_3 + 0x20,0x20);
      return 0;
    }
  }
  return 0xe0e1389d;
}

} /* extern "C" */
