#ifndef SHARD_W8MATCH1_MATRIX_ROTATION_H
#define SHARD_W8MATCH1_MATRIX_ROTATION_H
#include "shard/W5_W5Match2_PlainData.h"
struct MatrixRotationWork {
    u8 unk000[0x140]; // 0x000
    Matrix44 rotation; // 0x140
};
#endif
