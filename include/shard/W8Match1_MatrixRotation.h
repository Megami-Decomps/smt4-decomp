#ifndef SHARD_W8MATCH1_MATRIX_ROTATION_H
#define SHARD_W8MATCH1_MATRIX_ROTATION_H
#include "shard/W5_W5Match2_PlainData.h"
#include <stddef.h>
struct MatrixRotationWork {
    union {
        u8 unk000[0x140]; // 0x000
        struct {
            u8 unk000[0x100];
            f32 values[3]; // 0x100
        } axisInput;
    };
    Matrix44 rotation; // 0x140
};
typedef char MatrixRotationAxisOffsetCheck[offsetof(MatrixRotationWork, axisInput.values) == 0x100 &&
    offsetof(MatrixRotationWork, rotation) == 0x140 && sizeof(MatrixRotationWork) == 0x180 ? 1 : -1];
#endif
