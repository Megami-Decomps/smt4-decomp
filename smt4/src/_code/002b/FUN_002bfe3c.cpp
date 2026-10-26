/* NON_MATCHING: retail preserves a missing-flags mask test and places the direct-copy tail after both transformed paths. */
#include "common.h"

struct RelativeMatrix34 { f32 values[3][4]; };
struct RelativeMatrixNode {
    u8 unk00[0x8c];
    RelativeMatrix34 transform; // 0x8c
    u8 unkbc[0x3c];
    u32 flags; // 0xf8
    u8 unkfc[0xc0];
    RelativeMatrix34 result; // 0x1bc
};

extern "C" {
void nn_math_ARMv6_MTX34InvTransposeAsm(RelativeMatrix34 *output, const RelativeMatrix34 *input);
void nn_math_ARMv6_MTX34MultAsm(RelativeMatrix34 *output, const RelativeMatrix34 *left, const RelativeMatrix34 *right);
void nn_math_ARMv6_MTX34CopyAsm(RelativeMatrix34 *output, const RelativeMatrix34 *input);
void nn_math_ARMv6_MTX34InverseAsm(RelativeMatrix34 *output, const RelativeMatrix34 *input);
void FUN_002b77f4(RelativeMatrix34 *output, const RelativeMatrix34 *input);

// Apply a matrix relative to the node, optionally using its inverse transpose.
void FUN_002bfe3c(RelativeMatrixNode *node, const RelativeMatrix34 *matrix, s32 inverseTranspose)
{
    if (inverseTranspose != 0) {
        RelativeMatrix34 transform;
        nn_math_ARMv6_MTX34InvTransposeAsm(&transform, &node->transform);
        nn_math_ARMv6_MTX34MultAsm(&node->result, matrix, &transform);
        return;
    }
    if ((~node->flags & 0x200) != 0) {
        RelativeMatrix34 transform;
        RelativeMatrix34 adjustment;
        RelativeMatrix34 combined;
        nn_math_ARMv6_MTX34InverseAsm(&transform, &node->transform);
        FUN_002b77f4(&adjustment, &transform);
        nn_math_ARMv6_MTX34MultAsm(&combined, &transform, &adjustment);
        nn_math_ARMv6_MTX34MultAsm(&node->result, matrix, &combined);
        return;
    }
    nn_math_ARMv6_MTX34CopyAsm(&node->result, matrix);
}
}
