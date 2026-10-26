/* Copies the matrix of the object's node at +0x4c and sets bit 11 of its flags (+0x3c in the matrix block). */
#include "common.h"
#include "code/Code0031_Smt4.h"

extern "C" {

struct Node0031052c {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ u8 *block;
};

void nn_math_ARMv6_MTX34CopyAsm(u8 *matrix);

void nodeCopyMatrixMarkDirty(Node0031052c *node)
{
    u8 *matrix = node->block + 76;

    nn_math_ARMv6_MTX34CopyAsm(matrix);
    *(u32 *)(matrix + 60) |= 0x800;
}

}
