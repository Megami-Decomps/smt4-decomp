#include "shard/W5_W5Match8_CameraTransition.h"

struct RotationMatrix34 {
    f32 elements[3][4];
};

static __inline void rotateVector(W5Match8Vec3 *output, const RotationMatrix34 *matrix, W5Match8Vec3 vector)
{
    W5Match8Vec3 result;
    result.x = matrix->elements[0][0] * vector.x
             + matrix->elements[0][1] * vector.y
             + matrix->elements[0][2] * vector.z;
    result.y = matrix->elements[1][0] * vector.x
             + matrix->elements[1][1] * vector.y
             + matrix->elements[1][2] * vector.z;
    result.z = matrix->elements[2][0] * vector.x
             + matrix->elements[2][1] * vector.y
             + matrix->elements[2][2] * vector.z;
    *output = result;
}

// Apply the matrix's linear part, allowing the output to alias the input.
extern "C" void matrix34RotateVector(W5Match8Vec3 *output, const RotationMatrix34 *matrix,
                             const W5Match8Vec3 *input)
{
    rotateVector(output, matrix, *input);
}
