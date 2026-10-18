/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f2b0` (_code @ 0x10f2b0, 0xc2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_0010f1e9; /* 0x10f1e9 */
extern unsigned char LAB_0010f378; /* 0x10f378 */

extern int FUN_0011378c(int, unsigned int);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
extern unsigned int FUN_002ea3c0(int *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002ea446. */
/* Supplied declaration required: FUN_002eb588. */
extern int FUN_002eb5f4(void);
extern int FUN_002eba9c(unsigned char *, int);
/* Supplied declaration required: FUN_002ec738. */
/* Supplied declaration required: FUN_002ee64c. */
extern int FUN_002ee774(unsigned int **, unsigned int *);
extern unsigned int FUN_002ee978(unsigned int *);


void FUN_0010f2b0(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *temp_v4;
  unsigned char temp_v5 [8];
  int temp_v6;
  int temp_v7;
  int temp_v8 [5];
  
  temp_v1 = FUN_002eb5f4();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002e9af4();
    FUN_002e9ec8(temp_v1,*(unsigned int *)(param_1 + 0x68));
    temp_v6 = temp_v1;
    if (temp_v1 != 0) {
      FUN_002eb588(temp_v5);
      temp_v1 = FUN_002eba9c(temp_v5,param_1 + 0xd0);
      if (temp_v1 == 0) {
        temp_v1 = FUN_002eb5f4();
        temp_v1 = *(int *)(temp_v1 + 0xd0);
        temp_v0 = 0;
        temp_v8[0] = 1;
        temp_v4 = *(unsigned int **)(param_1 + 0xe8);
        while( 1 ) {
          temp_v4 = (unsigned int *)*temp_v4;
          temp_v7 = *(unsigned int *)(param_1 + 0xe8);
          temp_v2 = FUN_002ee774(&temp_v4,(unsigned int *)&temp_v7);
          if (temp_v2 == 0) break;
          temp_v3 = FUN_002ee978(temp_v4 + 2);
          temp_v2 = FUN_0011378c(temp_v1,temp_v3);
          if (temp_v2 != -1) {
            temp_v0 = 1;
          }
          temp_v2 = temp_v1;
          FUN_002ee64c(temp_v1,temp_v4 + 2);
          if (temp_v2 == 0) {
            temp_v8[0] = 0;
          }
        }
        if (temp_v0) {
          FUN_002ec738(temp_v6);
          FUN_002ea43c(param_1);
          return;
        }
        if (temp_v8[0] == 0) {
          FUN_002ea446(param_1,0x32);
          return;
        }
      }
    }
  }
  temp_v3 = FUN_002ea3c0(temp_v8,&LAB_0010f1e9,0,&LAB_0010f378);
  FUN_002ea3d0(param_1,temp_v3);
  return;
}
