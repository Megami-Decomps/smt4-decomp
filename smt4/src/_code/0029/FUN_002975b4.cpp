/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002975b4` (_code @ 0x2975b4, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerMarkDestroy(void);
int FUN_0023f2e4(...);
int FUN_0023f3bc(...);
int FUN_00254650(int, int);
int animPlayerSetLoopPolicy(unsigned int, int);
int nodeSetTranslation(unsigned int, int, unsigned char [12]);
int nodeSetTranslation3f(unsigned int, int);
int FUN_002a0428(int, unsigned int);
int statusCameraApply(void);
int FUN_002a5710(unsigned int, int);
int asdMdlManagerDestroy(...);
int FUN_002b2ae8(unsigned int, int, unsigned char [12]);
int asdMemFree(...);
int FUN_002cbad0(unsigned int, int, unsigned char [24]);
int FUN_003353cc(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: asdMdlManagerMarkDestroy. */
extern unsigned int FUN_0019df10(void);
/* Supplied declaration required: FUN_0023f2e4. */
/* Supplied declaration required: FUN_0023f3bc. */
/* Supplied declaration required: FUN_00254650. */
/* Supplied declaration required: animPlayerSetLoopPolicy. */
/* Supplied declaration required: nodeSetTranslation. */
/* Supplied declaration required: nodeSetTranslation3f. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: statusCameraApply. */
/* Supplied declaration required: FUN_002a5710. */
/* Supplied declaration required: asdMdlManagerDestroy. */
extern int FUN_002adee0(void);
/* Supplied declaration required: FUN_002b2ae8. */
extern int padIsButtonPressed(unsigned int);
extern int FUN_002c15fc(unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002cbad0. */
extern unsigned int asdMdlManagerCreateFromSourceAndNode(int, unsigned int, unsigned short, unsigned int);
/* Supplied declaration required: FUN_003353cc. */


void FUN_002975b4(int param_1)

{
/* irregular: irregular input(s): in_r12; 15 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar7;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar10;
  int temp_v7;
  int temp_v8;
  int in_r12;
  unsigned char temp_v9;
  unsigned char temp_v10 [12];
  unsigned char temp_v11 [24];
  
  temp_v0 = FUN_002c15fc(0xe);
  if (temp_v0 != 0) {
    FUN_00254650(param_1,0);
  }
  temp_v0 = FUN_002c15fc(0xf);
  if (temp_v0 != 0) {
    FUN_00254650(param_1,1);
  }
  temp_v0 = FUN_002c15fc(0xd);
  if (temp_v0 != 0) {
    FUN_00254650(param_1,3);
  }
  temp_v0 = FUN_002c15fc(0xc);
  if (temp_v0 != 0) {
    FUN_00254650(param_1,2);
  }
  temp_v0 = padIsButtonPressed(2);
  if (temp_v0 != 0) {
    temp_v0 = *(int *)(param_1 + 0x24) + 1;
    *(int *)(param_1 + 0x24) = temp_v0;
    if (temp_v0 >= 3) {
      *(unsigned int *)(param_1 + 0x24) = 0;
    }
    FUN_00254650(param_1,4);
  }
  statusCameraApply();
  temp_v0 = *(int *)(param_1 + 0x1c);
  if ((*(int *)(temp_v0 + 4) != 0) && (*(int *)(temp_v0 + 4) == 1)) {
    if (*(int *)(temp_v0 + 8) != 0) {
      temp_v1 = FUN_002adee0();
      if (temp_v1 != 0) {
        if (*(int *)(*(int *)(*(int *)(temp_v0 + 8) + 8) + 0xc) < 0) {
          FUN_002a0428(*(int *)(temp_v0 + 8),*(unsigned int *)(temp_v0 + 0xc));
        }
        nodeSetTranslation3f(*(unsigned int *)(*(int *)(temp_v0 + 8) + 8),0);
        animPlayerSetLoopPolicy(*(unsigned int *)(*(int *)(temp_v0 + 8) + 8),1);
        FUN_002a5710(*(unsigned int *)(*(int *)(temp_v0 + 8) + 8),0);
        temp_v1 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(temp_v0 + 8) + 8) + 0x2c) + 0x220) + 8);
        *(unsigned int *)(temp_v1 + 0x28) = *(unsigned int *)(temp_v1 + 0x28) | 1;
        temp_v5 = *(int *)(*(int *)(*(int *)(temp_v0 + 8) + 8) + 0x2c);
        temp_v1 = *(int *)(temp_v5 + 0x174);
        temp_v4 = *(int *)(temp_v5 + 0x170);
        if (temp_v4 == temp_v1) {
          temp_v1 = *(int *)(temp_v5 + 8);
          temp_v4 = *(int *)(temp_v1 + 0xb8);
          temp_v9 = temp_v4 != 0;
          if (temp_v9) {
            temp_v4 = temp_v4 + temp_v1 + 0xb8;
          }
          if (!temp_v9) {
            temp_v4 = 0;
          }
          temp_v1 = temp_v4 + *(int *)(temp_v1 + 0xb4) * 4;
        }
        temp_v5 = 0;
        if ((unsigned int)(temp_v1 - temp_v4) >> 2 != 0) {
          do {
            piVar3 = (int *)(temp_v4 + temp_v5 * 4);
            temp_v5 = temp_v5 + 1;
            in_r12 = *piVar3;
            if (in_r12 != 0) {
              temp_v2 = (int)piVar3 + in_r12;
            }
            else {
              temp_v2 = 0;
            }
            *(unsigned char *)(temp_v2 + 0x24) = 0;
          } while (temp_v5 < (int)((unsigned int)(temp_v1 - temp_v4) >> 2));
        }
        *(unsigned int *)(temp_v0 + 4) = 0;
      }
    }
    else {
      *(unsigned int *)(temp_v0 + 4) = 0;
    }
  }
  temp_v9 = 0;
  temp_v1 = 0;
  do {
    temp_v4 = temp_v0 + temp_v1 * 0x50;
    puVar10 = (unsigned int *)(temp_v4 + 0x10);
    switch(*puVar10) {
    case 1:
      if ((*(int *)(temp_v4 + 0x18) != 0) && (temp_v5 = FUN_002adee0(), temp_v5 != 0)) {
        FUN_002b2ae8(*(unsigned int *)(*(int *)(temp_v0 + 8) + 8),0,temp_v10);
        FUN_002cbad0(*(unsigned int *)(*(int *)(temp_v0 + 8) + 8),0,temp_v11);
        if (*(int *)(*(int *)(*(int *)(temp_v4 + 0x18) + 8) + 0xc) < 0) {
          FUN_002a0428(*(int *)(temp_v4 + 0x18),*(unsigned int *)(temp_v0 + 0xc));
        }
        nodeSetTranslation(*(unsigned int *)(*(int *)(temp_v4 + 0x18) + 8),0,temp_v10);
        FUN_0023f3bc(*(unsigned int *)(*(int *)(temp_v4 + 0x18) + 8),0,temp_v11);
        if ((**(unsigned int **)(temp_v0 + 8) & 2) != 0) {
          puVar7 = *(unsigned int **)(temp_v4 + 0x18);
          *puVar7 = *puVar7 | 2;
          *(unsigned char *)(*(int *)(puVar7[2] + 0x2c) + 0x1f6) = 0;
        }
        temp_v9 = 1;
        *puVar10 = 0;
      }
      break;
    case 2:
      puVar7 = *(unsigned int **)(temp_v4 + 0x18);
      if ((*puVar7 & 2) != 0) {
        *puVar10 = 3;
      }
      else {
        *puVar7 = *puVar7 | 2;
        *(unsigned char *)(*(int *)(puVar7[2] + 0x2c) + 0x1f6) = 0;
        if (-1 < *(int *)(*(int *)(*(int *)(temp_v4 + 0x18) + 8) + 0xc)) {
          asdMdlManagerMarkDestroy();
        }
      }
      break;
    case 3:
      asdMdlManagerDestroy(*(unsigned int *)(temp_v4 + 0x18));
      *(unsigned int *)(temp_v4 + 0x18) = 0;
      asdMemFree(*(unsigned int *)(temp_v4 + 0x1c));
      *(unsigned int *)(temp_v4 + 0x1c) = 0;
      *puVar10 = 0;
      if (*(char *)(temp_v4 + 0x20) != '\0') {
        FUN_0023f2e4(temp_v0,temp_v1,temp_v4 + 0x20,*(unsigned short *)(temp_v4 + 0x14));
      }
      break;
    case 4:
      if (*(int *)(temp_v4 + 0x1c) != 0) {
        temp_v3 = FUN_0019df10();
        in_r12 = *(int *)(temp_v4 + 0x1c);
        temp_v3 = asdMdlManagerCreateFromSourceAndNode(in_r12,temp_v3,*(unsigned short *)(temp_v4 + 0x14),*(unsigned int *)(temp_v0 + 8));
        *(unsigned int *)(temp_v4 + 0x18) = temp_v3;
        *puVar10 = 1;
      }
      break;
    case 5:
      if ((*(int *)(temp_v0 + 4) == 0) && (*(int *)(temp_v0 + 8) != 0)) {
        FUN_0023f2e4(temp_v0,temp_v1,temp_v4 + 0x20,*(unsigned short *)(temp_v4 + 0x14));
      }
    }
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 3) {
      if ((temp_v9) && (*(int *)(temp_v0 + 4) == 0)) {
        temp_v1 = *(int *)(temp_v0 + 0x10);
        temp_v9 = temp_v1 == 0;
        if (temp_v9) {
          temp_v1 = *(int *)(temp_v0 + 0x60);
        }
        if ((temp_v9 && temp_v1 == 0) && (*(int *)(temp_v0 + 0xb0) == 0)) {
          FUN_003353cc(temp_v0);
          puVar7 = *(unsigned int **)(*(int *)(*(int *)(*(int *)(temp_v0 + 8) + 8) + 0x2c) + 8);
          if ((puVar7 != (unsigned int *)0x0) && ((~*puVar7 & 0x40000092) != 0)) {
            puVar7 = (unsigned int *)0x0;
          }
          temp_v6 = puVar7[0x38];
          temp_v1 = 0;
          if (temp_v6 != 0) {
            temp_v4 = (int)(puVar7 + 0x38) + temp_v6;
          }
          else {
            temp_v4 = 0;
          }
          do {
            temp_v5 = temp_v0 + temp_v1 * 0x50;
            temp_v2 = *(int *)(temp_v5 + 0x18);
            if ((temp_v2 != 0) && (*(int *)(temp_v5 + 0x10) == 0)) {
              puVar7 = *(unsigned int **)(*(int *)(*(int *)(temp_v2 + 8) + 0x2c) + 8);
              if ((puVar7 != (unsigned int *)0x0) && ((~*puVar7 & 0x40000092) != 0)) {
                puVar7 = (unsigned int *)0x0;
              }
              temp_v6 = puVar7[0x38];
              if (temp_v6 != 0) {
                in_r12 = temp_v6 + (int)(puVar7 + 0x38);
              }
              if (temp_v6 == 0) {
                in_r12 = 0;
              }
              temp_v6 = 0;
              if (*(int *)(temp_v4 + 0x18) != 0) {
                do {
                  temp_v5 = *(int *)(temp_v4 + 0x1c);
                  if (temp_v5 != 0) {
                    temp_v2 = temp_v4 + 0x1c + temp_v5;
                  }
                  else {
                    temp_v2 = 0;
                  }
                  temp_v7 = 0;
                  if (temp_v2 != 0) {
                    piVar3 = (int *)(temp_v2 + temp_v6 * 0x10 + 0x28);
                    temp_v7 = *piVar3;
                    if (temp_v7 == 0) {
                      temp_v7 = 0;
                    }
                    else {
                      temp_v7 = (int)piVar3 + temp_v7;
                    }
                  }
                  if ((*(unsigned int *)(temp_v7 + 4) & 0x200) == 0) {
                    if (*(int *)(in_r12 + 0x1c) != 0) {
                      temp_v2 = in_r12 + 0x1c + *(int *)(in_r12 + 0x1c);
                    }
                    else {
                      temp_v2 = 0;
                    }
                    temp_v8 = 0;
                    if (temp_v2 != 0) {
                      piVar3 = (int *)(temp_v2 + temp_v6 * 0x10 + 0x28);
                      temp_v8 = *piVar3;
                      if (temp_v8 == 0) {
                        temp_v8 = 0;
                      }
                      else {
                        temp_v8 = (int)piVar3 + temp_v8;
                      }
                    }
                    if ((*(unsigned int *)(temp_v8 + 4) & 0x200) != 0) {
                      if (temp_v5 != 0) {
                        temp_v5 = temp_v4 + 0x1c + temp_v5;
                      }
                      else {
                        temp_v5 = 0;
                      }
                      temp_v2 = 0;
                      if (temp_v5 != 0) {
                        piVar3 = (int *)(temp_v5 + temp_v6 * 0x10 + 0x28);
                        temp_v2 = *piVar3;
                        if (temp_v2 == 0) {
                          temp_v2 = 0;
                        }
                        else {
                          temp_v2 = (int)piVar3 + temp_v2;
                        }
                      }
                      *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v7 + 4) | 0x240;
                    }
                  }
                  temp_v6 = temp_v6 + 1;
                } while (temp_v6 < *(unsigned int *)(temp_v4 + 0x18));
              }
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 3);
          return;
        }
      }
      return;
    }
  } while( 1 );
}

} /* extern "C" */
