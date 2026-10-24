/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN4__rw9__rb_treeIjSt4pairIKjN6MoLive12ObjectHandleEENS_11__select1stIS5_jEESt4lessIjENS3_12StlAllocatorIS5_EEE5eraseENS_14__rw_tree_iterIS5_iPS5_RS5_NS_17__rw_rb_tree_nodeISB_S5_jS7_EEEE` (_code @ 0x3faab4, 0x668 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int poolNodeUnlinkAndDestroy(unsigned char *);

/* Supplied declaration required: poolNodeUnlinkAndDestroy. */


void _ZN4__rw9__rb_treeIjSt4pairIKjN6MoLive12ObjectHandleEENS_11__select1stIS5_jEESt4lessIjENS3_12StlAllocatorIS5_EEE5eraseENS_14__rw_tree_iterIS5_iPS5_RS5_NS_17__rw_rb_tree_nodeISB_S5_jS7_EEEE(int *param_1,int param_2,int *param_3)

{
/* irregular: 8 unstructured edge(s); 2 goto(s); irregular input(s): in_lr; 1 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  int temp_v2;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  int temp_v3;
  int temp_v4;
  unsigned char *pbVar11;
  int temp_v5;
  unsigned char *in_lr;
  char *pcVar13;
  unsigned char temp_v6;
  
  temp_v4 = *param_3;
  if (temp_v4 == *(int *)(param_2 + 0x14)) {
    *param_1 = *(int *)(param_2 + 0x14);
    return;
  }
  temp_v2 = *(int *)(temp_v4 + 0xc);
  if (*(int *)(temp_v4 + 0xc) != 0) {
    do {
      temp_v4 = temp_v2;
      temp_v2 = *(int *)(temp_v4 + 8);
    } while (*(int *)(temp_v4 + 8) != 0);
  }
  else {
    temp_v2 = *(int *)(temp_v4 + 4);
    if (temp_v4 == *(int *)(temp_v2 + 0xc)) {
      do {
        temp_v4 = temp_v2;
        temp_v2 = *(int *)(temp_v4 + 4);
      } while (temp_v4 == *(int *)(temp_v2 + 0xc));
    }
    if (*(int *)(temp_v4 + 0xc) != temp_v2) {
      temp_v4 = temp_v2;
    }
  }
  pbVar7 = (unsigned char *)*param_3;
  pbVar8 = *(unsigned char **)(pbVar7 + 8);
  pbVar4 = *(unsigned char **)(pbVar7 + 0xc);
  pbVar11 = pbVar7;
  if (pbVar8 != (unsigned char *)0x0) {
    pbVar6 = pbVar8;
    if (pbVar4 != (unsigned char *)0x0) {
      temp_v2 = *(int *)(pbVar4 + 8);
      while (temp_v2 != 0) {
        pbVar4 = *(unsigned char **)(pbVar4 + 8);
        temp_v2 = *(int *)(pbVar4 + 8);
      }
      pbVar6 = *(unsigned char **)(pbVar4 + 0xc);
      pbVar11 = pbVar4;
    }
LAB_003fab70:
    if (pbVar11 != pbVar7) {
      *(unsigned char **)(pbVar8 + 4) = pbVar11;
      *(unsigned int *)(pbVar11 + 8) = *(unsigned int *)(pbVar7 + 8);
      if (*(unsigned char **)(pbVar7 + 0xc) != pbVar11) {
        if (pbVar6 != (unsigned char *)0x0) {
          *(unsigned int *)(pbVar6 + 4) = *(unsigned int *)(pbVar11 + 4);
        }
        *(unsigned char **)(*(int *)(pbVar11 + 4) + 8) = pbVar6;
        *(unsigned int *)(pbVar11 + 0xc) = *(unsigned int *)(pbVar7 + 0xc);
        *(unsigned char **)(*(int *)(pbVar7 + 0xc) + 4) = pbVar11;
      }
      else if (pbVar6 != (unsigned char *)0x0) {
        *(unsigned char **)(pbVar6 + 4) = pbVar11;
      }
      if (*(unsigned char **)(*(int *)(param_2 + 0x14) + 4) == pbVar7) {
        *(unsigned char **)(*(int *)(param_2 + 0x14) + 4) = pbVar11;
      }
      else {
        temp_v2 = *(int *)(pbVar7 + 4);
        if (*(unsigned char **)(temp_v2 + 8) == pbVar7) {
          *(unsigned char **)(temp_v2 + 8) = pbVar11;
        }
        else {
          *(unsigned char **)(temp_v2 + 0xc) = pbVar11;
        }
      }
      if (pbVar6 == (unsigned char *)0x0) {
        pbVar6 = pbVar11;
      }
      *(unsigned int *)(pbVar11 + 4) = *(unsigned int *)(pbVar7 + 4);
      temp_v0 = *pbVar11;
      *pbVar11 = *pbVar7;
      *pbVar7 = temp_v0;
      pbVar11 = pbVar7;
    }
    else {
      *(unsigned int *)(pbVar6 + 4) = *(unsigned int *)(pbVar11 + 4);
      if (*(unsigned char **)(*(int *)(param_2 + 0x14) + 4) == pbVar7) {
        *(unsigned char **)(*(int *)(param_2 + 0x14) + 4) = pbVar6;
      }
      else {
        temp_v2 = *(int *)(pbVar7 + 4);
        if (*(unsigned char **)(temp_v2 + 8) == pbVar7) {
          *(unsigned char **)(temp_v2 + 8) = pbVar6;
        }
        else {
          *(unsigned char **)(temp_v2 + 0xc) = pbVar6;
        }
      }
      in_lr = *(unsigned char **)(param_2 + 0x14);
      if (*(unsigned char **)(in_lr + 8) == pbVar7) {
        if (*(int *)(pbVar7 + 0xc) == 0) {
          *(unsigned int *)(in_lr + 8) = *(unsigned int *)(pbVar7 + 4);
        }
        else {
          pbVar8 = *(unsigned char **)(pbVar6 + 8);
          pbVar4 = pbVar6;
          while (pbVar3 = pbVar8, pbVar3 != (unsigned char *)0x0) {
            pbVar4 = pbVar3;
            pbVar8 = *(unsigned char **)(pbVar3 + 8);
          }
          *(unsigned char **)(in_lr + 8) = pbVar4;
        }
      }
      temp_v2 = *(int *)(param_2 + 0x14);
      if (*(unsigned char **)(temp_v2 + 0xc) == pbVar7) {
        if (*(int *)(pbVar7 + 8) == 0) {
          *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(pbVar7 + 4);
        }
        else {
          pbVar7 = *(unsigned char **)(pbVar6 + 0xc);
          pbVar4 = pbVar6;
          while (pbVar8 = pbVar7, pbVar8 != (unsigned char *)0x0) {
            pbVar4 = pbVar8;
            pbVar7 = *(unsigned char **)(pbVar8 + 0xc);
          }
          *(unsigned char **)(temp_v2 + 0xc) = pbVar4;
        }
      }
    }
  }
  else {
    pbVar6 = pbVar4;
    if (pbVar4 != (unsigned char *)0x0) goto LAB_003fab70;
    pbVar6 = *(unsigned char **)(pbVar7 + 4);
    if (*(unsigned char **)(param_2 + 0x14) == pbVar6) {
      *(unsigned char **)(*(unsigned char **)(param_2 + 0x14) + 0xc) = pbVar6;
      *(unsigned char **)(*(int *)(param_2 + 0x14) + 8) = pbVar6;
      *(unsigned int *)(*(int *)(param_2 + 0x14) + 4) = 0;
    }
    else if (*(unsigned char **)(pbVar6 + 8) == pbVar7) {
      *(unsigned int *)(pbVar6 + 8) = 0;
      if (*(unsigned char **)(*(int *)(param_2 + 0x14) + 8) == pbVar7) {
        *(unsigned char **)(*(int *)(param_2 + 0x14) + 8) = pbVar6;
      }
    }
    else {
      *(unsigned int *)(pbVar6 + 0xc) = 0;
      if (*(unsigned char **)(*(int *)(param_2 + 0x14) + 0xc) == pbVar7) {
        *(unsigned char **)(*(int *)(param_2 + 0x14) + 0xc) = pbVar6;
      }
    }
  }
  pbVar4 = *(unsigned char **)(param_2 + 0x14);
  temp_v6 = pbVar4 != pbVar6;
  if (temp_v6) {
    pbVar4 = (unsigned char *)(unsigned int)*pbVar11;
  }
  if (!(!temp_v6 || pbVar4 == (unsigned char *)0x0)) {
    do {
      if ((*(unsigned char **)(*(int *)(param_2 + 0x14) + 4) == pbVar6) || (*pbVar6 != 1)) {
        *pbVar6 = 1;
        break;
      }
      pbVar4 = *(unsigned char **)(pbVar6 + 4);
      pbVar7 = *(unsigned char **)(pbVar4 + 8);
      if (pbVar7 != pbVar6) {
        if (pbVar7 == (unsigned char *)0x0) {
          *pbVar6 = 0;
          pbVar6 = pbVar4;
          continue;
        }
        pbVar4 = (unsigned char *)(unsigned int)*pbVar7;
        if (pbVar4 == (unsigned char *)0x0) {
          *pbVar7 = 1;
          **(unsigned char **)(pbVar6 + 4) = 0;
          temp_v2 = *(int *)(pbVar6 + 4);
          temp_v3 = *(int *)(temp_v2 + 8);
          *(unsigned int *)(temp_v2 + 8) = *(unsigned int *)(temp_v3 + 0xc);
          if (*(int *)(temp_v3 + 0xc) != 0) {
            *(int *)(*(int *)(temp_v3 + 0xc) + 4) = temp_v2;
          }
          *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v2 + 4);
          in_lr = *(unsigned char **)(param_2 + 0x14);
          if (*(int *)(in_lr + 4) == temp_v2) {
            *(int *)(in_lr + 4) = temp_v3;
          }
          else {
            in_lr = *(unsigned char **)(temp_v2 + 4);
            if (*(int *)(in_lr + 0xc) == temp_v2) {
              *(int *)(in_lr + 0xc) = temp_v3;
            }
            else {
              *(int *)(in_lr + 8) = temp_v3;
            }
          }
          *(int *)(temp_v3 + 0xc) = temp_v2;
          *(int *)(temp_v2 + 4) = temp_v3;
          pbVar4 = *(unsigned char **)(pbVar6 + 4);
          pbVar7 = *(unsigned char **)(pbVar4 + 8);
          if (pbVar7 == (unsigned char *)0x0) {
            *pbVar6 = 0;
            pbVar6 = pbVar4;
            continue;
          }
        }
        in_lr = *(unsigned char **)(pbVar7 + 0xc);
        if (in_lr != (unsigned char *)0x0) {
          pbVar4 = (unsigned char *)(unsigned int)*in_lr;
        }
        if (!(in_lr == (unsigned char *)0x0 || pbVar4 == (unsigned char *)0x1)) {
LAB_003faf94:
          pcVar13 = *(char **)(pbVar7 + 8);
          temp_v1 = '\0';
          if (pcVar13 != (char *)0x0) {
            temp_v1 = *pcVar13;
          }
          if (pcVar13 == (char *)0x0 || temp_v1 == '\x01') {
            if (in_lr != (unsigned char *)0x0) {
              *in_lr = 1;
            }
            *pbVar7 = 0;
            temp_v2 = *(int *)(pbVar7 + 0xc);
            *(unsigned int *)(pbVar7 + 0xc) = *(unsigned int *)(temp_v2 + 8);
            if (*(int *)(temp_v2 + 8) != 0) {
              *(unsigned char **)(*(int *)(temp_v2 + 8) + 4) = pbVar7;
            }
            *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(pbVar7 + 4);
            if (*(unsigned char **)(*(int *)(param_2 + 0x14) + 4) == pbVar7) {
              *(int *)(*(int *)(param_2 + 0x14) + 4) = temp_v2;
            }
            else {
              temp_v3 = *(int *)(pbVar7 + 4);
              if (*(unsigned char **)(temp_v3 + 8) == pbVar7) {
                *(int *)(temp_v3 + 8) = temp_v2;
              }
              else {
                *(int *)(temp_v3 + 0xc) = temp_v2;
              }
            }
            *(unsigned char **)(temp_v2 + 8) = pbVar7;
            *(int *)(pbVar7 + 4) = temp_v2;
            pbVar7 = *(unsigned char **)(*(int *)(pbVar6 + 4) + 8);
            if (pbVar7 == (unsigned char *)0x0) {
              *pbVar6 = 1;
              break;
            }
          }
          *pbVar7 = **(unsigned char **)(pbVar6 + 4);
          **(unsigned char **)(pbVar6 + 4) = 1;
          if (*(unsigned char **)(pbVar7 + 8) != (unsigned char *)0x0) {
            **(unsigned char **)(pbVar7 + 8) = 1;
          }
          temp_v2 = *(int *)(pbVar6 + 4);
          temp_v3 = *(int *)(temp_v2 + 8);
          *(unsigned int *)(temp_v2 + 8) = *(unsigned int *)(temp_v3 + 0xc);
          if (*(int *)(temp_v3 + 0xc) != 0) {
            *(int *)(*(int *)(temp_v3 + 0xc) + 4) = temp_v2;
          }
          *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v2 + 4);
          if (*(int *)(*(int *)(param_2 + 0x14) + 4) == temp_v2) {
            *(int *)(*(int *)(param_2 + 0x14) + 4) = temp_v3;
          }
          else {
            temp_v5 = *(int *)(temp_v2 + 4);
            if (*(int *)(temp_v5 + 0xc) == temp_v2) {
              *(int *)(temp_v5 + 0xc) = temp_v3;
            }
            else {
              *(int *)(temp_v5 + 8) = temp_v3;
            }
          }
          *(int *)(temp_v3 + 0xc) = temp_v2;
          *(int *)(temp_v2 + 4) = temp_v3;
          *pbVar6 = 1;
          break;
        }
        pcVar13 = *(char **)(pbVar7 + 8);
        temp_v1 = '\0';
        if (pcVar13 != (char *)0x0) {
          temp_v1 = *pcVar13;
        }
        if (!(pcVar13 == (char *)0x0 || temp_v1 == '\x01')) goto LAB_003faf94;
        *pbVar7 = 0;
        pbVar6 = *(unsigned char **)(pbVar6 + 4);
        continue;
      }
      pbVar7 = *(unsigned char **)(pbVar4 + 0xc);
      if (pbVar7 != (unsigned char *)0x0) {
        if (*pbVar7 == 0) {
          *pbVar7 = 1;
          **(unsigned char **)(pbVar6 + 4) = 0;
          temp_v2 = *(int *)(pbVar6 + 4);
          temp_v3 = *(int *)(temp_v2 + 0xc);
          *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v3 + 8);
          if (*(int *)(temp_v3 + 8) != 0) {
            *(int *)(*(int *)(temp_v3 + 8) + 4) = temp_v2;
          }
          *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v2 + 4);
          in_lr = *(unsigned char **)(param_2 + 0x14);
          if (*(int *)(in_lr + 4) == temp_v2) {
            *(int *)(in_lr + 4) = temp_v3;
          }
          else {
            in_lr = *(unsigned char **)(temp_v2 + 4);
            if (*(int *)(in_lr + 8) == temp_v2) {
              *(int *)(in_lr + 8) = temp_v3;
            }
            else {
              *(int *)(in_lr + 0xc) = temp_v3;
            }
          }
          *(int *)(temp_v3 + 8) = temp_v2;
          *(int *)(temp_v2 + 4) = temp_v3;
          pbVar4 = *(unsigned char **)(pbVar6 + 4);
          pbVar7 = *(unsigned char **)(pbVar4 + 0xc);
          if (pbVar7 == (unsigned char *)0x0) {
            *pbVar6 = 0;
            pbVar6 = pbVar4;
            continue;
          }
        }
        pbVar4 = *(unsigned char **)(pbVar7 + 8);
        if (pbVar4 != (unsigned char *)0x0) {
          in_lr = (unsigned char *)(unsigned int)*pbVar4;
        }
        if (!(pbVar4 != (unsigned char *)0x0 && in_lr != (unsigned char *)0x1)) {
          pbVar8 = *(unsigned char **)(pbVar7 + 0xc);
          in_lr = (unsigned char *)0x0;
          if (pbVar8 != (unsigned char *)0x0) {
            in_lr = (unsigned char *)(unsigned int)*pbVar8;
          }
          if (!(pbVar8 != (unsigned char *)0x0 && in_lr != (unsigned char *)0x1)) {
            *pbVar7 = 0;
            pbVar6 = *(unsigned char **)(pbVar6 + 4);
            continue;
          }
        }
        pcVar13 = *(char **)(pbVar7 + 0xc);
        temp_v1 = '\0';
        if (pcVar13 != (char *)0x0) {
          temp_v1 = *pcVar13;
        }
        if (pcVar13 == (char *)0x0 || temp_v1 == '\x01') {
          if (pbVar4 != (unsigned char *)0x0) {
            *pbVar4 = 1;
          }
          *pbVar7 = 0;
          temp_v2 = *(int *)(pbVar7 + 8);
          *(unsigned int *)(pbVar7 + 8) = *(unsigned int *)(temp_v2 + 0xc);
          if (*(int *)(temp_v2 + 0xc) != 0) {
            *(unsigned char **)(*(int *)(temp_v2 + 0xc) + 4) = pbVar7;
          }
          *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(pbVar7 + 4);
          if (*(unsigned char **)(*(int *)(param_2 + 0x14) + 4) == pbVar7) {
            *(int *)(*(int *)(param_2 + 0x14) + 4) = temp_v2;
          }
          else {
            temp_v3 = *(int *)(pbVar7 + 4);
            if (*(unsigned char **)(temp_v3 + 0xc) == pbVar7) {
              *(int *)(temp_v3 + 0xc) = temp_v2;
            }
            else {
              *(int *)(temp_v3 + 8) = temp_v2;
            }
          }
          *(unsigned char **)(temp_v2 + 0xc) = pbVar7;
          *(int *)(pbVar7 + 4) = temp_v2;
          pbVar7 = *(unsigned char **)(*(int *)(pbVar6 + 4) + 0xc);
          if (pbVar7 == (unsigned char *)0x0) {
            *pbVar6 = 1;
            break;
          }
        }
        *pbVar7 = **(unsigned char **)(pbVar6 + 4);
        **(unsigned char **)(pbVar6 + 4) = 1;
        if (*(unsigned char **)(pbVar7 + 0xc) != (unsigned char *)0x0) {
          **(unsigned char **)(pbVar7 + 0xc) = 1;
        }
        temp_v2 = *(int *)(pbVar6 + 4);
        temp_v3 = *(int *)(temp_v2 + 0xc);
        *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v3 + 8);
        if (*(int *)(temp_v3 + 8) != 0) {
          *(int *)(*(int *)(temp_v3 + 8) + 4) = temp_v2;
        }
        *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v2 + 4);
        if (*(int *)(*(int *)(param_2 + 0x14) + 4) == temp_v2) {
          *(int *)(*(int *)(param_2 + 0x14) + 4) = temp_v3;
        }
        else {
          temp_v5 = *(int *)(temp_v2 + 4);
          if (*(int *)(temp_v5 + 8) == temp_v2) {
            *(int *)(temp_v5 + 8) = temp_v3;
          }
          else {
            *(int *)(temp_v5 + 0xc) = temp_v3;
          }
        }
        *(int *)(temp_v3 + 8) = temp_v2;
        *(int *)(temp_v2 + 4) = temp_v3;
        *pbVar6 = 1;
        break;
      }
      *pbVar6 = 0;
      pbVar6 = pbVar4;
    } while( 1 );
  }
  *(unsigned int *)(pbVar11 + 0xc) = *(unsigned int *)(param_2 + 8);
  poolNodeUnlinkAndDestroy(pbVar11 + 0x14);
  *(unsigned char **)(param_2 + 8) = pbVar11;
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) - 1;
  *param_1 = temp_v4;
  return;
}

} /* extern "C" */
