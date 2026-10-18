/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee6a0` (_code @ 0x2ee6a0, 0x2a4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int FUN_001f417c(); /* 0x1f417c */
extern int FUN_001f41ec(); /* 0x1f41ec */
extern unsigned char LAB_002e3664; /* 0x2e3664 */
extern unsigned char LAB_002ee98c; /* 0x2ee98c */
extern unsigned char LAB_002ee99c; /* 0x2ee99c */
extern unsigned int *DAT_0043ded0; /* 0x43ded0 */

/* Supplied declaration required: FUN_0026e8fc. */
/* Supplied declaration required: FUN_002b756c. */
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c4460. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


unsigned int FUN_002ee6a0(void)

{
/* irregular: 3 goto(s); 8 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned char *puVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  if (DAT_0043ded0 != (unsigned int *)0x0) {
    return *DAT_0043ded0;
  }
  puVar2 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x68,1);
  FUN_002c4b30(puVar2,0x68);
  DAT_0043ded0 = puVar2;
  *(unsigned char *)(puVar2 + 0x17) = 1;
  puVar3 = &LAB_002ee98c;
  FUN_002c5978(&LAB_002ee98c,2,0,0,FUN_001f417c,&LAB_002e3664,puVar2);
  *puVar2 = (unsigned int)puVar3;
  FUN_002c4c00(&LAB_002ee99c,0x7d,0,0,FUN_001f41ec,0,puVar2,puVar3);
  FUN_002c4c00(&LAB_002ee99c,0xdb,0,0,FUN_001f41ec,0,puVar2,*puVar2);
  temp_v6 = 0;
LAB_002ee778:
  temp_v1 = FUN_002bf41c(*(unsigned int *)(temp_v6 * 4 + 0x493790));
  if (temp_v1 != 0) {
    FUN_0026e8fc(*(unsigned int *)(temp_v6 * 4 + 0x493790),1);
    FUN_002c4460(*DAT_0043ded0,*(unsigned int *)(temp_v6 * 4 + 0x493790));
    puVar2 = DAT_0043ded0;
    temp_v5 = *(unsigned int *)(temp_v6 * 4 + 0x493790);
    temp_v1 = 0;
    if (0 < (int)DAT_0043ded0[0xb]) {
      do {
        temp_v2 = FUN_002bf41c(puVar2[temp_v1 + 1]);
        if (temp_v2 == 0) {
          puVar2[temp_v1 + 1] = 0;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)puVar2[0xb]);
    }
    temp_v1 = 0;
    do {
      if (puVar2[temp_v1 + 1] == 0) {
        puVar2[temp_v1 + 1] = temp_v5;
        break;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 10);
    temp_v2 = -1;
    temp_v1 = 0;
    temp_v4 = 10;
    do {
      if (puVar2[temp_v1 + 1] == 0) {
        temp_v2 = temp_v1;
      }
      while( 1 ) {
        temp_v3 = temp_v1;
        temp_v4 = temp_v4 - 1;
        temp_v1 = temp_v3 + 1;
        if (temp_v4 == 0) {
          puVar2[0xb] = 0;
          goto LAB_002ee870;
        }
        if (temp_v2 < 0) break;
        if (puVar2[temp_v3 + 2] != 0) {
          puVar2[temp_v2 + 1] = puVar2[temp_v3 + 2];
          puVar2[temp_v3 + 2] = 0;
          temp_v2 = temp_v1;
        }
      }
    } while( 1 );
  }
  goto LAB_002ee910;
  while (temp_v1 = puVar2[0xb] + 1, puVar2[0xb] = temp_v1, temp_v1 < 10) {
LAB_002ee870:
    if (puVar2[puVar2[0xb] + 1] == 0) break;
  }
  do {
    temp_v0 = 0;
    temp_v1 = 0;
    if (puVar2[0xb] - 1 < 1) break;
    do {
      if (puVar2[temp_v1 + 1] != 0) {
        if (puVar2[temp_v1 + 2] != 0) {
          temp_v2 = FUN_002b756c();
          temp_v4 = FUN_002b756c(puVar2[temp_v1 + 2]);
          if (temp_v4 < temp_v2) {
            temp_v5 = puVar2[temp_v1 + 1];
            temp_v0 = 1;
            puVar2[temp_v1 + 1] = puVar2[temp_v1 + 2];
            puVar2[temp_v1 + 2] = temp_v5;
          }
        }
      }
      else if (puVar2[temp_v1 + 2] != 0) {
        temp_v0 = 1;
        puVar2[temp_v1 + 1] = puVar2[temp_v1 + 2];
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < puVar2[0xb] - 1);
  } while (temp_v0);
LAB_002ee910:
  temp_v6 = temp_v6 + 1;
  if (temp_v6 >= 4) {
    return *DAT_0043ded0;
  }
  goto LAB_002ee778;
}
