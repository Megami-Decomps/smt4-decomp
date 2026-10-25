/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00297684` (_code @ 0x297684, 0x37c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerMarkDestroy(void);
int FUN_0023f2e4(...);
int modelSetAnglesDegrees(unsigned int, int, unsigned char [20]);
int animPlayerSetLoopPolicy(unsigned int, int);
int nodeSetTranslation(unsigned int, int, unsigned char [12]);
int nodeSetTranslation3f(unsigned int, int);
int FUN_002a0428(int, unsigned int);
int modelSelectPrimaryMotion(unsigned int, int);
int asdMdlManagerDestroy(unsigned int);
int FUN_002b2ae8(unsigned int, int, unsigned char [12]);
int asdMemFree(unsigned int);
int objectValueGetChecked(unsigned int, int, unsigned char [20]);
int FUN_003353cc(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: asdMdlManagerMarkDestroy. */
extern unsigned int FUN_0019df10(void);
/* Supplied declaration required: FUN_0023f2e4. */
/* Supplied declaration required: modelSetAnglesDegrees. */
/* Supplied declaration required: animPlayerSetLoopPolicy. */
/* Supplied declaration required: nodeSetTranslation. */
/* Supplied declaration required: nodeSetTranslation3f. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: modelSelectPrimaryMotion. */
/* Supplied declaration required: asdMdlManagerDestroy. */
extern int modelHasLoadedAttachment(void);
/* Supplied declaration required: FUN_002b2ae8. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: objectValueGetChecked. */
extern unsigned int asdMdlManagerCreateFromSourceAndNode(int, unsigned int, unsigned short, unsigned int);
/* Supplied declaration required: FUN_003353cc. */


void FUN_00297684(int param_1)

{
/* irregular: irregular input(s): in_r12; 13 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar6;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar9;
  int temp_v6;
  int temp_v7;
  int in_r12;
  unsigned char temp_v8;
  unsigned char temp_v9 [12];
  unsigned char temp_v10 [20];
  
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 4) == 1)) {
    if (*(int *)(param_1 + 8) != 0) {
      temp_v0 = modelHasLoadedAttachment();
      if (temp_v0 != 0) {
        if (*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0xc) < 0) {
          FUN_002a0428(*(int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
        }
        nodeSetTranslation3f(*(unsigned int *)(*(int *)(param_1 + 8) + 8),0);
        animPlayerSetLoopPolicy(*(unsigned int *)(*(int *)(param_1 + 8) + 8),1);
        modelSelectPrimaryMotion(*(unsigned int *)(*(int *)(param_1 + 8) + 8),0);
        temp_v0 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x2c) + 0x220) + 8)
        ;
        *(unsigned int *)(temp_v0 + 0x28) = *(unsigned int *)(temp_v0 + 0x28) | 1;
        temp_v4 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x2c);
        temp_v0 = *(int *)(temp_v4 + 0x174);
        temp_v3 = *(int *)(temp_v4 + 0x170);
        if (temp_v3 == temp_v0) {
          temp_v0 = *(int *)(temp_v4 + 8);
          temp_v3 = *(int *)(temp_v0 + 0xb8);
          temp_v8 = temp_v3 != 0;
          if (temp_v8) {
            temp_v3 = temp_v3 + temp_v0 + 0xb8;
          }
          if (!temp_v8) {
            temp_v3 = 0;
          }
          temp_v0 = temp_v3 + *(int *)(temp_v0 + 0xb4) * 4;
        }
        temp_v4 = 0;
        if ((unsigned int)(temp_v0 - temp_v3) >> 2 != 0) {
          do {
            piVar2 = (int *)(temp_v3 + temp_v4 * 4);
            temp_v4 = temp_v4 + 1;
            in_r12 = *piVar2;
            if (in_r12 != 0) {
              temp_v1 = (int)piVar2 + in_r12;
            }
            else {
              temp_v1 = 0;
            }
            *(unsigned char *)(temp_v1 + 0x24) = 0;
          } while (temp_v4 < (int)((unsigned int)(temp_v0 - temp_v3) >> 2));
        }
        *(unsigned int *)(param_1 + 4) = 0;
      }
    }
    else {
      *(unsigned int *)(param_1 + 4) = 0;
    }
  }
  temp_v8 = 0;
  temp_v0 = 0;
  do {
    temp_v3 = param_1 + temp_v0 * 0x50;
    puVar9 = (unsigned int *)(temp_v3 + 0x10);
    switch(*puVar9) {
    case 1:
      if ((*(int *)(temp_v3 + 0x18) != 0) && (temp_v4 = modelHasLoadedAttachment(), temp_v4 != 0)) {
        FUN_002b2ae8(*(unsigned int *)(*(int *)(param_1 + 8) + 8),0,temp_v9);
        objectValueGetChecked(*(unsigned int *)(*(int *)(param_1 + 8) + 8),0,temp_v10);
        if (*(int *)(*(int *)(*(int *)(temp_v3 + 0x18) + 8) + 0xc) < 0) {
          FUN_002a0428(*(int *)(temp_v3 + 0x18),*(unsigned int *)(param_1 + 0xc));
        }
        nodeSetTranslation(*(unsigned int *)(*(int *)(temp_v3 + 0x18) + 8),0,temp_v9);
        modelSetAnglesDegrees(*(unsigned int *)(*(int *)(temp_v3 + 0x18) + 8),0,temp_v10);
        if ((**(unsigned int **)(param_1 + 8) & 2) != 0) {
          puVar6 = *(unsigned int **)(temp_v3 + 0x18);
          *puVar6 = *puVar6 | 2;
          *(unsigned char *)(*(int *)(puVar6[2] + 0x2c) + 0x1f6) = 0;
        }
        temp_v8 = 1;
        *puVar9 = 0;
      }
      break;
    case 2:
      puVar6 = *(unsigned int **)(temp_v3 + 0x18);
      if ((*puVar6 & 2) != 0) {
        *puVar9 = 3;
      }
      else {
        *puVar6 = *puVar6 | 2;
        *(unsigned char *)(*(int *)(puVar6[2] + 0x2c) + 0x1f6) = 0;
        if (-1 < *(int *)(*(int *)(*(int *)(temp_v3 + 0x18) + 8) + 0xc)) {
          asdMdlManagerMarkDestroy();
        }
      }
      break;
    case 3:
      asdMdlManagerDestroy(*(unsigned int *)(temp_v3 + 0x18));
      *(unsigned int *)(temp_v3 + 0x18) = 0;
      asdMemFree(*(unsigned int *)(temp_v3 + 0x1c));
      *(unsigned int *)(temp_v3 + 0x1c) = 0;
      *puVar9 = 0;
      if (*(char *)(temp_v3 + 0x20) != '\0') {
        FUN_0023f2e4(param_1,temp_v0,temp_v3 + 0x20,*(unsigned short *)(temp_v3 + 0x14));
      }
      break;
    case 4:
      if (*(int *)(temp_v3 + 0x1c) != 0) {
        temp_v2 = FUN_0019df10();
        in_r12 = *(int *)(temp_v3 + 0x1c);
        temp_v2 = asdMdlManagerCreateFromSourceAndNode(in_r12,temp_v2,*(unsigned short *)(temp_v3 + 0x14),*(unsigned int *)(param_1 + 8)
                            );
        *(unsigned int *)(temp_v3 + 0x18) = temp_v2;
        *puVar9 = 1;
      }
      break;
    case 5:
      if ((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 8) != 0)) {
        FUN_0023f2e4(param_1,temp_v0,temp_v3 + 0x20,*(unsigned short *)(temp_v3 + 0x14));
      }
    }
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 3) {
      if ((temp_v8) && (*(int *)(param_1 + 4) == 0)) {
        temp_v0 = *(int *)(param_1 + 0x10);
        temp_v8 = temp_v0 == 0;
        if (temp_v8) {
          temp_v0 = *(int *)(param_1 + 0x60);
        }
        if ((temp_v8 && temp_v0 == 0) && (*(int *)(param_1 + 0xb0) == 0)) {
          FUN_003353cc(param_1);
          puVar6 = *(unsigned int **)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x2c) + 8);
          if ((puVar6 != (unsigned int *)0x0) && ((~*puVar6 & 0x40000092) != 0)) {
            puVar6 = (unsigned int *)0x0;
          }
          temp_v5 = puVar6[0x38];
          temp_v0 = 0;
          if (temp_v5 != 0) {
            temp_v3 = (int)(puVar6 + 0x38) + temp_v5;
          }
          else {
            temp_v3 = 0;
          }
          do {
            temp_v4 = param_1 + temp_v0 * 0x50;
            temp_v1 = *(int *)(temp_v4 + 0x18);
            if ((temp_v1 != 0) && (*(int *)(temp_v4 + 0x10) == 0)) {
              puVar6 = *(unsigned int **)(*(int *)(*(int *)(temp_v1 + 8) + 0x2c) + 8);
              if ((puVar6 != (unsigned int *)0x0) && ((~*puVar6 & 0x40000092) != 0)) {
                puVar6 = (unsigned int *)0x0;
              }
              temp_v5 = puVar6[0x38];
              if (temp_v5 != 0) {
                in_r12 = temp_v5 + (int)(puVar6 + 0x38);
              }
              if (temp_v5 == 0) {
                in_r12 = 0;
              }
              temp_v5 = 0;
              if (*(int *)(temp_v3 + 0x18) != 0) {
                do {
                  temp_v4 = *(int *)(temp_v3 + 0x1c);
                  if (temp_v4 != 0) {
                    temp_v1 = temp_v3 + 0x1c + temp_v4;
                  }
                  else {
                    temp_v1 = 0;
                  }
                  temp_v6 = 0;
                  if (temp_v1 != 0) {
                    piVar2 = (int *)(temp_v1 + temp_v5 * 0x10 + 0x28);
                    temp_v6 = *piVar2;
                    if (temp_v6 == 0) {
                      temp_v6 = 0;
                    }
                    else {
                      temp_v6 = (int)piVar2 + temp_v6;
                    }
                  }
                  if ((*(unsigned int *)(temp_v6 + 4) & 0x200) == 0) {
                    if (*(int *)(in_r12 + 0x1c) != 0) {
                      temp_v1 = in_r12 + 0x1c + *(int *)(in_r12 + 0x1c);
                    }
                    else {
                      temp_v1 = 0;
                    }
                    temp_v7 = 0;
                    if (temp_v1 != 0) {
                      piVar2 = (int *)(temp_v1 + temp_v5 * 0x10 + 0x28);
                      temp_v7 = *piVar2;
                      if (temp_v7 == 0) {
                        temp_v7 = 0;
                      }
                      else {
                        temp_v7 = (int)piVar2 + temp_v7;
                      }
                    }
                    if ((*(unsigned int *)(temp_v7 + 4) & 0x200) != 0) {
                      if (temp_v4 != 0) {
                        temp_v4 = temp_v3 + 0x1c + temp_v4;
                      }
                      else {
                        temp_v4 = 0;
                      }
                      temp_v1 = 0;
                      if (temp_v4 != 0) {
                        piVar2 = (int *)(temp_v4 + temp_v5 * 0x10 + 0x28);
                        temp_v1 = *piVar2;
                        if (temp_v1 == 0) {
                          temp_v1 = 0;
                        }
                        else {
                          temp_v1 = (int)piVar2 + temp_v1;
                        }
                      }
                      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v6 + 4) | 0x240;
                    }
                  }
                  temp_v5 = temp_v5 + 1;
                } while (temp_v5 < *(unsigned int *)(temp_v3 + 0x18));
              }
            }
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < 3);
          return;
        }
      }
      return;
    }
  } while( 1 );
}

} /* extern "C" */
