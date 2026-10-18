/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394724` (_code @ 0x394724, 0x1a8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char DAT_0049fc14; /* 0x49fc14 */
extern unsigned int DAT_0049fc18; /* 0x49fc18 */
extern unsigned int DAT_0049fc1c; /* 0x49fc1c */
extern unsigned int DAT_0049fc20; /* 0x49fc20 */
extern unsigned int DAT_0049fc24; /* 0x49fc24 */
extern unsigned int DAT_0049fc28; /* 0x49fc28 */
extern unsigned int DAT_0049fc2c; /* 0x49fc2c */
extern unsigned int DAT_0049fc30; /* 0x49fc30 */
extern unsigned int DAT_0049fc34; /* 0x49fc34 */

extern int FUN_00207f84(void);
/* Supplied declaration required: FUN_00276c24. */
/* Supplied declaration required: FUN_0027de00. */
extern int FUN_0028753c(void);
extern int FUN_0028756c(void);
/* Supplied declaration required: FUN_00289770. */
extern char *FUN_002897fc(void);
/* Supplied declaration required: FUN_002a0678. */
/* Supplied declaration required: FUN_002c59b8. */


void FUN_00394724(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 unstructured edge(s); 5 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  puVar5 = &temp_v4;
  temp_v4 = param_4;
  pcVar2 = (char *)FUN_002897fc();
  temp_v0 = *pcVar2;
  if (temp_v0 != '\x01') {
    if (temp_v0 != '\x02') {
      if (temp_v0 != '\x03') {
        temp_v1 = FUN_0028753c();
        if (temp_v1 != 0) {
          temp_v3 = 4;
          temp_v4 = DAT_0049fc18 - 200;
          temp_v2 = 0xe;
        }
        else {
          temp_v1 = FUN_00207f84();
          if (temp_v1 == 0) {
            temp_v1 = FUN_0028756c();
            if (temp_v1 != 0) {
              temp_v3 = 0;
              puVar5 = (unsigned int *)0x0;
              temp_v2 = 6;
              FUN_002c59b8(temp_v2,puVar5,temp_v3);
            }
            FUN_002a0678(0,10);
            FUN_002a0678(1,10);
            FUN_00276c24(0xffffffff,0xffffffff);
            FUN_00289770();
            *(unsigned char *)(param_1 + 0x19) = 1;
            FUN_0027de00();
            return;
          }
          temp_v3 = 0;
          puVar5 = (unsigned int *)0x0;
          temp_v2 = 8;
        }
      }
      else {
        DAT_0049fc14 = 1;
        DAT_0049fc18 = (unsigned int)(unsigned char)pcVar2[1];
        DAT_0049fc1c = 0;
        temp_v3 = 4;
        temp_v4 = (unsigned int)(unsigned char)pcVar2[1];
        temp_v2 = 0xe;
      }
    }
    else {
      DAT_0049fc14 = 1;
      DAT_0049fc18 = (unsigned char)pcVar2[1] + 100;
      DAT_0049fc1c = (unsigned int)(unsigned char)pcVar2[2];
      DAT_0049fc20 = 0xffffffff;
      DAT_0049fc24 = *(unsigned int *)(pcVar2 + 4);
      DAT_0049fc28 = *(unsigned int *)(pcVar2 + 8);
      DAT_0049fc2c = *(unsigned int *)(pcVar2 + 0xc);
      DAT_0049fc30 = *(unsigned int *)(pcVar2 + 0x10);
      DAT_0049fc34 = *(unsigned int *)(pcVar2 + 0x14);
      temp_v3 = 0;
      puVar5 = (unsigned int *)0x0;
      temp_v2 = 8;
    }
  }
  else {
    DAT_0049fc14 = 1;
    DAT_0049fc18 = (unsigned int)(unsigned char)pcVar2[1];
    DAT_0049fc1c = (unsigned int)(unsigned char)pcVar2[2];
    DAT_0049fc20 = (unsigned int)(unsigned char)pcVar2[3];
    DAT_0049fc24 = *(unsigned int *)(pcVar2 + 4);
    DAT_0049fc28 = *(unsigned int *)(pcVar2 + 8);
    DAT_0049fc2c = *(unsigned int *)(pcVar2 + 0xc);
    DAT_0049fc30 = *(unsigned int *)(pcVar2 + 0x10);
    DAT_0049fc34 = *(unsigned int *)(pcVar2 + 0x14);
    temp_v3 = 0;
    puVar5 = (unsigned int *)0x0;
    temp_v2 = 6;
  }
  FUN_002c59b8(temp_v2,puVar5,temp_v3);
  FUN_002a0678(0,10);
  FUN_002a0678(1,10);
  FUN_00276c24(0xffffffff,0xffffffff);
  FUN_00289770();
  *(unsigned char *)(param_1 + 0x19) = 1;
  FUN_0027de00();
  return;
}
