/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043c808` (_code @ 0x43c808, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00170f68(unsigned int *, int, int, int *, int, unsigned int, unsigned int, unsigned int);
int FUN_00195fc8(void);
int FUN_001a2d04(int, int, int, int);
int FUN_0043ca90(unsigned char *, int);
int nn_os_TransferMemoryBlock_Finalize(unsigned char *);
int nn_os_TransferMemoryBlock_Initialize(unsigned char *, int, int, int, int);

/* stack frame of param_9: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_9_stack;

extern unsigned char LAB_0043c994; /* 0x43c994 */
extern int DAT_005891bc; /* 0x5891bc */
extern unsigned int DAT_005891c8; /* 0x5891c8 */
extern unsigned int DAT_005891cc; /* 0x5891cc */
extern int DAT_00589500; /* 0x589500 */
extern unsigned char DAT_0062d6b8; /* 0x62d6b8 */
extern int DAT_0062d6cc; /* 0x62d6cc */

/* Supplied declaration required: FUN_00170f68. */
/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_001a2d04. */
extern int FUN_001a324c(unsigned int);
extern int FUN_0043c4cc(int, int, int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0043ca90. */
/* Supplied declaration required: nn_os_TransferMemoryBlock_Finalize. */
/* Supplied declaration required: nn_os_TransferMemoryBlock_Initialize. */


unsigned int
FUN_0043c808(unsigned char *param_1,int param_2,int param_3,int param_4,unsigned int param_5,
            unsigned int param_6,unsigned int param_7,unsigned int param_8,int param_9)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5 [2];
  
  temp_v3 = DAT_005891bc;
  temp_v4 = 0;
  temp_v5[0] = 0;
  temp_v0 = FUN_0043c4cc(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  temp_v2 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_001a324c(0x401);
    temp_v0 = 0;
    if (temp_v1 < 0) {
      temp_v0 = -0x375f3004;
    }
    if (temp_v1 < 0 && temp_v1 != temp_v0) {
      FUN_00195fc8();
    }
    if (param_3 != 0 && param_4 != 0) {
      temp_v1 = *(int *)(param_2 + 0x130);
    }
    if ((param_3 != 0 && param_4 != 0) && temp_v1 != 0) {
      nn_os_TransferMemoryBlock_Initialize(&DAT_0062d6b8,param_3,param_4,3,3);
      temp_v3 = DAT_0062d6cc;
    }
    if (((*(unsigned int *)(param_2 + 0x18) & 0x20) != 0) && (DAT_00589500 = param_9, param_9 != 0)) {
      FUN_0043ca90(&LAB_0043c994,0);
    }
    FUN_001a2d04(0x401,param_2,0x400,temp_v3);
    puVar3 = temp_v5;
    FUN_00170f68(puVar3,param_2,0x400,&temp_v4,0,param_7,DAT_005891c8,DAT_005891cc);
    *param_1 = (char)(int)puVar3;
    if (DAT_0062d6cc != 0) {
      nn_os_TransferMemoryBlock_Finalize(&DAT_0062d6b8);
    }
    temp_v2 = 1;
  }
  return temp_v2;
}

} /* extern "C" */
